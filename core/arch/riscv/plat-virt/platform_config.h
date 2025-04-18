/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright 2022-2023 NXP
 *
 * Brief   Qemu Virt platform configuration.
 */

#ifndef PLATFORM_CONFIG_H
#define PLATFORM_CONFIG_H

#include <mm/generic_ram_layout.h>
#include <riscv.h>

/* DRAM */
#ifndef DRAM_BASE
#define DRAM_BASE		0x80000000
#define DRAM_SIZE		0x10000000
#endif

/* CLINT */
#ifndef CLINT_BASE
#define CLINT_BASE		0x02000000
#endif

/* PLIC */
#ifndef PLIC_BASE
#define PLIC_BASE		0x0c000000
#define PLIC_REG_SIZE		0x600000
#define PLIC_NUM_SOURCES	0x5f
#endif

/* APLIC */
#ifndef APLIC_BASE
#define APLIC_BASE		0x0d000000
#define APLIC_SIZE		0x8000
#define APLIC_NUM_SOURCE	0x60
#define APLIC_NUM_IDC		CFG_TEE_CORE_NB_CORE
#endif

/* IMSIC */
#ifndef IMSIC_BASE
#define IMSIC_BASE		0x28000000
#define IMSIC_SIZE		0x4000000
#define IMSIC_NUM_IDS		0xff
#define IMSIC_GUEST_INDEX_BITS	0x00
#define IMSIC_HART_INDEX_BITS	0x02
#define IMSIC_GROUP_INDEX_BITS	0x00
#define IMSIC_GROUP_INDEX_SHIFT	0x18
#endif

/* UART */
#ifndef UART0_BASE
#define UART0_BASE		0x10000000
#endif
#define UART0_IRQ		0x0a

/* RTC */
#ifndef RTC_BASE
#define RTC_BASE		0x101000
#endif
#define RTC_IRQ			0x0b

/* VIRTIO MMIOs */
#define NUM_VIRTIO_MMIOS	8

#ifndef VIRTIO_MMIO1
#define VIRTIO_MMIO1		0x10001000
#define VIRTIO_MMIO1_IRQ	0x01
#endif

#ifndef VIRTIO_MMIO2
#define VIRTIO_MMIO2		0x10002000
#define VIRTIO_MMIO2_IRQ	0x02
#endif

#ifndef VIRTIO_MMIO3
#define VIRTIO_MMIO3		0x10003000
#define VIRTIO_MMIO3_IRQ	0x03
#endif

#ifndef VIRTIO_MMIO4
#define VIRTIO_MMIO4		0x10004000
#define VIRTIO_MMIO4_IRQ	0x04
#endif

#ifndef VIRTIO_MMIO5
#define VIRTIO_MMIO5		0x10005000
#define VIRTIO_MMIO5_IRQ	0x05
#endif

#ifndef VIRTIO_MMIO6
#define VIRTIO_MMIO6		0x10006000
#define VIRTIO_MMIO6_IRQ	0x06
#endif

#ifndef VIRTIO_MMIO7
#define VIRTIO_MMIO7		0x10007000
#define VIRTIO_MMIO7_IRQ	0x07
#endif

#ifndef VIRTIO_MMIO8
#define VIRTIO_MMIO8		0x10008000
#define VIRTIO_MMIO8_IRQ	0x08
#endif

#ifdef CFG_RISCV_MTIME_RATE
#define RISCV_MTIME_RATE CFG_RISCV_MTIME_RATE
#else
#define RISCV_MTIME_RATE 1000000
#endif

#define PLAT_THREAD_EXCP_FOREIGN_INTR	\
	(CSR_XIE_EIE | CSR_XIE_TIE | CSR_XIE_SIE)
#define PLAT_THREAD_EXCP_NATIVE_INTR	(0)

#endif /*PLATFORM_CONFIG_H*/
