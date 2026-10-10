
void FUN_00678790(int param_1)

{
  int iVar1;
  bool bVar2;
  
  FUN_00679ab0();
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    bVar2 = true;
    while ((iVar1 != param_1 + 0xc && (bVar2))) {
      if (*(int *)(iVar1 + 0x94) == 1) {
        bVar2 = false;
      }
      iVar1 = *(int *)(iVar1 + 4);
    }
    FUN_006795e0(param_1,1);
  }
  FUN_00679ac0();
  return;
}

