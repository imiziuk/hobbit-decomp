
void __fastcall FUN_00528e50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004faaf0();
  iVar3 = 0;
  do {
    if (iVar3 == *(int *)(param_1 + 0x34)) {
      iVar1 = __ftol();
      iVar1 = iVar1 + *(int *)(param_1 + 8);
      iVar2 = __ftol(iVar1);
      FUN_004fa7c0(iVar2 + *(int *)(param_1 + 4),iVar1);
      FUN_004faaf0();
    }
    else {
      iVar1 = __ftol();
      iVar1 = iVar1 + *(int *)(param_1 + 8);
      iVar2 = __ftol(iVar1);
      FUN_004fa7c0(iVar2 + *(int *)(param_1 + 4),iVar1);
      FUN_004faaf0();
    }
    iVar1 = __ftol();
    iVar1 = iVar1 + *(int *)(param_1 + 8);
    iVar2 = __ftol(iVar1);
    FUN_004fa7c0(iVar2 + *(int *)(param_1 + 4),iVar1);
    FUN_004faaf0();
    if (iVar3 == *(int *)(param_1 + 0x38)) {
      iVar1 = __ftol();
      iVar1 = iVar1 + *(int *)(param_1 + 8);
      iVar2 = __ftol(iVar1);
      FUN_004fa7c0(iVar2 + *(int *)(param_1 + 4),iVar1);
      FUN_004faaf0();
      iVar1 = __ftol();
      iVar1 = iVar1 + *(int *)(param_1 + 8);
      iVar2 = __ftol(iVar1);
      FUN_004fa7c0(iVar2 + *(int *)(param_1 + 4),iVar1);
      FUN_004faaf0();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return;
}

