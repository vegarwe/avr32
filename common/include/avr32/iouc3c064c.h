/**************************************************
 *
 * Declaration of system and I/O registers for AVR32
 * IAR C/C++ Compiler and IAR Assembler.
 *  
 * This file describes the properties of the Atmel UC3000
 * device. It can be used directly, or as a template for
 * creating new I/O register description files.
 *
 * This file has been automatically generated from the corresponding
 * part description file from Atmel:
 * File name:           Casablanca.xml
 * File version:        0
 * File release status: RELEASE
 * Last file update:    2009-02-10
 *
 * Copyright 2009 IAR Systems. All rights reserved.
 *
 * $Revision: 3621 $
 *
 **************************************************/

#ifndef __IOUC3C064_H_H
#define __IOUC3C064_H_H

#if (!defined(__AAVR32__) && !defined(__ICCAVR32__))
#error "File ..\..\bin\avr32\inc\avr32\iouc3c064.h is for use with ICCAVR32/AAVR32 only."
#endif

#include <avr32/abi.h>
#include <avr32/uc3000.h>


/* Core definition */

/* Interrupts */

#define AVR32_CORE_IRQ_GROUP0         0
#define AVR32_CORE_IRQ_GROUP1         1

/* ACIFA - Analog Comparators Interface */

/* ACIFA - Analog Comparators Interface */

/* ADCIFA - ADC controller interface with Touch Screen functionality */

/* AST - Asynchronous Timer */

/* Interrupts */

#define AVR32_AST_IRQ_GROUP           14

/* AW - aWire */

/* Interrupts */

#define AVR32_AW_IRQ_GROUP            41

/* CANIF - Control Area Network interface */

/* DACIFB - DAC interface */

/* DACIFB - DAC interface */

/* EIC - External Interrupt Controller */

/* Interrupts */

#define AVR32_EIC_IRQ_GROUP0          0
#define AVR32_EIC_IRQ_GROUP1          15
#define AVR32_EIC_IRQ_GROUP2          16

/* FLASHC - Flash Controller */

/* Interrupts */

#define AVR32_HFLASHC_IRQ_GROUP       9

/* FREQM - Frequency Meter */

/* Interrupts */

#define AVR32_FREQM_IRQ_GROUP         17

/* GPIO - General Purpose Input/Output Controller */

/* Interrupts */

#define AVR32_GPIO_IRQ_GROUP          18

/* HMATRIX - HSB Matrix */

/* MDMA - Memory DMA */

/* Interrupts */

#define AVR32_MDMA_IRQ_GROUP          6

/* PDCA - Peripheral DMA Controller */

/* Interrupts */

#define AVR32_PDCA_IRQ_GROUP0         3
#define AVR32_PDCA_IRQ_GROUP1         4
#define AVR32_PDCA_IRQ_GROUP2         5

/* PEVC - Peripheral Event Controller */

/* Interrupts */

#define AVR32_PEVC_IRQ_GROUP          35

/* PM - Power Manager */

/* Interrupts */

#define AVR32_PM_IRQ_GROUP            12

/* PWM - Pulse Width Modulation Controller */

/* Interrupts */

#define AVR32_PWM_IRQ_GROUP           30

/* QDEC - Quadrature Decoder */

/* QDEC - Quadrature Decoder */

/* SAU - Secure Access Unit */

/* Interrupts */

#define AVR32_SAU_IRQ_GROUP           2

/* SCIF - System Control Interface */

/* SDRAMC - SDRAM Controller */

/* Interrupts */

#define AVR32_SDRAMC_IRQ_GROUP        10

/* SMC - Static Memory Controller */

/* SPI - Serial Peripheral Interface */

/* Interrupts */

#define AVR32_SPI0_IRQ_GROUP          23

/* SPI - Serial Peripheral Interface */

/* Interrupts */

#define AVR32_SPI1_IRQ_GROUP          24

/* SSC - Synchronous Serial Controller */

/* Interrupts */

#define AVR32_SSC_IRQ_GROUP           29

/* TC - Timer/Counter */

/* Interrupts */

#define AVR32_TC0_IRQ_GROUP           33

/* TC - Timer/Counter */

/* Interrupts */

#define AVR32_TC1_IRQ_GROUP           34

/* TWIM - Two-wire Master Interface */

/* TWIM - Two-wire Master Interface */

/* TWIS - Two-wire Slave Interface */

/* TWIS - Two-wire Slave Interface */

/* USART - Universal Synchronous/Asynchronous Receiver/Transmitter */

/* Interrupts */

#define AVR32_USART0_IRQ_GROUP        19

/* USART - Universal Synchronous/Asynchronous Receiver/Transmitter */

/* Interrupts */

#define AVR32_USART1_IRQ_GROUP        20

/* USART - Universal Synchronous/Asynchronous Receiver/Transmitter */

/* Interrupts */

#define AVR32_USART2_IRQ_GROUP        21

/* USART - Universal Synchronous/Asynchronous Receiver/Transmitter */

/* Interrupts */

#define AVR32_USART3_IRQ_GROUP        22

/* USB - USB 2.0 OTG Interface */

/* Interrupts */

#define AVR32_USB_IRQ_GROUP           7

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
  unsigned long               bear;
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
  unsigned long const         ss_status;

  unsigned long               _pad5[24];

  /* 0x200 */
  unsigned long               ss_adrf;
  unsigned long               ss_adrr;
  unsigned long               ss_adr0;
  unsigned long               ss_adr1;
  unsigned long               ss_sp_sys;
  unsigned long               ss_sp_app;
  unsigned long               ss_rar;
  unsigned long               ss_rsr;
} avr32_core_t;

/* instance */
extern volatile __no_init __sysreg avr32_core_t avr32_core @ 0x000;

#pragma language=default
#endif  /* __IAR_SYSTEMS_ICC__  */

#endif 

