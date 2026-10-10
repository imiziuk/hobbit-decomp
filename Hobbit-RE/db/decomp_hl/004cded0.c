
void FUN_004cded0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_save_pedestal__OnImport_0072d508);
  local_4 = 0;
  FUN_004c2430(param_1);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

