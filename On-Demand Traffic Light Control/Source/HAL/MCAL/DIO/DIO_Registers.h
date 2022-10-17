#ifndef DIO_Registers_h
#define DIO_Registers_h

#include "../../../LIB/Types.h"

//PORTA Registers
#define DDRA_Reg        (*( (volatile uint8_t*) 0x3A) )
#define PORTA_Reg       (*( (volatile uint8_t*) 0x3B) )
#define PINA_Reg        (*( (volatile uint8_t*) 0x39) )

//PORTB Registers
#define DDRB_Reg        (*( (volatile uint8_t*) 0x37) )
#define PORTB_Reg       (*( (volatile uint8_t*) 0x38) )
#define PINB_Reg        (*( (volatile uint8_t*) 0x36) )

//PORTC Registers
#define DDRC_Reg        (*( (volatile uint8_t*) 0x34) )
#define PORTC_Reg       (*( (volatile uint8_t*) 0x35) )
#define PINC_Reg        (*( (volatile uint8_t*) 0x33) )

//PORTD Registers
#define DDRD_Reg        (*( (volatile uint8_t*) 0x31) )
#define PORTD_Reg       (*( (volatile uint8_t*) 0x32) )
#define PIND_Reg        (*( (volatile uint8_t*) 0x30) )

#endif
