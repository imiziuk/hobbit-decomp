
void __thiscall FUN_004da460(int *param_1,undefined4 param_2)

{
  undefined1 auStack_210 [4];
  undefined1 local_20c [128];
  undefined1 local_18c [124];
  undefined1 auStack_110 [4];
  undefined1 local_10c [124];
  undefined1 auStack_90 [4];
  undefined1 local_8c [124];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d559b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_treeleaf_cluster__OnImport_0072de84);
  local_4 = 0;
  FUN_00640480(&DAT_00725c94,local_18c);
  FUN_00640480(s_GeometryResource_007298e0,local_20c);
  FUN_00640480(s_HighLOD_0072de7c,local_20c);
  FUN_00640480(s_MedLOD_0072de74,local_10c);
  FUN_00640480(s_LowLOD_0072de6c,local_8c);
  FUN_00640420(s_MaxPitch_0072de60,param_1 + 0x2d);
  FUN_00640420(s_MaxRoll_0072de58,param_1 + 0x2e);
  FUN_00640420(s_BaseRoll_0072de4c,param_1 + 0x2f);
  FUN_00640450(s_NumPhases_0072de40,param_1 + 0x30);
  FUN_00640420(s_TimeScale_0072de34,param_1 + 0x32);
  FUN_00640420(s_FreezeStartDist_0072de24,param_1 + 0x39);
  FUN_00640420(s_FreezeEndDist_0072de14,param_1 + 0x38);
  FUN_006403e0(&DAT_00728df0,param_1 + 0x3a);
  FUN_00640420(s_HighMedDist_0072de08,param_1 + 0x3b);
  FUN_00640420(s_MedLowDist_0072ddfc,param_1 + 0x3c);
  FUN_00640420(s_LodTransTime_0072ddec,param_1 + 0x3d);
  FUN_00640420(s_OccluderOnDist_0072dddc,param_1 + 0x3f);
  FUN_00640420(s_OccluderWidth_0072ddcc,param_1 + 0x40);
  FUN_00640420(s_OccluderPosY_0072ddbc,param_1 + 0x41);
  FUN_00640420(s_OccluderNegY_0072ddac,param_1 + 0x42);
  (**(code **)(*param_1 + 0x48))(local_18c);
  FUN_00549430(param_1 + 0x2a,auStack_210);
  FUN_00549430(param_1 + 0x2b,auStack_110);
  FUN_00549430(param_1 + 0x2c,auStack_90);
  FUN_004aa740(param_2);
  FUN_004d90d0(param_1 + 8);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

