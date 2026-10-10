
void __thiscall FUN_00627e00(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x70);
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_00406bf0(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar5 * 8),
                                   *(undefined4 *)(*(int *)(param_1 + 0x74) + 4 + iVar5 * 8));
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x108))(0);
        if (iVar3 != 0) break;
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
    if (iVar4 < iVar1) {
      FUN_005bec70(param_2);
      return;
    }
  }
  FUN_005bec70(3);
  return;
}

