
void FUN_00653d90(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e6542;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00653af0(&DAT_007e3670);
  FUN_00655850();
  DAT_007e35fc = &DAT_007e3670;
  ExceptionList = local_c;
  return;
}

