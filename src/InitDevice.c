//=========================================================
// src/InitDevice.c: generated by Hardware Configurator
//
// This file will be regenerated when saving a document.
// leave the sections inside the "$[...]" comment tags alone
// or they will be overwritten!
//=========================================================

// USER INCLUDES
#include <SI_EFM8SB1_Register_Enums.h>
#include "InitDevice.h"

// USER PROTOTYPES
// USER FUNCTIONS

// $[Library Includes]

#include "cslib.h"
// [Library Includes]$

//==============================================================================
// enter_DefaultMode_from_RESET
//==============================================================================
extern void enter_DefaultMode_from_RESET(void) {
	// $[Config Calls]
	// Save the SFRPAGE
	uint8_t SFRPAGE_save = SFRPAGE;
	PCA_0_enter_DefaultMode_from_RESET();
	PCACH_0_enter_DefaultMode_from_RESET();
	PCACH_2_enter_DefaultMode_from_RESET();
	VREG_0_enter_DefaultMode_from_RESET();
	PORTS_0_enter_DefaultMode_from_RESET();
	PORTS_1_enter_DefaultMode_from_RESET();
	PORTS_2_enter_DefaultMode_from_RESET();
	PBCFG_0_enter_DefaultMode_from_RESET();
	HFOSC_0_enter_DefaultMode_from_RESET();
	RTC_0_enter_DefaultMode_from_RESET();
	CLOCK_0_enter_DefaultMode_from_RESET();
	TIMER01_0_enter_DefaultMode_from_RESET();
	TIMER_SETUP_0_enter_DefaultMode_from_RESET();
	CSLIB_0_enter_DefaultMode_from_RESET();
	// Restore the SFRPAGE
	SFRPAGE = SFRPAGE_save;
	// [Config Calls]$

}

extern void PCA_0_enter_DefaultMode_from_RESET(void) {
	// $[PCA0MD - PCA Mode]
	/***********************************************************************
	 - Disable Watchdog Timer
	 - Timer 0 overflow
	 - PCA continues to function normally while the system controller is in
	 Idle Mode
	 - Disable the CF interrupt
	 - Disable Watchdog Timer
	 - Watchdog Timer Enable unlocked
	 ***********************************************************************/
	SFRPAGE = 0x00;
	PCA0MD &= ~PCA0MD_WDTE__BMASK;
	PCA0MD = PCA0MD_CPS__T0_OVERFLOW | PCA0MD_CIDL__NORMAL
			| PCA0MD_ECF__OVF_INT_DISABLED | PCA0MD_WDTE__DISABLED
			| PCA0MD_WDLCK__UNLOCKED;
	// [PCA0MD - PCA Mode]$

	// $[PCA0H - PCA Counter/Timer High Byte]
	// [PCA0H - PCA Counter/Timer High Byte]$

	// $[PCA0L - PCA Counter/Timer Low Byte]
	// [PCA0L - PCA Counter/Timer Low Byte]$

	// $[PCA0PWM - PCA PWM Configuration]
	// [PCA0PWM - PCA PWM Configuration]$

	// $[PCA0CN0 - PCA Control 0]
	/***********************************************************************
	 - Start the PCA Counter/Timer running
	 ***********************************************************************/
	PCA0CN0 |= PCA0CN0_CR__RUN;
	// [PCA0CN0 - PCA Control 0]$

}

