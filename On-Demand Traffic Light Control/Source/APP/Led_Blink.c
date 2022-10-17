#include "Led_Blink.h"


void Blink_LED_Init(void)
{
    TIMER_Init(TIMER_2);
    Led_Init(PORTC,Pin2);
}

void Blink_LED_Update(void)
{
    Led_Power(PORTC,Pin2,LOW);
    TIMER_Delay(TIMER_2,1000);
    Led_Power(PORTC,Pin2,HIGH);
    TIMER_Delay(TIMER_2,1000);
}

