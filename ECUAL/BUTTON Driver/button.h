/*
 * button.h
 *
 * Created: 31/10/2022 09:56:36 م
 *  Author: medo9
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#define button_pressed    1
#define button_notpressed 0

#include "../../MCAL/DIO Driver/DIO.h"

void button_init( uint8_t bottonPort ,uint8_t buttonPin );

void button_get_status(uint8_t bottonPort , uint8_t buttonPin ,uint8_t *value);



#endif /* BUTTON_H_ */