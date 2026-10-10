
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c7f10(int param_1)

{
  *(undefined **)(param_1 + 0xec) = &DAT_0075da98;
  _DAT_0075da98 = 0x3fc00000;
  *(undefined4 *)(*(int *)(param_1 + 0xec) + 4) = 0x3fc00000;
  *(undefined4 *)(*(int *)(param_1 + 0xec) + 8) = 0x40000000;
  *(undefined4 *)(*(int *)(param_1 + 0xec) + 0xc) = 0x3f000000;
  *(undefined4 *)(*(int *)(param_1 + 0xec) + 0x10) = 0x3f000000;
  return;
}

