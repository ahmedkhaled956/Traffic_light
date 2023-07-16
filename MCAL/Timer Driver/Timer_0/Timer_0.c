/*
 * Timer_0.c
 *
 * Created: 01/11/2022 02:33:10 ص
 *  Author: medo9
 */ 

#include "Timer_0.h"


void timer0_5s_start(void)
{
	clearbit(TCCR0 ,WGM00); //Choose normal mode
	clearbit(TCCR0 ,WGM01);
	
	TCNT0 = 0xc; //set Initial value
	
 	setbit(TCCR0 ,CS00);  //SET Prescaler --> 1024
 	setbit(TCCR0 ,CS02);
	
	while( overflowsCounter1 < Number_0f_overflows_5s) //waiting completion  number of overflow 
	{
		while((TIFR & (1<<TOV0))==0);//waiting  timer overflow
		setbit(TIFR ,TOV0); //clear TOV0 register
		overflowsCounter1++; //increment number of overflow 
		
	}
	overflowsCounter1=0;//Clear overflows counter
	
}


void timer0_500ms_start(void)
{
	clearbit(TCCR0 ,WGM00); //Choose normal mode
	clearbit(TCCR0 ,WGM01);
	
	TCNT0 = 0xc; //set Initial value
	
	setbit(TCCR0 ,CS00);  //SET Prescaler --> 1024
	setbit(TCCR0 ,CS02);
	
	while( overflowsCounter2 < Number_0f_overflows_500ms) //waiting completion  number of overflow
	{
		while((TIFR & (1<<TOV0))==0);//waiting  timer overflow
		setbit(TIFR ,TOV0); //clear TOV0 register
		overflowsCounter2++; //increment number of overflow
		
	}
	overflowsCounter2=0;//Clear overflows counter
	
}


