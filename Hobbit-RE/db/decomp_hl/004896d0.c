
void FUN_004896d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2e08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_object__RenderCustom_007292b4);
  local_4 = 0;
  FUN_00587d00(0);
  FUN_006b7670();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

