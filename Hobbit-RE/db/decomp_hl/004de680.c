
void __thiscall FUN_004de680(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x120) =
       (param_2 << 6 ^ *(uint *)(param_1 + 0x120)) & 0x40 ^ *(uint *)(param_1 + 0x120);
  return;
}

