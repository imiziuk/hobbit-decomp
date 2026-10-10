
void __fastcall FUN_00584360(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderInternals_00740a0c);
  local_4 = 0;
  uVar1 = FUN_00584190(0xe,s_Internal_Render_007409fc);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

