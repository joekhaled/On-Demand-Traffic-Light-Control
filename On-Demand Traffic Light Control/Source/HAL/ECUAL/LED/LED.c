#include "LED.h"


void Led_Init(DIO_Port_Type LED_Port, DIO_Pin_Number LED_Pin)
{
    DIO_SetPinDirection(LED_Port , LED_Pin , DIO_Output);
}

void Led_Power(DIO_Port_Type LED_Port, DIO_Pin_Number LED_Pin, DIO_State State)
{
    if(State == 1)
    {
        DIO_SetPinValue(LED_Port , LED_Pin , HIGH);
    }
    else
    {
        DIO_SetPinValue(LED_Port , LED_Pin , LOW);
    }
}
