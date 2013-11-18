#include "robotMovement.h"

void initializePinOuts(){
    P1DIR |= BIT2;
    P1SEL |= BIT2;

    P1DIR |= BIT1;
    P2DIR |= BIT0;
    P2DIR |= BIT1;
}

void configureTimer(){
	TACTL &= ~(MC1|MC0);            // stop timer A0

	    TACTL |= TACLR;                // clear timer A0

	    TACTL |= TASSEL1;           // configure for SMCLK

	    TACCR0 = 100;                // set signal period to 100 clock cycles (~100 microseconds)
	    TACCR1 = 60;                // set duty cycle to 25/100 (25%)

	    TACCTL1 |= OUTMOD_7;        // set TACCTL1 to Reset / Set mode

	    TACTL |= MC0;                // count up
}

void leftMotorForward(){

}

void leftMotorBackward(){
    P1OUT |= BIT2;
    P1OUT &= ~BIT1;
}

void rightMotorForward(){
	P2OUT |= BIT0;
	P2OUT &= ~BIT1;
}

void rightMotorBackward(){

}

void moveRobotForward(){

}

void moveRobotBackward(){

}

void turnRobotLeft(){
	leftMotorBackward();
	rightMotorForward();
}

void turnRobotRight(){

}
