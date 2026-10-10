
void __fastcall FUN_005843d0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderPlatformObject_00740a38);
  local_4 = 0;
  iVar1 = FUN_00584190(0xf,s_Platform_Render_00740a28);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

