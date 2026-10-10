
int __fastcall FUN_0058eb70(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dccf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b75e0();
  local_4 = 0;
  *(undefined4 *)(param_1 + 4) = 0x7fffffff;
  FUN_005492b0((undefined4 *)(param_1 + 4),0);
  ExceptionList = local_c;
  return param_1;
}

