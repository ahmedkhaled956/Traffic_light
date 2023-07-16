/*
 * interrupt.c
 *
 * Created: 12/11/2022 01:52:31 ص
 *  Author: medo9
 */ 

#include "interrupt.h"


void interrupt0_init(void)//
{
	
	button_init(PORT_D ,PIN2);

	setbit(SREG,7); //Enable Global Interrupt

	setbit(MCUCR ,ISC00); //choose External Interrupt sense rising edge
	setbit(MCUCR ,ISC01);

	setbit(GICR ,INT0);//Enable External Interrupt_0
}

