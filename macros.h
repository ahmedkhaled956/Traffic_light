/*
 * macros.h
 *
 * Created: 12/11/2022 03:42:45 م
 *  Author: medo9
 */ 


#ifndef MACROS_H_
#define MACROS_H_


#define setbit(reg, bit)      ((reg) |=(1<<(bit)))
#define clearbit(reg , bit)   ((reg) &= ~(1<<(bit)))
#define togglebit(reg,bit)  ((reg) ^=  (1<<(bit)))
#define checkbit(reg,bit)   ((reg) & (1<<(bit)>>(bit)))

//pinNmber define
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7


/* MCUCR */
#define SE      7
#define SM2     6
#define SM1     5
#define SM0     4
#define ISC11   3
#define ISC10   2
#define ISC01   1
#define ISC00   0

/* GICR */
#define INT1    7
#define INT0    6
#define INT2    5
#define IVSEL   1
#define IVCE    0




#endif /* MACROS_H_ */