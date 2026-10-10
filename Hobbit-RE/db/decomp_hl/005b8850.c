
void FUN_005b8850(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  if (param_1 != param_2) {
    do {
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = *param_1;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_1 != param_2);
  }
  return;
}

