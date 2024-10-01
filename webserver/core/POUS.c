void ENERGY_init__(ENERGY *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->J,0,retain)
  __INIT_VAR(data__->C,0,retain)
  __INIT_VAR(data__->WH,0,retain)
  __INIT_VAR(data__->YJ,0,retain)
  __INIT_VAR(data__->YC,0,retain)
  __INIT_VAR(data__->YWH,0,retain)
}

// Code part
void ENERGY_body__(ENERGY *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,YJ,,((__GET_VAR(data__->J,) + (__GET_VAR(data__->WH,) * 3600.0)) + (__GET_VAR(data__->C,) * 4.1868)));
  __SET_VAR(data__->,YC,,(__GET_VAR(data__->YJ,) * 0.238845896627496));
  __SET_VAR(data__->,YWH,,(__GET_VAR(data__->YJ,) * 2.7777777778E-004));

  goto __end;

__end:
  return;
} // ENERGY_body__() 





void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_VAR(data__->J,0,retain)
  __INIT_VAR(data__->C,0,retain)
  __INIT_VAR(data__->WH,0,retain)
  __INIT_VAR(data__->YJ,0,retain)
  __INIT_VAR(data__->YC,0,retain)
  __INIT_VAR(data__->YWH,0,retain)
  ENERGY_init__(&data__->FUNC_BLOCK,retain);
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,FUNC_BLOCK.J,,__GET_VAR(data__->J,));
  __SET_VAR(data__->,FUNC_BLOCK.C,,__GET_VAR(data__->C,));
  __SET_VAR(data__->,FUNC_BLOCK.WH,,__GET_VAR(data__->WH,));
  ENERGY_body__(&data__->FUNC_BLOCK);
  __SET_VAR(data__->,YJ,,__GET_VAR(data__->FUNC_BLOCK.YJ,));
  __SET_VAR(data__->,YC,,__GET_VAR(data__->FUNC_BLOCK.YC,));
  __SET_VAR(data__->,YWH,,__GET_VAR(data__->FUNC_BLOCK.YWH,));

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





