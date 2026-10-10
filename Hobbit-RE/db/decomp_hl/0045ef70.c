
undefined4 __thiscall FUN_0045ef70(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00647e40(param_2,s_AutoSpeed_00725f9c);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x100) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoAccel_00725f90);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x104) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoMinDist_00725f84);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x108) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoMaxDist_00725f78);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x10c) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoMinPitch_00725f68);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    *(int *)(param_1 + 0x110) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoBestPitch_00725f58);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    *(int *)(param_1 + 0x114) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoMaxPitch_00725f48);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    *(int *)(param_1 + 0x118) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoYawCorrection_00725f34);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x11c) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoPitchCorrection_00725f20);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x120) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoExtraCorrection_00725f0c);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x124) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoMinDist_PC_00725efc);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x128) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AutoMaxDist_PC_00725eec);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 300) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_TargetSpeed_00725ee0);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x130) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_TargetAccel_00725ed4);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x134) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_TargetMinDist_00725ec4);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x138) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_TargetMaxDist_00725eb4);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x13c) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_TargetMinPitch_00725ea4);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    *(int *)(param_1 + 0x140) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_TargetBestPitch_00725e94);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    *(int *)(param_1 + 0x144) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_TargetMaxPitch_00725e84);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    *(int *)(param_1 + 0x148) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AllowManualOverride_00725e70);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0x154) = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ManualPitchSpeed_00725e5c);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x158) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ManualYawSpeed_00725e4c);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x15c) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ManualMinPitch_00725e3c);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    *(int *)(param_1 + 0x160) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ManualMaxPitch_00725e2c);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    *(int *)(param_1 + 0x164) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ManualInvertPitch_00725e18);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0x168) = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647cf0(s_FirstPersonOffset_00725e04);
  iVar2 = FUN_00647e80(param_2,s_FirstPersonOffset_00725e04,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iVar1 == iVar2) {
      if (*param_3 == 8) {
        *(int *)(param_1 + 0x194) = param_3[0x89];
        *(int *)(param_1 + 0x198) = param_3[0x8a];
        *(int *)(param_1 + 0x19c) = param_3[0x8b];
        return 1;
      }
    }
    else {
      iVar1 = iVar1 + param_2;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x194) = param_3[0x94];
          return 1;
        }
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 0x198) = param_3[0x94];
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if ((iVar1 == 0) && (*param_3 == 2)) {
            *(int *)(param_1 + 0x19c) = param_3[0x94];
            return 1;
          }
        }
      }
    }
  }
  iVar1 = FUN_00647e40(param_2,s_PCFocusHeight_00725df4);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x1bc) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_LookAheadTime_00725de4);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x1c0) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_CameraSize_00725dd8);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x1c4) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ObstacleAvoidanceWeight_00725dc0);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x1c8) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647cf0(s_LookSpring_00725db4);
  iVar2 = FUN_00647e80(param_2,s_LookSpring_00725db4,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iVar1 == iVar2) {
      if (*param_3 == 8) {
        *(int *)(param_1 + 0x1cc) = param_3[0x89];
        *(int *)(param_1 + 0x1d0) = param_3[0x8a];
        *(int *)(param_1 + 0x1d4) = param_3[0x8b];
        return 1;
      }
    }
    else {
      iVar1 = iVar1 + param_2;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x1cc) = param_3[0x94];
          return 1;
        }
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 0x1d0) = param_3[0x94];
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if ((iVar1 == 0) && (*param_3 == 2)) {
            *(int *)(param_1 + 0x1d4) = param_3[0x94];
            return 1;
          }
        }
      }
    }
  }
  iVar1 = FUN_00647e40(param_2,s_FOVSpeed_00725da8);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    *(int *)(param_1 + 0x1d8) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_PopDistance_00725d9c);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x1dc) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ViewXFOV_00725d90);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x1e0) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ViewZFar_00725d84);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x1e4) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ViewZNear_00725d78);
  if (iVar1 != 0) {
    uVar3 = FUN_004e3380(param_2,param_3);
    return uVar3;
  }
  if (*param_3 != 2) {
    return 0;
  }
  *(int *)(param_1 + 0x1e8) = param_3[0x94];
  return 1;
}

