
void __thiscall FUN_004ac4e0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x8000000;
    return;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xf7ffffff;
  return;
}

