
void __thiscall FUN_0063b0d0(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(byte *)(param_1 + 0x28) =
       (param_4 << 1 ^ *(byte *)(param_1 + 0x28)) & 2 ^ *(byte *)(param_1 + 0x28);
  return;
}

