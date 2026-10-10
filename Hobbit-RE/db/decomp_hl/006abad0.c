
void __fastcall FUN_006abad0(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    _BinkClose_4(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 8) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  }
  return;
}

