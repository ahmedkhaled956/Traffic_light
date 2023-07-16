/*
 * Traffic light.c
 *
 * Created: 27/10/2022 06:40:09 
 * Author : medo9
 */ 

#include "Application/App.h"

int main(void)
{
	
	app_init(); //initialize Application 

    while (1) 
    {	
		app_start(); // start Application
	}
    
}

ISR(INT0_vect)  //interrupt_0 SERVICE ROUTINE
{
	uint8_t state;
	DIO_read(green_light,pedestrian_light_PORT ,&state); //Check if the green light is on for pedestrians
	
	if (state == LOW)
	{
		waiting();//The yellow light blinks for five seconds
		
		pedestrian_go ();//The green light for pedestrians is ON and the red light for cars is on
		timer0_5s_start();//wait five seconds
	}
	else
	{
		/* Do Nothing */
	}
	
}


