
void FUN_00556510(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_00771d64) {
    do {
      FUN_00556510(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_005567d0();
      FUN_006bf840(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_00771d64);
  }
  return;
}