extern void PCACH_0_enter_DefaultMode_from_RESET(void) {
	// $[PCA0 Settings Save]
	// Select Capture/Compare register)
	PCA0PWM &= ~PCA0PWM_ARSEL__BMASK;
	// [PCA0 Settings Save]$

	// $[PCA0CPM0 - PCA Channel 0 Capture/Compare Mode]
	/***********************************************************************
	 - Disable negative edge capture
	 - Disable CCF0 interrupts
	 - Disable match function
	 - 8 to 11-bit PWM selected
	 - Disable positive edge capture
	 - Enable comparator function
	 - Enable PWM function
	 - Disable toggle function
	 ***********************************************************************/
	PCA0CPM0 = PCA0CPM0_CAPN__DISABLED | PCA0CPM0_ECCF__DISABLED
			| PCA0CPM0_MAT__DISABLED | PCA0CPM0_PWM16__8_BIT
			| PCA0CPM0_CAPP__DISABLED | PCA0CPM0_ECOM__ENABLED
			| PCA0CPM0_PWM__ENABLED | PCA0CPM0_TOG__DISABLED;
	// [PCA0CPM0 - PCA Channel 0 Capture/Compare Mode]$

	// $[PCA0CPL0 - PCA Channel 0 Capture Module Low Byte]
	// [PCA0CPL0 - PCA Channel 0 Capture Module Low Byte]$

	// $[PCA0CPH0 - PCA Channel 0 Capture Module High Byte]
	// [PCA0CPH0 - PCA Channel 0 Capture Module High Byte]$

	// $[Auto-reload]
	// [Auto-reload]$

	// $[PCA0 Settings Restore]
	// [PCA0 Settings Restore]$

}

extern void PCACH_2_enter_DefaultMode_from_RESET(void) {
	// $[PCA0 Settings Save]
	// Select Capture/Compare register)
	PCA0PWM &= ~PCA0PWM_ARSEL__BMASK;
	// [PCA0 Settings Save]$

	// $[PCA0CPM2 - PCA Channel 2 Capture/Compare Mode]
	/***********************************************************************
	 - Disable negative edge capture
	 - Disable CCF2 interrupts
	 - Enable match function
	 - 8 to 11-bit PWM selected
	 - Disable positive edge capture
	 - Disable comparator function
	 - Disable PWM function
	 - Disable toggle function
	 ***********************************************************************/
	PCA0CPM2 = PCA0CPM2_CAPN__DISABLED | PCA0CPM2_ECCF__DISABLED
			| PCA0CPM2_MAT__ENABLED | PCA0CPM2_PWM16__8_BIT
			| PCA0CPM2_CAPP__DISABLED | PCA0CPM2_ECOM__DISABLED
			| PCA0CPM2_PWM__DISABLED | PCA0CPM2_TOG__DISABLED;
	// [PCA0CPM2 - PCA Channel 2 Capture/Compare Mode]$

	// $[PCA0CPL2 - PCA Channel 2 Capture Module Low Byte]
	// [PCA0CPL2 - PCA Channel 2 Capture Module Low Byte]$

	// $[PCA0CPH2 - PCA Channel 2 Capture Module High Byte]
	// [PCA0CPH2 - PCA Channel 2 Capture Module High Byte]$

	// $[Auto-reload]
	// [Auto-reload]$

	// $[PCA0 Settings Restore]
	// [PCA0 Settings Restore]$

}

extern void VREG_0_enter_DefaultMode_from_RESET(void) {
	// $[REG0CN - Voltage Regulator Control]
	/***********************************************************************
	 - Enable the precision High Frequency Oscillator bias
	 ***********************************************************************/
	REG0CN = REG0CN_OSCBIAS__ENABLED;
	// [REG0CN - Voltage Regulator Control]$

}

extern void PBCFG_0_enter_DefaultMode_from_RESET(void) {
	// $[XBR2 - Port I/O Crossbar 2]
	/***********************************************************************
	 - Weak Pullups enabled 
	 - Crossbar enabled
	 ***********************************************************************/
	XBR2 = XBR2_WEAKPUD__PULL_UPS_ENABLED | XBR2_XBARE__ENABLED;
	// [XBR2 - Port I/O Crossbar 2]$

	// $[XBR0 - Port I/O Crossbar 0]
	// [XBR0 - Port I/O Crossbar 0]$

	// $[XBR1 - Port I/O Crossbar 1]
	/***********************************************************************
	 - CEX0 routed to Port pin
	 - ECI unavailable at Port pin
	 - T0 unavailable at Port pin
	 - T1 unavailable at Port pin
	 ***********************************************************************/
	XBR1 = XBR1_PCA0ME__CEX0 | XBR1_ECIE__DISABLED | XBR1_T0E__DISABLED
			| XBR1_T1E__DISABLED;
	// [XBR1 - Port I/O Crossbar 1]$

}

