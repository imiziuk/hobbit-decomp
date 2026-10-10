
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00532cf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1ac) * 0x30;
  iVar3 = iVar1 + param_1;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar1 + 0x154 + param_1);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar3 + 0x158);
  if (*(float *)(iVar3 + 0x168) <= _DAT_006e9360) {
    *(undefined4 *)(param_1 + 0x1c4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 2;
    FUN_00532c20(0x3f800000,*(undefined4 *)(iVar3 + 0x168),2);
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  uVar2 = FUN_005327d0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x60));
  FUN_0064a2e0(uVar2);
  iVar3 = FUN_00647ed0(DAT_007642a0,s_MUSIC_Silence_00724fb8);
  if ((iVar3 != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1), iVar3 != 0)) {
    iVar3 = FUN_00659e10(iVar3);
    if (iVar3 == 0) {
      FUN_00659db0(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1));
    }
    FUN_00659db0(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1));
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x16c + param_1) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x178 + param_1) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x174 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 1;
    return;
  }
  FUN_00532030();
  return;
}

