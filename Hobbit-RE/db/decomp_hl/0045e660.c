
void __thiscall FUN_0045e660(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d06f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_camera_modifier__OnImport_00725fa8);
  local_4 = 0;
  FUN_004e2c00(param_2);
  FUN_00640420(s_AutoSpeed_00725f9c,param_1 + 0x100);
  FUN_00640420(s_AutoAccel_00725f90,param_1 + 0x104);
  FUN_00640420(s_AutoMinDist_00725f84,param_1 + 0x108);
  FUN_00640420(s_AutoMaxDist_00725f78,param_1 + 0x10c);
  FUN_00640420(s_AutoMinPitch_00725f68,param_1 + 0x110);
  FUN_00640420(s_AutoBestPitch_00725f58,param_1 + 0x114);
  FUN_00640420(s_AutoMaxPitch_00725f48,param_1 + 0x118);
  FUN_00640420(s_AutoYawCorrection_00725f34,param_1 + 0x11c);
  FUN_00640420(s_AutoPitchCorrection_00725f20,param_1 + 0x120);
  FUN_00640420(s_AutoExtraCorrection_00725f0c,param_1 + 0x124);
  FUN_00640420(s_AutoMinDist_PC_00725efc,param_1 + 0x128);
  FUN_00640420(s_AutoMaxDist_PC_00725eec,param_1 + 300);
  FUN_00640420(s_TargetSpeed_00725ee0,param_1 + 0x130);
  FUN_00640420(s_TargetAccel_00725ed4,param_1 + 0x134);
  FUN_00640420(s_TargetMinDist_00725ec4,param_1 + 0x138);
  FUN_00640420(s_TargetMaxDist_00725eb4,param_1 + 0x13c);
  FUN_00640420(s_TargetMinPitch_00725ea4,param_1 + 0x140);
  FUN_00640420(s_TargetBestPitch_00725e94,param_1 + 0x144);
  FUN_00640420(s_TargetMaxPitch_00725e84,param_1 + 0x148);
  FUN_006405b0(s_AllowManualOverride_00725e70,param_1 + 0x154);
  FUN_00640420(s_ManualPitchSpeed_00725e5c,param_1 + 0x158);
  FUN_00640420(s_ManualYawSpeed_00725e4c,param_1 + 0x15c);
  FUN_00640420(s_ManualMinPitch_00725e3c,param_1 + 0x160);
  FUN_00640420(s_ManualMaxPitch_00725e2c,param_1 + 0x164);
  FUN_006405b0(s_ManualInvertPitch_00725e18,param_1 + 0x168);
  FUN_006403a0(s_FirstPersonOffset_00725e04,param_1 + 0x194);
  FUN_00640420(s_PCFocusHeight_00725df4,param_1 + 0x1bc);
  FUN_00640420(s_LookAheadTime_00725de4,param_1 + 0x1c0);
  FUN_00640420(s_CameraSize_00725dd8,param_1 + 0x1c4);
  FUN_00640420(s_ObstacleAvoidanceWeight_00725dc0,param_1 + 0x1c8);
  FUN_006403a0(s_LookSpring_00725db4,param_1 + 0x1cc);
  FUN_00640420(s_FOVSpeed_00725da8,param_1 + 0x1d8);
  FUN_00640420(s_PopDistance_00725d9c,param_1 + 0x1dc);
  FUN_00640420(s_ViewXFOV_00725d90,param_1 + 0x1e0);
  FUN_00640420(s_ViewZFar_00725d84,param_1 + 0x1e4);
  FUN_00640420(s_ViewZNear_00725d78,param_1 + 0x1e8);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

