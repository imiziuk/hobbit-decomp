
void __fastcall FUN_006555b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006e6586;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (0x10 < *(short *)((int)param_1 + 10)) {
    ExceptionList = &local_c;
    FUN_0064ff40(param_1[3],s_C__projects_meridian_xCore_x_fil_0074df00,0x35);
  }
  *param_1 = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00653b00();
  local_4 = 0xffffffff;
  FUN_00653b00();
  ExceptionList = local_c;
  return;
}

