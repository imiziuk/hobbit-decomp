
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00494700(int param_1)

{
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((DAT_00777238 == 5) || (DAT_00777238 == 7)) {
    FUN_005784a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    fStack_18 = *(float *)(param_1 + 0x14) - _DAT_006ec0a4;
    fStack_14 = *(float *)(param_1 + 0x18) - _DAT_006ec0a4;
    fStack_10 = *(float *)(param_1 + 0x1c) - _DAT_006ec0a4;
    fStack_c = *(float *)(param_1 + 0x14) + _DAT_006ec0a4;
    fStack_8 = *(float *)(param_1 + 0x18) + _DAT_006ec0a4;
    fStack_4 = *(float *)(param_1 + 0x1c) + _DAT_006ec0a4;
    FUN_00579ce0(&fStack_18,0,0,0);
    FUN_005785b0();
  }
  return;
}

