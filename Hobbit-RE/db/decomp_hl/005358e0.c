
undefined4 __thiscall FUN_005358e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x264) = param_2;
  if (*(int *)(param_1 + 0x24c) == 1) {
    *(undefined4 *)(param_1 + 0x248) = param_2;
    FUN_0064a2e0(s_AMBIENTOUTDOOR_00737278);
    FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x264),param_3);
  }
  return *(undefined4 *)(param_1 + 0x264);
}

