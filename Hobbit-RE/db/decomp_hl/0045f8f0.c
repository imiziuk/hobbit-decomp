
undefined4 * __thiscall FUN_0045f8f0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_250 [540];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_00647e40(param_3,s_AutoSpeed_00725f9c);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_8 = *(undefined4 *)(param_1 + 0x100);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_AutoAccel_00725f90);
    if (iVar1 == 0) {
      FUN_00425440();
      uStack_8 = *(undefined4 *)(param_1 + 0x104);
      goto LAB_0045f94a;
    }
    iVar1 = FUN_00647e40(param_3,s_AutoMinDist_00725f84);
    if (iVar1 == 0) {
      FUN_00425440();
      uStack_8 = *(undefined4 *)(param_1 + 0x108);
      goto LAB_0045f9a3;
    }
    iVar1 = FUN_00647e40(param_3,s_AutoMaxDist_00725f78);
    if (iVar1 == 0) {
      FUN_00425440();
      uStack_8 = *(undefined4 *)(param_1 + 0x10c);
    }
    else {
      FUN_00425440();
      iVar1 = FUN_00647e40(param_3,s_AutoMinPitch_00725f68);
      if (iVar1 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0x110);
        *param_2 = 10;
        FUN_00424770(auStack_250);
        return param_2;
      }
      FUN_00425440();
      iVar1 = FUN_00647e40(param_3,s_AutoBestPitch_00725f58);
      if (iVar1 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0x114);
        *param_2 = 10;
        FUN_00424770(auStack_250);
        return param_2;
      }
      FUN_00425440();
      iVar1 = FUN_00647e40(param_3,s_AutoMaxPitch_00725f48);
      if (iVar1 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0x118);
        *param_2 = 10;
        goto LAB_004601f5;
      }
      iVar1 = FUN_00647e40(param_3,s_AutoYawCorrection_00725f34);
      if (iVar1 == 0) {
        FUN_00425440();
        uStack_8 = *(undefined4 *)(param_1 + 0x11c);
LAB_0045f94a:
        *param_2 = 2;
LAB_0045f966:
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_AutoPitchCorrection_00725f20);
      if (iVar1 == 0) {
        FUN_00425440();
        uStack_8 = *(undefined4 *)(param_1 + 0x120);
LAB_0045f9a3:
        *param_2 = 2;
LAB_0045f9bf:
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_AutoExtraCorrection_00725f0c);
      if (iVar1 == 0) {
        FUN_00425440();
        uStack_8 = *(undefined4 *)(param_1 + 0x124);
      }
      else {
        iVar1 = FUN_00647e40(param_3,s_AutoMinDist_PC_00725efc);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_8 = *(undefined4 *)(param_1 + 0x128);
          goto LAB_0045f94a;
        }
        iVar1 = FUN_00647e40(param_3,s_AutoMaxDist_PC_00725eec);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_8 = *(undefined4 *)(param_1 + 300);
          goto LAB_0045f9a3;
        }
        iVar1 = FUN_00647e40(param_3,s_TargetSpeed_00725ee0);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_8 = *(undefined4 *)(param_1 + 0x130);
        }
        else {
          iVar1 = FUN_00647e40(param_3,s_TargetAccel_00725ed4);
          if (iVar1 == 0) {
            FUN_00406a80();
            uStack_8 = *(undefined4 *)(param_1 + 0x134);
            goto LAB_0045f94a;
          }
          iVar1 = FUN_00647e40(param_3,s_TargetMinDist_00725ec4);
          if (iVar1 == 0) {
            FUN_00406a80();
            uStack_8 = *(undefined4 *)(param_1 + 0x138);
            goto LAB_0045f9a3;
          }
          iVar1 = FUN_00647e40(param_3,s_TargetMaxDist_00725eb4);
          if (iVar1 == 0) {
            FUN_00406a80();
            uStack_8 = *(undefined4 *)(param_1 + 0x13c);
          }
          else {
            FUN_00406a80();
            iVar1 = FUN_00647e40(param_3,s_TargetMinPitch_00725ea4);
            if (iVar1 == 0) {
              uStack_8 = *(undefined4 *)(param_1 + 0x140);
LAB_0045fd8f:
              *param_2 = 10;
              goto LAB_0045f966;
            }
            FUN_00406a80();
            iVar1 = FUN_00647e40(param_3,s_TargetBestPitch_00725e94);
            if (iVar1 == 0) {
              uStack_8 = *(undefined4 *)(param_1 + 0x144);
LAB_004600c4:
              *param_2 = 10;
              goto LAB_0045f9bf;
            }
            FUN_00406a80();
            iVar1 = FUN_00647e40(param_3,s_TargetMaxPitch_00725e84);
            if (iVar1 == 0) {
              uStack_8 = *(undefined4 *)(param_1 + 0x148);
              *param_2 = 10;
              goto LAB_004601f5;
            }
            iVar1 = FUN_00647e40(param_3,s_AllowManualOverride_00725e70);
            if (iVar1 == 0) {
              FUN_00406a80();
              uStack_4 = *(undefined4 *)(param_1 + 0x154);
              *param_2 = 3;
              goto LAB_0045f966;
            }
            iVar1 = FUN_00647e40(param_3,s_ManualPitchSpeed_00725e5c);
            if (iVar1 == 0) {
              FUN_00406a80();
              uStack_8 = *(undefined4 *)(param_1 + 0x158);
              goto LAB_0045f9a3;
            }
            iVar1 = FUN_00647e40(param_3,s_ManualYawSpeed_00725e4c);
            if (iVar1 == 0) {
              FUN_00406a80();
              uStack_8 = *(undefined4 *)(param_1 + 0x15c);
              goto LAB_004601e0;
            }
            FUN_00406a80();
            iVar1 = FUN_00647e40(param_3,s_ManualMinPitch_00725e3c);
            if (iVar1 == 0) {
              uStack_8 = *(undefined4 *)(param_1 + 0x160);
              goto LAB_0045fd8f;
            }
            FUN_00406a80();
            iVar1 = FUN_00647e40(param_3,s_ManualMaxPitch_00725e2c);
            if (iVar1 == 0) {
              uStack_8 = *(undefined4 *)(param_1 + 0x164);
              goto LAB_004600c4;
            }
            iVar1 = FUN_00647e40(param_3,s_ManualInvertPitch_00725e18);
            if (iVar1 == 0) {
              FUN_00406a80();
              uStack_4 = *(undefined4 *)(param_1 + 0x168);
              *param_2 = 3;
              FUN_00424770(auStack_250);
              return param_2;
            }
            FUN_00406a80();
            iVar1 = FUN_00647cf0(s_FirstPersonOffset_00725e04);
            iVar2 = FUN_00647e80(param_3,s_FirstPersonOffset_00725e04,iVar1);
            if (iVar2 == 0) {
              iVar2 = FUN_00647cf0(param_3);
              if (iVar1 == iVar2) {
                uStack_34 = *(undefined4 *)(param_1 + 0x194);
                uStack_30 = *(undefined4 *)(param_1 + 0x198);
                uStack_2c = *(undefined4 *)(param_1 + 0x19c);
                *param_2 = 8;
                goto LAB_0045f9bf;
              }
              iVar1 = iVar1 + param_3;
              iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
              if (iVar2 == 0) {
                uStack_8 = *(undefined4 *)(param_1 + 0x194);
              }
              else {
                iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
                if (iVar2 == 0) {
                  uStack_8 = *(undefined4 *)(param_1 + 0x198);
                  *param_2 = 2;
                  goto LAB_0045f9bf;
                }
                iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
                if (iVar1 != 0) goto LAB_0045ff29;
                uStack_8 = *(undefined4 *)(param_1 + 0x19c);
              }
              *param_2 = 2;
              goto LAB_0045f9bf;
            }
LAB_0045ff29:
            iVar1 = FUN_00647e40(param_3,s_PCFocusHeight_00725df4);
            if (iVar1 == 0) {
              FUN_00406a80();
              uStack_8 = *(undefined4 *)(param_1 + 0x1bc);
            }
            else {
              iVar1 = FUN_00647e40(param_3,s_LookAheadTime_00725de4);
              if (iVar1 == 0) {
                FUN_00406a80();
                uStack_8 = *(undefined4 *)(param_1 + 0x1c0);
                goto LAB_0045f94a;
              }
              iVar1 = FUN_00647e40(param_3,s_CameraSize_00725dd8);
              if (iVar1 == 0) {
                FUN_00406a80();
                uStack_8 = *(undefined4 *)(param_1 + 0x1c4);
                goto LAB_0045f9a3;
              }
              iVar1 = FUN_00647e40(param_3,s_ObstacleAvoidanceWeight_00725dc0);
              if (iVar1 == 0) {
                FUN_00406a80();
                uStack_8 = *(undefined4 *)(param_1 + 0x1c8);
              }
              else {
                FUN_00406a80();
                iVar1 = FUN_00647cf0(s_LookSpring_00725db4);
                iVar2 = FUN_00647e80(param_3,s_LookSpring_00725db4,iVar1);
                if (iVar2 == 0) {
                  iVar2 = FUN_00647cf0(param_3);
                  if (iVar1 == iVar2) {
                    FUN_004357e0((undefined4 *)(param_1 + 0x1cc));
                    *param_2 = 8;
                    goto LAB_0045f966;
                  }
                  iVar1 = iVar1 + param_3;
                  iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
                  if (iVar2 == 0) {
                    uStack_8 = *(undefined4 *)(param_1 + 0x1cc);
                  }
                  else {
                    iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
                    if (iVar2 == 0) {
                      uStack_8 = *(undefined4 *)(param_1 + 0x1d0);
                    }
                    else {
                      iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
                      if (iVar1 != 0) goto LAB_004600a3;
                      uStack_8 = *(undefined4 *)(param_1 + 0x1d4);
                    }
                  }
                  *param_2 = 2;
                  goto LAB_0045f966;
                }
LAB_004600a3:
                FUN_00425440();
                iVar1 = FUN_00647e40(param_3,s_FOVSpeed_00725da8);
                if (iVar1 == 0) {
                  uStack_8 = *(undefined4 *)(param_1 + 0x1d8);
                  goto LAB_004600c4;
                }
                iVar1 = FUN_00647e40(param_3,s_PopDistance_00725d9c);
                if (iVar1 == 0) {
                  FUN_00425440();
                  uStack_8 = *(undefined4 *)(param_1 + 0x1dc);
                }
                else {
                  iVar1 = FUN_00647e40(param_3,s_ViewXFOV_00725d90);
                  if (iVar1 == 0) {
                    FUN_00406a80();
                    uStack_8 = *(undefined4 *)(param_1 + 0x1e0);
                    *param_2 = 2;
                    FUN_00424770(auStack_250);
                    return param_2;
                  }
                  iVar1 = FUN_00647e40(param_3,s_ViewZFar_00725d84);
                  if (iVar1 == 0) {
                    FUN_00406a80();
                    uStack_8 = *(undefined4 *)(param_1 + 0x1e4);
                    *param_2 = 2;
                    FUN_00424770(auStack_250);
                    return param_2;
                  }
                  iVar1 = FUN_00647e40(param_3,s_ViewZNear_00725d78);
                  if (iVar1 != 0) {
                    FUN_004e37d0(param_2,param_3);
                    return param_2;
                  }
                  FUN_00406a80();
                  uStack_8 = *(undefined4 *)(param_1 + 0x1e8);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_004601e0:
  *param_2 = 2;
LAB_004601f5:
  FUN_00424770(auStack_250);
  return param_2;
}

