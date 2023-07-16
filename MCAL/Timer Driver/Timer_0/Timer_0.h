/*
 * Timer_0.h
 *
 * Created: 01/11/2022 02:33:44 ص
 *  Author: medo9
 */ 


#ifndef TIMER_0_H_
#define TIMER_0_H_

#include "../../DIO Driver/DIO.h"

uint8_t overflowsCounter1 ;
uint8_t overflowsCounter2 ;


#define Number_0f_overflows_5s 20
#define Number_0f_overflows_500ms 2

void timer0_5s_start(void);
void timer0_500ms_start(void);


#endif /* TIMER_0_H_ */