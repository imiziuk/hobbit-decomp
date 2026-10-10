
void FUN_00680700(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x260);
  *(undefined4 *)(iVar1 + 0x2c) = param_2;
  FUN_00655630(iVar1,0);
  return;
}

