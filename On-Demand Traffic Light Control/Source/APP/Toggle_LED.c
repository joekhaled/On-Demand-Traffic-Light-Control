#include "Toggle_LED.h"

void Toggle_LED_Init(void)
{
   Button_Init(PORTB,Pin4);
   Led_Init(PORTC,Pin2);
}

uint8_t State = 0;
DIO_State Last_Button_State = LOW;

void Toggle_LED_Update(void)
{
   if (Button_State(PORTB,Pin2) != Last_Button_State)
   {
       State = !State;
       
       if(State == 1)
       {
           Led_Power(PORTC,Pin2,HIGH);
       }
       else
       {
           Led_Power(PORTC,Pin2,LOW);
       }
   }
   
   Last_Button_State = Button_State(PORTB,Pin4);
}
