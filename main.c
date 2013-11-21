#include <msp430.h> 

/*
 * main.c
 */
#include <msp430.h>
#include "robotMovement.h"

int main(void)
{
    WDTCTL = WDTPW|WDTHOLD;                 // stop the watchdog timer

    initializePinOuts();

    configureTimer();

    while(1){
    moveRobotForward();
    _delay_cycles(1000000);
    moveRobotBackward();
    _delay_cycles(1000000);
    turnRobotLeft();
    _delay_cycles(300000);
    turnRobotRight();
    _delay_cycles(300000);
    turnRobotLeft();
    _delay_cycles(800000);
    turnRobotRight();
    _delay_cycles(800000);
    }

    return 0;
}
