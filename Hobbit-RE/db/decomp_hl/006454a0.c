
undefined4 __thiscall
FUN_006454a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      iVar1 = FUN_00647e40(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + iVar2 * 4) + 4),
                           param_2);
      if (((iVar1 == 0) &&
          (iVar1 = FUN_00647e40(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + iVar2 * 4) + 8),
                                param_3), iVar1 == 0)) &&
         (iVar1 = FUN_00647e40(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + iVar2 * 4) + 0xc)
                               ,param_4), iVar1 == 0)) {
        return *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x50));
  }
  return 0;
}

