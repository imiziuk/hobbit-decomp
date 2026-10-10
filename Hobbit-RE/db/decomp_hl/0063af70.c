
void __fastcall FUN_0063af70(int param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 4) != 0) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb;
    return;
  }
  FUN_0063b1f0();
  return;
}

