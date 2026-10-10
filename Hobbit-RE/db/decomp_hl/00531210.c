
undefined1 * __thiscall FUN_00531210(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (0 < *(int *)(param_1 + 0xbc)) {
    FUN_00649b60(param_2);
    iVar2 = FUN_00531e50();
    if (iVar2 < 0) {
      return &DAT_0075b6e0;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0xc0) + iVar2 * 4);
    piVar6 = *(int **)(iVar2 + 0x68);
    iVar4 = *(int *)(*piVar6 + 0x48);
    iVar2 = *(int *)(iVar2 + 100);
    iVar3 = 0;
    iVar5 = 0;
    param_2 = 99;
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(*piVar6 + 0x48);
        if (param_3 == iVar1) {
          return (undefined1 *)0x0;
        }
        if (iVar3 < iVar1) {
          iVar3 = iVar1;
        }
        if ((param_2 <= iVar1) && (iVar1 = param_2, iVar3 <= iVar4)) {
          iVar4 = iVar3;
        }
        param_2 = iVar1;
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < iVar2);
    }
  }
  return (undefined1 *)0x0;
}

