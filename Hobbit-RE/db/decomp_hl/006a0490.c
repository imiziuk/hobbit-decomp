
uint __thiscall FUN_006a0490(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x14) + iVar4 * 4);
      if (*piVar1 != 0) {
        uVar2 = FUN_006a0560(param_2,piVar1);
        uVar3 = uVar3 & uVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  return uVar3;
}

