
undefined4 FUN_005c7770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df90f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 1;
  FUN_00649ea0(local_38,s__08X__08X_007463fc,param_3,param_2);
  FUN_00649b60(local_38);
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  ExceptionList = local_c;
  return param_1;
}

