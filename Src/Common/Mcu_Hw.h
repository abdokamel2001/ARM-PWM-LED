/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  Mcu_Hw
 *
 *  Description:  header file for Registers definition    
 *  
 *********************************************************************************************************************/
#ifndef MCU_HW_H
#define MCU_HW_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Platform_Types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define CONTROL_SYSTEM_BASE            	0x400FE000
#define CORE_PERIPHERALS_BASE           0xE000E000
#define GPIO_PORTF_BASE			      		      0x40025000
#define PORTF_DATA                      *((volatile uint32*)(GPIO_PORTF_BASE))
#define PORTF_DIR												           *((volatile uint32*)(GPIO_PORTF_BASE+0x400))
#define PORTF_DEN												           *((volatile uint32*)(GPIO_PORTF_BASE+0x51C))
#define RCGCGPIO 											           	*((volatile uint32*)(CONTROL_SYSTEM_BASE+0x608))
#define STCTRL                          *((volatile uint32*)(CORE_PERIPHERALS_BASE+0x010))
#define STRELOAD                        *((volatile uint32*)(CORE_PERIPHERALS_BASE+0x014))
#define STCURRENT                       *((volatile uint32*)(CORE_PERIPHERALS_BASE+0x018))
#define SetBit(reg,bit)                 reg |=  (1 << bit)
#define ClrBit(reg,bit)                 reg &= ~(1 << bit)
#define HIGH                            1
#define LOW                             0

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 

 
#endif  /* MCU_HW_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *********************************************************************************************************************/
