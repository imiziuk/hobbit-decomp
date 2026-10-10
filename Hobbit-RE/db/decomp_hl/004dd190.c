
int __fastcall FUN_004dd190(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x138);
  iVar1 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(param_1 + 0x13c);
    do {
      if (*piVar2 != -1) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

