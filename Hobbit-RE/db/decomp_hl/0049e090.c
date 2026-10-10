
void __thiscall FUN_0049e090(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((param_2 != *(int *)(param_1 + 8)) || (param_3 != *(int *)(param_1 + 0xc))) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xb0)) {
      piVar3 = *(int **)(param_1 + 0xb4);
      while (((*piVar3 != param_2 || (piVar3[1] != param_3)) || (piVar3[3] != 0))) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 4;
        if (*(int *)(param_1 + 0xb0) <= iVar2) {
          return;
        }
      }
      iVar4 = (*(int *)(param_1 + 0xb0) - iVar2) + -1;
      if (0 < iVar4) {
        iVar2 = iVar2 << 4;
        do {
          puVar1 = (undefined4 *)(iVar2 + 0x10 + *(int *)(param_1 + 0xb4));
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0xb4) + iVar2);
          *puVar5 = *puVar1;
          puVar5[1] = puVar1[1];
          puVar5[2] = puVar1[2];
          iVar2 = iVar2 + 0x10;
          iVar4 = iVar4 + -1;
          puVar5[3] = puVar1[3];
        } while (iVar4 != 0);
      }
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
    }
  }
  return;
}

