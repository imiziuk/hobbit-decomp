
void __fastcall FUN_005405d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d9306;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0064ff40(param_1[0x4c],s_C__projects_meridian_Support_Ani_00737ba0,0x44);
  FUN_0064ff40(param_1[0x50],s_C__projects_meridian_Support_Ani_00737bdc,0x45);
  local_4 = local_4 & 0xffffff00;
  FUN_005432e0();
  local_4 = 0xffffffff;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  ExceptionList = local_c;
  return;
}

