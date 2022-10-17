#ifndef LED_h
#define LED_h

#include "../../MCAL/DIO/DIO.h"

void Led_Init(DIO_Port_Type , DIO_Pin_Number);

void Led_Power(DIO_Port_Type , DIO_Pin_Number , DIO_State);

#endif
