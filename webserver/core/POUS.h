#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

// FUNCTION_BLOCK ENERGY
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(REAL,J)
  __DECLARE_VAR(REAL,C)
  __DECLARE_VAR(REAL,WH)
  __DECLARE_VAR(REAL,YJ)
  __DECLARE_VAR(REAL,YC)
  __DECLARE_VAR(REAL,YWH)

  // FB private variables - TEMP, private and located variables

} ENERGY;

void ENERGY_init__(ENERGY *data__, BOOL retain);
// Code part
void ENERGY_body__(ENERGY *data__);
// PROGRAM PROGRAM0
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(REAL,J)
  __DECLARE_VAR(REAL,C)
  __DECLARE_VAR(REAL,WH)
  __DECLARE_VAR(REAL,YJ)
  __DECLARE_VAR(REAL,YC)
  __DECLARE_VAR(REAL,YWH)
  ENERGY FUNC_BLOCK;

} PROGRAM0;

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain);
// Code part
void PROGRAM0_body__(PROGRAM0 *data__);
#endif //__POUS_H
