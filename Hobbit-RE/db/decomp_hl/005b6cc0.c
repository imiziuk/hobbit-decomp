
int __thiscall FUN_005b6cc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar4 * 4);
      if ((*(int *)(iVar1 + 4) == param_2) && (*(int *)(iVar1 + 0x74) == param_3)) {
        iVar2 = iVar2 + 1;
        iVar1 = FUN_00647b10(0,99);
        if (iVar1 < (int)(100 / (longlong)iVar2)) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar4 * 4);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc));
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar4 * 4);
      if ((*(int *)(iVar1 + 4) == param_2) &&
         (((*(int *)(iVar1 + 0x74) < 1 || (param_3 < 0)) ||
          (((byte)*(undefined4 *)(iVar1 + 0x78) & 2) == 2)))) {
        iVar2 = iVar2 + 1;
        iVar1 = FUN_00647b10(0,99);
        if (iVar1 < (int)(100 / (longlong)iVar2)) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar4 * 4);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  return iVar3;
}

