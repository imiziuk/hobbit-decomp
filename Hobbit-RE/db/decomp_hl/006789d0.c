
void __fastcall FUN_006789d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00679ab0();
  iVar2 = *(int *)(param_1 + 4);
  while (iVar1 = iVar2, iVar1 != param_1) {
    iVar2 = *(int *)(iVar1 + 4);
    if (*(int *)(iVar1 + 0xf0) == 4) {
      *(undefined4 *)(iVar1 + 0xf0) = 5;
    }
  }
  FUN_00679ac0();
  return;
}

