
void FUN_00557580(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_00771d70) {
    do {
      FUN_00557580(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_006bf840(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_00771d70);
  }
  return;
}

