
void __thiscall FUN_004ab4c0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 1;
    return;
  }
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xfe;
  return;
}

