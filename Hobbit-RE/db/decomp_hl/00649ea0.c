
undefined4 FUN_00649ea0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e60a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649860(param_2,&stack0x0000000c);
  local_4 = 0;
  uVar1 = FUN_006498c0();
  uVar1 = FUN_00647cf0(uVar1);
  FUN_00649960(uVar1);
  uVar2 = FUN_006498c0();
  FUN_00647d10(*param_1,uVar2);
  param_1[9] = uVar1;
  local_4 = 0xffffffff;
  FUN_006498d0();
  ExceptionList = local_c;
  return uVar1;
}

