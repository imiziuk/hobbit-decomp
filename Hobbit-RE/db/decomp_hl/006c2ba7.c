
undefined4 FUN_006c2ba7(LPVOID param_1)

{
  BOOL BVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006fd568;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  BVar1 = TlsSetValue(DAT_00757f10,param_1);
  if (BVar1 == 0) {
    __amsg_exit(0x10);
  }
  if (PTR_FUN_00757e24 != (undefined *)0x0) {
    (*(code *)PTR_FUN_00757e24)();
  }
  local_8 = 0;
  (**(code **)((int)param_1 + 0x48))(*(undefined4 *)((int)param_1 + 0x4c));
  FUN_006c2c3a();
  ExceptionList = local_14;
  return 0;
}

