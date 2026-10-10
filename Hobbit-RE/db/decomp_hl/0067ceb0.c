
void __fastcall FUN_0067ceb0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x9c);
  if ((NAN(fVar1) || NAN(*(float *)(param_1 + 0x154))) == (fVar1 == *(float *)(param_1 + 0x154))) {
    *(float *)(param_1 + 0x154) = fVar1;
    FUN_00679710(param_1);
    return;
  }
  return;
}

