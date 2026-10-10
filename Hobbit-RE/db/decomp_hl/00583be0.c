
void __fastcall FUN_00583be0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__Kill_007407cc);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x1ac) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x638) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x63c) = 0x7fffffff;
  FUN_00583de0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

