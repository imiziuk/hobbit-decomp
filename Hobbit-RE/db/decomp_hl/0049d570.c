
void __thiscall FUN_0049d570(int param_1,char param_2)

{
  *(byte *)(param_1 + 0x50) =
       (param_2 << 1 ^ *(byte *)(param_1 + 0x50)) & 2 ^ *(byte *)(param_1 + 0x50);
  return;
}

