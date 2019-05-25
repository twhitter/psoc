/* ========================================
 *
 * Simple Breathing LED Project 
 *
 * ========================================
*/
#include "project.h"

void led_breathe_fast (void)
{
    PWM_3_Start();
    PWM_4_Start();
}

void led_breathe_slow (void)
{
    PWM_1_Start();
    PWM_2_Start();
}
    
int main(void)
{
    CyGlobalIntEnable; // Enable global interrupts

    // Startup code begin
    led_breathe_fast();
    led_breathe_slow();
    // Startup code end

    for(;;){}
}
