
void __fastcall FUN_005aec10(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006de570;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffdff;
  local_4 = 1;
  FUN_00649b60(&stack0x00000004);
  iVar1 = FUN_005aecb0();
  if (iVar1 != 0) {
    FUN_00649b60(&stack0x00000030);
    FUN_005bed00();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

