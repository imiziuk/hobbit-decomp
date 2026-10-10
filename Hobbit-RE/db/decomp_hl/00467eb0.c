
byte __fastcall FUN_00467eb0(int param_1)

{
  if (*(int *)(param_1 + 0xa8) == 0 && *(int *)(param_1 + 0xac) == 0) {
    return 0;
  }
  return *(byte *)(param_1 + 0xb1) >> 2 & 1;
}

