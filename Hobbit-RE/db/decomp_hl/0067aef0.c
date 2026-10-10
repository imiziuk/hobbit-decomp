
void FUN_0067aef0(int param_1,float param_2)

{
  if (param_2 < DAT_006e92e4 != (NAN(param_2) || NAN(DAT_006e92e4))) {
    *(float *)(param_1 + 0x48) = DAT_006e92e4;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 8;
    return;
  }
  if (DAT_006e92e8 < param_2) {
    param_2 = DAT_006e92e8;
  }
  *(float *)(param_1 + 0x48) = param_2;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 8;
  return;
}

