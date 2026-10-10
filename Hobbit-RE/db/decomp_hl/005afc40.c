
void __fastcall FUN_005afc40(int param_1)

{
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}

