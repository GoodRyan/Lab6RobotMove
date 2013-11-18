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

    while (1) {
    }

    //P1OUT |= BIT2;
    //P1OUT &= ~BIT1;

    return 0;
}
