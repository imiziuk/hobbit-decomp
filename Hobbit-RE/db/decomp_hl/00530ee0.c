
void __fastcall FUN_00530ee0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d88b8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((*(int *)(param_1 + 0x48) != 2) &&
     (iVar1 = *(int *)(param_1 + 0x40), ExceptionList = &local_c, iVar1 != 0)) {
    ExceptionList = &local_c;
    FUN_006c026a(iVar1,0x78,*(undefined4 *)(iVar1 + -4),FUN_00533570);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

