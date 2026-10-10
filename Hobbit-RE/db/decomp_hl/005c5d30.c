
int __fastcall FUN_005c5d30(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df75b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c8f80();
  *(undefined ***)(param_1 + 0xc) = &PTR_FUN_006f44d8;
  local_4 = 0;
  FUN_005c8f80();
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_006f44cc;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x94) = 0;
  ExceptionList = local_c;
  return param_1;
}

