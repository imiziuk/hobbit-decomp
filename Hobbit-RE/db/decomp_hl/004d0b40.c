
void __thiscall FUN_004d0b40(int param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x127) ^ param_2) & 1 ^ *(byte *)(param_1 + 0x127);
  *(byte *)(param_1 + 0x127) = bVar1;
  if ((bVar1 & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x1000000;
    return;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfeffffff;
  return;
}

