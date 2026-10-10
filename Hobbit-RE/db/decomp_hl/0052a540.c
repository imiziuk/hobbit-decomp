
int __fastcall FUN_0052a540(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d80a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006c043b(param_1 + 0x30,0x20,2,FUN_00650250,thunk_FUN_00650380);
  local_4 = 0;
  FUN_00671410();
  *(undefined4 *)(param_1 + 0x70) = 0;
  ExceptionList = local_c;
  return param_1;
}

