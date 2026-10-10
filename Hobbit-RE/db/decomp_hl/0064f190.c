
undefined4 FUN_0064f190(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e638e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_007ce500 == 0) {
    ExceptionList = &pvStack_c;
    DAT_007ce500 = FUN_0064ec80();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  uStack_4 = 0;
  uVar1 = thunk_FUN_006c2388(param_1,param_2,&stack0x0000000c);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  ExceptionList = pvStack_c;
  return uVar1;
}

