
void __thiscall FUN_004125f0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) < param_2) {
    iVar1 = param_2;
  }
  FUN_004132d0(iVar1);
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

