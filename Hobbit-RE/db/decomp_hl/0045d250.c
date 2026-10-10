
void __thiscall FUN_0045d250(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_004aa650(param_2);
  uVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_006414f0(&DAT_00725c94,uVar1);
  FUN_006412e0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 5);
  FUN_006417e0(&DAT_00725c90,param_1[0x32],param_1[0x33]);
  FUN_006417e0(&DAT_00725c88,param_1[0x2e],param_1[0x2f]);
  FUN_00641760(&DAT_00725c80,param_1[0x2a]);
  FUN_00641760(&DAT_00725c78,param_1[0x2c]);
  FUN_00641400(s_Delay_00725c70,param_1[0x34]);
  FUN_00641400(&PTR_Unwind_00725c6c,param_1[0x30]);
  FUN_00641400(&PTR_DAT_00725c68,param_1[0x31]);
  FUN_006417e0(s_Lookat_00725c60,param_1[0x3c],param_1[0x3d]);
  FUN_00641760(&DAT_00725c58,param_1[0x2d]);
  FUN_006412c0();
  return;
}

