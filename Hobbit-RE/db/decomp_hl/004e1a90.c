
void __thiscall FUN_004e1a90(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x120) =
       (param_2 << 0x13 ^ *(uint *)(param_1 + 0x120)) & 0x80000 ^ *(uint *)(param_1 + 0x120);
  return;
}

