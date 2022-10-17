#include "TIMERS.h"

void TIMER_Init(TIMER_NUMBER TIMER_Number)
{
    switch(TIMER_Number)
    {
        case     TIMER_0 : TIMER0_Init(); break;
        case     TIMER_2 : TIMER2_Init(); break;
        default:                          break;
    }
}


void TIMER_Delay(TIMER_NUMBER TIMER_Number, uint32_t Time_in_Micros)
{
    switch(TIMER_Number)
    {
        case     TIMER_0 : TIMER0_Delay_Milli(Time_in_Micros); break;
        case     TIMER_2 : TIMER2_Delay_Milli(Time_in_Micros); break;
        default:                                               break;
    }
}
