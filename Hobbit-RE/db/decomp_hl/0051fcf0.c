
int __thiscall FUN_0051fcf0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < 2) {
      return -1;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc) + -1;
    if (iVar1 < param_2) {
      param_2 = (1 < iVar1) - 1;
    }
  }
  return param_2;
}

