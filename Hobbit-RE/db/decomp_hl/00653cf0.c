
void FUN_00653cf0(void)

{
  if (DAT_007e86cc == 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_007e86b0);
    DAT_007e86cc = 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007e86b0);
  DAT_007e3570 = DAT_007e3570 + 1;
  return;
}

