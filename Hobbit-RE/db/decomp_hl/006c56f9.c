
void FUN_006c56f9(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = (int *)(&DAT_007583a0 + param_1 * 4);
  if (*(int *)(&DAT_007583a0 + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)_malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_006c56f9(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_006c1d53();
    }
    FUN_006c575a(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}

