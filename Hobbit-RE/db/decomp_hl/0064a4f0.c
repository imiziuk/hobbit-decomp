
undefined4 FUN_0064a4f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_38 [9];
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6159;
  local_c = ExceptionList;
  iVar1 = param_2[9];
  ExceptionList = &local_c;
  iVar2 = FUN_00647cf0(param_3);
  FUN_00649ad0(iVar2 + iVar1,0);
  local_4 = 1;
  FUN_00648480(local_38[0],*param_2,iVar1);
  FUN_00648480(local_38[0] + iVar1,param_3,iVar2 + 1);
  local_14 = iVar2 + iVar1;
  FUN_00649b60(local_38);
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  ExceptionList = local_c;
  return param_1;
}

