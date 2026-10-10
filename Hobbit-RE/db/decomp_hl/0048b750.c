
uint __thiscall FUN_0048b750(int param_1,float param_2)

{
  if (DAT_006e92e4 < param_2) {
    *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) | 0x40;
    *(float *)(param_1 + 0x1bc) = param_2;
  }
  return (*(byte *)(param_1 + 0x154) & 0x40) >> 6;
}

