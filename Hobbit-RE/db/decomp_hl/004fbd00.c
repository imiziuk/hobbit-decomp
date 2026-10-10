
void FUN_004fbd00(void)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d63c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_LevelLoader_UnloadManualResource_00730734);
  iVar1 = 0;
  local_4 = 0;
  if (0 < DAT_0075f91c) {
    iVar2 = 0;
    do {
      FUN_005491a0(*(undefined4 *)(iVar2 + DAT_0075f920));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar1 < DAT_0075f91c);
  }
  if (DAT_0075f928 == 0) {
    if (DAT_0075f920 != 0) {
      iVar1 = DAT_0075f920 + -4;
      FUN_006c026a(DAT_0075f920,0x2c,*(undefined4 *)(DAT_0075f920 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1);
    }
    DAT_0075f920 = 0;
    DAT_0075f924 = 0;
  }
  DAT_0075f91c = 0;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

