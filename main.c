#include <msp430.h> 

/*
 * main.c
 */
#include <msp430.h>

int main(void)
{
    WDTCTL = WDTPW|WDTHOLD;                 // stop the watchdog timer

    P1DIR |= BIT2;
    P1SEL |= BIT2;

    P1DIR |= BIT1;

    TACTL &= ~(MC1|MC0);            // stop timer A0

    TACTL |= TACLR;                // clear timer A0

    TACTL |= TASSEL1;           // configure for SMCLK

    TACCR0 = 100;                // set signal period to 100 clock cycles (~100 microseconds)
    TACCR1 = 60;                // set duty cycle to 25/100 (25%)

    TACCTL1 |= OUTMOD_7;        // set TACCTL1 to Reset / Set mode

    TACTL |= MC0;                // count up

    P1OUT |= BIT2;
    P1OUT &= ~BIT1;

    while (1) {
    }

    return 0;
}
