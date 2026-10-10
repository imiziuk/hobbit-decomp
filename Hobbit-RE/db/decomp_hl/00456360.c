
undefined4 * __thiscall FUN_00456360(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_250 [128];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00406a80();
  *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 1;
  iVar1 = FUN_00647e40(param_3,s_SingleShot_00725358);
  if (iVar1 == 0) {
    uStack_4 = *(undefined4 *)(param_1 + 0x120);
    *param_2 = 3;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_bIsCinematic_00725348);
  if (iVar1 == 0) {
    uStack_4 = *(undefined4 *)(param_1 + 0x124);
    *param_2 = 3;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647ed0(param_3,s_RedToGreen_Use_As_New_Default_0072531c);
  if (iVar1 == 0) {
    uStack_4 = *(undefined4 *)(param_1 + 0x1bc);
    *param_2 = 3;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_RedToGreen_AudioTrack_0072544c);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 300);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_RedToGreen_Track_00725290);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x184);
    }
    else {
      iVar1 = FUN_00647e40(param_3,s_RedToGreen_Suite_00725438);
      if (iVar1 != 0) {
        iVar1 = FUN_00647e40(param_3,s_RedToGreen_Intensity_007252a4);
        if (iVar1 == 0) {
          uStack_c = *(undefined4 *)(param_1 + 0x1b0);
LAB_004569fd:
          *param_2 = 1;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_RedToGreen_FadeOutTime_00725304);
        if (iVar1 == 0) {
          uStack_8 = *(undefined4 *)(param_1 + 0x1c0);
          *param_2 = 2;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_RedToGreen_FadeInTime_007252ec);
        if (iVar1 != 0) {
          iVar1 = FUN_00647e40(param_3,s_RedToGreen_LoopCount_007252bc);
          if (iVar1 == 0) {
            uStack_c = *(undefined4 *)(param_1 + 0x1c8);
            goto LAB_004569fd;
          }
          iVar1 = FUN_00647e40(param_3,s_RedToGreen_TargetVolume_007252d4);
          if (iVar1 == 0) {
            uStack_8 = *(undefined4 *)(param_1 + 0x2c4);
            *param_2 = 2;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar1 = FUN_00647e40(param_3,s_RedToGreen_DefaultState_00725420);
          if (iVar1 == 0) {
            FUN_00647d70(auStack_250,*(undefined4 *)(param_1 + 0x250),0x200);
            *param_2 = 0xd;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar1 = FUN_00647ed0(param_3,s_GreenToRed_Use_As_New_Default_00725264);
          if (iVar1 == 0) {
            uStack_4 = *(undefined4 *)(param_1 + 0x2b4);
            *param_2 = 3;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar1 = FUN_00647e40(param_3,s_GreenToRed_AudioTrack_007253b0);
          if (iVar1 == 0) {
            FUN_00647d70(auStack_250,*(undefined4 *)(param_1 + 0x1cc),0x200);
            *param_2 = 0xd;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar1 = FUN_00647e40(param_3,s_GreenToRed_Track_007251d8);
          if (iVar1 == 0) {
            uVar2 = *(undefined4 *)(param_1 + 0x224);
          }
          else {
            iVar1 = FUN_00647e40(param_3,s_GreenToRed_Suite_0072539c);
            if (iVar1 != 0) {
              iVar1 = FUN_00647e40(param_3,s_GreenToRed_Intensity_007251ec);
              if (iVar1 == 0) {
                uStack_c = *(undefined4 *)(param_1 + 0x2a8);
                *param_2 = 1;
                puVar3 = auStack_250;
                puVar4 = param_2 + 2;
                for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *puVar4 = *puVar3;
                  puVar3 = puVar3 + 1;
                  puVar4 = puVar4 + 1;
                }
                FUN_00480f60(auStack_50);
                FUN_00425250(&uStack_38);
                FUN_004357e0(&uStack_34);
                FUN_004357e0(auStack_28);
                param_2[0x91] = uStack_14;
                param_2[0x90] = uStack_18;
                param_2[0x92] = uStack_10;
                param_2[0x94] = uStack_8;
                param_2[0x93] = uStack_c;
                param_2[0x95] = uStack_4;
                return param_2;
              }
              iVar1 = FUN_00647e40(param_3,s_GreenToRed_FadeOutTime_0072524c);
              if (iVar1 == 0) {
                uStack_8 = *(undefined4 *)(param_1 + 0x2b8);
              }
              else {
                iVar1 = FUN_00647e40(param_3,s_GreenToRed_FadeInTime_00725234);
                if (iVar1 == 0) {
                  uStack_8 = *(undefined4 *)(param_1 + 700);
                  *param_2 = 2;
                  goto LAB_00456768;
                }
                iVar1 = FUN_00647e40(param_3,s_GreenToRed_LoopCount_00725204);
                if (iVar1 == 0) {
                  uStack_c = *(undefined4 *)(param_1 + 0x2c0);
                  goto LAB_004569fd;
                }
                iVar1 = FUN_00647e40(param_3,s_GreenToRed_TargetVolume_0072521c);
                if (iVar1 != 0) {
                  iVar1 = FUN_00647e40(param_3,s_GreenToRed_DefaultState_00725364);
                  if (iVar1 != 0) {
                    FUN_004e37d0(param_2,param_3);
                    return param_2;
                  }
                  FUN_00647d70(auStack_250,*(undefined4 *)(param_1 + 0x27c),0x200);
                  *param_2 = 0xd;
                  puVar3 = auStack_250;
                  puVar4 = param_2 + 2;
                  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                    *puVar4 = *puVar3;
                    puVar3 = puVar3 + 1;
                    puVar4 = puVar4 + 1;
                  }
                  FUN_004357e0(auStack_50);
                  FUN_004357e0(auStack_44);
                  *(undefined1 *)((int)param_2 + 0x223) = uStack_35;
                  *(undefined1 *)((int)param_2 + 0x222) = uStack_36;
                  *(undefined1 *)((int)param_2 + 0x221) = uStack_37;
                  *(undefined1 *)(param_2 + 0x88) = uStack_38;
                  param_2[0x89] = uStack_34;
                  param_2[0x8a] = uStack_30;
                  param_2[0x8b] = uStack_2c;
                  goto LAB_00456b1f;
                }
                uStack_8 = *(undefined4 *)(param_1 + 0x2c8);
              }
              *param_2 = 2;
              puVar3 = auStack_250;
              puVar4 = param_2 + 2;
              for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar4 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              FUN_00480f60(auStack_50);
              FUN_00425250(&uStack_38);
              FUN_004357e0(&uStack_34);
LAB_00456b1f:
              FUN_004357e0(auStack_28);
              param_2[0x90] = uStack_18;
              param_2[0x91] = uStack_14;
              param_2[0x92] = uStack_10;
              param_2[0x93] = uStack_c;
              param_2[0x94] = uStack_8;
              param_2[0x95] = uStack_4;
              return param_2;
            }
            uVar2 = *(undefined4 *)(param_1 + 0x1f8);
          }
          FUN_00647d70(auStack_250,uVar2,0x200);
          *param_2 = 0xd;
LAB_00456768:
          puVar3 = auStack_250;
          puVar4 = param_2 + 2;
          for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          FUN_00480f60(auStack_50);
          FUN_00425250(&uStack_38);
          FUN_004357e0(&uStack_34);
          FUN_004357e0(auStack_28);
          param_2[0x90] = uStack_18;
          param_2[0x91] = uStack_14;
          param_2[0x92] = uStack_10;
          param_2[0x93] = uStack_c;
          param_2[0x94] = uStack_8;
          param_2[0x95] = uStack_4;
          return param_2;
        }
        uStack_8 = *(undefined4 *)(param_1 + 0x1c4);
        *param_2 = 2;
        goto LAB_004564b8;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x158);
    }
  }
  FUN_00647d70(auStack_250,uVar2,0x200);
  *param_2 = 0xd;
LAB_004564b8:
  FUN_00424770(auStack_250);
  return param_2;
}

