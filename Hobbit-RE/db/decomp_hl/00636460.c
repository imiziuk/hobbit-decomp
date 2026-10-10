
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00636460(int param_1)

{
  if ((*(short *)(param_1 + 0x42) == 0xb) &&
     (*(float *)(param_1 + 0x60) < _DAT_006f6a38 ==
      (NAN(*(float *)(param_1 + 0x60)) || NAN(_DAT_006f6a38)))) {
    return 0;
  }
  return 1;
}

