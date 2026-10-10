
void __fastcall FUN_004576c0(int param_1)

{
  float fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0056bb40(&local_c);
  local_c = local_c - *(float *)(param_1 + 0x114);
  local_8 = local_8 - *(float *)(param_1 + 0x118);
  local_4 = local_4 - *(float *)(param_1 + 0x11c);
  fVar1 = SQRT(local_c * local_c + local_8 * local_8 + local_4 * local_4);
  if (fVar1 < *(float *)(param_1 + 0xb0) == (NAN(fVar1) || NAN(*(float *)(param_1 + 0xb0)))) {
    if (*(float *)(param_1 + 0xb4) < fVar1) {
      FUN_0065a050(*(undefined4 *)(param_1 + 0x130),0);
      return;
    }
    fVar1 = DAT_006e92e8 -
            (fVar1 - *(float *)(param_1 + 0xb0)) /
            (*(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xb0));
    if (fVar1 < DAT_006e92e4) {
      return;
    }
    if (fVar1 < DAT_006e92e8 == (fVar1 == DAT_006e92e8)) {
      return;
    }
  }
  else {
    fVar1 = 1.0;
  }
  FUN_0065a050(*(undefined4 *)(param_1 + 0x130),fVar1);
  return;
}

