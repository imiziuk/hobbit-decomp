
void __fastcall FUN_006a3f90(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006e7996;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006fcdc4;
  local_4 = 1;
  FUN_006a3050();
  local_4 = local_4 & 0xffffff00;
  if ((param_1[0x5b] != 2) && (iVar1 = param_1[0x59], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x58,*(undefined4 *)(iVar1 + -4),&LAB_006a5450);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_006aa6c0();
  ExceptionList = local_c;
  return;
}

