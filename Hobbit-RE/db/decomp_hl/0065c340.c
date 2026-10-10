
undefined4 FUN_0065c340(void)

{
  void *local_20;
  undefined1 *puStack_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &DAT_006f95a8;
  puStack_1c = &LAB_006c22b0;
  local_20 = ExceptionList;
  if (DAT_0074e230 == -1) {
    local_14 = 0;
    ExceptionList = &local_20;
    FUN_006656a0(0);
    DAT_0074e230 = 1;
  }
  ExceptionList = local_20;
  return CONCAT31((int3)((uint)DAT_0074e230 >> 8),DAT_0074e230 != 0);
}

