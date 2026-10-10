
void FUN_005771b0(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_00772ce8) {
    do {
      FUN_005771b0(param_1[2]);
      piVar1 = (int *)*param_1;
      thunk_FUN_00649ba0();
      FUN_006bf840(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_00772ce8);
  }
  return;
}

