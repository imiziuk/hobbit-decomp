
void __fastcall FUN_0067cf70(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x180) * *(float *)(param_1 + 0xd4);
  if ((NAN(fVar1) || NAN(*(float *)(param_1 + 0x184))) == (fVar1 == *(float *)(param_1 + 0x184))) {
    *(float *)(param_1 + 0x184) = fVar1;
    return;
  }
  return;
}

