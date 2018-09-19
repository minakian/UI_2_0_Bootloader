/* ========================================
 *
 * Copyright Stephen Minakian, 2018
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF Healthsmart International.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    Red_LED_Write(1);
    Green_LED_Write(1);
    Blue_LED_Write(1);

    if(Bootload_EN_Read()){
        Red_LED_Write(0);
        CyDelay(1000);
        Bootloader_Start();
    } else {
        Blue_LED_Write(0);
        Green_LED_Write(0);
        CyDelay(250);
        Bootloader_Exit(Bootloader_EXIT_TO_BTLDB);
    }

    for(;;)
    {
        
    }
}

/* [] END OF FILE */
