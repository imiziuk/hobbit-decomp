
void __thiscall FUN_00489740(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_004aa650(param_2);
  uVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_006414f0(&DAT_00725c94,uVar1);
  FUN_006412e0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 5);
  FUN_00641600(s_Orient_00726120,param_1 + 0x1a);
  FUN_006412e0(s_Scale_00725a04,param_1 + 0x4a);
  FUN_00641400(s_PlaybackRate_00729300,param_1[0x54]);
  uVar1 = (**(code **)(*param_1 + 0xd4))();
  FUN_006414f0(s_FXResource_007292f4,uVar1);
  FUN_00641760(s_StartOnInit_007292e8,*(byte *)(param_1 + 0x55) & 1);
  FUN_00641370(s_Color_00728924,param_1[0x4d]);
  FUN_006417e0(s_HostObject_007292dc,param_1[0x56],param_1[0x57]);
  FUN_006414f0(s_HostPartName_007292cc,param_1[0x5f]);
  FUN_006412c0();
  return;
}

