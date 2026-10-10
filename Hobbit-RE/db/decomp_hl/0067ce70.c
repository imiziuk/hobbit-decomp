
void __fastcall FUN_0067ce70(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x144) * *(float *)(param_1 + 0xa4);
  if (0 < DAT_007eda44) {
    fVar1 = fVar1 * *(float *)(param_1 + 0xb4);
  }
  if ((NAN(fVar1) || NAN(*(float *)(param_1 + 0x148))) == (fVar1 == *(float *)(param_1 + 0x148))) {
    *(float *)(param_1 + 0x148) = fVar1;
    FUN_00679700(param_1);
    return;
  }
  return;
}

