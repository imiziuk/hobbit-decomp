
int FUN_00649fc0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e60cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649860(param_2,&stack0x0000000c);
  local_4 = 0;
  uVar1 = FUN_006498c0();
  iVar2 = FUN_00647cf0(uVar1);
  FUN_00649960(param_1[9] + iVar2);
  uVar1 = FUN_006498c0();
  FUN_00647d10(param_1[9] + *param_1,uVar1);
  param_1[9] = param_1[9] + iVar2;
  local_4 = 0xffffffff;
  FUN_006498d0();
  ExceptionList = local_c;
  return iVar2;
}

