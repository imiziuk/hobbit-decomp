
undefined4 __thiscall FUN_005af720(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xac) + iVar2 * 4) + 0x44) == param_2) &&
         (iVar1 = FUN_005be200(), iVar1 != 0)) {
        return *(undefined4 *)(*(int *)(param_1 + 0xac) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xa8));
  }
  return 0;
}

