
void FUN_0064ed80(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_007ce500 == 0) {
    DAT_007ce500 = FUN_0064ec80();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  if (param_1 != 0) {
    piVar1 = &DAT_007cd428;
    iVar2 = 0;
    while (*piVar1 != param_1) {
      piVar1 = piVar1 + 0x43;
      iVar2 = iVar2 + 1;
      if (0x7ce4e7 < (int)piVar1) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
        return;
      }
    }
    (&DAT_007cd428)[iVar2 * 0x43] = 0;
    (&DAT_007cd42c)[iVar2 * 0x10c] = 0;
    (&DAT_007cd52c)[iVar2 * 0x10c] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  return;
}

