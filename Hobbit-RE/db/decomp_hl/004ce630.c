
void __thiscall FUN_004ce630(int *param_1,undefined4 param_2)

{
  void *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4c98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_skybox__OnImport_0072d584);
  local_4 = 0;
  FUN_006403a0(s_OffsetScale_0072d578,param_1 + 0x58);
  FUN_006403a0(s_Center_0072d570,param_1 + 0x5c);
  FUN_00640420(s_AnimSpeed_00724c3c,param_1 + 0x5b);
  FUN_004c2430(param_2);
  (**(code **)(*param_1 + 0x8c))(1,0xffffffff);
  FUN_004ab3e0(0);
  FUN_004ab400(0);
  FUN_004ab420(0);
  FUN_004ab450(0);
  FUN_004ab480(0);
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = local_14;
  return;
}

