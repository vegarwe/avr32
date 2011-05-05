/**************************************************
 *
 * Declaration of system and I/O registers for AVR32
 * IAR C/C++ Compiler and IAR Assembler.
 *  
 * This file describes the properties of the Atmel AP7000
 * device. It can be used directly, or as a template for
 * creating new I/O register description files.
 *
 * This file has been automatically generated from the corresponding
 * part description file from Atmel:
 * File name:           AP7000.xml
 * File version:        0.01
 * File release status: DRAFT
 * Last file update:    2007-02-08
 *
 * Copyright 2007 IAR Systems. All rights reserved.
 *
 * $Revision: 60652 $
 *
 **************************************************/

#ifndef __IOAP7000_H
#define __IOAP7000_H

#if (!__AAVR32__ && !__ICCAVR32__)
#error "File ioap7000.h is for use with ICCAVR32/AAVR32 only."
#endif

#include <avr32/abi.h>
#include <avr32/ap7000.h>


/* Core definition */

/* Interrupts */

#define AVR32_CORE_IRQ_GROUP          0

/* ABDAC - Audio Bitstream DAC */

/* Interrupts */

#define AVR32_ABDAC_IRQ_GROUP         27

/* AC97C - AC97 Controller */

/* Interrupts */

#define AVR32_AC97C_IRQ_GROUP         29

/* DMACA - DMA Controller */

/* Interrupts */

#define AVR32_DMACA_IRQ_GROUP         2

/* ECC - Error Corrected Code Controller */

/* EIC - External Interrupt Controller */

/* Interrupts */

#define AVR32_EIC_IRQ_GROUP0          0
#define AVR32_EIC_IRQ_GROUP1          19

/* HMATRIX - HSB Matrix */

/* ISI - Image Sensor Interface */

/* Interrupts */

#define AVR32_ISI_IRQ_GROUP           30

/* LCDC - LCD Controller */

/* Interrupts */

#define AVR32_LCDC_IRQ_GROUP          1

/* MACB - Ethernet MAC */

/* MACB - Ethernet MAC */

/* Interrupts */

#define AVR32_MACB0_IRQ_GROUP         25

/* Interrupts */

#define AVR32_MACB1_IRQ_GROUP         26

/* MCI - MulitMedia Card Interface */

/* Interrupts */

#define AVR32_MCI_IRQ_GROUP           28

/* PIO - Parallel Input/Output Controller */

/* PIO - Parallel Input/Output Controller */

/* PIO - Parallel Input/Output Controller */

/* PIO - Parallel Input/Output Controller */

/* PIO - Parallel Input/Output Controller */

/* Interrupts */

#define AVR32_PIOA_IRQ_GROUP          13

/* Interrupts */

#define AVR32_PIOB_IRQ_GROUP          14

/* Interrupts */

#define AVR32_PIOC_IRQ_GROUP          15

/* Interrupts */

#define AVR32_PIOD_IRQ_GROUP          16

/* Interrupts */

#define AVR32_PIOE_IRQ_GROUP          17

/* PM - Power Manager */

/* Interrupts */

#define AVR32_PM_IRQ_GROUP            20

/* PSIF - PS/2 Interface */

/* Interrupts */

#define AVR32_PSIF_IRQ_GROUP          18

/* PWM - Pulse Width Modulation Controller */

/* Interrupts */

#define AVR32_PWM_IRQ_GROUP           24

/* RTC - Real Time Clock */

/* Interrupts */

#define AVR32_RTC_IRQ_GROUP           21

/* SDRAMC - SDRAM Controller */

/* Interrupts */

#define AVR32_SDRAMC_IRQ_GROUP        32

/* SMC - Static Memory Controller */

/* SPI - Serial Peripheral Interface */

/* SPI - Serial Peripheral Interface */

/* Interrupts */

#define AVR32_SPI0_IRQ_GROUP          3

/* Interrupts */

#define AVR32_SPI1_IRQ_GROUP          4

/* SSC - Synchronous Serial Controller */

/* SSC - Synchronous Serial Controller */

/* SSC - Synchronous Serial Controller */

/* Interrupts */

#define AVR32_SSC0_IRQ_GROUP          10

/* Interrupts */

#define AVR32_SSC1_IRQ_GROUP          11

