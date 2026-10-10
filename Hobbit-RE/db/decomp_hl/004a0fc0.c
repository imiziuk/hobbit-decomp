
void __thiscall FUN_004a0fc0(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x268) =
       (param_2 * 2 ^ *(uint *)(param_1 + 0x268)) & 2 ^ *(uint *)(param_1 + 0x268);
  return;
}

