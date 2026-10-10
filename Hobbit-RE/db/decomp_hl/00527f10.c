
void __fastcall FUN_00527f10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_004faaf0();
    iVar3 = 0;
    do {
      if (*(int *)(&DAT_00735c20 + (iVar3 + *(int *)(param_1 + 0x55c) * 6) * 4) != 0) {
        uVar1 = __ftol();
        uVar2 = __ftol(uVar1);
        FUN_004fa7c0(uVar2,uVar1);
        FUN_004faaf0();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  else {
    FUN_004faaf0();
    iVar3 = 0;
    do {
      if (*(int *)(&DAT_00735c20 + (iVar3 + *(int *)(param_1 + 0x55c) * 6) * 4) != 0) {
        uVar1 = __ftol();
        uVar2 = __ftol(uVar1);
        FUN_004fa7c0(uVar2,uVar1);
        FUN_004faaf0();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  FUN_004faaf0();
  FUN_004faaf0();
  return;
}

