
void __fastcall FUN_00583d00(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__Init_00740818);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 1;
  FUN_00669c70(FUN_00583d70);
  FUN_00583de0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

