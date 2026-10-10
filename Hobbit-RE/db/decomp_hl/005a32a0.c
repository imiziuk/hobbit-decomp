
void __fastcall FUN_005a32a0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf4 | 4;
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

