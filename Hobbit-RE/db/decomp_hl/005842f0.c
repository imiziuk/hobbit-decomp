
void __fastcall FUN_005842f0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc2e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderRigidInstances_007409d8);
  local_4 = 0;
  uVar1 = FUN_00584190(5,s_RigidInst_Render_007409c4);
  *param_1 = 0;
  param_1[8] = uVar1;
  param_1[3] = 0;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

