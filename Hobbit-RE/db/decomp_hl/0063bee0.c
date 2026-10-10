
uint __thiscall FUN_0063bee0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(param_1 + iVar3 * 4) == param_2) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if (iVar3 != iVar1) {
    if (iVar3 < iVar1 + -1) {
      do {
        *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x28) + -1);
    }
    uVar2 = *(uint *)(param_1 + 0x28);
    *(int *)(param_1 + -4 + uVar2 * 4) = param_2;
    return uVar2 & 0xffffff00;
  }
  iVar3 = 0;
  if (iVar1 != 1 && -1 < iVar1 + -1) {
    do {
      *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + 4 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x28) + -1);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + -4 + iVar1 * 4) = param_2;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

