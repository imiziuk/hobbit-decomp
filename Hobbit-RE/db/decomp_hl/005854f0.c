
void __fastcall FUN_005854f0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderTreeLeafCluste_00741098);
  local_4 = 0;
  *param_1 = 0;
  uVar1 = FUN_00584190(0x3a,s_TreeLeaf_Render_00741088);
  param_1[0xd] = uVar1;
  param_1[7] = *param_1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

