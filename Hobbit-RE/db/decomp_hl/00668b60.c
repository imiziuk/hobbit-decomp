
void FUN_00668b60(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_007f1434) {
    do {
      FUN_00668b60(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_00649ba0();
      FUN_006bf840(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_007f1434);
  }
  return;
}

