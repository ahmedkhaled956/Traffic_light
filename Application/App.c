/*
 * App.c
 *
 * Created: 28/10/2022 10:29:25 م
 *  Author: medo9
 */ 

#include "App.h"

void app_init (void)
{
		interrupt0_init();  //initialize interrupt
		
		/************************************************************************/
		/*                   CAR LIGHT Initialize                               */
		/************************************************************************/
		LIGHT_init(car_light_PORT ,green_light); 
		LIGHT_init(car_light_PORT ,yellow_light);
		LIGHT_init(car_light_PORT ,red_light);
		/************************************************************************/
		/*                   pedestrian LIGHT Initialize                        */
		/************************************************************************/
		LIGHT_init(pedestrian_light_PORT,green_light);
		LIGHT_init(pedestrian_light_PORT,yellow_light);
		LIGHT_init(pedestrian_light_PORT,red_light);
}


void app_start(void)
{

			car_go(); //The green light for cars is ON and the red light for pedestrians is on
			timer0_5s_start(); //wait five seconds
	
			waiting(); //The yellow light blinks for five seconds
			
			pedestrian_go ();//The green light for pedestrians is ON and the red light for cars is on
			timer0_5s_start();//wait five seconds
	
			waiting();	//The yellow light blinks for five seconds		
		   
}





