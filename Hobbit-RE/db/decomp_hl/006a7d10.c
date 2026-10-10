
void FUN_006a7d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_58;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064b130(param_4);
  local_4 = 0;
  FUN_006a8af0(param_1,param_2,param_3,local_58,0);
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

