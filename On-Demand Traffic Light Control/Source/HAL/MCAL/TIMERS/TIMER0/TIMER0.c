#include "TIMER0.h"

void TIMER0_Init(void)
{
    //Clearing Timer0 Registers Values
    TCNT0_Reg = Clear_Reg;
    TCCR0_Reg = Clear_Reg;
    
    //Clearing Timer0 Interrupt Flags
    SET_BIT(TIFR_Reg, 0);
    SET_BIT(TIFR_Reg, 1);
    
    //Selecting Waveform Generation Mode
    #if (SIGNAL_MODE == Normal_Mode)
        TCCR0_Reg |= Normal_Mode ;
    #elif(SIGNAL_MODE == PWM_PhaseCorrect)
        TCCR0_Reg |= PWM_PhaseCorrect;
    #elif(SIGNAL_MODE == CTC)
        TCCR0_Reg |= CTC;
    #elif(SIGNAL_MODE == Fast_PWM)
        TCCR0_Reg |= Fast_PWM  ;
    #endif

    //Selecting Clock Prescaler
    #if(CLOCK_Prescaler == No_Clock_Stop)
        TCCR0_Reg |= No_Clock_Stop;
    #elif (CLOCK_Prescaler == ClkIo)
        TCCR0_Reg |= ClkIo;
    #elif (CLOCK_Prescaler == Clk_8 )
        TCCR0_Reg |= Clk_8 ;
    #elif (CLOCK_Prescaler == Clk_64 )
        TCCR0_Reg |= Clk_64 ;
    #elif (CLOCK_Prescaler == Clk_256 )
        TCCR0_Reg |= Clk_256 ;
    #elif (CLOCK_Prescaler == Clk_1024 )
        TCCR0_Reg |= Clk_1024 ;
    #elif (CLOCK_Prescaler == Ext_clk_FallingEdge )
        TCCR0_Reg |= Ext_clk_FallingEdge ;
    #elif (CLOCK_Prescaler == Ext_clk_RisingEdge)
        TCCR0_Reg |= Ext_clk_RisingEdge;
    #endif

    //Setting Compare Output Mode
    #if(COMPARE_OUTPUT_MODE == OC0_DISCONNECTED)
        TCCR0_Reg |= OC0_DISCONNECTED;
    #elif(COMPARE_OUTPUT_MODE == OC0_TOGGLE_ON_COMPARE_MATCH)
        TCCR0_Reg |= OC0_TOGGLE_ON_COMPARE_MATCH;
    #elif(COMPARE_OUTPUT_MODE == OC0_CLEAR_ON_COMPARE_MATCH)
        TCCR0_Reg |= OC0_CLEAR_ON_COMPARE_MATCH;
    #elif(COMPARE_OUTPUT_MODE == OC0_SET_ON_COMPARE_MATCH)
        TCCR0_Reg |= OC0_SET_ON_COMPARE_MATCH;
    #endif
}

void TIMER0_Set_Compare_Value(uint8_t Value)
{
    if(Value<=255)
    {
        OCR0_Reg = Value;
    }
    else
    {
        OCR0_Reg = 0xFF;
    }
}

void TIMER0_SetTimerValue(uint8_t Value)
{
    if(Value<=255)
    {
        TCNT0_Reg = Value;
    }
    else
    {
        TCNT0_Reg = 0xFF;
    }
}

uint32_t TIMER0_Check_Overflow(void)
{
    if(TCNT0_Reg >= 255)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Reset_TIMER0(void)
{
    TCNT0_Reg = Clear_Reg;
}

void TIMER0_Delay_Milli(uint32_t Time_in_Milli_Seconds)
{
    
    uint64_t No_of_Required_Ticks = Time_in_Milli_Seconds / (Tick_Time * 1000);
    
    uint64_t No_of_Required_Overflows = Time_in_Milli_Seconds / (Overflow_Time*1000);
    
    uint32_t Remainder_Timer_Ticks = No_of_Required_Ticks - (No_of_Required_Overflows*256);
    
    uint32_t No_of_Current_Overflows = 0;
    
    Reset_TIMER0();
    
    while(No_of_Current_Overflows < No_of_Required_Overflows)
    {
        if(TIMER0_Check_Overflow())
        {
            No_of_Current_Overflows++;
            Reset_TIMER0();
        }
    }
    
    if(Remainder_Timer_Ticks > 0)
    {
        TIMER0_SetTimerValue(256 - Remainder_Timer_Ticks);
        
        while(TIMER0_Check_Overflow());
    }
    
    
}
