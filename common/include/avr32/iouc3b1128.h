/**************************************************
 *
 * Declaration of system and I/O registers for AVR32
 * IAR C/C++ Compiler and IAR Assembler.
 *  
 * This file describes the properties of the Atmel UC3B1128
 * device. It can be used directly, or as a template for
 * creating new I/O register description files.
 *
 * This file has been automatically generated from the corresponding
 * part description file from Atmel:
 * File name:           UC3B1128.xml
 * File version:        0
 * File release status: RELEASE
 * Last file update:    2007-04-25
 *
 * Copyright 2007 IAR Systems. All rights reserved.
 *
 * $Revision: 60652 $
 *
 **************************************************/

#ifndef __IOUC3B1128_H
#define __IOUC3B1128_H

#if (!__AAVR32__ && !__ICCAVR32__)
#error "File iouc3b1128.h is for use with ICCAVR32/AAVR32 only."
#endif

#include <avr32/abi.h>
#include <avr32/uc3b1128.h>


/* Core definition */

/* Interrupts */

#define AVR32_CORE_IRQ_GROUP          0

/* ADC - Analog to Digital Converter */

/* Interrupts */

#define AVR32_ADC_IRQ_GROUP           15

/* EIC - External Interrupt Controller */

/* Interrupts */

#define AVR32_EIC_IRQ_GROUP           1

/* FREQM - Frequency Meter */

/* Interrupts */

#define AVR32_FREQM_IRQ_GROUP         1

/* GPIO - General Purpose Input/Output Controller */

/* Interrupts */

#define AVR32_GPIO_IRQ_GROUP          2

/* FLASHC - Flash Controller */

/* Interrupts */

#define AVR32_FLASHC_IRQ_GROUP        4

/* HMATRIX - HSB Matrix */

/* PDCA - Peripheral DMA Controller */

/* Interrupts */

#define AVR32_PDCA_IRQ_GROUP          3

/* PM - Power Manager */

/* Interrupts */

#define AVR32_PM_IRQ_GROUP            1

/* PWM - Pulse Width Modulation Controller */

/* Interrupts */

#define AVR32_PWM_IRQ_GROUP           12

/* RTC - Real Time Counter */

/* Interrupts */

#define AVR32_RTC_IRQ_GROUP           1

/* SPI - Serial Peripheral Interface */

/* Interrupts */

#define AVR32_SPI_IRQ_GROUP           9

/* TC - Timer/Counter */

/* Interrupts */

#define AVR32_TC_IRQ_GROUP            14

/* TWI - Two-wire Interface */

/* Interrupts */

#define AVR32_TWI_IRQ_GROUP           11

/* USART - Universal Synchronous Asynchronous Receiver Transmitter */

/* USART - Universal Synchronous Asynchronous Receiver Transmitter */

/* USART - Universal Synchronous Asynchronous Receiver Transmitter */

/* Interrupts */

#define AVR32_USART0_IRQ_GROUP        5

/* Interrupts */

#define AVR32_USART1_IRQ_GROUP        6

/* Interrupts */

#define AVR32_USART2_IRQ_GROUP        7

/* USBB - USB Interface */

/* Interrupts */

#define AVR32_USBB_IRQ_GROUP          17

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

  unsigned long               _pad1[7];

  /* 0x030 */
  unsigned long               rsr_dbg;

  unsigned long               _pad2[7];

  /* 0x050 */
  unsigned long               rar_dbg;

  unsigned long               _pad3[43];

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

  unsigned long               _pad4[11];

  /* 0x13C */
  unsigned long const         bear;
  union {
    unsigned long             mpuar0;
    avr32_mpuar0_t            MPUAR0;
  };
  union {
    unsigned long             mpuar1;
    avr32_mpuar1_t            MPUAR1;
  };
  union {
    unsigned long             mpuar2;
    avr32_mpuar2_t            MPUAR2;
  };
  union {
    unsigned long             mpuar3;
    avr32_mpuar3_t            MPUAR3;
  };
  union {
    unsigned long             mpuar4;
    avr32_mpuar4_t            MPUAR4;
  };
  union {
    unsigned long             mpuar5;
    avr32_mpuar5_t            MPUAR5;
  };
  union {
    unsigned long             mpuar6;
    avr32_mpuar6_t            MPUAR6;
  };
  union {
    unsigned long             mpuar7;
    avr32_mpuar7_t            MPUAR7;
  };
  union {
    unsigned long             mpupsr0;
    avr32_mpupsr0_t           MPUPSR0;
  };
  union {
    unsigned long             mpupsr1;
    avr32_mpupsr1_t           MPUPSR1;
  };
  union {
    unsigned long             mpupsr2;
    avr32_mpupsr2_t           MPUPSR2;
  };
  union {
    unsigned long             mpupsr3;
    avr32_mpupsr3_t           MPUPSR3;
  };
  union {
    unsigned long             mpupsr4;
    avr32_mpupsr4_t           MPUPSR4;
  };
  union {
    unsigned long             mpupsr5;
    avr32_mpupsr5_t           MPUPSR5;
  };
  union {
    unsigned long             mpupsr6;
    avr32_mpupsr6_t           MPUPSR6;
  };
  union {
    unsigned long             mpupsr7;
    avr32_mpupsr7_t           MPUPSR7;
  };
  union {
    unsigned long             mpucra;
    avr32_mpucra_t            MPUCRA;
  };
  union {
    unsigned long             mpucrb;
    avr32_mpucrb_t            MPUCRB;
  };
  union {
    unsigned long             mpubra;
    avr32_mpubra_t            MPUBRA;
  };
  union {
    unsigned long             mpubrb;
    avr32_mpubrb_t            MPUBRB;
  };
  union {
    unsigned long             mpuapra;
    avr32_mpuapra_t           MPUAPRA;
  };
  union {
    unsigned long             mpuaprb;
    avr32_mpuaprb_t           MPUAPRB;
  };
  union {
    unsigned long             mpucr;
    avr32_mpucr_t             MPUCR;
  };
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

