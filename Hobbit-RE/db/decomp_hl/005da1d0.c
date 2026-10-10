
bool __fastcall FUN_005da1d0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20);
  bVar1 = 0 < iVar3;
  if (0 < iVar3) {
    piVar2 = *(int **)(param_1 + 0x24);
    do {
      if (*piVar2 == 0 && piVar2[1] == 0) {
        bVar1 = false;
      }
      piVar2 = piVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return bVar1;
}

