
void __thiscall FUN_004e1a10(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x120) =
       (param_2 << 0x10 ^ *(uint *)(param_1 + 0x120)) & 0x10000 ^ *(uint *)(param_1 + 0x120);
  if ((*(byte *)(param_1 + 0x122) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x154) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x154) = 2;
  return;
}

