
void FUN_0053edb0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d9260;
  local_c = ExceptionList;
  DAT_00767098 = DAT_00767098 + -1;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00651f20();
  local_4 = 0xffffffff;
  FUN_00651f20();
  ExceptionList = local_c;
  return;
}

