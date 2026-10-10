
void FUN_00455120(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_ambient_audio_trigger__RenderCus_0072518c);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

