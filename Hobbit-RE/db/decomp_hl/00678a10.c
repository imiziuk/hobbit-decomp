
bool FUN_00678a10(int param_1)

{
  int iVar1;
  
  FUN_00679ab0();
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xf0);
    FUN_00679ac0();
    return iVar1 == 2;
  }
  FUN_00679ac0();
  return false;
}

