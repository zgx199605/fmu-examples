/**********************************************************
 * This file is generated by 20-sim ANSI-C Code Generator
 *
 *  file:  src\xxmodel.h
 *  subm:  Sensor_Block_02
 *  model: sensorAndTrivialController-02
 *  expmt: sensorAndTrivialController-02
 *  date:  March 29, 2016
 *  time:  10:01:21 AM
 *  user:  INTO-CPS
 *  from:  20-sim 4.6 Professional Single
 *  build: 4.6.0.6684
 **********************************************************/

/* This file describes the model functions
   that are supplied for computation.

   The model itself is the xxmodel.c file
*/

#ifndef XX_MODEL_H
#define XX_MODEL_H

/* Our own include files */
#include "xxtypes.h"
#include "xxmatrix.h"

/* Simulation variables */
extern XXDouble xx_start_time;
extern XXDouble xx_finish_time;
extern XXDouble xx_step_size;
extern XXDouble xx_time;
extern XXInteger xx_steps;
extern XXBoolean xx_initialize;
extern XXBoolean xx_major;
extern XXBoolean xx_stop_simulation;

/* Variable arrays */
extern XXDouble xx_MEMORY[];
extern XXDouble* u;
extern XXDouble* y;
extern XXDouble* xx_P;
extern XXDouble* xx_I;
extern XXDouble* xx_V;
extern XXDouble* xx_s;
extern XXDouble* xx_R;
extern XXMatrix xx_M[];
extern XXDouble xx_U[];

/* The names of the variables as used in the arrays above
   uncomment this if you need the names (see source file too)
extern XXString xx_parameter_names[];
extern XXString xx_initial_value_names[];
extern XXString xx_variable_names[];
extern XXString xx_state_names[];
extern XXString xx_rate_names[];
extern XXString xx_matrix_names[];
*/

/* Initialization methods */
void XXModelInitialize (void);
void XXModelTerminate (void);

/* Computation methods */
void XXCalculateInitial (void);
void XXCalculateStatic (void);
void XXCalculateInput (void);
void XXCalculateDynamic (void);
void XXCalculateOutput (void);
void XXCalculateFinal (void);


#endif

