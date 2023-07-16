/*
 * traffic_light.c
 *
 * Created: 31/10/2022 11:51:48 ص
 *  Author: medo9
 */ 


#include "light.h"

void LIGHT_init (uint8_t lightport ,uint8_t lightpin )
{
	DIO_init(lightpin , lightport , OUT);
}

void LIGHT_on (uint8_t lightport ,uint8_t lightpin )
{
	DIO_write(lightpin,lightport,HIGH);
}

void LIGHT_off (uint8_t lightport ,uint8_t lightpin )
{
	DIO_write(lightpin,lightport,LOW);
}

void LIGHT_toggle (uint8_t lightport ,uint8_t lightpin )
{
	DIO_toggle(lightpin ,lightport);
}


void car_go ()
{
	
	LIGHT_on(car_light_PORT ,green_light);
	LIGHT_on(pedestrian_light_PORT,red_light);
	
	LIGHT_off(car_light_PORT ,yellow_light);
	LIGHT_off(pedestrian_light_PORT,yellow_light);
	LIGHT_off(car_light_PORT ,red_light);
	LIGHT_off(pedestrian_light_PORT,green_light);


}

void waiting ()
{    
	
uint8_t Counter;
	Counter=0;
	LIGHT_off(car_light_PORT,green_light);
	LIGHT_off(pedestrian_light_PORT,red_light);
	LIGHT_off(car_light_PORT,red_light);
	LIGHT_off(pedestrian_light_PORT,green_light);
	
	while(Counter<5)
	{
		LIGHT_toggle(car_light_PORT,yellow_light);
		LIGHT_toggle(pedestrian_light_PORT,yellow_light);
		timer0_500ms_start();
		LIGHT_toggle(car_light_PORT,yellow_light);
		LIGHT_toggle(pedestrian_light_PORT,yellow_light);
		timer0_500ms_start();

		Counter++;
	}
}

void pedestrian_go ()
{
	LIGHT_on(car_light_PORT ,red_light);
	LIGHT_on(pedestrian_light_PORT,green_light);
	
	 LIGHT_off(car_light_PORT,yellow_light);
	 LIGHT_off(pedestrian_light_PORT,yellow_light);
	 LIGHT_off(car_light_PORT,green_light);
	 LIGHT_off(pedestrian_light_PORT,red_light);
	 
	 
	 
	
}

void car_waiting ()
{
	
	uint8_t Counter;
	Counter=0;
	LIGHT_off(car_light_PORT,green_light);
	LIGHT_off(pedestrian_light_PORT,red_light);
	LIGHT_off(car_light_PORT,red_light);
	LIGHT_off(pedestrian_light_PORT,green_light);
	LIGHT_off(pedestrian_light_PORT,yellow_light);
	
	while(Counter<5)
	{
		LIGHT_toggle(car_light_PORT,yellow_light);
		timer0_500ms_start();
		LIGHT_toggle(car_light_PORT,yellow_light);
		timer0_500ms_start();

		Counter++;
	}
}

void pedestrian_waiting ()
{
	
	uint8_t Counter;
	Counter=0;
	LIGHT_off(car_light_PORT,green_light);
	LIGHT_off(pedestrian_light_PORT,red_light);
	LIGHT_off(car_light_PORT,red_light);
	LIGHT_off(pedestrian_light_PORT,green_light);
	
	LIGHT_off(car_light_PORT,yellow_light);
	
	while(Counter<5)
	{
		
		LIGHT_toggle(pedestrian_light_PORT,yellow_light);
		timer0_500ms_start();
		LIGHT_toggle(pedestrian_light_PORT,yellow_light);
		timer0_500ms_start();

		Counter++;
	}
}

