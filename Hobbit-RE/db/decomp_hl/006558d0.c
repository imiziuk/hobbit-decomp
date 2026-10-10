
undefined4 __thiscall FUN_006558d0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *param_1 = 0;
    FUN_00655a60(param_2);
  }
  return 1;
}

