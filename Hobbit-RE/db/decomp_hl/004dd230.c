
undefined1 * __thiscall FUN_004dd230(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x138)) {
    piVar3 = *(int **)(param_1 + 0x13c);
    iVar4 = -1;
    do {
      if ((*piVar3 != -1) && (iVar4 = iVar4 + 1, param_2 == iVar4)) {
        puVar2 = (undefined1 *)FUN_00434e80();
        return puVar2;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x138));
  }
  return &DAT_0075b6e0;
}

