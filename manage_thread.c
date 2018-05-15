static void *qemu_kvmtcg_cpu_thread_fn(void *arg)
{
	if(kvm_enabled()){
		
	}
}
static void *qemu_kvm_cpu_thread_fn(void *arg)
{
    CPUState *cpu = arg;
    int r;

    rcu_register_thread();

    qemu_mutex_lock_iothread();
    qemu_thread_get_self(cpu->thread);
    cpu->thread_id = qemu_get_thread_id();
    cpu->can_do_io = 1;
    current_cpu = cpu;

    r = kvm_init_vcpu(cpu);
    if (r < 0) {
        error_report("kvm_init_vcpu failed: %s", strerror(-r));
        exit(1);
    }

    kvm_init_cpu_signals(cpu);

    /* signal CPU creation */
    cpu->created = true;
    qemu_cond_signal(&qemu_cpu_cond);

    do {
        if (cpu_can_run(cpu)) {
            r = kvm_cpu_exec(cpu);
            if (r == EXCP_DEBUG) {
                cpu_handle_guest_debug(cpu);
            }
        }
        qemu_wait_io_event(cpu);
    } while (!cpu->unplug || cpu_can_run(cpu));

    qemu_kvm_destroy_vcpu(cpu);
    cpu->created = false;
    qemu_cond_signal(&qemu_cpu_cond);
    qemu_mutex_unlock_iothread();
    rcu_unregister_thread();
    return NULL;
}
static void *qemu_tcg_rr_cpu_thread_fn(void *arg)
{
    CPUState *cpu = arg;

    //QemuCond * mycond = cpu->halt_cond; //jxu023

    rcu_register_thread();
    tcg_register_thread();

    qemu_mutex_lock_iothread();

    qemu_thread_get_self(cpu->thread);

    CPU_FOREACH(cpu) {
        cpu->thread_id = qemu_get_thread_id();
        cpu->created = true;
        cpu->can_do_io = 1;
    }
    current_cpu = cpu;
    error_printf("tcg signal cpu_cond\n"); //jxu023
    qemu_cond_signal(&qemu_cpu_cond);
    error_printf("tcg done signalling cpu cond\n"); //jxu023

    /* wait for initial kick-off after machine start */
    while (first_cpu->stopped) {
        qemu_cond_wait(first_cpu->halt_cond, &qemu_global_mutex);

        /* process any pending work */
        CPU_FOREACH(cpu) {
            current_cpu = cpu;
            qemu_wait_io_event_common(cpu);
        }
    }

    start_tcg_kick_timer();

    cpu = first_cpu;

    /* process any pending work */
    cpu->exit_request = 1;

    //jxu023 begin
    /*
    cpu->thread = idle_thread;
    cpu->thread_id = idle_thread_id;
    cpu->halt_cond = idle_halt_cond;
    tcg_allowed = 0; //jxu023
    kvm_allowed = 1; //jxu023
    //qemu_mutex_lock(&idle_mutex);
    error_printf("tcg thread just waiting\n");
    qemu_cond_wait(mycond, &qemu_global_mutex); // will be signaled in switch
    //qemu_mutex_unlock(&idle_mutex);
    error_printf("tcg thread done waiting\n");
    */
    // this area should not execute until we start the switch
    //jxu023 end

    while (1) {
        /* Account partial waits to QEMU_CLOCK_VIRTUAL.  */
        qemu_account_warp_timer();

        /* Run the timers here.  This is much more efficient than
         * waking up the I/O thread and waiting for completion.
         */
        handle_icount_deadline();

        if (!cpu) {
            cpu = first_cpu;
        }

        while (cpu && !cpu->queued_work_first && !cpu->exit_request) {

            atomic_mb_set(&tcg_current_rr_cpu, cpu);
            current_cpu = cpu;

            qemu_clock_enable(QEMU_CLOCK_VIRTUAL,
                    (cpu->singlestep_enabled & SSTEP_NOTIMER) == 0);

            if (cpu_can_run(cpu)) {
                int r;

                prepare_icount_for_run(cpu);

                r = tcg_cpu_exec(cpu);

                process_icount_data(cpu);

                if (r == EXCP_DEBUG) {
                    cpu_handle_guest_debug(cpu);
                    break;
                } else if (r == EXCP_ATOMIC) {
                    qemu_mutex_unlock_iothread();
                    cpu_exec_step_atomic(cpu);
                    qemu_mutex_lock_iothread();
                    break;
                }
            } else if (cpu->stop) {
                if (cpu->unplug) {
                    cpu = CPU_NEXT(cpu);
                }
                break;
            }

            cpu = CPU_NEXT(cpu);
        } /* while (cpu && !cpu->exit_request).. */

        /* Does not need atomic_mb_set because a spurious wakeup is okay.  */
        atomic_set(&tcg_current_rr_cpu, NULL);

        if (cpu && cpu->exit_request) {
            atomic_mb_set(&cpu->exit_request, 0);
        }

        qemu_tcg_rr_wait_io_event(cpu ? cpu : QTAILQ_FIRST(&cpus));
        deal_with_unplugged_cpus();
    }

    rcu_unregister_thread();
    return NULL;
}


