
void __fastcall FUN_005fd430(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 != 0) {
    iVar1 = FUN_005b0180();
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      do {
        FUN_00469980(*(int *)(iVar1 + 0xc) + iVar2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x2c;
      } while (iVar3 < *(int *)(iVar1 + 8));
    }
  }
  return;
}

