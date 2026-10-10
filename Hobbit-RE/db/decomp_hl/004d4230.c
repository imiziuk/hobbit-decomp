
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d4230(int param_1)

{
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (((*(byte *)(param_1 + 0x126) & 1) == 0) && ((*(byte *)(param_1 + 0x15b) & 0x10) == 0)) {
    fStack_18 = *(float *)(param_1 + 0x14) - _DAT_006ef304;
    fStack_14 = *(float *)(param_1 + 0x18) - _DAT_006ef304;
    fStack_10 = *(float *)(param_1 + 0x1c) - _DAT_006ef304;
    fStack_c = *(float *)(param_1 + 0x14) + _DAT_006ef304;
    fStack_8 = *(float *)(param_1 + 0x18) + _DAT_006ef308;
    fStack_4 = *(float *)(param_1 + 0x1c) + _DAT_006ef304;
    FUN_005787c0(&fStack_18,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  return;
}

