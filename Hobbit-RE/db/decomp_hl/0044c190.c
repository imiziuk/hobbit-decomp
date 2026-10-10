
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044c190(int param_1)

{
  float fVar1;
  
  FUN_004430e0(0xd);
  *(undefined4 *)(param_1 + 0x9b8) = 0;
  *(undefined4 *)(param_1 + 0x9bc) = 0;
  *(undefined4 *)(param_1 + 0x9c0) = 0;
  FUN_00442550(1);
  *(undefined4 *)(param_1 + 0xa6c) = 0;
  *(undefined4 *)(param_1 + 0x5e9c) = 0;
  fVar1 = *(float *)(param_1 + 0x75c) * *(float *)(param_1 + 0x75c) +
          *(float *)(param_1 + 0x758) * *(float *)(param_1 + 0x758) +
          *(float *)(param_1 + 0x754) * *(float *)(param_1 + 0x754);
  if (_DAT_0072482c * _DAT_0072482c < fVar1) {
    fVar1 = (DAT_006e92e8 / SQRT(fVar1)) * _DAT_0072482c;
    *(float *)(param_1 + 0x754) = fVar1 * *(float *)(param_1 + 0x754);
    *(float *)(param_1 + 0x75c) = fVar1 * *(float *)(param_1 + 0x75c);
    *(float *)(param_1 + 0x758) = fVar1 * *(float *)(param_1 + 0x758);
    return;
  }
  return;
}

