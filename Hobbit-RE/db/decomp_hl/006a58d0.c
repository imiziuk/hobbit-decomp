
void __thiscall FUN_006a58d0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x200;
    return;
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffdff;
  return;
}

