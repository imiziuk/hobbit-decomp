
void FUN_00584d10(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderVolumes_00740db4);
  local_4 = 0;
  FUN_00584190(0x2f,s_Volume_Render_00740da4);
  FUN_00584190(0x40,s_MusicTrigger_Render_00740d90);
  FUN_00584190(0x42,s_AmbientAudioTrigger_Render_00740d74);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

