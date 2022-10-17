#ifndef DIO_h
#define DIO_h

#include "../../../LIB/Bit_Math.h"
#include "DIO_Registers.h"

#define OUTPUT 0xFF
#define INPUT 0x00

typedef enum
{
    DIO_Input, /* 0 */
    DIO_Output /* 1 */
} DIO_Direction;


typedef enum
{
    PORTA,
    PORTB,
    PORTC,
    PORTD
} DIO_Port_Type;

typedef enum
{
    Pin0,
    Pin1,
    Pin2,
    Pin3,
    Pin4,
    Pin5,
    Pin6,
    Pin7
} DIO_Pin_Number;

typedef enum
{
    LOW, /* 0 */
    HIGH /* 1 */
} DIO_State;


//Function to Set Port Direction
void DIO_SetPortDirection (DIO_Port_Type Port_Id, DIO_Direction Port_Direction);

//Function to Set Port Value
void DIO_SetPortValue (DIO_Port_Type Port_Id, uint8_t Port_Value);


//Function to Set Pin Direction
void DIO_SetPinDirection (DIO_Port_Type Port_Id, DIO_Pin_Number PinId, DIO_Direction Pin_Direction);

//Function to Set Pin Value
void DIO_SetPinValue (DIO_Port_Type Port_Id, DIO_Pin_Number PinId, DIO_State Pin_Value);

//Function to Read Pin Value
DIO_State DIO_GetPinValue (DIO_Port_Type Port_Id, DIO_Pin_Number Pin_ID);

#endif
