
void FUN_00648f90(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x28) & 0xfffffff9;
  *(uint *)(param_1 + 0x28) = uVar2;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x28) = uVar2 | 6;
  }
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    FUN_00648f90(iVar1,param_2);
  }
  return;
}

