
void __thiscall FUN_004de650(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x120) =
       (param_2 << 5 ^ *(uint *)(param_1 + 0x120)) & 0x20 ^ *(uint *)(param_1 + 0x120);
  return;
}

