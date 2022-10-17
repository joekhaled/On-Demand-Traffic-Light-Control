#ifndef TIMERS_h
#define TIMERS_h

#include "../../../LIB/Types.h"
#include "TIMER0/TIMER0.h"
#include "TIMER2/TIMER2.h"

typedef enum
{
    TIMER_0, /* 0 */
    TIMER_1, /* 1 */
    TIMER_2, /* 2 */
} TIMER_NUMBER;

void TIMER_Init(TIMER_NUMBER);

void TIMER_Delay(TIMER_NUMBER , uint32_t);

#endif
