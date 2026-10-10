
void FUN_00648d90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    FUN_00648d90(iVar1);
  }
  return;
}

