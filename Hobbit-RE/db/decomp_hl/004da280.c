
void __thiscall FUN_004da280(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_006414f0(&DAT_00725c94,uVar1);
  puVar2 = (undefined1 *)FUN_005493e0(param_1 + 0x2a);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0075b6e0;
  }
  FUN_006414f0(s_HighLOD_0072de7c,puVar2);
  puVar2 = (undefined1 *)FUN_005493e0(param_1 + 0x2b);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0075b6e0;
  }
  FUN_006414f0(s_MedLOD_0072de74,puVar2);
  puVar2 = (undefined1 *)FUN_005493e0(param_1 + 0x2c);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0075b6e0;
  }
  FUN_006414f0(s_LowLOD_0072de6c,puVar2);
  FUN_00641400(s_MaxPitch_0072de60,param_1[0x2d]);
  FUN_00641400(s_MaxRoll_0072de58,param_1[0x2e]);
  FUN_00641400(s_BaseRoll_0072de4c,param_1[0x2f]);
  FUN_00641480(s_NumPhases_0072de40,param_1[0x30]);
  FUN_00641400(s_TimeScale_0072de34,param_1[0x32]);
  FUN_00641400(s_FreezeStartDist_0072de24,param_1[0x39]);
  FUN_00641400(s_FreezeEndDist_0072de14,param_1[0x38]);
  FUN_00641370(&DAT_00728df0,param_1[0x3a]);
  FUN_00641400(s_HighMedDist_0072de08,param_1[0x3b]);
  FUN_00641400(s_MedLowDist_0072ddfc,param_1[0x3c]);
  FUN_00641400(s_LodTransTime_0072ddec,param_1[0x3d]);
  FUN_00641400(s_OccluderOnDist_0072dddc,param_1[0x3f]);
  FUN_00641400(s_OccluderWidth_0072ddcc,param_1[0x40]);
  FUN_00641400(s_OccluderPosY_0072ddbc,param_1[0x41]);
  FUN_00641400(s_OccluderNegY_0072ddac,param_1[0x42]);
  FUN_004aa650(param_2);
  FUN_006412c0();
  return;
}

