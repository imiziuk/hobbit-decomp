
int __thiscall FUN_004b3820(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 == -1) ||
      (iVar1 = *(int *)(*(int *)(param_1 + 0x28c0) + param_2 * 0x14), iVar1 == 0)) ||
     ((param_3 != 0 && ((*(byte *)(iVar1 + 0x7f) & 0x10) == 0)))) {
    iVar1 = 0;
  }
  return iVar1;
}

