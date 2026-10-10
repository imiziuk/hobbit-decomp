
void FUN_0069fac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_ui_manager__RenderText_00755b50);
  local_4 = 0;
  FUN_006a7d10(param_2,param_3,param_4,param_5);
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

