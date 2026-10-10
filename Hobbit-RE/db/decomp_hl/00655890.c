
undefined4 __thiscall FUN_00655890(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00653c70();
  if (*param_1 != iVar1) {
    iVar1 = FUN_006559a0(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00653c70();
    *param_1 = iVar1;
  }
  param_1[1] = param_1[1] + 1;
  return 1;
}

