
void __fastcall FUN_005b69c0(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 0x20) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
  }
  return;
}

