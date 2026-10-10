
void FUN_00585370(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc6c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderCameraInfluenc_00740fd0);
  local_4 = 0;
  FUN_00584190(0x3c,s_Camera_Influence_Render_00740fb8);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

