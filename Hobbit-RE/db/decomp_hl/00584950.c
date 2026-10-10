
void FUN_00584950(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc4e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderAudioEmitters_00740cc0);
  local_4 = 0;
  FUN_00584190(0x32,s_Audio_Emitters_Render_00740ca8);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

