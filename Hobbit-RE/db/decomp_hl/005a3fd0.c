
void FUN_005a3fd0(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 4) + 8) & 2) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xe4))();
    return;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0xe0))();
  return;
}

