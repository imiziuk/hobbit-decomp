
undefined4 __fastcall FUN_006bf84b(undefined4 param_1)

{
  LONG LVar1;
  
  if (DAT_00815d20 != 2) {
    if (DAT_00815d20 == 0) {
      LVar1 = InterlockedExchange(&DAT_00815d20,1);
      if (LVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00815d08);
        FUN_006bfe55(&LAB_006bf8c9);
        DAT_00815d20 = 2;
        goto LAB_006bf8bd;
      }
      if (LVar1 == 2) {
        DAT_00815d20 = 2;
      }
    }
    while (DAT_00815d20 == 1) {
      Sleep(1);
    }
    if (DAT_00815d20 != 2) {
      return param_1;
    }
  }
LAB_006bf8bd:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00815d08);
  return param_1;
}

