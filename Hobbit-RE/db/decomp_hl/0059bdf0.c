
void __fastcall FUN_0059bdf0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_0059b990();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar2 * 4) = 0;
      iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_0059b990();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_0059bf80();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x88) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_0059bff0();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x88) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x84));
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  iVar2 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (iVar2 != 0) {
    FUN_0059b990();
    FUN_006bf840(iVar2);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (DAT_007985d4 == 0) {
    if (DAT_007985cc != 0) {
      iVar2 = DAT_007985cc + -4;
      FUN_006c026a(DAT_007985cc,0x2c,*(undefined4 *)(DAT_007985cc + -4),FUN_00649ba0);
      FUN_006bf840(iVar2);
    }
    DAT_007985cc = 0;
    DAT_007985d0 = 0;
  }
  DAT_007985c8 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

