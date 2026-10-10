
undefined4 __fastcall FUN_00688109(int param_1)

{
  if (*(int *)(param_1 + 0x5c) == 0) {
    return 0x80004005;
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(*(int **)(param_1 + 0xc));
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))
            (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return 0;
}

