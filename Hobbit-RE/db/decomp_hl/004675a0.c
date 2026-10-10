
undefined4 FUN_004675a0(undefined4 param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0d0f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649b60(param_2 * 0x2c + DAT_0075cbe8);
  local_4 = 1;
  FUN_00649b60(param_2 * 0x2c + DAT_0075cbe8);
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  ExceptionList = local_c;
  return param_1;
}

