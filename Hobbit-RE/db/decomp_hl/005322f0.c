
undefined4 __thiscall FUN_005322f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    while (iVar1 = FUN_00647ed0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc0) + iVar2 * 4) + 4),
                                *param_2), iVar1 != 0) {
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 0xbc) <= iVar2) {
        return *(undefined4 *)(param_1 + 0x144);
      }
    }
    *(int *)(param_1 + 0x144) = iVar2;
    FUN_005322b0(iVar2,param_3);
    *(undefined4 *)(param_1 + 0x1b4) = 1;
  }
  return *(undefined4 *)(param_1 + 0x144);
}

