
void __thiscall FUN_004de6b0(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x120) =
       (param_2 << 3 ^ *(uint *)(param_1 + 0x120)) & 8 ^ *(uint *)(param_1 + 0x120);
  return;
}

