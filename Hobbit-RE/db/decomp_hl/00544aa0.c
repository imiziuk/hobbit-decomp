
void __thiscall FUN_00544aa0(int param_1,float param_2)

{
  if (param_2 < DAT_006e92e8 == (NAN(param_2) || NAN(DAT_006e92e8))) {
    *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
    return;
  }
  if (param_2 < DAT_006e92e4) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(float *)(param_1 + 0x18) = param_2;
  return;
}

