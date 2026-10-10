
void __thiscall FUN_006a60e0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xf0) != 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  FUN_006a3550(param_2);
  if (*(int *)(param_1 + 0xf0) != 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x60))(param_2);
  }
  return;
}

