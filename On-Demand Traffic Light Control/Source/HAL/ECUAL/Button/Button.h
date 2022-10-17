#ifndef Button_h
#define Button_h

#include "../../MCAL/DIO/DIO.h"

void Button_Init(DIO_Port_Type , DIO_Pin_Number);

DIO_State Button_State(DIO_Port_Type , DIO_Pin_Number);

#endif
