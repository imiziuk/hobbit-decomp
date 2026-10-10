
void __fastcall FUN_005c3cc0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df5a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_task_mgr__RenderUnsortedN_00745fb4);
  local_4 = 0;
  FUN_005c41e0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

