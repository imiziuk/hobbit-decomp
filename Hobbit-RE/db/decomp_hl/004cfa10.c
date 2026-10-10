
void __thiscall FUN_004cfa10(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_slider__OnImport_0072d65c);
  local_4 = 0;
  FUN_006403a0(s_Position0_0072d650,param_1 + 0x160);
  FUN_006403a0(s_Position1_0072d644,param_1 + 0x174);
  FUN_00640420(&DAT_0072d63c,param_1 + 0x16c);
  FUN_00640420(&DAT_0072d634,param_1 + 0x180);
  FUN_006405b0(s_YawIncreasing_0072d624,param_1 + 0x188);
  FUN_00640420(s_Pitch0_0072d61c,param_1 + 0x170);
  FUN_00640420(s_Pitch1_0072d614,param_1 + 0x184);
  FUN_006405b0(s_PitchIncreasing_0072d604,param_1 + 0x18c);
  FUN_00640420(&DAT_00729908,param_1 + 400);
  FUN_004c2430(param_2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

