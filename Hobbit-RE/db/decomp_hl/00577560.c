
void FUN_00577560(int param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006dbb71;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    FUN_00649b60(param_2);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  ExceptionList = local_c;
  return;
}

