
uint __thiscall FUN_004a5920(int param_1,int param_2)

{
  if (param_2 != 0) {
    return (~*(uint *)(param_1 + 0x268) & 0x20000) >> 0x11;
  }
  if (DAT_006e92e4 < *(float *)(param_1 + 0x290)) {
    return 1;
  }
  return 0;
}

