
void __fastcall FUN_00419e00(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006cf0b8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((*(int *)(param_1 + 0x130) != 2) &&
     (iVar1 = *(int *)(param_1 + 0x128), ExceptionList = &local_c, iVar1 != 0)) {
    ExceptionList = &local_c;
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_0041a030();
  ExceptionList = local_c;
  return;
}

