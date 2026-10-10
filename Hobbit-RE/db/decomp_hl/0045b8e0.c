
void __thiscall FUN_0045b8e0(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_breakaway__OnImport_00725bb4);
  local_4 = 0;
  FUN_00640420(s_CollapseDelay_00725ba4,param_1 + 0x160);
  FUN_004c2430(param_2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

