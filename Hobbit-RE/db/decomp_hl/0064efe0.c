
void FUN_0064efe0(undefined4 param_1)

{
  if (DAT_007ce500 == 0) {
    DAT_007ce500 = FUN_0064ec80();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  DAT_007ce52c = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  return;
}

