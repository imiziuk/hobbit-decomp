
void __fastcall FUN_004d37e0(int param_1)

{
  FUN_004c2db0();
  if ((*(uint *)(param_1 + 0x160) & 0x20) == 0) {
    *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) | 0x20;
    FUN_004d2760();
    return;
  }
  return;
}

