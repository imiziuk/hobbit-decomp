
void __fastcall FUN_005849b0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderPlaySurfaces_00740cf0);
  local_4 = 0;
  *param_1 = 0;
  uVar1 = FUN_00584190(6,s_PlaySurf_Render_00740ce0);
  param_1[9] = uVar1;
  param_1[4] = *param_1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

