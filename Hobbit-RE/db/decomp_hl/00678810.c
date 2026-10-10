
void __thiscall FUN_00678810(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00679ab0();
  iVar1 = *(int *)(param_1 + 4);
  while (iVar2 = iVar1, iVar2 != param_1) {
    iVar1 = *(int *)(iVar2 + 4);
    if (*(int *)(iVar2 + 8) == param_2) {
      FUN_006795e0(iVar2,1);
    }
  }
  FUN_00679ac0();
  return;
}

