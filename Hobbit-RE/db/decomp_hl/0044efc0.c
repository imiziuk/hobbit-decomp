
void __fastcall FUN_0044efc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006cfcd6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ec120;
  local_4 = 1;
  FUN_0044f5a0();
  FUN_0044f5d0();
  if (param_1[0x39] != 2) {
    FUN_006bf840(param_1[0x37]);
  }
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

