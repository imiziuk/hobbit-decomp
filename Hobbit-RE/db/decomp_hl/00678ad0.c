
bool FUN_00678ad0(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  FUN_00679ab0();
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != param_1 + 0xc)) {
    bVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x94) == 0;
  }
  FUN_00679ac0();
  return bVar1;
}

