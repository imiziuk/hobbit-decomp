
undefined4 FUN_0064b930(undefined4 param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined2 *local_58 [17];
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6233;
  local_c = ExceptionList;
  iVar1 = param_3[0x11] + 1;
  ExceptionList = &local_c;
  FUN_0064b0a0(iVar1,0);
  *local_58[0] = param_2;
  local_4 = 1;
  FUN_00648480(local_58[0] + 1,*param_3,iVar1 * 2);
  local_14 = iVar1;
  FUN_0064b170(local_58);
  local_4 = local_4 & 0xffffff00;
  FUN_0064b190();
  ExceptionList = local_c;
  return param_1;
}

