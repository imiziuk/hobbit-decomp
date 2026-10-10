
void __thiscall FUN_00490db0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_006414f0(&DAT_00725c94,uVar1);
  FUN_00641760(s_IsMoving_00729910,param_1[0x6e]);
  FUN_00641400(&DAT_00729908,param_1[0x5c]);
  FUN_00641400(s_PathOffset_007298fc,param_1[0x5b]);
  uVar2 = FUN_00490f00();
  FUN_006417e0(s_Piznath_007298f4,uVar2);
  uVar1 = (**(code **)(*param_1 + 0xd4))();
  FUN_006414f0(s_GeometryResource_007298e0,uVar1);
  FUN_006412e0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 5);
  FUN_00641600(s_Orient_00726120,param_1 + 0x1a);
  FUN_006412e0(s_Scale_00725a04,param_1 + 0x50);
  FUN_00641560(&DAT_00726118,param_1 + 0x11);
  FUN_00641760(s_Sinks_007298d8,param_1[0x5d]);
  FUN_00641400(s_TransSpeed_007298cc,param_1[0x67]);
  FUN_00641400(s_TransDelay_007298c0,param_1[0x68]);
  FUN_00641760(s_StartsAtTop_007298b4,param_1[0x6c]);
  FUN_006412e0(s_TopPos_007298ac,param_1 + 0x5e);
  FUN_006412e0(s_SinkVector_007298a0,param_1 + 0x61);
  FUN_004d0d70(param_2);
  FUN_006412c0();
  return;
}

