
bool FUN_006785e0(int param_1)

{
  int iVar1;
  
  FUN_00679ab0();
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != param_1 + 0xc)) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x8c) + 0xc);
    FUN_00679ac0();
    return iVar1 != -1;
  }
  FUN_00679ac0();
  return false;
}

