
void FUN_006c3faa(LPVOID param_1)

{
  if (DAT_00757f10 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_00757f10), param_1 != (LPVOID)0x0)) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_006c1d53(*(int *)((int)param_1 + 0x24));
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_006c1d53(*(int *)((int)param_1 + 0x28));
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_006c1d53(*(int *)((int)param_1 + 0x30));
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_006c1d53(*(int *)((int)param_1 + 0x38));
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_006c1d53(*(int *)((int)param_1 + 0x40));
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_006c1d53(*(int *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_00758578) {
        FUN_006c1d53(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_006c1d53(param_1);
    }
    TlsSetValue(DAT_00757f10,(LPVOID)0x0);
    return;
  }
  return;
}

