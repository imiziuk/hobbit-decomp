
void FUN_00653700(undefined4 param_1,undefined4 param_2)

{
  ULONG_PTR local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_006f9418;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  local_2c = 0x1000;
  local_28 = param_2;
  local_24 = param_1;
  local_20 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  RaiseException(0x406d1388,0,4,&local_2c);
  ExceptionList = local_14;
  return;
}

