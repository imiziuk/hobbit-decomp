
void __thiscall FUN_004a1040(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x268) =
       (param_2 << 5 ^ *(uint *)(param_1 + 0x268)) & 0x20 ^ *(uint *)(param_1 + 0x268);
  return;
}

