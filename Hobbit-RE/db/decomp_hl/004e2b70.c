
void __thiscall FUN_004e2b70(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_004aa650(param_2);
  uVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_006414f0(&DAT_00725c94,uVar1);
  FUN_006412e0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 5);
  FUN_00641560(&DAT_00726118,param_1 + 0x11);
  FUN_00641600(s_Orient_00726120,param_1 + 0x1a);
  FUN_006412e0(s_HalfDimensions_0072e8cc,param_1 + 0x2b);
  FUN_006414f0(&DAT_0072e8c4,param_1[0x2e]);
  FUN_006412c0();
  return;
}

