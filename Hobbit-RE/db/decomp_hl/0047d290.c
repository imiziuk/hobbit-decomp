
void FUN_0047d290(undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_cinema_ai__OnImport_0072841c);
  local_4 = 0;
  FUN_004752d0(param_1,param_2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

