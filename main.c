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

    turnRobotLeft();

    while (1) {
    }

    return 0;
}
