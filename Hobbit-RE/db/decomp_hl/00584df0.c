
void __fastcall FUN_00584df0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc5a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderWater_00740e04);
  local_4 = 0;
  *param_1 = 0;
  uVar1 = FUN_00584190(0x26,s_Water_Render_00740df4);
  param_1[0xc] = uVar1;
  param_1[6] = *param_1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

