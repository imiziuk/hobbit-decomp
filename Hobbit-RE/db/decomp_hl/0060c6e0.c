
undefined4 __thiscall FUN_0060c6e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if ((((iVar3 != 0) && (iVar2 = *(int *)(*(int *)(iVar3 + 0x304) + 0x158), iVar2 != 0)) &&
      (*(int *)(iVar2 + 4) == 0x1f)) && (*(short *)(param_1 + 0x42) != 7)) {
    return 7;
  }
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 5) {
    if (((iVar3 != 0) && (iVar3 = *(int *)(*(int *)(iVar3 + 0x304) + 0x158), iVar3 != 0)) &&
       (*(int *)(iVar3 + 4) == 0x1d)) {
      return 6;
    }
  }
  else if (sVar1 == 6) {
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      return 5;
    }
  }
  else if (sVar1 == 7) {
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      uVar4 = 0;
      FUN_005af120(0);
      FUN_004a0fc0(uVar4);
      uVar4 = 0;
      FUN_005af120(0);
      FUN_004a1000(uVar4);
      uVar4 = 0;
      FUN_005af120(0);
      FUN_004a1020(uVar4);
      uVar4 = 0;
      FUN_005af120(0);
      FUN_004a1040(uVar4);
    }
  }
  else {
    param_3 = 5;
  }
  if (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x4c) != 0) {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfd;
  }
  uVar4 = FUN_005be370(param_2,param_3);
  return uVar4;
}

