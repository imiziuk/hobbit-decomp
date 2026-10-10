
void __fastcall thunk_FUN_005c9720(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_006bf840(*(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_006bf840(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_006bf840(*(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

