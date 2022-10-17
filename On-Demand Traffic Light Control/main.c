#include "Source/APP/Led_Blink.h"

int main(void)
{
    Blink_LED_Init();
        
    while (1)
    {
        Blink_LED_Update();
    }
}
