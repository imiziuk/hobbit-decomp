
void __fastcall FUN_0067cee0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x15c) * *(float *)(param_1 + 0xc4);
  if ((NAN(fVar1) || NAN(*(float *)(param_1 + 0x160))) == (fVar1 == *(float *)(param_1 + 0x160))) {
    *(float *)(param_1 + 0x160) = fVar1;
    FUN_00679720(param_1);
    return;
  }
  return;
}

