
void __thiscall FUN_004946a0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) | 1;
    return;
  }
  *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) & 0xfe;
  return;
}

