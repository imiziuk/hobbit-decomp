
undefined4 __thiscall FUN_0054b760(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_3;
  if (iVar1 < *(int *)(param_1 + 0x28d8)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x28c0) + iVar1 * 0x14);
    do {
      if ((*piVar2 != 0) && (*(byte *)(*piVar2 + 0x7c) == param_2)) {
        *param_3 = iVar1;
        return *(undefined4 *)(*(int *)(param_1 + 0x28c0) + iVar1 * 0x14);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar1 < *(int *)(param_1 + 0x28d8));
  }
  return 0;
}

