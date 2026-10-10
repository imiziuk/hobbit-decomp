
void FUN_0069fbc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_58 [19];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7470;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_ui_manager__RenderText_Wrap_00755b68);
  local_4 = 0;
  FUN_0064afa0();
  local_4._0_1_ = 1;
  FUN_006a1a90(param_1,param_2,param_5,local_58);
  FUN_006a8af0(param_2,param_3,param_4,local_58[0],0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0064b190();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

