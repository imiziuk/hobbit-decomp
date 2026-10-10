
undefined4 __fastcall FUN_0063f330(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5baf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__SkipToNextHeader_0074b098);
  iVar1 = *(int *)(param_1 + 0x100);
  local_4 = 0;
  if (iVar1 == -1) {
    iVar1 = 1;
  }
  if (0 < iVar1) {
    do {
      FUN_0063e6a0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

