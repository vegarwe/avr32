/**************************************************
 *
 * Declaration of system and I/O registers for AVR32
 * IAR C/C++ Compiler and IAR Assembler.
 *  
 * This file describes the properties of the Atmel UC3B0256ES
 * device. It can be used directly, or as a template for
 * creating new I/O register description files.
 *
 * This file has been automatically generated from the corresponding
 * part description file from Atmel:
 * File name:           UC3B0256ES.xml
 * File version:        0
 * File release status: RELEASE
 * Last file update:    2007-04-25
 *
 * Copyright 2007 IAR Systems. All rights reserved.
 *
 * $Revision: 60652 $
 *
 **************************************************/

#ifndef __IOUC3B0256ES_H
#define __IOUC3B0256ES_H

#if (!__AAVR32__ && !__ICCAVR32__)
#error "File iouc3b0256es.h is for use with ICCAVR32/AAVR32 only."
#endif

#include <avr32/abi.h>
#include <avr32/uc3b0256es.h>


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

/* SSC - Synchronous Serial Controller */

/* Interrupts */

#define AVR32_SSC_IRQ_GROUP           13

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
    unsigned long             mpuari0;
    avr32_mpuari0_t           MPUARI0;
  };
  union {
    unsigned long             mpuari1;
    avr32_mpuari1_t           MPUARI1;
  };
  union {
    unsigned long             mpuari2;
    avr32_mpuari2_t           MPUARI2;
  };
  union {
    unsigned long             mpuari3;
    avr32_mpuari3_t           MPUARI3;
  };
  union {
    unsigned long             mpuari4;
    avr32_mpuari4_t           MPUARI4;
  };
  union {
    unsigned long             mpuari5;
    avr32_mpuari5_t           MPUARI5;
  };
  union {
    unsigned long             mpuari6;
    avr32_mpuari6_t           MPUARI6;
  };
  union {
    unsigned long             mpuari7;
    avr32_mpuari7_t           MPUARI7;
  };
  union {
    unsigned long             mpuard0;
    avr32_mpuard0_t           MPUARD0;
  };
  union {
    unsigned long             mpuard1;
    avr32_mpuard1_t           MPUARD1;
  };
  union {
    unsigned long             mpuard2;
    avr32_mpuard2_t           MPUARD2;
  };
  union {
    unsigned long             mpuard3;
    avr32_mpuard3_t           MPUARD3;
  };
  union {
    unsigned long             mpuard4;
    avr32_mpuard4_t           MPUARD4;
  };
  union {
    unsigned long             mpuard5;
    avr32_mpuard5_t           MPUARD5;
  };
  union {
    unsigned long             mpuard6;
    avr32_mpuard6_t           MPUARD6;
  };
  union {
    unsigned long             mpuard7;
    avr32_mpuard7_t           MPUARD7;
  };
  union {
    unsigned long             mpucri;
    avr32_mpucri_t            MPUCRI;
  };
  union {
    unsigned long             mpucrd;
    avr32_mpucrd_t            MPUCRD;
  };
  union {
    unsigned long             mpubrd;
    avr32_mpubrd_t            MPUBRD;
  };
  union {
    unsigned long             mpuapri;
    avr32_mpuapri_t           MPUAPRI;
  };
  union {
    unsigned long             mpuaprd;
    avr32_mpuaprd_t           MPUAPRD;
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

