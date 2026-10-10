
undefined4 __thiscall FUN_0063f930(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0063f960(param_2);
  if (iVar1 != -1) {
    return *(undefined4 *)(iVar1 * 0x148 + 0x104 + *(int *)(param_1 + 0x10c));
  }
  return 0xffffffff;
}

