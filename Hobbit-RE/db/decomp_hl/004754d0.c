
float10 __fastcall FUN_004754d0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x14);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 6;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 8);
  return (float10)*(float *)(param_1 + 8) - (float10)fVar1;
}

