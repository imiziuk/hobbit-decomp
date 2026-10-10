
void __thiscall FUN_0049e1a0(int param_1,undefined4 param_2)

{
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_nav_point__OnImport_0072a5a0);
  local_4 = 0;
  FUN_006405e0(s_JumpToTarget_0072a590,&local_28);
  FUN_0049dbd0(local_28,local_24);
  FUN_00640450(s_NavFlags_0072a584,local_30);
  *(undefined1 *)(param_1 + 0xd4) = local_30[0];
  FUN_006403a0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,local_18);
  FUN_00640420(s_Radius_0072a57c,&local_2c);
  FUN_0049d750(local_18,local_2c);
  FUN_004aa740(param_2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