extern void HFOSC_0_enter_DefaultMode_from_RESET(void) {
	// $[HFO#CAL - High Frequency Oscillator Calibration]
	// [HFO#CAL - High Frequency Oscillator Calibration]$

	// $[HFO#CN - High Frequency Oscillator Control]
	/***********************************************************************
	 - High Frequency Oscillator enabled
	 ***********************************************************************/
	HFO0CN |= HFO0CN_IOSCEN__ENABLED;
	// [HFO#CN - High Frequency Oscillator Control]$

	// $[Oscillator Ready]
	while ((HFO0CN & HFO0CN_IFRDY__BMASK) == HFO0CN_IFRDY__NOT_SET)
		;
	// [Oscillator Ready]$

}

extern void CLOCK_0_enter_DefaultMode_from_RESET(void) {
	// $[CLKSEL - Clock Select]
	/***********************************************************************
	 - SYSCLK is equal to selected clock source divided by 1
	 - Clock derived from the internal precision High-Frequency Oscillator
	 ***********************************************************************/
	CLKSEL = CLKSEL_CLKDIV__SYSCLK_DIV_1 | CLKSEL_CLKSL__HFOSC;
	// Wait for the clock to be ready
	while ((CLKSEL & CLKSEL_CLKRDY__BMASK) != CLKSEL_CLKRDY__SET)
		;
	// [CLKSEL - Clock Select]$

}

extern void TIMER01_0_enter_DefaultMode_from_RESET(void) {
	// $[Timer Initialization]
	//Save Timer Configuration
	uint8_t TCON_save;
	TCON_save = TCON;
	//Stop Timers
	TCON &= ~TCON_TR0__BMASK & ~TCON_TR1__BMASK;

	// [Timer Initialization]$

	// $[TH0 - Timer 0 High Byte]
	/***********************************************************************
	 - Timer 0 High Byte = 0x9E
	 ***********************************************************************/
	TH0 = (0x9E << TH0_TH0__SHIFT);
	// [TH0 - Timer 0 High Byte]$

	// $[TL0 - Timer 0 Low Byte]
	// [TL0 - Timer 0 Low Byte]$

	// $[TH1 - Timer 1 High Byte]
	// [TH1 - Timer 1 High Byte]$

	// $[TL1 - Timer 1 Low Byte]
	// [TL1 - Timer 1 Low Byte]$

	// $[Timer Restoration]
	//Restore Timer Configuration
	TCON |= (TCON_save & TCON_TR0__BMASK) | (TCON_save & TCON_TR1__BMASK);

	// [Timer Restoration]$

}

extern void TIMER_SETUP_0_enter_DefaultMode_from_RESET(void) {
	// $[CKCON0 - Clock Control 0]
	/***********************************************************************
	 - System clock divided by 12
	 - Counter/Timer 0 uses the system clock
	 - Timer 2 high byte uses the clock defined by T2XCLK in TMR2CN0
	 - Timer 2 low byte uses the clock defined by T2XCLK in TMR2CN0
	 - Timer 3 high byte uses the clock defined by T3XCLK in TMR3CN0
	 - Timer 3 low byte uses the clock defined by T3XCLK in TMR3CN0
	 - Timer 1 uses the clock defined by the prescale field, SCA
	 ***********************************************************************/
	CKCON0 = CKCON0_SCA__SYSCLK_DIV_12 | CKCON0_T0M__SYSCLK
			| CKCON0_T2MH__EXTERNAL_CLOCK | CKCON0_T2ML__EXTERNAL_CLOCK
			| CKCON0_T3MH__EXTERNAL_CLOCK | CKCON0_T3ML__EXTERNAL_CLOCK
			| CKCON0_T1M__PRESCALE;
	// [CKCON0 - Clock Control 0]$

	// $[TMOD - Timer 0/1 Mode]
	/***********************************************************************
	 - Mode 2, 8-bit Counter/Timer with Auto-Reload
	 - Mode 0, 13-bit Counter/Timer
	 - Timer Mode
	 - Timer 0 enabled when TR0 = 1 irrespective of INT0 logic level
	 - Timer Mode
	 - Timer 1 enabled when TR1 = 1 irrespective of INT1 logic level
	 ***********************************************************************/
	TMOD = TMOD_T0M__MODE2 | TMOD_T1M__MODE0 | TMOD_CT0__TIMER
			| TMOD_GATE0__DISABLED | TMOD_CT1__TIMER | TMOD_GATE1__DISABLED;
	// [TMOD - Timer 0/1 Mode]$

	// $[TCON - Timer 0/1 Control]
	/***********************************************************************
	 - Start Timer 0 running
	 ***********************************************************************/
	TCON |= TCON_TR0__RUN;
	// [TCON - Timer 0/1 Control]$

}

