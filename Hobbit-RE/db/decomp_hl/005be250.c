
void __fastcall FUN_005be250(int param_1)

{
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xd7;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  return;
}

