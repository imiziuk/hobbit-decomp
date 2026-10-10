
undefined4 __thiscall FUN_00600ff0(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0x15) {
    iVar1 = FUN_0064a860(param_1 + 0xc,param_2 + 4);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
      return 1;
    }
  }
  return 0;
}

