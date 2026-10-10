
void __thiscall FUN_0061d600(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 8) && (*(short *)(param_1 + 0x42) != 8)) {
    if (0 < *(int *)(param_1 + 0x50)) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4) + 0x34);
      if (iVar1 < 1) {
        iVar1 = FUN_00647b10(0,*(int *)(param_1 + 0x50) + -1);
      }
      else {
        iVar1 = FUN_00647b10(0,iVar1 + -1);
        iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4) +
                                 0x38) + iVar1 * 4);
      }
      if ((*(int *)(param_1 + 0x50) <= iVar1) || (iVar1 < 0)) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 100) = iVar1;
      iVar2 = FUN_00567b20(1);
      *(undefined4 *)(iVar2 + 0x2c) = 8;
      iVar1 = *(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x68);
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x6c);
      FUN_005af9f0(iVar2);
      FUN_005be710(8);
      return;
    }
  }
  else {
    FUN_00631e90(param_2);
  }
  FUN_005be710(param_2);
  return;
}

