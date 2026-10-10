
undefined4 __thiscall FUN_00567b20(int param_1,int param_2)

{
  int *piVar1;
  
  if ((-1 < param_2) && (param_2 < 4)) {
    *(int *)(*(int *)(param_1 + 0x2c) + param_2 * 4) =
         *(int *)(*(int *)(param_1 + 0x2c) + param_2 * 4) + 1;
    piVar1 = (int *)(*(int *)(param_1 + 0x2c) + param_2 * 4);
    if (1 < *piVar1) {
      *piVar1 = 0;
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 0x10) +
                           (*(int *)(*(int *)(param_1 + 0x2c) + param_2 * 4) + param_2 * 2) * 4) +
                0x18))();
    return *(undefined4 *)
            (*(int *)(param_1 + 0x10) +
            (*(int *)(*(int *)(param_1 + 0x2c) + param_2 * 4) + param_2 * 2) * 4);
  }
  return 0;
}

