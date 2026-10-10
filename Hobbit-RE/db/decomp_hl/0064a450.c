
undefined4 FUN_0064a450(undefined4 param_1,undefined1 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *local_38 [9];
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6130;
  local_c = ExceptionList;
  iVar1 = param_3[9] + 1;
  ExceptionList = &local_c;
  FUN_00649ad0(iVar1,0);
  *local_38[0] = param_2;
  local_4 = 1;
  FUN_00648480(local_38[0] + 1,*param_3,iVar1);
  local_14 = iVar1;
  FUN_00649b60(local_38);
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  ExceptionList = local_c;
  return param_1;
}

