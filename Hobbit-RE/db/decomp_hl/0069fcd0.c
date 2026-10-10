
void FUN_0069fcd0(undefined4 param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7488;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0();
  local_4 = 0;
  FUN_00425250(param_2);
  FUN_0066b290(param_1);
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

