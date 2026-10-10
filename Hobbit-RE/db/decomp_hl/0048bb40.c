
void __thiscall FUN_0048bb40(int param_1,char param_2)

{
  *(byte *)(param_1 + 0x154) =
       (param_2 << 5 ^ *(byte *)(param_1 + 0x154)) & 0x20 ^ *(byte *)(param_1 + 0x154);
  return;
}

