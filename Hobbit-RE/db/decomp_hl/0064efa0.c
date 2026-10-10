
void FUN_0064efa0(undefined4 param_1)

{
  if (DAT_007ce500 == 0) {
    DAT_007ce500 = FUN_0064ec80();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  DAT_007ce528 = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  return;
}

