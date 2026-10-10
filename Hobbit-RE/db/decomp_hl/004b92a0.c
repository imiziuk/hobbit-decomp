
void FUN_004b92a0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_prop__OnImport_0072c418);
  local_4 = 0;
  FUN_004c2430(param_1);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

