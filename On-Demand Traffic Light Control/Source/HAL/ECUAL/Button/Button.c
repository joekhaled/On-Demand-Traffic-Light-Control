#include "Button.h"

void Button_Init(DIO_Port_Type Button_Port, DIO_Pin_Number Button_Pin)
{
    DIO_SetPinDirection(Button_Port , Button_Pin , DIO_Input);
}

DIO_State Button_State(DIO_Port_Type Button_Port, DIO_Pin_Number Button_Pin)
{
    if(DIO_GetPinValue (Button_Port , Button_Pin)) //Check If Button Pressed
    {
        return HIGH;
    }
    else
    {
        return LOW;
    }
}
