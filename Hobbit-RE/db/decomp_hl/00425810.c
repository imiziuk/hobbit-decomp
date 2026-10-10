
void __thiscall FUN_00425810(int param_1,int param_2,int param_3)

{
  if (param_3 == 0x12) {
    if (param_2 != 0) {
      *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 2;
      return;
    }
    *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xfd;
    return;
  }
  if (param_3 != 0x1c) {
    if (param_2 != 0) {
      *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 4;
      return;
    }
    *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) & 0xfb;
    return;
  }
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 4;
    return;
  }
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xfb;
  return;
}

