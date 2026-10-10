
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00558c80(int param_1)

{
  if (*(float *)(param_1 + 0x138) < _DAT_006e95dc !=
      (NAN(*(float *)(param_1 + 0x138)) || NAN(_DAT_006e95dc))) {
    return 1;
  }
  return 0;
}

