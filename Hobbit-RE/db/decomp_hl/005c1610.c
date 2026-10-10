
void __fastcall FUN_005c1610(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xffcc | 0xc;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xf8;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

