
void FUN_0045be50(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d05a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_camera__OnAdvanceLogic_00725bd4);
  local_4 = 0;
  FUN_0045cae0(param_1);
  FUN_0045c600(param_1);
  FUN_0045cbe0(param_1);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

