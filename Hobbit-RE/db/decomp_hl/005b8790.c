
void FUN_005b8790(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_007ba6e0) {
    do {
      FUN_005b8790(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_006bf840(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_007ba6e0);
  }
  return;
}

