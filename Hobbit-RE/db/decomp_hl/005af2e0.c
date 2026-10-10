
void __fastcall FUN_005af2e0(int param_1)

{
  if (*(int *)(param_1 + 0x124) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x11c));
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffeff;
  return;
}

