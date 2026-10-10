
void __thiscall FUN_004a66b0(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x268) =
       (param_2 << 0x1c ^ *(uint *)(param_1 + 0x268)) & 0x10000000 ^ *(uint *)(param_1 + 0x268);
  return;
}

