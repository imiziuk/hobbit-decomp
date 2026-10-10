
void FUN_00496700(void)

{
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_line_seg__OnImport_00729c28);
  local_4 = 0;
  FUN_006403a0(&DAT_00729c04,local_24);
  FUN_006403a0(&DAT_00729bfc,local_18);
  FUN_00496330(local_24,local_18);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

