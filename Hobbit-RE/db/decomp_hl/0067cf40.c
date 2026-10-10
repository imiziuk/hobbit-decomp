
void __fastcall FUN_0067cf40(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x174) * *(float *)(param_1 + 0xcc);
  if ((NAN(fVar1) || NAN(*(float *)(param_1 + 0x178))) == (fVar1 == *(float *)(param_1 + 0x178))) {
    *(float *)(param_1 + 0x178) = fVar1;
    return;
  }
  return;
}

