
undefined4 __fastcall FUN_005dde40(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 1;
  if ((*(int *)(param_1 + 0x38) == 0 && *(int *)(param_1 + 0x3c) == 0) ||
     (*(int *)(param_1 + 0x48) < 1)) {
    uVar1 = 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    piVar2 = *(int **)(param_1 + 0x4c);
    while (*piVar2 != 0 || piVar2[1] != 0) {
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
      if (*(int *)(param_1 + 0x48) <= iVar3) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