extern void PORTS_0_enter_DefaultMode_from_RESET(void) {
	// $[P0 - Port 0 Pin Latch]
	// [P0 - Port 0 Pin Latch]$

	// $[P0MDOUT - Port 0 Output Mode]
	/***********************************************************************
	 - P0.0 output is push-pull
	 - P0.1 output is push-pull
	 - P0.2 output is push-pull
	 - P0.3 output is push-pull
	 - P0.4 output is push-pull
	 - P0.5 output is push-pull
	 - P0.6 output is push-pull
	 - P0.7 output is push-pull
	 ***********************************************************************/
	P0MDOUT = P0MDOUT_B0__PUSH_PULL | P0MDOUT_B1__PUSH_PULL
			| P0MDOUT_B2__PUSH_PULL | P0MDOUT_B3__PUSH_PULL
			| P0MDOUT_B4__PUSH_PULL | P0MDOUT_B5__PUSH_PULL
			| P0MDOUT_B6__PUSH_PULL | P0MDOUT_B7__PUSH_PULL;
	// [P0MDOUT - Port 0 Output Mode]$

	// $[P0MDIN - Port 0 Input Mode]
	// [P0MDIN - Port 0 Input Mode]$

	// $[P0SKIP - Port 0 Skip]
	// [P0SKIP - Port 0 Skip]$

	// $[P0MASK - Port 0 Mask]
	// [P0MASK - Port 0 Mask]$

	// $[P0MAT - Port 0 Match]
	// [P0MAT - Port 0 Match]$

	// $[P0DRV - Port 0 Drive Strength]
	/***********************************************************************
	 - P0.0 output has high output drive strength
	 - P0.1 output has high output drive strength
	 - P0.2 output has high output drive strength
	 - P0.3 output has high output drive strength
	 - P0.4 output has high output drive strength
	 - P0.5 output has high output drive strength
	 - P0.6 output has high output drive strength
	 - P0.7 output has high output drive strength
	 ***********************************************************************/
	SFRPAGE = 0x0F;
	P0DRV = P0DRV_B0__HIGH_DRIVE | P0DRV_B1__HIGH_DRIVE | P0DRV_B2__HIGH_DRIVE
			| P0DRV_B3__HIGH_DRIVE | P0DRV_B4__HIGH_DRIVE | P0DRV_B5__HIGH_DRIVE
			| P0DRV_B6__HIGH_DRIVE | P0DRV_B7__HIGH_DRIVE;
	// [P0DRV - Port 0 Drive Strength]$

}

