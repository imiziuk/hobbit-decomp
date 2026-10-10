
int __fastcall FUN_006a4d30(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x160);
  iVar1 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(param_1 + 0x164);
    do {
      if (*piVar2 != 0) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 0x16;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

