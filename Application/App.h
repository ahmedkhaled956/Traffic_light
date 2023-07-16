/*
 * App1.h
 *
 * Created: 28/10/2022 10:29:44 م
 *  Author: medo9
 */ 


#ifndef APP1_H_
#define APP1_H_

#include "../Registers.h"
#include "../Typedef.h"
#include "../macros.h"
#include "../ECUAL/light Driver/light.h"
#include "../ECUAL/BUTTON Driver/button.h"
#include "../MCAL/Timer Driver/Timer_0/Timer_0.h"
#include "../MCAL/interrupt Driver/interrupt.h"

/************************************************************************/
/*                       Function prototypes                            */
/************************************************************************/ 
void app_init (void);

void app_start(void);



#endif /* APP1_H_ */