extern void PORTS_1_enter_DefaultMode_from_RESET(void) {
	// $[P1 - Port 1 Pin Latch]
	// [P1 - Port 1 Pin Latch]$

	// $[P1MDOUT - Port 1 Output Mode]
	/***********************************************************************
	 - P1.0 output is open-drain
	 - P1.1 output is push-pull
	 - P1.2 output is open-drain
	 - P1.3 output is open-drain
	 - P1.4 output is open-drain
	 - P1.5 output is open-drain
	 - P1.6 output is open-drain
	 - P1.7 output is open-drain
	 ***********************************************************************/
	SFRPAGE = 0x00;
	P1MDOUT = P1MDOUT_B0__OPEN_DRAIN | P1MDOUT_B1__PUSH_PULL
			| P1MDOUT_B2__OPEN_DRAIN | P1MDOUT_B3__OPEN_DRAIN
			| P1MDOUT_B4__OPEN_DRAIN | P1MDOUT_B5__OPEN_DRAIN
			| P1MDOUT_B6__OPEN_DRAIN | P1MDOUT_B7__OPEN_DRAIN;
	// [P1MDOUT - Port 1 Output Mode]$

	// $[P1MDIN - Port 1 Input Mode]
	/***********************************************************************
	 - P1.0 pin is configured for analog mode
	 - P1.1 pin is configured for digital mode
	 - P1.2 pin is configured for analog mode
	 - P1.3 pin is configured for analog mode
	 - P1.4 pin is configured for analog mode
	 - P1.5 pin is configured for analog mode
	 - P1.6 pin is configured for analog mode
	 - P1.7 pin is configured for analog mode
	 ***********************************************************************/
	P1MDIN = P1MDIN_B0__ANALOG | P1MDIN_B1__DIGITAL | P1MDIN_B2__ANALOG
			| P1MDIN_B3__ANALOG | P1MDIN_B4__ANALOG | P1MDIN_B5__ANALOG
			| P1MDIN_B6__ANALOG | P1MDIN_B7__ANALOG;
	// [P1MDIN - Port 1 Input Mode]$

	// $[P1SKIP - Port 1 Skip]
	/***********************************************************************
	 - P1.0 pin is skipped by the crossbar
	 - P1.1 pin is skipped by the crossbar
	 - P1.2 pin is not skipped by the crossbar
	 - P1.3 pin is not skipped by the crossbar
	 - P1.4 pin is not skipped by the crossbar
	 - P1.5 pin is skipped by the crossbar
	 - P1.6 pin is skipped by the crossbar
	 - P1.7 pin is skipped by the crossbar
	 ***********************************************************************/
	P1SKIP = P1SKIP_B0__SKIPPED | P1SKIP_B1__SKIPPED | P1SKIP_B2__NOT_SKIPPED
			| P1SKIP_B3__NOT_SKIPPED | P1SKIP_B4__NOT_SKIPPED
			| P1SKIP_B5__SKIPPED | P1SKIP_B6__SKIPPED | P1SKIP_B7__SKIPPED;
	// [P1SKIP - Port 1 Skip]$

	// $[Missing Pin Skip]
	// [Missing Pin Skip]$

	// $[P1MASK - Port 1 Mask]
	// [P1MASK - Port 1 Mask]$

	// $[P1MAT - Port 1 Match]
	// [P1MAT - Port 1 Match]$

	// $[P1DRV - Port 1 Drive Strength]
	/***********************************************************************
	 - P1.0 output has low output drive strength
	 - P1.1 output has high output drive strength
	 - P1.2 output has low output drive strength
	 - P1.3 output has low output drive strength
	 - P1.4 output has low output drive strength
	 - P1.5 output has low output drive strength
	 - P1.6 output has low output drive strength
	 - P1.7 output has low output drive strength
	 ***********************************************************************/
	SFRPAGE = 0x0F;
	P1DRV = P1DRV_B0__LOW_DRIVE | P1DRV_B1__HIGH_DRIVE | P1DRV_B2__LOW_DRIVE
			| P1DRV_B3__LOW_DRIVE | P1DRV_B4__LOW_DRIVE | P1DRV_B5__LOW_DRIVE
			| P1DRV_B6__LOW_DRIVE | P1DRV_B7__LOW_DRIVE;
	// [P1DRV - Port 1 Drive Strength]$

}

