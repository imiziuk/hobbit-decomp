
undefined4 __thiscall FUN_00455a20(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00647e40(param_2,s_SingleShot_00725358);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_3 + 0x254);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_bIsCinematic_00725348);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_3 + 0x254);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Use_As_New_Default_00725540);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_3 + 0x254);
    *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_3 + 0x254);
    return 1;
  }
  *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 1;
  iVar1 = FUN_00647e40(param_2,s_Switch_Type_00725534);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_3 + 0x24c);
    *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_3 + 0x24c);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_AudioTrack_00725528);
  if (iVar1 == 0) {
    FUN_0064a2e0(param_3 + 8);
    FUN_0064a2e0(param_3 + 8);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Track_00725520);
  if (iVar1 == 0) {
    FUN_0064a2e0(param_3 + 8);
    FUN_0064a2e0(param_3 + 8);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Suite_00725518);
  if (iVar1 == 0) {
    FUN_0064a2e0(param_3 + 8);
    FUN_0064a2e0(param_3 + 8);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Intensity_0072550c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_3 + 0x24c);
    *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_3 + 0x24c);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_FadeOutTime_00725500);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_3 + 0x250);
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_3 + 0x250);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_FadeInTime_007254f4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_3 + 0x250);
    *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_3 + 0x250);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_LoopCount_007254e8);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_3 + 0x24c);
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_3 + 0x24c);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Trigger_Action_Type_007254d4);
  if (iVar1 == 0) {
    param_3 = param_3 + 8;
    iVar1 = FUN_00647e40(s_SWITCH_TO_TRACK_007254c4,param_3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = 0;
      *(undefined4 *)(param_1 + 0x2ac) = 0;
      return 1;
    }
    iVar1 = FUN_00647e40(s_SWITCH_TO_SUITE_007254b4,param_3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = 1;
      *(undefined4 *)(param_1 + 0x2ac) = 1;
      return 1;
    }
    iVar1 = FUN_00647e40(s_INCREASE_INTENSITY_007254a0,param_3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = 2;
      *(undefined4 *)(param_1 + 0x2ac) = 2;
      return 1;
    }
    iVar1 = FUN_00647e40(s_DECREASE_INTENSITY_0072548c,param_3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = 3;
      *(undefined4 *)(param_1 + 0x2ac) = 3;
      return 1;
    }
    iVar1 = FUN_00647e40(s_SET_INTENSITY_0072547c,param_3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = 4;
      *(undefined4 *)(param_1 + 0x2ac) = 4;
      return 1;
    }
  }
  else {
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_Use_As_New_Default_0072531c);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_3 + 0x254);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_Switch_Type_00725464);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_3 + 0x24c);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_AudioTrack_0072544c);
    if (iVar1 == 0) {
      FUN_0064a2e0(param_3 + 8);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_Track_00725290);
    if (iVar1 == 0) {
      FUN_0064a2e0(param_3 + 8);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_Suite_00725438);
    if (iVar1 == 0) {
      FUN_0064a2e0(param_3 + 8);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_Intensity_007252a4);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_3 + 0x24c);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_FadeOutTime_00725304);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_3 + 0x250);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_FadeInTime_007252ec);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_3 + 0x250);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_LoopCount_007252bc);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_3 + 0x24c);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_TargetVolume_007252d4);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_3 + 0x250);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_DefaultState_00725420);
    if (iVar1 == 0) {
      FUN_0064a2e0(param_3 + 8);
      return 1;
    }
    iVar1 = FUN_00647e40(param_2,s_RedToGreen_Trigger_Action_Type_00725400);
    if (iVar1 == 0) {
      param_3 = param_3 + 8;
      iVar1 = FUN_00647e40(s_SWITCH_TO_TRACK_007254c4,param_3);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1b4) = 0;
        return 1;
      }
      iVar1 = FUN_00647e40(s_SWITCH_TO_SUITE_007254b4,param_3);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1b4) = 1;
        return 1;
      }
      iVar1 = FUN_00647e40(s_INCREASE_INTENSITY_007254a0,param_3);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1b4) = 2;
        return 1;
      }
      iVar1 = FUN_00647e40(s_DECREASE_INTENSITY_0072548c,param_3);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1b4) = 3;
        return 1;
      }
      iVar1 = FUN_00647e40(s_SET_INTENSITY_0072547c,param_3);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1b4) = 4;
        return 1;
      }
      iVar1 = FUN_00647e40(s_SET_DEFAULT_STATE_007253ec,param_3);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1b4) = 5;
        return 1;
      }
      iVar1 = FUN_00647e40(s_SET_VOLUME_007253e0,param_3);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1b4) = 6;
        return 1;
      }
    }
    else {
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_Use_As_New_Default_00725264);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_3 + 0x254);
        return 1;
      }
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_Switch_Type_007253c8);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_3 + 0x24c);
        return 1;
      }
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_AudioTrack_007253b0);
      if (iVar1 == 0) {
        FUN_0064a2e0(param_3 + 8);
        return 1;
      }
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_Track_007251d8);
      if (iVar1 == 0) {
        FUN_0064a2e0(param_3 + 8);
        return 1;
      }
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_Suite_0072539c);
      if (iVar1 == 0) {
        FUN_0064a2e0(param_3 + 8);
        return 1;
      }
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_Intensity_007251ec);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_3 + 0x24c);
        return 1;
      }
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_FadeOutTime_0072524c);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_3 + 0x250);
        return 1;
      }
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_FadeInTime_00725234);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_3 + 0x250);
        return 1;
      }
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_LoopCount_00725204);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_3 + 0x24c);
        return 1;
      }
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_TargetVolume_0072521c);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_3 + 0x250);
        return 1;
      }
      iVar1 = FUN_00647e40(param_2,s_GreenToRed_Trigger_Action_Type_0072537c);
      if (iVar1 == 0) {
        param_3 = param_3 + 8;
        iVar1 = FUN_00647e40(s_SWITCH_TO_TRACK_007254c4,param_3);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x2ac) = 0;
          return 1;
        }
        iVar1 = FUN_00647e40(s_SWITCH_TO_SUITE_007254b4,param_3);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x2ac) = 1;
          return 1;
        }
        iVar1 = FUN_00647e40(s_INCREASE_INTENSITY_007254a0,param_3);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x2ac) = 2;
          return 1;
        }
        iVar1 = FUN_00647e40(s_DECREASE_INTENSITY_0072548c,param_3);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x2ac) = 3;
          return 1;
        }
        iVar1 = FUN_00647e40(s_SET_INTENSITY_0072547c,param_3);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x2ac) = 4;
          return 1;
        }
        iVar1 = FUN_00647e40(s_SET_DEFAULT_STATE_007253ec,param_3);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x2ac) = 5;
          return 1;
        }
        iVar1 = FUN_00647e40(s_SET_VOLUME_007253e0,param_3);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x2ac) = 6;
          return 1;
        }
      }
      else {
        iVar1 = FUN_00647e40(param_2,s_GreenToRed_DefaultState_00725364);
        if (iVar1 == 0) {
          FUN_0064a2e0(param_3 + 8);
          return 1;
        }
        FUN_004e3380(param_2,param_3);
      }
    }
  }
  return 1;
}

