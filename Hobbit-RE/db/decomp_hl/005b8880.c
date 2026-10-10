
void FUN_005b8880(undefined2 *param_1,int param_2,undefined2 *param_3)

{
  if (param_2 != 0) {
    do {
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

