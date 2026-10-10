
void __fastcall FUN_004ad980(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d3f16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ee0a0;
  local_4 = 1;
  if (param_1[0x31] != 0) {
    FUN_00674810(param_1[0x31]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005a32c0();
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

