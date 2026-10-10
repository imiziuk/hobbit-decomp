
void __thiscall FUN_004a9960(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x268) =
       ((uint)(param_2 != 0) << 0x19 ^ *(uint *)(param_1 + 0x268)) & 0x2000000 ^
       *(uint *)(param_1 + 0x268);
  if (param_2 == 0) {
    FUN_004f8a50(0xffffffff,0,0);
  }
  return;
}

