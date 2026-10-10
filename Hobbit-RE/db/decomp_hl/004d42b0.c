
void __fastcall FUN_004d42b0(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xf7;
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  iVar1 = FUN_004c71a0();
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x140);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
  }
  return;
}

