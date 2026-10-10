
void FUN_006c40ab(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_006fd650;
  puStack_10 = &LAB_006c22b0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_00757f14 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_00757f14)();
  }
  local_8 = 0xffffffff;
  FUN_006c404a();
  return;
}

