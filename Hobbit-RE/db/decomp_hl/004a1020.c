
void __thiscall FUN_004a1020(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x268) =
       (param_2 << 4 ^ *(uint *)(param_1 + 0x268)) & 0x10 ^ *(uint *)(param_1 + 0x268);
  return;
}

