
void __fastcall FUN_005aa9b0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0 || *(int *)(param_1 + 0xc) != 0) {
    FUN_0054be30(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

