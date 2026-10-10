
void FUN_005c4b90(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_007ba9f4) {
    do {
      FUN_005c4b90(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_005c44f0();
      FUN_006bf840(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_007ba9f4);
  }
  return;
}

