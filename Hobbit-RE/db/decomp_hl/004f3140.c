
void __thiscall FUN_004f3140(int param_1,float param_2)

{
  if (DAT_006e92e4 <= param_2) {
    if (DAT_006e92e8 < param_2 != (NAN(DAT_006e92e8) || NAN(param_2))) {
      *(undefined4 *)(param_1 + 0x13a0) = 0x3f800000;
      return;
    }
    if (DAT_006e92e4 <= param_2) {
      *(float *)(param_1 + 0x13a0) = param_2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x13a0) = 0;
  return;
}

