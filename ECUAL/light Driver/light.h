/*
 * traffic_light.h
 *
 * Created: 31/10/2022 11:52:19 ص
 *  Author: medo9
 */ 


#ifndef LIGHT_H_
#define LIGHT_H_

#include "../../MCAL/DIO Driver/DIO.h"

#define car_light_PORT         PORT_A
#define pedestrian_light_PORT  PORT_C

#define green_light  PIN0
#define yellow_light PIN1
#define red_light    PIN2

/************************************************************************/
/*                       Function prototypes                            */
/************************************************************************/

void LIGHT_init (uint8_t lightport ,uint8_t lightpin );
void LIGHT_on (uint8_t lightport ,uint8_t lightpin );
void LIGHT_off (uint8_t lightport ,uint8_t lightpin );
void LIGHT_toggle (uint8_t lightport ,uint8_t lightpin );

void car_go ();
void waiting ();
void pedestrian_go ();
void car_waiting ();
void pedestrian_waiting();






#endif /*  LIGHT_H_ */