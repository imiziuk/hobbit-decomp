
void __fastcall FUN_006787e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00679ab0();
  iVar2 = *(int *)(param_1 + 4);
  while (iVar2 != param_1) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_006795e0(iVar2,1);
    iVar2 = iVar1;
  }
  FUN_00679ac0();
  return;
}

