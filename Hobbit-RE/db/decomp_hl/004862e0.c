
void __thiscall FUN_004862e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fog_volume__OnImport_00728eb8);
  local_4 = 0;
  FUN_00640420(s_CellSize_00728eac,param_1 + 0x100);
  FUN_00640450(s_nXCells_00728ea4,param_1 + 0x104);
  FUN_00640450(s_nZCells_00728e9c,param_1 + 0x108);
  FUN_00640450(s_nParticles_00728e90,param_1 + 0x110);
  FUN_005a3970();
  iVar1 = __ftol();
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x10c) = iVar1;
  FUN_00640420(s_ParticleSize_00728e80,param_1 + 0x114);
  FUN_00640450(s_MinAlpha_00728e74,local_28);
  FUN_00640450(s_MaxAlpha_00728e68,local_24);
  FUN_00640420(s_PushScale_00728e5c,param_1 + 0x11c);
  FUN_00640420(s_PullScale_00728e50,param_1 + 0x120);
  FUN_00640420(s_ForceScalar_00728e44,param_1 + 0x124);
  FUN_00640420(s_Viscosity_00728e38,param_1 + 0x128);
  FUN_00640450(s_MoveMode_00728e2c,&local_20);
  FUN_00640450(s_BoundMode_00728e20,&local_1c);
  FUN_006403a0(s_MoveVec_00728e18,param_1 + 0x138);
  FUN_00640420(s_MoveScale_00728e0c,param_1 + 0x144);
  FUN_00640420(s_VDamp_00728e04,param_1 + 0x148);
  FUN_00640450(s_Threshold_00728df8,param_1 + 0x14c);
  FUN_006403e0(&DAT_00728df0,param_1 + 0x150);
  FUN_00640420(s_SleepDist_00728de4,param_1 + 300);
  FUN_00640450(s_PainType_00728dd8,local_18);
  FUN_00640420(s_PainFreq_00728dcc,param_1 + 0x158);
  FUN_00640420(s_PoisonDur_00728dc0,param_1 + 0x15c);
  FUN_00640420(s_PainAmt_00728db8,param_1 + 0x160);
  *(undefined1 *)(param_1 + 0x118) = local_28[0];
  *(undefined1 *)(param_1 + 0x119) = local_24[0];
  *(undefined4 *)(param_1 + 0x134) = local_1c;
  *(undefined4 *)(param_1 + 0x130) = local_20;
  *(undefined4 *)(param_1 + 0x154) = local_18[0];
  FUN_004e2c00(param_2);
  FUN_00485840();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

