
void __fastcall FUN_005af7a0(int param_1)

{
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x38))();
  }
  FUN_005aede0();
  FUN_005af3a0();
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  return;
}

