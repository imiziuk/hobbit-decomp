
undefined4 * __thiscall FUN_005d0580(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dff09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc290(param_2);
  local_4 = 0;
  FUN_006499d0();
  local_4._0_1_ = 1;
  FUN_006499d0();
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *param_1 = &PTR_FUN_006f4640;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_0064a2e0(&DAT_00720670);
  FUN_0064a2e0(&DAT_00720670);
  param_1[0x25] = 0;
  ExceptionList = local_c;
  return param_1;
}

