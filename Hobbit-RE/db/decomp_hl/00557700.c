
void __thiscall
FUN_00557700(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9dc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_logic_mgr__Init_0073d9b4);
  param_1[0xb] = param_3;
  local_4 = 0;
  *param_1 = 1;
  param_1[10] = param_2;
  param_1[0xc] = param_4;
  FUN_005577c0();
  FUN_00648600(param_1 + 0xd,0,0x80);
  param_1[0x2d] = 0;
  FUN_00648600(param_1 + 0x2e,0,0x80);
  param_1[0x4e] = 0;
  FUN_0064cc00();
  param_1[0x50] = 0;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

