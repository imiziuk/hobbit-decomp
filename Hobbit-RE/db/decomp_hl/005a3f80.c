
void FUN_005a3f80(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 4) + 8) & 2) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xec))();
    return;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0xe8))();
  return;
}

