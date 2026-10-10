
void __thiscall FUN_004860f0(int param_1,undefined4 param_2)

{
  FUN_00641400(s_CellSize_00728eac,*(undefined4 *)(param_1 + 0x100));
  FUN_00641480(s_nXCells_00728ea4,*(undefined4 *)(param_1 + 0x104));
  FUN_00641480(s_nZCells_00728e9c,*(undefined4 *)(param_1 + 0x108));
  FUN_00641480(s_nParticles_00728e90,*(undefined4 *)(param_1 + 0x10c));
  FUN_00641400(s_ParticleSize_00728e80,*(undefined4 *)(param_1 + 0x114));
  FUN_00641480(s_MinAlpha_00728e74,*(undefined1 *)(param_1 + 0x118));
  FUN_00641480(s_MaxAlpha_00728e68,*(undefined1 *)(param_1 + 0x119));
  FUN_00641400(s_PushScale_00728e5c,*(undefined4 *)(param_1 + 0x11c));
  FUN_00641400(s_PullScale_00728e50,*(undefined4 *)(param_1 + 0x120));
  FUN_00641400(s_ForceScalar_00728e44,*(undefined4 *)(param_1 + 0x124));
  FUN_00641400(s_Viscosity_00728e38,*(undefined4 *)(param_1 + 0x128));
  FUN_00641480(s_MoveMode_00728e2c,*(undefined4 *)(param_1 + 0x130));
  FUN_00641480(s_BoundMode_00728e20,*(undefined4 *)(param_1 + 0x134));
  FUN_006412e0(s_MoveVec_00728e18,param_1 + 0x138);
  FUN_00641400(s_MoveScale_00728e0c,*(undefined4 *)(param_1 + 0x144));
  FUN_00641400(s_VDamp_00728e04,*(undefined4 *)(param_1 + 0x148));
  FUN_00641480(s_Threshold_00728df8,*(undefined4 *)(param_1 + 0x14c));
  FUN_00641370(&DAT_00728df0,*(undefined4 *)(param_1 + 0x150));
  FUN_00641400(s_SleepDist_00728de4,*(undefined4 *)(param_1 + 300));
  FUN_00641480(s_PainType_00728dd8,*(undefined4 *)(param_1 + 0x154));
  FUN_00641400(s_PainFreq_00728dcc,*(undefined4 *)(param_1 + 0x158));
  FUN_00641400(s_PoisonDur_00728dc0,*(undefined4 *)(param_1 + 0x15c));
  FUN_00641400(s_PainAmt_00728db8,*(undefined4 *)(param_1 + 0x160));
  FUN_004e2b70(param_2);
  return;
}

