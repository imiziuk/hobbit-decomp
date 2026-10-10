
int __thiscall FUN_0067cfe0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  *param_2 = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    *param_2 = *(int *)(param_1 + 0x1a4) + 0x20;
    iVar1 = *(int *)(param_1 + 0x104) + -0x20;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5;
  }
  return iVar1;
}

