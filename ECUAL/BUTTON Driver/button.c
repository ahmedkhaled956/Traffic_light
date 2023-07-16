/*
 * button.c
 *
 * Created: 31/10/2022 09:56:07 م
 *  Author: medo9
 */ 

#include "button.h"

void button_init( uint8_t buttonPort ,uint8_t buttonPin )
{
	DIO_init(buttonPin ,buttonPort , IN);
}

void button_get_status(uint8_t buttonPort , uint8_t buttonPin , uint8_t *value)
{
	 DIO_read(buttonPin ,buttonPort , value);
}