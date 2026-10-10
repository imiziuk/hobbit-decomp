
undefined4 FUN_0067b6d0(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00806ae0);
  *(undefined4 *)(param_1 + 0x80) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00806ae0);
  return 1;
}

