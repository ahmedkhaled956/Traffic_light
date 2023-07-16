/*
 * DIO.c
 *
 * Created: 28/10/2022 02:01:04 م
 *  Author: medo9
 
 */ 

#include "DIO.h"

void DIO_init (uint8_t pinNmber ,uint8_t portNumber , uint8_t directin)
{
	switch(portNumber)
	{
		case PORT_A:
			 if (directin == IN)
			 {
				clearbit(DDRA,pinNmber);//clear bit -->0  INPUT
		     }
			 else if  (directin == OUT) 
			 {
				 setbit(DDRA,pinNmber);//set bit -->1  OUTPUT
			 }
	   break;
	   
		case PORT_B:
			if (directin == IN)
			{
				clearbit(DDRB,pinNmber);//clear bit -->0  INPUT
			}
			else if  (directin == OUT)
			{
				setbit(DDRB,pinNmber);//set bit -->1  OUTPUT
			}
		break;
			
		case PORT_C:
			if (directin == IN)
			{
				clearbit(DDRC,pinNmber);//clear bit -->0  INPUT
			}
			else if  (directin == OUT)
			{
				setbit(DDRC,pinNmber);//set bit -->1  OUTPUT
			}
		break;
		
			case PORT_D:
			if (directin == IN)
			{
				clearbit(DDRD,pinNmber);//clear bit -->0  INPUT
			}
			else if  (directin == OUT)
			{
				setbit(DDRD,pinNmber);//set bit -->1  OUTPUT
			}
		break;
		
		 
	}
}


void DIO_write (uint8_t pinNmber ,uint8_t portNumber , uint8_t value)
{
	switch(portNumber)
	{
		case PORT_A:
			 if (value == LOW)
			 {
				clearbit(PORTA ,pinNmber);//clear bit -->0  LOW
		     }
			 else if  (value == HIGH) 
			 {
				 setbit(PORTA ,pinNmber);//set bit -->1  HIGH
			 }
	   break;
	   
		case PORT_B:
			if (value == LOW)
			{
				clearbit(PORTB ,pinNmber);//clear bit -->0  LOW
			}
			else if  (value == HIGH)
			{
				 setbit(PORTB ,pinNmber);//set bit -->1  HIGH
			}
		break;
			
		case PORT_C:
			if (value == LOW)
			{
				clearbit(PORTC ,pinNmber);//clear bit -->0  LOW
			}
			else if  (value == HIGH)
			{
				 setbit(PORTC ,pinNmber);//set bit -->1  HIGH
			}
		break;
		
			case PORT_D:
			if (value == LOW)
			{
				clearbit(PORTD ,pinNmber);//clear bit -->0  LOW
			}
			else if  (value == HIGH)
			{
				 setbit(PORTD ,pinNmber);//set bit -->1  HIGH
			}
		break;
		
		 
	}
}


void DIO_read (uint8_t pinNmber ,uint8_t portNumber , uint8_t *value)
{
	switch(portNumber)
	{
		case PORT_A:
			*value = checkbit(PINA ,pinNmber);
		break;
		
		case PORT_B:
			*value = checkbit(PINB ,pinNmber);
		break;
		
		case PORT_C:
			*value = checkbit(PINC ,pinNmber);
		break;
		
		case PORT_D:
			*value = checkbit(PIND ,pinNmber);
		break;
	}
	
}


void DIO_toggle (uint8_t pinNmber ,uint8_t portNumber )
{
	switch(portNumber)
	{
		case PORT_A:
			togglebit(PORTA , pinNmber);
		break;
		
		case PORT_B:
			togglebit(PORTB , pinNmber);
		break;
		
		case PORT_C:
			togglebit(PORTC , pinNmber);
		break;
		
		case PORT_D:
			togglebit(PORTD , pinNmber);
		break;
	}
}

