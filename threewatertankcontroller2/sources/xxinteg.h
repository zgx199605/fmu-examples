/**********************************************************
 * This file is generated by 20-sim ANSI-C Code Generator
 *
 *  file:  src\xxinteg.h
 *  model: threetank
 *  expmt: threetank
 *  date:  February 4, 2016
 *  time:  3:14:49 PM
 *  user:  INTO-CPS
 *  from:  20-sim 4.6 Professional Single
 *  build: 4.6.1.6733
 **********************************************************/

/* This file describes the integration methods
that are supplied for computation.

   Currently only Euler, RungeKutta2 and RungeKutta4 are supplied,
   but it is easy for the user to add their own
   integration methods with these two as an example.
*/

#ifndef XX_INTEG_H
#define XX_INTEG_H

/* 20-sim include files */
#include "xxtypes.h"

/* the chosen integration method */
#define RungeKutta4_METHOD

/* the integration methods */
#ifdef Discrete_METHOD
void XXDiscreteInitialize (void);
void XXDiscreteTerminate (void);
void XXDiscreteStep (void);
#endif 

#ifdef Euler_METHOD
void XXEulerInitialize (void);
void XXEulerTerminate (void);
void XXEulerStep (void);
#endif 

#ifdef RungeKutta2_METHOD
void XXRungeKutta2Initialize (void);
void XXRungeKutta2Terminate (void);
void XXRungeKutta2Step (void);
#endif

#ifdef RungeKutta4_METHOD
void XXRungeKutta4Initialize (void);
void XXRungeKutta4Terminate (void);
void XXRungeKutta4Step (void);
#endif

extern XXBoolean xx_major;

#endif

