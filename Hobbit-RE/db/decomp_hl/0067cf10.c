
void __fastcall FUN_0067cf10(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x168) * *(float *)(param_1 + 200);
  if ((NAN(fVar1) || NAN(*(float *)(param_1 + 0x16c))) == (fVar1 == *(float *)(param_1 + 0x16c))) {
    *(float *)(param_1 + 0x16c) = fVar1;
    return;
  }
  return;
}

