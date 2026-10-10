
void __fastcall FUN_004a1070(int param_1)

{
  *(undefined4 *)(param_1 + 0x460) = 0;
  if ((*(uint *)(param_1 + 0x268) & 0x80000) != 0) {
    FUN_004a22f0();
    return;
  }
  return;
}

