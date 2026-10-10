
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042ec20(int param_1)

{
  if (DAT_0075bba4 != 0) {
    _DAT_0077285c = _DAT_0077285c | 0x40;
  }
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x804) = 0;
  return;
}

