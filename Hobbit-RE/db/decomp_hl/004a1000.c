
void __thiscall FUN_004a1000(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x268) =
       (param_2 << 3 ^ *(uint *)(param_1 + 0x268)) & 8 ^ *(uint *)(param_1 + 0x268);
  return;
}