extern void RTC_0_enter_DefaultMode_from_RESET(void) {
	// $[RTC Initialization]
	// [RTC Initialization]$

	// $[RTC0XCN0 - RTC Oscillator Control: Initial start-up setting]
	// [RTC0XCN0 - RTC Oscillator Control: Initial start-up setting]$

	// $[RTC0XCN - RTC Oscillator Control]
	/***********************************************************************
	 - Self-Oscillate Mode selected
	 - Disable AGC
	 - Enable the Bias Double feature
	 - LFOSC0 enabled and selected as RTC oscillator source
	 ***********************************************************************/
	RTC0ADR = RTC0XCN0;
	RTC0DAT = RTC0XCN0_XMODE__SELF_OSCILLATE | RTC0XCN0_AGCEN__DISABLED
			| RTC0XCN0_BIASX2__ENABLED | RTC0XCN0_LFOEN__ENABLED;
	while ((RTC0ADR & RTC0ADR_BUSY__BMASK) == RTC0ADR_BUSY__SET)
		;    //Poll Busy Bit
	// [RTC0XCN - RTC Oscillator Control]$

	// $[RTC0XCF - RTC Oscillator Configuration]
	// [RTC0XCF - RTC Oscillator Configuration]$

	// $[CAPTURE0 - RTC Timer Capture 0]
	// [CAPTURE0 - RTC Timer Capture 0]$

	// $[CAPTURE1 - RTC Timer Capture 1]
	// [CAPTURE1 - RTC Timer Capture 1]$

	// $[CAPTURE2 - RTC Timer Capture 2]
	// [CAPTURE2 - RTC Timer Capture 2]$

	// $[CAPTURE3 - RTC Timer Capture 3]
	// [CAPTURE3 - RTC Timer Capture 3]$

	// $[ALARM0 - RTC Alarm Programmed Value 0]
	/***********************************************************************
	 - RTC Alarm Programmed Value 0 = 0x20
	 ***********************************************************************/
	RTC0ADR = ALARM0;
	RTC0DAT = (0x20 << ALARM0_ALARM0__SHIFT);
	while ((RTC0ADR & RTC0ADR_BUSY__BMASK) == RTC0ADR_BUSY__SET)
		;    //Poll Busy Bit
	// [ALARM0 - RTC Alarm Programmed Value 0]$

	// $[ALARM1 - RTC Alarm Programmed Value 1]
	// [ALARM1 - RTC Alarm Programmed Value 1]$

	// $[ALARM2 - RTC Alarm Programmed Value 2]
	// [ALARM2 - RTC Alarm Programmed Value 2]$

	// $[ALARM3 - RTC Alarm Programmed Value 3]
	// [ALARM3 - RTC Alarm Programmed Value 3]$

	// $[RTC0CN - RTC Control]
	/***********************************************************************
	 - Enable RTC oscillator
	 - RTC timer is stopped
	 - Disable missing RTC detector
	 - Disable RTC alarm
	 - Alarm event flag is not set or disable the auto reset function
	 - Do not start a capture operation
	 - Do not start a set operation
	 ***********************************************************************/
	RTC0ADR = RTC0CN0;
	RTC0DAT = RTC0CN0_RTC0EN__ENABLED | RTC0CN0_RTC0TR__STOP
			| RTC0CN0_MCLKEN__DISABLED | RTC0CN0_RTC0AEN__DISABLED
			| RTC0CN0_ALRM__NOT_SET | RTC0CN0_RTC0CAP__NOT_SET
			| RTC0CN0_RTC0SET__NOT_SET;
	while ((RTC0ADR & RTC0ADR_BUSY__BMASK) == RTC0ADR_BUSY__SET)
		;    //Poll Busy Bit

	// [RTC0CN - RTC Control]$

	// $[External Oscillator Setup]
	// [External Oscillator Setup]$

}

extern void CSLIB_0_enter_DefaultMode_from_RESET(void) {
	// $[CSLIB Init]

	// -----------------------------------------------------------------------------
	// Configures all peripherals controlled by capsense, including the sensing block
	// and port pins
	// -----------------------------------------------------------------------------
	CSLIB_initHardware();

	// -----------------------------------------------------------------------------
	// Initializes capsense variables and performs some scans to initialize the
	// baselines
	// -----------------------------------------------------------------------------
	CSLIB_initLibrary();

	// [CSLIB Init]$

}

extern void PORTS_2_enter_DefaultMode_from_RESET(void) {

	// $[P2 - Port 2 Pin Latch]
	/***********************************************************************
	 - P2.7 is low. Set P2.7 to drive low
	 ***********************************************************************/
	SFRPAGE = 0x00;
	P2 = P2_B7__LOW;
	// [P2 - Port 2 Pin Latch]$

	// $[P2MDOUT - Port 2 Output Mode]
	// [P2MDOUT - Port 2 Output Mode]$

	// $[P2DRV - Port 2 Drive Strength]
	// [P2DRV - Port 2 Drive Strength]$

}

