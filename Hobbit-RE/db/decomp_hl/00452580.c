
void __thiscall FUN_00452580(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfd88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_eel_hole__OnImport_00724f4c);
  local_4 = 0;
  FUN_006405e0(s_ParentColony_00724f3c,param_1 + 0x180);
  FUN_004c2430(param_2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

