
undefined4 __thiscall FUN_005f6c00(int param_1,int *param_2)

{
  int iVar1;
  
  if (((*param_2 == 10) && (param_2[2] == *(int *)(param_1 + 0x10))) &&
     (param_2[3] == *(int *)(param_1 + 0x14))) {
    iVar1 = FUN_0064a860(param_2 + 4,param_1 + 0x18);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
    return 1;
  }
  return 0;
}