/* Interrupts */

#define AVR32_SSC2_IRQ_GROUP          12

/* TC - Timer/Counter */

/* TC - Timer/Counter */

/* Interrupts */

#define AVR32_TC0_IRQ_GROUP           22

/* Interrupts */

#define AVR32_TC1_IRQ_GROUP           23

/* TWI - Two-wire Interface */

/* Interrupts */

#define AVR32_TWI_IRQ_GROUP           5

/* USART - Universal Synchronous/Asynchronous Receiver/Transmitter */

/* USART - Universal Synchronous/Asynchronous Receiver/Transmitter */

/* USART - Universal Synchronous/Asynchronous Receiver/Transmitter */

/* USART - Universal Synchronous/Asynchronous Receiver/Transmitter */

/* Interrupts */

#define AVR32_USART0_IRQ_GROUP        6

/* Interrupts */

#define AVR32_USART1_IRQ_GROUP        7

/* Interrupts */

#define AVR32_USART2_IRQ_GROUP        8

/* Interrupts */

#define AVR32_USART3_IRQ_GROUP        9

/* USBA - USB Interface */

/* Interrupts */

#define AVR32_USBA_IRQ_GROUP          31

/* WDT - Watchdog Timer */

#ifdef __IAR_SYSTEMS_ICC__
#pragma language=extended

/**************************************************
 *   System registers
 **************************************************/
typedef struct avr32_core_t
{
  /* 0x000 */
  union {
    unsigned long             sr;
    avr32_sr_t                SR;
  };
  unsigned long               evba;
  unsigned long               acba;
  union {
    unsigned long             cpucr;
    avr32_cpucr_t             CPUCR;
  };
  unsigned long const         ecr;
  unsigned long               rsr_sup;
  unsigned long               rsr_int0;
  unsigned long               rsr_int1;
  unsigned long               rsr_int2;
  unsigned long               rsr_int3;
  unsigned long               rsr_ex;
  unsigned long               rsr_nmi;
  unsigned long               rsr_dbg;
  unsigned long               rar_sup;
  unsigned long               rar_int0;
  unsigned long               rar_int1;
  unsigned long               rar_int2;
  unsigned long               rar_int3;
  unsigned long               rar_ex;
  unsigned long               rar_nmi;
  unsigned long               rar_dbg;
  unsigned long const         jecr;
  unsigned long               josp;
  unsigned long               java_lv0;
  unsigned long               java_lv1;
  unsigned long               java_lv2;
  unsigned long               java_lv3;
  unsigned long               java_lv4;
  unsigned long               java_lv5;
  unsigned long               java_lv6;
  unsigned long               java_lv7;
  unsigned long               jtba;
  unsigned long               jbcr;

  unsigned long               _pad1[31];

  /* 0x100 */
  union {
    unsigned long const       config0;
    avr32_config0_t const     CONFIG0;
  };
  union {
    unsigned long const       config1;
    avr32_config1_t const     CONFIG1;
  };
  unsigned long               count;
  unsigned long               compare;
  union {
    unsigned long             tlbehi;
    avr32_tlbehi_t            TLBEHI;
  };
  union {
    unsigned long             tlbelo;
    avr32_tlbelo_t            TLBELO;
  };
  unsigned long               ptbr;
  unsigned long const         tlbear;
  union {
    unsigned long             mmucr;
    avr32_mmucr_t             MMUCR;
  };
  unsigned long               tlbarlo;
  unsigned long               tlbarhi;
  unsigned long               pccnt;
  unsigned long               pcnt0;
  unsigned long               pcnt1;
  union {
    unsigned long             pccr;
    avr32_pccr_t              PCCR;
  };
  unsigned long const         bear;

  unsigned long               _pad2[112];

  /* 0x300 */
  unsigned long               sabal;
  unsigned long               sabah;
  unsigned long               sabd;
} avr32_core_t;

/* instance */
extern volatile __no_init __sysreg avr32_core_t avr32_core @ 0x000;

/**************************************************
 *   Non-volatile registers
 **************************************************/

#pragma language=default
#endif  /* __IAR_SYSTEMS_ICC__  */
#ifdef __IAR_SYSTEMS_ASM__


#endif /* __IAR_SYSTEMS_ASM__*/

#endif 

