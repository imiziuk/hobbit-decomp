
void __fastcall FUN_006ab2a0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_0059ed70(*(int *)(param_1 + 0x54));
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    FUN_006abad0();
    return;
  }
  return;
}

