
void FUN_004ca600(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_rope__RenderCustom_0072d1b4);
  local_4 = 0;
  FUN_004c9810();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

