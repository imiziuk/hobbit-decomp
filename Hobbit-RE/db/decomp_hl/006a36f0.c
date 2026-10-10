
void __fastcall FUN_006a36f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006e7916;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006fcd34;
  local_4 = 1;
  FUN_006a3050();
  local_4 = local_4 & 0xffffff00;
  FUN_0064b190();
  local_4 = 0xffffffff;
  FUN_006aa6c0();
  ExceptionList = local_c;
  return;
}

