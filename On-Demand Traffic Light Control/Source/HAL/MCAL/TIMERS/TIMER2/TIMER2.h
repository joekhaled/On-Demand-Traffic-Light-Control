#ifndef TIMER2_h
#define TIMER2_h

#include "../../../../LIB/Bit_Math.h"
#include "TIMER2_Registers.h"
#include "TIMER2_Types.h"
#include "TIMER2_Config.h"

//#define OUTPUT 0xFF
//#define INPUT 0x00

void TIMER2_Init(void);

void TIMER2_Set_Compare_Value(uint8_t);

void TIMER2_SetTimerValue(uint8_t);

uint32_t TIMER2_Check_Overflow(void);

void Reset_TIMER2(void);

void TIMER2_Delay_Milli(uint32_t);

#endif
