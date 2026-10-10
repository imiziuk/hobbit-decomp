
undefined4 __fastcall FUN_005dce60(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x44);
  uVar1 = 1;
  if ((0 < iVar3) || (uVar1 = 0, 0 < iVar3)) {
    piVar2 = *(int **)(param_1 + 0x48);
    do {
      if (*piVar2 == 0 && piVar2[1] == 0) {
        uVar1 = 0;
      }
      piVar2 = piVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

