
void FUN_006494e0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_006494e0(*(int *)(param_1 + 8),param_2);
    }
    FUN_006493a0(param_1,param_2);
  }
  return;
}

