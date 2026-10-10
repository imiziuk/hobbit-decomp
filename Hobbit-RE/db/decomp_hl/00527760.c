
void __fastcall FUN_00527760(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_004faaf0();
    iVar3 = 0;
    do {
      iVar1 = __ftol();
      iVar1 = iVar1 + *(int *)(param_1 + 8);
      iVar2 = __ftol(iVar1);
      FUN_004fa7c0(iVar2 + *(int *)(param_1 + 4),iVar1);
      if (*(int *)(&DAT_00735b40 + (iVar3 + *(int *)(param_1 + 0x2f0) * 6) * 4) != 0) {
        FUN_004faaf0();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    FUN_004faaf0();
    return;
  }
  FUN_004faaf0();
  iVar3 = 0;
  do {
    iVar1 = __ftol();
    iVar1 = iVar1 + *(int *)(param_1 + 8);
    iVar2 = __ftol(iVar1);
    FUN_004fa7c0(iVar2 + *(int *)(param_1 + 4),iVar1);
    if (*(int *)(&DAT_00735b40 + (iVar3 + *(int *)(param_1 + 0x2f0) * 6) * 4) != 0) {
      FUN_004faaf0();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  FUN_004faaf0();
  return;
}

