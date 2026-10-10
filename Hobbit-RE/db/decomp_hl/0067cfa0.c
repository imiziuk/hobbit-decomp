
void __fastcall FUN_0067cfa0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0xd8);
  if ((NAN(fVar1) || NAN(*(float *)(param_1 + 400))) == (fVar1 == *(float *)(param_1 + 400))) {
    *(float *)(param_1 + 400) = fVar1;
    return;
  }
  return;
}

