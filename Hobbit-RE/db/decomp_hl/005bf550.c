
void FUN_005bf550(void)

{
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920();
  local_4 = 0;
  FUN_00649940();
  FUN_00640480();
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649b20(local_4c);
  FUN_005bed00();
  ExceptionList = local_c;
  return;
}

