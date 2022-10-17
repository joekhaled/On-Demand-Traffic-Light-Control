#ifndef TIMER2_Registers_h
#define TIMER2_Registers_h

#include "../../../../LIB/Types.h"

//Timer2 Registers
#define TCNT2_Reg      (*( (volatile uint8_t*) 0x44) ) //Timer2 Register
#define TCCR2_Reg      (*( (volatile uint8_t*) 0x45) ) //Timer2 Control Register
#define OCR2_Reg       (*( (volatile uint8_t*) 0x43) ) //Timer2 Output Compare Register
#define TIFR_Reg       (*( (volatile uint8_t*) 0x58) ) //Timer2 Interrupt Flag Register
#define TIMSK_Reg      (*( (volatile uint8_t*) 0x59) ) //Timer2 Interrupt Mask Register


#endif
