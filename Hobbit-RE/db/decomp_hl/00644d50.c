
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00644d50(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5f5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x84);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_007ccd10 = 0;
  }
  else {
    DAT_007ccd10 = FUN_00644de0(pvVar1);
  }
  _DAT_007ccd14 = 1;
  ExceptionList = local_c;
  return;
}

