
void __fastcall FUN_00526f20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_004faaf0();
  iVar3 = 0;
  do {
    uVar1 = __ftol();
    uVar2 = __ftol(uVar1);
    FUN_004fa7c0(uVar2,uVar1);
    if (iVar3 == *(char *)(param_1 + 0x2dd)) {
      FUN_004faaf0();
      uVar1 = __ftol();
      uVar2 = __ftol(uVar1);
      FUN_004fa7c0(uVar2,uVar1);
      FUN_004faaf0();
    }
    if (iVar3 == *(char *)(param_1 + 0x2e6)) {
      FUN_004faaf0();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return;
}

