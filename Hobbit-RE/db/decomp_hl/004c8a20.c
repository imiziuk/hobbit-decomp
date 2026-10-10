
void __fastcall FUN_004c8a20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xa8);
  fVar3 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xac);
  fVar2 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb0);
  fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar1 < DAT_006e92e8 != (NAN(fVar1) || NAN(DAT_006e92e8))) {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x1c);
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x1c);
  return;
}

