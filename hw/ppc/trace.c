/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_SPAPR_PCI_MSI_DSTATE;
uint16_t _TRACE_SPAPR_PCI_MSI_SETUP_DSTATE;
uint16_t _TRACE_SPAPR_PCI_RTAS_IBM_CHANGE_MSI_DSTATE;
uint16_t _TRACE_SPAPR_PCI_RTAS_IBM_QUERY_INTERRUPT_SOURCE_NUMBER_DSTATE;
uint16_t _TRACE_SPAPR_PCI_MSI_WRITE_DSTATE;
uint16_t _TRACE_SPAPR_PCI_LSI_SET_DSTATE;
uint16_t _TRACE_SPAPR_PCI_MSI_RETRY_DSTATE;
uint16_t _TRACE_SPAPR_CAS_FAILED_DSTATE;
uint16_t _TRACE_SPAPR_CAS_CONTINUE_DSTATE;
uint16_t _TRACE_SPAPR_IRQ_ALLOC_DSTATE;
uint16_t _TRACE_SPAPR_IRQ_ALLOC_BLOCK_DSTATE;
uint16_t _TRACE_SPAPR_IRQ_FREE_DSTATE;
uint16_t _TRACE_SPAPR_IRQ_FREE_WARN_DSTATE;
uint16_t _TRACE_SPAPR_CAS_PVR_TRY_DSTATE;
uint16_t _TRACE_SPAPR_CAS_PVR_DSTATE;
uint16_t _TRACE_SPAPR_H_RESIZE_HPT_PREPARE_DSTATE;
uint16_t _TRACE_SPAPR_H_RESIZE_HPT_COMMIT_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_PUT_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_GET_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_INDIRECT_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_STUFF_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_PCI_PUT_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_PCI_GET_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_PCI_INDIRECT_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_PCI_STUFF_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_XLATE_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_NEW_TABLE_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_PRE_SAVE_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_POST_LOAD_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_DDW_QUERY_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_DDW_CREATE_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_DDW_REMOVE_DSTATE;
uint16_t _TRACE_SPAPR_IOMMU_DDW_RESET_DSTATE;
uint16_t _TRACE_SPAPR_DRC_SET_ISOLATION_STATE_DSTATE;
uint16_t _TRACE_SPAPR_DRC_SET_ISOLATION_STATE_FINALIZING_DSTATE;
uint16_t _TRACE_SPAPR_DRC_SET_ISOLATION_STATE_DEFERRING_DSTATE;
uint16_t _TRACE_SPAPR_DRC_SET_DR_INDICATOR_DSTATE;
uint16_t _TRACE_SPAPR_DRC_SET_ALLOCATION_STATE_DSTATE;
uint16_t _TRACE_SPAPR_DRC_SET_ALLOCATION_STATE_FINALIZING_DSTATE;
uint16_t _TRACE_SPAPR_DRC_SET_CONFIGURED_DSTATE;
uint16_t _TRACE_SPAPR_DRC_SET_CONFIGURED_SKIPPING_DSTATE;
uint16_t _TRACE_SPAPR_DRC_ATTACH_DSTATE;
uint16_t _TRACE_SPAPR_DRC_DETACH_DSTATE;
uint16_t _TRACE_SPAPR_DRC_AWAITING_QUIESCE_DSTATE;
uint16_t _TRACE_SPAPR_DRC_AWAITING_ALLOCATION_DSTATE;
uint16_t _TRACE_SPAPR_DRC_RESET_DSTATE;
uint16_t _TRACE_SPAPR_DRC_REALIZE_DSTATE;
uint16_t _TRACE_SPAPR_DRC_REALIZE_CHILD_DSTATE;
uint16_t _TRACE_SPAPR_DRC_REALIZE_COMPLETE_DSTATE;
uint16_t _TRACE_SPAPR_DRC_UNREALIZE_DSTATE;
uint16_t _TRACE_SPAPR_OVEC_PARSE_VECTOR_DSTATE;
uint16_t _TRACE_SPAPR_OVEC_POPULATE_DT_DSTATE;
uint16_t _TRACE_SPAPR_RTAS_GET_SENSOR_STATE_NOT_SUPPORTED_DSTATE;
uint16_t _TRACE_SPAPR_RTAS_GET_SENSOR_STATE_INVALID_DSTATE;
uint16_t _TRACE_SPAPR_RTAS_IBM_CONFIGURE_CONNECTOR_INVALID_DSTATE;
uint16_t _TRACE_SPAPR_RTAS_IBM_CONFIGURE_CONNECTOR_MISSING_FDT_DSTATE;
uint16_t _TRACE_SPAPR_VIO_H_REG_CRQ_DSTATE;
uint16_t _TRACE_SPAPR_VIO_FREE_CRQ_DSTATE;
uint16_t _TRACE_PPC_TB_ADJUST_DSTATE;
uint16_t _TRACE_PREP_IO_800_WRITEB_DSTATE;
uint16_t _TRACE_PREP_IO_800_READB_DSTATE;
uint16_t _TRACE_PREP_SYSTEMIO_READ_DSTATE;
uint16_t _TRACE_PREP_SYSTEMIO_WRITE_DSTATE;
uint16_t _TRACE_RS6000MC_ID_READ_DSTATE;
uint16_t _TRACE_RS6000MC_PRESENCE_READ_DSTATE;
uint16_t _TRACE_RS6000MC_SIZE_READ_DSTATE;
uint16_t _TRACE_RS6000MC_SIZE_WRITE_DSTATE;
uint16_t _TRACE_RS6000MC_PARITY_READ_DSTATE;
uint16_t _TRACE_MAC99_UNINORTH_WRITE_DSTATE;
uint16_t _TRACE_MAC99_UNINORTH_READ_DSTATE;
uint16_t _TRACE_PPC4XX_PCI_MAP_IRQ_DSTATE;
uint16_t _TRACE_PPC4XX_PCI_SET_IRQ_DSTATE;
TraceEvent _TRACE_SPAPR_PCI_MSI_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_pci_msi",
    .sstate = TRACE_SPAPR_PCI_MSI_ENABLED,
    .dstate = &_TRACE_SPAPR_PCI_MSI_DSTATE 
};
TraceEvent _TRACE_SPAPR_PCI_MSI_SETUP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_pci_msi_setup",
    .sstate = TRACE_SPAPR_PCI_MSI_SETUP_ENABLED,
    .dstate = &_TRACE_SPAPR_PCI_MSI_SETUP_DSTATE 
};
TraceEvent _TRACE_SPAPR_PCI_RTAS_IBM_CHANGE_MSI_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_pci_rtas_ibm_change_msi",
    .sstate = TRACE_SPAPR_PCI_RTAS_IBM_CHANGE_MSI_ENABLED,
    .dstate = &_TRACE_SPAPR_PCI_RTAS_IBM_CHANGE_MSI_DSTATE 
};
TraceEvent _TRACE_SPAPR_PCI_RTAS_IBM_QUERY_INTERRUPT_SOURCE_NUMBER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_pci_rtas_ibm_query_interrupt_source_number",
    .sstate = TRACE_SPAPR_PCI_RTAS_IBM_QUERY_INTERRUPT_SOURCE_NUMBER_ENABLED,
    .dstate = &_TRACE_SPAPR_PCI_RTAS_IBM_QUERY_INTERRUPT_SOURCE_NUMBER_DSTATE 
};
TraceEvent _TRACE_SPAPR_PCI_MSI_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_pci_msi_write",
    .sstate = TRACE_SPAPR_PCI_MSI_WRITE_ENABLED,
    .dstate = &_TRACE_SPAPR_PCI_MSI_WRITE_DSTATE 
};
TraceEvent _TRACE_SPAPR_PCI_LSI_SET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_pci_lsi_set",
    .sstate = TRACE_SPAPR_PCI_LSI_SET_ENABLED,
    .dstate = &_TRACE_SPAPR_PCI_LSI_SET_DSTATE 
};
TraceEvent _TRACE_SPAPR_PCI_MSI_RETRY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_pci_msi_retry",
    .sstate = TRACE_SPAPR_PCI_MSI_RETRY_ENABLED,
    .dstate = &_TRACE_SPAPR_PCI_MSI_RETRY_DSTATE 
};
TraceEvent _TRACE_SPAPR_CAS_FAILED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_cas_failed",
    .sstate = TRACE_SPAPR_CAS_FAILED_ENABLED,
    .dstate = &_TRACE_SPAPR_CAS_FAILED_DSTATE 
};
TraceEvent _TRACE_SPAPR_CAS_CONTINUE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_cas_continue",
    .sstate = TRACE_SPAPR_CAS_CONTINUE_ENABLED,
    .dstate = &_TRACE_SPAPR_CAS_CONTINUE_DSTATE 
};
TraceEvent _TRACE_SPAPR_IRQ_ALLOC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_irq_alloc",
    .sstate = TRACE_SPAPR_IRQ_ALLOC_ENABLED,
    .dstate = &_TRACE_SPAPR_IRQ_ALLOC_DSTATE 
};
TraceEvent _TRACE_SPAPR_IRQ_ALLOC_BLOCK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_irq_alloc_block",
    .sstate = TRACE_SPAPR_IRQ_ALLOC_BLOCK_ENABLED,
    .dstate = &_TRACE_SPAPR_IRQ_ALLOC_BLOCK_DSTATE 
};
TraceEvent _TRACE_SPAPR_IRQ_FREE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_irq_free",
    .sstate = TRACE_SPAPR_IRQ_FREE_ENABLED,
    .dstate = &_TRACE_SPAPR_IRQ_FREE_DSTATE 
};
TraceEvent _TRACE_SPAPR_IRQ_FREE_WARN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_irq_free_warn",
    .sstate = TRACE_SPAPR_IRQ_FREE_WARN_ENABLED,
    .dstate = &_TRACE_SPAPR_IRQ_FREE_WARN_DSTATE 
};
TraceEvent _TRACE_SPAPR_CAS_PVR_TRY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_cas_pvr_try",
    .sstate = TRACE_SPAPR_CAS_PVR_TRY_ENABLED,
    .dstate = &_TRACE_SPAPR_CAS_PVR_TRY_DSTATE 
};
TraceEvent _TRACE_SPAPR_CAS_PVR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_cas_pvr",
    .sstate = TRACE_SPAPR_CAS_PVR_ENABLED,
    .dstate = &_TRACE_SPAPR_CAS_PVR_DSTATE 
};
TraceEvent _TRACE_SPAPR_H_RESIZE_HPT_PREPARE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_h_resize_hpt_prepare",
    .sstate = TRACE_SPAPR_H_RESIZE_HPT_PREPARE_ENABLED,
    .dstate = &_TRACE_SPAPR_H_RESIZE_HPT_PREPARE_DSTATE 
};
TraceEvent _TRACE_SPAPR_H_RESIZE_HPT_COMMIT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_h_resize_hpt_commit",
    .sstate = TRACE_SPAPR_H_RESIZE_HPT_COMMIT_ENABLED,
    .dstate = &_TRACE_SPAPR_H_RESIZE_HPT_COMMIT_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_PUT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_put",
    .sstate = TRACE_SPAPR_IOMMU_PUT_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_PUT_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_GET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_get",
    .sstate = TRACE_SPAPR_IOMMU_GET_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_GET_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_INDIRECT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_indirect",
    .sstate = TRACE_SPAPR_IOMMU_INDIRECT_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_INDIRECT_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_STUFF_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_stuff",
    .sstate = TRACE_SPAPR_IOMMU_STUFF_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_STUFF_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_PCI_PUT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_pci_put",
    .sstate = TRACE_SPAPR_IOMMU_PCI_PUT_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_PCI_PUT_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_PCI_GET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_pci_get",
    .sstate = TRACE_SPAPR_IOMMU_PCI_GET_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_PCI_GET_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_PCI_INDIRECT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_pci_indirect",
    .sstate = TRACE_SPAPR_IOMMU_PCI_INDIRECT_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_PCI_INDIRECT_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_PCI_STUFF_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_pci_stuff",
    .sstate = TRACE_SPAPR_IOMMU_PCI_STUFF_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_PCI_STUFF_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_XLATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_xlate",
    .sstate = TRACE_SPAPR_IOMMU_XLATE_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_XLATE_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_NEW_TABLE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_new_table",
    .sstate = TRACE_SPAPR_IOMMU_NEW_TABLE_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_NEW_TABLE_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_PRE_SAVE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_pre_save",
    .sstate = TRACE_SPAPR_IOMMU_PRE_SAVE_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_PRE_SAVE_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_POST_LOAD_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_post_load",
    .sstate = TRACE_SPAPR_IOMMU_POST_LOAD_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_POST_LOAD_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_DDW_QUERY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_ddw_query",
    .sstate = TRACE_SPAPR_IOMMU_DDW_QUERY_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_DDW_QUERY_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_DDW_CREATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_ddw_create",
    .sstate = TRACE_SPAPR_IOMMU_DDW_CREATE_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_DDW_CREATE_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_DDW_REMOVE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_ddw_remove",
    .sstate = TRACE_SPAPR_IOMMU_DDW_REMOVE_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_DDW_REMOVE_DSTATE 
};
TraceEvent _TRACE_SPAPR_IOMMU_DDW_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_iommu_ddw_reset",
    .sstate = TRACE_SPAPR_IOMMU_DDW_RESET_ENABLED,
    .dstate = &_TRACE_SPAPR_IOMMU_DDW_RESET_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_SET_ISOLATION_STATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_set_isolation_state",
    .sstate = TRACE_SPAPR_DRC_SET_ISOLATION_STATE_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_SET_ISOLATION_STATE_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_SET_ISOLATION_STATE_FINALIZING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_set_isolation_state_finalizing",
    .sstate = TRACE_SPAPR_DRC_SET_ISOLATION_STATE_FINALIZING_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_SET_ISOLATION_STATE_FINALIZING_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_SET_ISOLATION_STATE_DEFERRING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_set_isolation_state_deferring",
    .sstate = TRACE_SPAPR_DRC_SET_ISOLATION_STATE_DEFERRING_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_SET_ISOLATION_STATE_DEFERRING_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_SET_DR_INDICATOR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_set_dr_indicator",
    .sstate = TRACE_SPAPR_DRC_SET_DR_INDICATOR_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_SET_DR_INDICATOR_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_SET_ALLOCATION_STATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_set_allocation_state",
    .sstate = TRACE_SPAPR_DRC_SET_ALLOCATION_STATE_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_SET_ALLOCATION_STATE_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_SET_ALLOCATION_STATE_FINALIZING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_set_allocation_state_finalizing",
    .sstate = TRACE_SPAPR_DRC_SET_ALLOCATION_STATE_FINALIZING_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_SET_ALLOCATION_STATE_FINALIZING_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_SET_CONFIGURED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_set_configured",
    .sstate = TRACE_SPAPR_DRC_SET_CONFIGURED_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_SET_CONFIGURED_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_SET_CONFIGURED_SKIPPING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_set_configured_skipping",
    .sstate = TRACE_SPAPR_DRC_SET_CONFIGURED_SKIPPING_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_SET_CONFIGURED_SKIPPING_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_ATTACH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_attach",
    .sstate = TRACE_SPAPR_DRC_ATTACH_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_ATTACH_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_DETACH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_detach",
    .sstate = TRACE_SPAPR_DRC_DETACH_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_DETACH_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_AWAITING_QUIESCE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_awaiting_quiesce",
    .sstate = TRACE_SPAPR_DRC_AWAITING_QUIESCE_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_AWAITING_QUIESCE_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_AWAITING_ALLOCATION_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_awaiting_allocation",
    .sstate = TRACE_SPAPR_DRC_AWAITING_ALLOCATION_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_AWAITING_ALLOCATION_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_reset",
    .sstate = TRACE_SPAPR_DRC_RESET_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_RESET_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_REALIZE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_realize",
    .sstate = TRACE_SPAPR_DRC_REALIZE_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_REALIZE_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_REALIZE_CHILD_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_realize_child",
    .sstate = TRACE_SPAPR_DRC_REALIZE_CHILD_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_REALIZE_CHILD_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_REALIZE_COMPLETE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_realize_complete",
    .sstate = TRACE_SPAPR_DRC_REALIZE_COMPLETE_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_REALIZE_COMPLETE_DSTATE 
};
TraceEvent _TRACE_SPAPR_DRC_UNREALIZE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_drc_unrealize",
    .sstate = TRACE_SPAPR_DRC_UNREALIZE_ENABLED,
    .dstate = &_TRACE_SPAPR_DRC_UNREALIZE_DSTATE 
};
TraceEvent _TRACE_SPAPR_OVEC_PARSE_VECTOR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_ovec_parse_vector",
    .sstate = TRACE_SPAPR_OVEC_PARSE_VECTOR_ENABLED,
    .dstate = &_TRACE_SPAPR_OVEC_PARSE_VECTOR_DSTATE 
};
TraceEvent _TRACE_SPAPR_OVEC_POPULATE_DT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_ovec_populate_dt",
    .sstate = TRACE_SPAPR_OVEC_POPULATE_DT_ENABLED,
    .dstate = &_TRACE_SPAPR_OVEC_POPULATE_DT_DSTATE 
};
TraceEvent _TRACE_SPAPR_RTAS_GET_SENSOR_STATE_NOT_SUPPORTED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_rtas_get_sensor_state_not_supported",
    .sstate = TRACE_SPAPR_RTAS_GET_SENSOR_STATE_NOT_SUPPORTED_ENABLED,
    .dstate = &_TRACE_SPAPR_RTAS_GET_SENSOR_STATE_NOT_SUPPORTED_DSTATE 
};
TraceEvent _TRACE_SPAPR_RTAS_GET_SENSOR_STATE_INVALID_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_rtas_get_sensor_state_invalid",
    .sstate = TRACE_SPAPR_RTAS_GET_SENSOR_STATE_INVALID_ENABLED,
    .dstate = &_TRACE_SPAPR_RTAS_GET_SENSOR_STATE_INVALID_DSTATE 
};
TraceEvent _TRACE_SPAPR_RTAS_IBM_CONFIGURE_CONNECTOR_INVALID_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_rtas_ibm_configure_connector_invalid",
    .sstate = TRACE_SPAPR_RTAS_IBM_CONFIGURE_CONNECTOR_INVALID_ENABLED,
    .dstate = &_TRACE_SPAPR_RTAS_IBM_CONFIGURE_CONNECTOR_INVALID_DSTATE 
};
TraceEvent _TRACE_SPAPR_RTAS_IBM_CONFIGURE_CONNECTOR_MISSING_FDT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_rtas_ibm_configure_connector_missing_fdt",
    .sstate = TRACE_SPAPR_RTAS_IBM_CONFIGURE_CONNECTOR_MISSING_FDT_ENABLED,
    .dstate = &_TRACE_SPAPR_RTAS_IBM_CONFIGURE_CONNECTOR_MISSING_FDT_DSTATE 
};
TraceEvent _TRACE_SPAPR_VIO_H_REG_CRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_vio_h_reg_crq",
    .sstate = TRACE_SPAPR_VIO_H_REG_CRQ_ENABLED,
    .dstate = &_TRACE_SPAPR_VIO_H_REG_CRQ_DSTATE 
};
TraceEvent _TRACE_SPAPR_VIO_FREE_CRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "spapr_vio_free_crq",
    .sstate = TRACE_SPAPR_VIO_FREE_CRQ_ENABLED,
    .dstate = &_TRACE_SPAPR_VIO_FREE_CRQ_DSTATE 
};
TraceEvent _TRACE_PPC_TB_ADJUST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ppc_tb_adjust",
    .sstate = TRACE_PPC_TB_ADJUST_ENABLED,
    .dstate = &_TRACE_PPC_TB_ADJUST_DSTATE 
};
TraceEvent _TRACE_PREP_IO_800_WRITEB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "prep_io_800_writeb",
    .sstate = TRACE_PREP_IO_800_WRITEB_ENABLED,
    .dstate = &_TRACE_PREP_IO_800_WRITEB_DSTATE 
};
TraceEvent _TRACE_PREP_IO_800_READB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "prep_io_800_readb",
    .sstate = TRACE_PREP_IO_800_READB_ENABLED,
    .dstate = &_TRACE_PREP_IO_800_READB_DSTATE 
};
TraceEvent _TRACE_PREP_SYSTEMIO_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "prep_systemio_read",
    .sstate = TRACE_PREP_SYSTEMIO_READ_ENABLED,
    .dstate = &_TRACE_PREP_SYSTEMIO_READ_DSTATE 
};
TraceEvent _TRACE_PREP_SYSTEMIO_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "prep_systemio_write",
    .sstate = TRACE_PREP_SYSTEMIO_WRITE_ENABLED,
    .dstate = &_TRACE_PREP_SYSTEMIO_WRITE_DSTATE 
};
TraceEvent _TRACE_RS6000MC_ID_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "rs6000mc_id_read",
    .sstate = TRACE_RS6000MC_ID_READ_ENABLED,
    .dstate = &_TRACE_RS6000MC_ID_READ_DSTATE 
};
TraceEvent _TRACE_RS6000MC_PRESENCE_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "rs6000mc_presence_read",
    .sstate = TRACE_RS6000MC_PRESENCE_READ_ENABLED,
    .dstate = &_TRACE_RS6000MC_PRESENCE_READ_DSTATE 
};
TraceEvent _TRACE_RS6000MC_SIZE_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "rs6000mc_size_read",
    .sstate = TRACE_RS6000MC_SIZE_READ_ENABLED,
    .dstate = &_TRACE_RS6000MC_SIZE_READ_DSTATE 
};
TraceEvent _TRACE_RS6000MC_SIZE_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "rs6000mc_size_write",
    .sstate = TRACE_RS6000MC_SIZE_WRITE_ENABLED,
    .dstate = &_TRACE_RS6000MC_SIZE_WRITE_DSTATE 
};
TraceEvent _TRACE_RS6000MC_PARITY_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "rs6000mc_parity_read",
    .sstate = TRACE_RS6000MC_PARITY_READ_ENABLED,
    .dstate = &_TRACE_RS6000MC_PARITY_READ_DSTATE 
};
TraceEvent _TRACE_MAC99_UNINORTH_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mac99_uninorth_write",
    .sstate = TRACE_MAC99_UNINORTH_WRITE_ENABLED,
    .dstate = &_TRACE_MAC99_UNINORTH_WRITE_DSTATE 
};
TraceEvent _TRACE_MAC99_UNINORTH_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mac99_uninorth_read",
    .sstate = TRACE_MAC99_UNINORTH_READ_ENABLED,
    .dstate = &_TRACE_MAC99_UNINORTH_READ_DSTATE 
};
TraceEvent _TRACE_PPC4XX_PCI_MAP_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ppc4xx_pci_map_irq",
    .sstate = TRACE_PPC4XX_PCI_MAP_IRQ_ENABLED,
    .dstate = &_TRACE_PPC4XX_PCI_MAP_IRQ_DSTATE 
};
TraceEvent _TRACE_PPC4XX_PCI_SET_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ppc4xx_pci_set_irq",
    .sstate = TRACE_PPC4XX_PCI_SET_IRQ_ENABLED,
    .dstate = &_TRACE_PPC4XX_PCI_SET_IRQ_DSTATE 
};
TraceEvent *hw_ppc_trace_events[] = {
    &_TRACE_SPAPR_PCI_MSI_EVENT,
    &_TRACE_SPAPR_PCI_MSI_SETUP_EVENT,
    &_TRACE_SPAPR_PCI_RTAS_IBM_CHANGE_MSI_EVENT,
    &_TRACE_SPAPR_PCI_RTAS_IBM_QUERY_INTERRUPT_SOURCE_NUMBER_EVENT,
    &_TRACE_SPAPR_PCI_MSI_WRITE_EVENT,
    &_TRACE_SPAPR_PCI_LSI_SET_EVENT,
    &_TRACE_SPAPR_PCI_MSI_RETRY_EVENT,
    &_TRACE_SPAPR_CAS_FAILED_EVENT,
    &_TRACE_SPAPR_CAS_CONTINUE_EVENT,
    &_TRACE_SPAPR_IRQ_ALLOC_EVENT,
    &_TRACE_SPAPR_IRQ_ALLOC_BLOCK_EVENT,
    &_TRACE_SPAPR_IRQ_FREE_EVENT,
    &_TRACE_SPAPR_IRQ_FREE_WARN_EVENT,
    &_TRACE_SPAPR_CAS_PVR_TRY_EVENT,
    &_TRACE_SPAPR_CAS_PVR_EVENT,
    &_TRACE_SPAPR_H_RESIZE_HPT_PREPARE_EVENT,
    &_TRACE_SPAPR_H_RESIZE_HPT_COMMIT_EVENT,
    &_TRACE_SPAPR_IOMMU_PUT_EVENT,
    &_TRACE_SPAPR_IOMMU_GET_EVENT,
    &_TRACE_SPAPR_IOMMU_INDIRECT_EVENT,
    &_TRACE_SPAPR_IOMMU_STUFF_EVENT,
    &_TRACE_SPAPR_IOMMU_PCI_PUT_EVENT,
    &_TRACE_SPAPR_IOMMU_PCI_GET_EVENT,
    &_TRACE_SPAPR_IOMMU_PCI_INDIRECT_EVENT,
    &_TRACE_SPAPR_IOMMU_PCI_STUFF_EVENT,
    &_TRACE_SPAPR_IOMMU_XLATE_EVENT,
    &_TRACE_SPAPR_IOMMU_NEW_TABLE_EVENT,
    &_TRACE_SPAPR_IOMMU_PRE_SAVE_EVENT,
    &_TRACE_SPAPR_IOMMU_POST_LOAD_EVENT,
    &_TRACE_SPAPR_IOMMU_DDW_QUERY_EVENT,
    &_TRACE_SPAPR_IOMMU_DDW_CREATE_EVENT,
    &_TRACE_SPAPR_IOMMU_DDW_REMOVE_EVENT,
    &_TRACE_SPAPR_IOMMU_DDW_RESET_EVENT,
    &_TRACE_SPAPR_DRC_SET_ISOLATION_STATE_EVENT,
    &_TRACE_SPAPR_DRC_SET_ISOLATION_STATE_FINALIZING_EVENT,
    &_TRACE_SPAPR_DRC_SET_ISOLATION_STATE_DEFERRING_EVENT,
    &_TRACE_SPAPR_DRC_SET_DR_INDICATOR_EVENT,
    &_TRACE_SPAPR_DRC_SET_ALLOCATION_STATE_EVENT,
    &_TRACE_SPAPR_DRC_SET_ALLOCATION_STATE_FINALIZING_EVENT,
    &_TRACE_SPAPR_DRC_SET_CONFIGURED_EVENT,
    &_TRACE_SPAPR_DRC_SET_CONFIGURED_SKIPPING_EVENT,
    &_TRACE_SPAPR_DRC_ATTACH_EVENT,
    &_TRACE_SPAPR_DRC_DETACH_EVENT,
    &_TRACE_SPAPR_DRC_AWAITING_QUIESCE_EVENT,
    &_TRACE_SPAPR_DRC_AWAITING_ALLOCATION_EVENT,
    &_TRACE_SPAPR_DRC_RESET_EVENT,
    &_TRACE_SPAPR_DRC_REALIZE_EVENT,
    &_TRACE_SPAPR_DRC_REALIZE_CHILD_EVENT,
    &_TRACE_SPAPR_DRC_REALIZE_COMPLETE_EVENT,
    &_TRACE_SPAPR_DRC_UNREALIZE_EVENT,
    &_TRACE_SPAPR_OVEC_PARSE_VECTOR_EVENT,
    &_TRACE_SPAPR_OVEC_POPULATE_DT_EVENT,
    &_TRACE_SPAPR_RTAS_GET_SENSOR_STATE_NOT_SUPPORTED_EVENT,
    &_TRACE_SPAPR_RTAS_GET_SENSOR_STATE_INVALID_EVENT,
    &_TRACE_SPAPR_RTAS_IBM_CONFIGURE_CONNECTOR_INVALID_EVENT,
    &_TRACE_SPAPR_RTAS_IBM_CONFIGURE_CONNECTOR_MISSING_FDT_EVENT,
    &_TRACE_SPAPR_VIO_H_REG_CRQ_EVENT,
    &_TRACE_SPAPR_VIO_FREE_CRQ_EVENT,
    &_TRACE_PPC_TB_ADJUST_EVENT,
    &_TRACE_PREP_IO_800_WRITEB_EVENT,
    &_TRACE_PREP_IO_800_READB_EVENT,
    &_TRACE_PREP_SYSTEMIO_READ_EVENT,
    &_TRACE_PREP_SYSTEMIO_WRITE_EVENT,
    &_TRACE_RS6000MC_ID_READ_EVENT,
    &_TRACE_RS6000MC_PRESENCE_READ_EVENT,
    &_TRACE_RS6000MC_SIZE_READ_EVENT,
    &_TRACE_RS6000MC_SIZE_WRITE_EVENT,
    &_TRACE_RS6000MC_PARITY_READ_EVENT,
    &_TRACE_MAC99_UNINORTH_WRITE_EVENT,
    &_TRACE_MAC99_UNINORTH_READ_EVENT,
    &_TRACE_PPC4XX_PCI_MAP_IRQ_EVENT,
    &_TRACE_PPC4XX_PCI_SET_IRQ_EVENT,
  NULL,
};

static void trace_hw_ppc_register_events(void)
{
    trace_event_register_group(hw_ppc_trace_events);
}
trace_init(trace_hw_ppc_register_events)
