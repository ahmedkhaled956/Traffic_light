/*
 * DIO.h
 *
 * Created: 28/10/2022 02:01:29 م
 *  Author: medo9
 */ 




#ifndef DIO_H_
#define DIO_H_
  
#include "../../Registers.h"

//All DIO_Driver macros define
//port define
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
//directin define
#define IN  0
#define OUT 1
//value define
#define LOW  0
#define HIGH 1


//All DIO_Driver Function prototypes
void DIO_init (uint8_t pinNmber ,uint8_t portNumber , uint8_t directin); //  initialize DIO direction

void DIO_write (uint8_t pinNmber ,uint8_t portNumber , uint8_t value);  // write data to DIO

void DIO_read (uint8_t pinNmber ,uint8_t portNumber , uint8_t *value);//Read DIO

void DIO_toggle (uint8_t pinNmber ,uint8_t portNumber );//toggle DIO


#endif /* DIO_H_ */