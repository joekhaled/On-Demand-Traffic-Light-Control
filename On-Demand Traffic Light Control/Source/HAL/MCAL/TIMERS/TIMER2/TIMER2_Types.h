#ifndef TIMER2_Types_h
#define TIMER2_Types_h

//Clearing
#define Clear_Reg                     0b00000000

//Modes For Signal
#define Normal_Mode                   0b00000000
#define PWM_PhaseCorrect              0b01000000
#define CTC                           0b00001000
#define Fast_PWM                      0b01001000

// Compare Output Mode
#define OC0_DISCONNECTED              0b00000000
#define OC0_TOGGLE_ON_COMPARE_MATCH   0b00010000
#define OC0_CLEAR_ON_COMPARE_MATCH    0b00100000
#define OC0_SET_ON_COMPARE_MATCH      0b00110000

//Prescaler Modes
#define No_Clock_Stop                 0
#define ClkIo                         1
#define Clk_8                         2
#define Clk_64                        3
#define Clk_256                       4
#define Clk_1024                      5
#define Ext_clk_FallingEdge           6
#define Ext_clk_RisingEdge            7

#endif
