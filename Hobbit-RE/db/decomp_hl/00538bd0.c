
void __thiscall FUN_00538bd0(int param_1,undefined4 param_2,float *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_music_trigger__Init_007376fc);
  *(undefined4 *)(param_1 + 0x100) = 0;
  local_4 = 0;
  FUN_004e1e70(param_2,param_3[3] - *param_3,param_3[4] - param_3[1],param_3[5] - param_3[2]);
  FUN_00538260();
  FUN_005385e0();
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_0064a2e0(s_NONE_SELECTED_00724fdc);
  FUN_0064a2e0(s_Choose_a_Suite_0072517c);
  FUN_0064a2e0(s_Choose_a_Track_0072516c);
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  FUN_0064a2e0(s_NONE_SELECTED_00724fdc);
  FUN_0064a2e0(s_NONE_SELECTED_00724fdc);
  FUN_0064a2e0(s_Choose_a_Suite_0072517c);
  FUN_0064a2e0(s_Choose_a_Track_0072516c);
  *(undefined4 *)(param_1 + 0x2a8) = 1;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  FUN_0064a2e0(s_NONE_SELECTED_00724fdc);
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

