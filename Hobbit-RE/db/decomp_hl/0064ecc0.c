
void FUN_0064ecc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e6348;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_007ce500 == 0) {
    ExceptionList = &pvStack_c;
    DAT_007ce500 = FUN_0064ec80();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  uStack_4 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    piVar1 = &DAT_007cd428;
    do {
      if (*piVar1 == 0) {
        if (iVar2 < 0x10) {
          (&DAT_007cd428)[iVar2 * 0x43] = param_1;
          FUN_00647d70(&DAT_007cd42c + iVar2 * 0x10c,param_2,0x100);
          FUN_00647d70(&DAT_007cd52c + iVar2 * 0x10c,param_3,8);
        }
        break;
      }
      piVar1 = piVar1 + 0x43;
      iVar2 = iVar2 + 1;
    } while ((int)piVar1 < 0x7ce4e8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  ExceptionList = pvStack_c;
  return;
}

