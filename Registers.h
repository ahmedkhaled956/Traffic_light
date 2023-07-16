/*
 * Registers.h
 *
 * Created: 11/11/2022 07:13:09 م
 *  Author: medo9
 */ 


/************************************************************************/
/*                All  Microcontroller  Register                        */
/************************************************************************/


#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "macros.h"
#include "Typedef.h"


/************************************************************************/
/*                   Status Register                                    */
/************************************************************************/

#define SREG *((volatile uint8_t*)0X5F)

/************************************************************************/
/*                  DIO Register                                        */
/************************************************************************/

//PORTA Register
#define PORTA *((volatile uint8_t*)0X3B)
#define DDRA *((volatile uint8_t*)0X3A)
#define PINA *((volatile uint8_t*)0X39)

//PORTB Register
#define PORTB *((volatile uint8_t*)0X38)
#define DDRB  *((volatile uint8_t*)0X37)
#define PINB  *((volatile uint8_t*)0X36)

//PORTA Register
#define PORTC *((volatile uint8_t*)0X35)
#define DDRC  *((volatile uint8_t*)0X34)
#define PINC  *((volatile uint8_t*)0X33)


//PORTA Register
#define PORTD *((volatile uint8_t*)0X32)
#define DDRD *((volatile uint8_t*)0X31)
#define PIND *((volatile uint8_t*)0X30)

/************************************************************************/
/*                      interrupt Registers                             */
/************************************************************************/
#define GICR *((volatile uint8_t*)0x5B)
#define GIFR *((volatile uint8_t*)0x5A)
#define MCUCR *((volatile uint8_t*)0x55)

/************************************************************************/
/*                       Timer Registers                                */
/************************************************************************/
//Timer interrupt
#define TIMSK *((volatile uint8_t*)0x59)
#define TIFR *((volatile uint8_t*)0x58)
//Timer 0 register
#define OCR0  *((volatile uint8_t*)0x5C)
#define TCCR0 *((volatile uint8_t*)0x53)
#define TCNT0 *((volatile uint8_t*)0x52)


#endif /* REGISTERS_H_ */