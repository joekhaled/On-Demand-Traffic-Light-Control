#ifndef TIMER0_h
#define TIMER0_h

#include "../../../../LIB/Bit_Math.h"
#include "TIMER0_Registers.h"
#include "TIMER0_Types.h"
#include "TIMER0_Config.h"

//#define OUTPUT 0xFF
//#define INPUT 0x00

void TIMER0_Init(void);

void TIMER0_Set_Compare_Value(uint8_t);

void TIMER0_SetTimerValue(uint8_t);

uint32_t TIMER0_Check_Overflow(void);

void Reset_TIMER0(void);

void TIMER0_Delay_Milli(uint32_t);

#endif
