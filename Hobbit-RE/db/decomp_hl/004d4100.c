
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d4100(int param_1)

{
  if (((*(byte *)(param_1 + 0x126) & 1) == 0) && ((*(byte *)(param_1 + 0x15b) & 0x10) == 0)) {
    FUN_005784a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    _DAT_0075dcdc = -45.0;
    _DAT_0075dce0 = 0.0;
    _DAT_0075dce4 = -45.0;
    _DAT_0075dce8 = 45.0;
    _DAT_0075dcec = 200.0;
    _DAT_0075dcf0 = 45.0;
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x1c);
    *(float *)(param_1 + 600) = *(float *)(param_1 + 600) - _DAT_006ef304;
    _DAT_0075dcdc = _DAT_0075dcdc + *(float *)(param_1 + 0x254);
    _DAT_0075dce0 = _DAT_0075dce0 + *(float *)(param_1 + 600);
    _DAT_0075dce4 = _DAT_0075dce4 + *(float *)(param_1 + 0x25c);
    _DAT_0075dce8 = _DAT_0075dce8 + *(float *)(param_1 + 0x254);
    _DAT_0075dcec = _DAT_0075dcec + *(float *)(param_1 + 600);
    _DAT_0075dcf0 = _DAT_0075dcf0 + *(float *)(param_1 + 0x25c);
    FUN_00579ce0(&DAT_0075dcdc,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0);
    FUN_005785b0();
    return;
  }
  return;
}

