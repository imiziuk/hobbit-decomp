
void FUN_00669ba0(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e6b61;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    FUN_00649b60(param_2);
  }
  ExceptionList = local_c;
  return;
}

