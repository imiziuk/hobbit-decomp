
int __fastcall FUN_005359f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x154) == 0) {
    iVar1 = *(int *)(param_1 + 0x14c);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  iVar1 = FUN_00531e40();
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      FUN_00469980(*(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  return param_1 + 0x140;
}

