/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    if(Bootload_EN_Read()){
        Red_LED_Write(0);
        CyDelay(1000);
        Bootloader_Start();
    } else {
        Blue_LED_Write(0);
        CyDelay(1000);
        Bootloader_Exit(Bootloader_EXIT_TO_BTLDB);
    }

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
