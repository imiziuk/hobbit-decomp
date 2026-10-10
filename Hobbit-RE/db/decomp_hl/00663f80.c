
void __fastcall FUN_00663f80(int param_1)

{
  if ((*(uint *)(param_1 + 0xc) & 0x200) != 0) {
    while ((*(int *)(param_1 + 0x354) != 0 &&
           (*(int *)(param_1 + 0x358) - *(int *)(param_1 + 0x354) >> 2 != 0))) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x358) + -4) + 0x14))();
    }
  }
  return;
}

