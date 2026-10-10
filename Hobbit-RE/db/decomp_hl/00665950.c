
void FUN_00665950(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  if (param_3 != 0) {
    do {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

