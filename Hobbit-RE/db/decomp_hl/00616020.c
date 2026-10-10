
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00616020(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_27c [4];
  undefined1 auStack_278 [4];
  undefined1 auStack_274 [4];
  undefined1 auStack_270 [4];
  undefined1 auStack_26c [4];
  undefined1 auStack_268 [4];
  undefined4 uStack_264;
  undefined4 auStack_25c [128];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e46d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649920(auStack_27c,s__s_Head_Volume_007458b4,*(undefined4 *)(param_1 + 0x10));
  uStack_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_24 = *(undefined4 *)(param_1 + 0x90);
    uStack_20 = *(undefined4 *)(param_1 + 0x94);
  }
  else {
    FUN_00649920(auStack_27c,s__s_Ceiling_Volume_0074978c,*(undefined4 *)(param_1 + 0x10));
    uStack_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    uStack_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 != 0) {
      FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Min_Start_Velocit_00749758,
                   *(undefined4 *)(param_1 + 0x10));
      uStack_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00406a80();
        fStack_14 = *(float *)(param_1 + 0x530);
      }
      else {
        FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Max_Start_Velocit_00749734,
                     *(undefined4 *)(param_1 + 0x10));
        uStack_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        uStack_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00406a80();
          fStack_14 = *(float *)(param_1 + 0x534);
        }
        else {
          FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Min_End_Velocity_00749714,
                       *(undefined4 *)(param_1 + 0x10));
          uStack_4 = 4;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(param_3,uVar1);
          uStack_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            FUN_00406a80();
            fStack_14 = *(float *)(param_1 + 0x538);
          }
          else {
            FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Max_End_Velocity_007496f4,
                         *(undefined4 *)(param_1 + 0x10));
            uStack_4 = 5;
            uVar1 = FUN_00649940();
            iVar2 = FUN_00647e40(param_3,uVar1);
            uStack_4 = 0xffffffff;
            FUN_00649950();
            if (iVar2 == 0) {
              FUN_00406a80();
              fStack_14 = *(float *)(param_1 + 0x53c);
            }
            else {
              FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Min_Lifetime_007496d8,
                           *(undefined4 *)(param_1 + 0x10));
              uStack_4 = 6;
              uVar1 = FUN_00649940();
              iVar2 = FUN_00647e40(param_3,uVar1);
              uStack_4 = 0xffffffff;
              FUN_00649950();
              if (iVar2 == 0) {
                FUN_00406a80();
                fStack_14 = *(float *)(param_1 + 0x540);
              }
              else {
                FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Max_Lifetime_007496bc,
                             *(undefined4 *)(param_1 + 0x10));
                uStack_4 = 7;
                uVar1 = FUN_00649940();
                iVar2 = FUN_00647e40(param_3,uVar1);
                uStack_4 = 0xffffffff;
                FUN_00649950();
                if (iVar2 == 0) {
                  FUN_00406a80();
                  fStack_14 = *(float *)(param_1 + 0x544);
                }
                else {
                  FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Min_Breath_In_Tim_00749698,
                               *(undefined4 *)(param_1 + 0x10));
                  uStack_4 = 8;
                  uVar1 = FUN_00649940();
                  iVar2 = FUN_00647e40(param_3,uVar1);
                  uStack_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar2 == 0) {
                    FUN_00406a80();
                    fStack_14 = *(float *)(param_1 + 0x548);
                  }
                  else {
                    FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Max_Breath_In_Tim_00749674,
                                 *(undefined4 *)(param_1 + 0x10));
                    uStack_4 = 9;
                    uVar1 = FUN_00649940();
                    iVar2 = FUN_00647e40(param_3,uVar1);
                    uStack_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar2 == 0) {
                      FUN_00406a80();
                      fStack_14 = *(float *)(param_1 + 0x54c);
                    }
                    else {
                      FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Min_Breath_Out_Ti_00749650,
                                   *(undefined4 *)(param_1 + 0x10));
                      uStack_4 = 10;
                      uVar1 = FUN_00649940();
                      iVar2 = FUN_00647e40(param_3,uVar1);
                      uStack_4 = 0xffffffff;
                      FUN_00649950();
                      if (iVar2 == 0) {
                        FUN_00406a80();
                        fStack_14 = *(float *)(param_1 + 0x550);
                      }
                      else {
                        FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Max_Breath_Out_Ti_0074962c,
                                     *(undefined4 *)(param_1 + 0x10));
                        uStack_4 = 0xb;
                        uVar1 = FUN_00649940();
                        iVar2 = FUN_00647e40(param_3,uVar1);
                        uStack_4 = 0xffffffff;
                        FUN_00649950();
                        if (iVar2 == 0) {
                          FUN_00406a80();
                          fStack_14 = *(float *)(param_1 + 0x554);
                        }
                        else {
                          FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Min_Segment_Start_00749608,
                                       *(undefined4 *)(param_1 + 0x10));
                          uStack_4 = 0xc;
                          uVar1 = FUN_00649940();
                          iVar2 = FUN_00647e40(param_3,uVar1);
                          uStack_4 = 0xffffffff;
                          FUN_00649950();
                          if (iVar2 == 0) {
                            FUN_00406a80();
                            fStack_14 = *(float *)(param_1 + 0x558);
                          }
                          else {
                            FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Max_Segment_Start_007495e4,
                                         *(undefined4 *)(param_1 + 0x10));
                            uStack_4 = 0xd;
                            uVar1 = FUN_00649940();
                            iVar2 = FUN_00647e40(param_3,uVar1);
                            uStack_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar2 == 0) {
                              FUN_00406a80();
                              fStack_14 = *(float *)(param_1 + 0x55c);
                            }
                            else {
                              FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Min_Segment_End_007495c4,
                                           *(undefined4 *)(param_1 + 0x10));
                              uStack_4 = 0xe;
                              uVar1 = FUN_00649940();
                              iVar2 = FUN_00647e40(param_3,uVar1);
                              uStack_4 = 0xffffffff;
                              FUN_00649950();
                              if (iVar2 == 0) {
                                FUN_00406a80();
                                fStack_14 = *(float *)(param_1 + 0x560);
                              }
                              else {
                                FUN_00649920(auStack_27c,s__s_Fire_Tweaks_Max_Segment_End_007495a4,
                                             *(undefined4 *)(param_1 + 0x10));
                                uStack_4 = 0xf;
                                uVar1 = FUN_00649940();
                                iVar2 = FUN_00647e40(param_3,uVar1);
                                uStack_4 = 0xffffffff;
                                FUN_00649950();
                                if (iVar2 != 0) {
                                  FUN_00649920(auStack_27c,
                                               s__s_Fire_Tweaks_Min_Angle_Devianc_00749580,
                                               *(undefined4 *)(param_1 + 0x10));
                                  uStack_4 = 0x10;
                                  uVar1 = FUN_00649940();
                                  iVar2 = FUN_00647e40(param_3,uVar1);
                                  uStack_4 = 0xffffffff;
                                  FUN_00649950();
                                  if (iVar2 == 0) {
                                    FUN_00406a80();
                                    fStack_14 = *(float *)(param_1 + 0x568) * _DAT_006e9560 *
                                                _DAT_006e955c;
                                    uStack_264 = 2;
                                    *param_2 = 2;
                                    FUN_00424770(auStack_25c);
                                    ExceptionList = pvStack_c;
                                    return param_2;
                                  }
                                  FUN_00649920(auStack_27c,
                                               s__s_Fire_Tweaks_Max_Angle_Devianc_0074955c,
                                               *(undefined4 *)(param_1 + 0x10));
                                  uStack_4 = 0x11;
                                  uVar1 = FUN_00649940();
                                  iVar2 = FUN_00647e40(param_3,uVar1);
                                  uStack_4 = 0xffffffff;
                                  FUN_00649950();
                                  if (iVar2 == 0) {
                                    FUN_00406a80();
                                    fStack_14 = *(float *)(param_1 + 0x56c) * _DAT_006e9560 *
                                                _DAT_006e955c;
                                    uStack_264 = 2;
                                    *param_2 = 2;
                                    FUN_00424770(auStack_25c);
                                    ExceptionList = pvStack_c;
                                    return param_2;
                                  }
                                  FUN_00649920(auStack_27c,s__s_Safety_Zone_Count_00749544,
                                               *(undefined4 *)(param_1 + 0x10));
                                  uStack_4 = 0x12;
                                  uVar1 = FUN_00649940();
                                  iVar2 = FUN_00647e40(param_3,uVar1);
                                  uStack_4 = 0xffffffff;
                                  FUN_00649950();
                                  if (iVar2 == 0) {
                                    FUN_00406a80();
                                    uStack_18 = *(undefined4 *)(param_1 + 0x578);
                                    uStack_264 = 1;
                                    *param_2 = 1;
                                    FUN_00424770(auStack_25c);
                                    ExceptionList = pvStack_c;
                                    return param_2;
                                  }
                                  iVar2 = 0;
                                  if (0 < *(int *)(param_1 + 0x578)) {
                                    do {
                                      FUN_00649920(auStack_27c,s__s_Safety_Zone__d_Blocker_00749514,
                                                   *(undefined4 *)(param_1 + 0x10),iVar2);
                                      uStack_4 = 0x13;
                                      uVar1 = FUN_00649940();
                                      iVar3 = FUN_00647e40(param_3,uVar1);
                                      uStack_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (iVar3 == 0) {
                                        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                                        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                                        puVar4 = *(undefined4 **)
                                                  (*(int *)(param_1 + 0x57c) + iVar2 * 4);
                                        uStack_24 = *puVar4;
                                        uStack_20 = puVar4[1];
                                        goto LAB_00616b76;
                                      }
                                      FUN_00649920(auStack_268,s__s_Safety_Zone__d_Glow_007494fc,
                                                   *(undefined4 *)(param_1 + 0x10),iVar2);
                                      uStack_4 = 0x14;
                                      uVar1 = FUN_00649940();
                                      iVar3 = FUN_00647e40(param_3,uVar1);
                                      uStack_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (iVar3 == 0) {
                                        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                                        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                                        uStack_264 = 0xf;
                                        iVar2 = *(int *)(*(int *)(param_1 + 0x57c) + iVar2 * 4);
                                        uStack_24 = *(undefined4 *)(iVar2 + 8);
                                        uStack_20 = *(undefined4 *)(iVar2 + 0xc);
                                        *param_2 = 0xf;
                                        puVar4 = auStack_25c;
                                        puVar5 = param_2 + 2;
                                        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                                          *puVar5 = *puVar4;
                                          puVar4 = puVar4 + 1;
                                          puVar5 = puVar5 + 1;
                                        }
                                        FUN_00480f60(auStack_5c);
                                        FUN_00425250(&uStack_44);
                                        FUN_004357e0(&uStack_40);
                                        FUN_004357e0(&uStack_34);
                                        param_2[0x92] = uStack_1c;
                                        param_2[0x90] = uStack_24;
                                        param_2[0x91] = uStack_20;
                                        param_2[0x95] = uStack_10;
                                        param_2[0x93] = uStack_18;
                                        param_2[0x94] = fStack_14;
                                        ExceptionList = pvStack_c;
                                        return param_2;
                                      }
                                      FUN_00649920(auStack_270,s__s_Safety_Zone__d_Volume_007494e0,
                                                   *(undefined4 *)(param_1 + 0x10),iVar2);
                                      uStack_4 = 0x15;
                                      uVar1 = FUN_00649940();
                                      iVar3 = FUN_00647e40(param_3,uVar1);
                                      uStack_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (iVar3 == 0) {
                                        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                                        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                                        uStack_264 = 0xf;
                                        iVar2 = *(int *)(*(int *)(param_1 + 0x57c) + iVar2 * 4);
                                        uStack_24 = *(undefined4 *)(iVar2 + 0x10);
                                        uStack_20 = *(undefined4 *)(iVar2 + 0x14);
                                        *param_2 = 0xf;
                                        puVar4 = auStack_25c;
                                        puVar5 = param_2 + 2;
                                        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                                          *puVar5 = *puVar4;
                                          puVar4 = puVar4 + 1;
                                          puVar5 = puVar5 + 1;
                                        }
                                        FUN_00480f60(auStack_5c);
                                        FUN_00425250(&uStack_44);
                                        FUN_004357e0(&uStack_40);
LAB_00616f74:
                                        FUN_004357e0(&uStack_34);
                                        param_2[0x90] = uStack_24;
                                        param_2[0x91] = uStack_20;
                                        param_2[0x92] = uStack_1c;
                                        param_2[0x93] = uStack_18;
                                        param_2[0x94] = fStack_14;
                                        param_2[0x95] = uStack_10;
                                        ExceptionList = pvStack_c;
                                        return param_2;
                                      }
                                      FUN_00649920(auStack_278,s__s_Safety_Zone__d_Flags_007494c8,
                                                   *(undefined4 *)(param_1 + 0x10),iVar2);
                                      uStack_4 = 0x16;
                                      uVar1 = FUN_00649940();
                                      iVar3 = FUN_00647e40(param_3,uVar1);
                                      uStack_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (iVar3 == 0) {
                                        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                                        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                                        uStack_264 = 1;
                                        uStack_18 = *(undefined4 *)
                                                     (*(int *)(*(int *)(param_1 + 0x57c) + iVar2 * 4
                                                              ) + 0x18);
                                        *param_2 = 1;
                                        puVar4 = auStack_25c;
                                        puVar5 = param_2 + 2;
                                        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                                          *puVar5 = *puVar4;
                                          puVar4 = puVar4 + 1;
                                          puVar5 = puVar5 + 1;
                                        }
                                        FUN_004357e0(auStack_5c);
                                        FUN_004357e0(auStack_50);
                                        FUN_00425250(&uStack_44);
                                        FUN_004357e0(&uStack_40);
                                        FUN_004357e0(&uStack_34);
                                        param_2[0x91] = uStack_20;
                                        param_2[0x90] = uStack_24;
                                        param_2[0x92] = uStack_1c;
                                        param_2[0x94] = fStack_14;
                                        param_2[0x93] = uStack_18;
                                        param_2[0x95] = uStack_10;
                                        ExceptionList = pvStack_c;
                                        return param_2;
                                      }
                                      FUN_00649920(auStack_274,
                                                   s__s_Safety_Zone__d_Hit_Count_007494ac,
                                                   *(undefined4 *)(param_1 + 0x10),iVar2);
                                      uStack_4 = 0x17;
                                      uVar1 = FUN_00649940();
                                      iVar3 = FUN_00647e40(param_3,uVar1);
                                      uStack_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (iVar3 == 0) {
                                        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                                        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                                        uStack_264 = 1;
                                        uStack_18 = *(undefined4 *)
                                                     (*(int *)(*(int *)(param_1 + 0x57c) + iVar2 * 4
                                                              ) + 0x1c);
                                        *param_2 = 1;
                                        puVar4 = auStack_25c;
                                        puVar5 = param_2 + 2;
                                        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                                          *puVar5 = *puVar4;
                                          puVar4 = puVar4 + 1;
                                          puVar5 = puVar5 + 1;
                                        }
                                        FUN_004357e0(auStack_5c);
                                        FUN_004357e0(auStack_50);
                                        *(undefined1 *)((int)param_2 + 0x223) = uStack_41;
                                        *(undefined1 *)((int)param_2 + 0x222) = uStack_42;
                                        *(undefined1 *)((int)param_2 + 0x221) = uStack_43;
                                        *(undefined1 *)(param_2 + 0x88) = uStack_44;
                                        param_2[0x89] = uStack_40;
                                        param_2[0x8a] = uStack_3c;
                                        param_2[0x8b] = uStack_38;
                                        goto LAB_00616f74;
                                      }
                                      FUN_00649920(auStack_26c,s__s_Safety_Zone__d_Alpha_00749494,
                                                   *(undefined4 *)(param_1 + 0x10),iVar2);
                                      uStack_4 = 0x18;
                                      uVar1 = FUN_00649940();
                                      iVar3 = FUN_00647e40(param_3,uVar1);
                                      uStack_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (iVar3 == 0) {
                                        fStack_14 = *(float *)(*(int *)(*(int *)(param_1 + 0x57c) +
                                                                       iVar2 * 4) + 0x24);
                                        *param_2 = 2;
                                        puVar4 = auStack_25c;
                                        puVar5 = param_2 + 2;
                                        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                                          *puVar5 = *puVar4;
                                          puVar4 = puVar4 + 1;
                                          puVar5 = puVar5 + 1;
                                        }
                                        param_2[0x82] = 0x7f7fffff;
                                        param_2[0x83] = 0x7f7fffff;
                                        param_2[0x84] = 0x7f7fffff;
                                        param_2[0x85] = 0xff7fffff;
                                        param_2[0x86] = 0xff7fffff;
                                        param_2[0x87] = 0xff7fffff;
                                        *(undefined1 *)((int)param_2 + 0x223) = uStack_41;
                                        *(undefined1 *)((int)param_2 + 0x222) = uStack_42;
                                        *(undefined1 *)((int)param_2 + 0x221) = uStack_43;
                                        *(undefined1 *)(param_2 + 0x88) = uStack_44;
                                        param_2[0x89] = uStack_40;
                                        param_2[0x8a] = uStack_3c;
                                        param_2[0x8b] = uStack_38;
                                        param_2[0x8c] = uStack_34;
                                        param_2[0x8d] = uStack_30;
                                        param_2[0x8e] = uStack_2c;
                                        param_2[0x90] = uStack_24;
                                        param_2[0x94] = fStack_14;
                                        param_2[0x91] = uStack_20;
                                        param_2[0x92] = uStack_1c;
                                        param_2[0x93] = uStack_18;
                                        param_2[0x95] = uStack_10;
                                        ExceptionList = pvStack_c;
                                        return param_2;
                                      }
                                      iVar2 = iVar2 + 1;
                                    } while (iVar2 < *(int *)(param_1 + 0x578));
                                  }
                                  FUN_00638230(param_2,param_3);
                                  ExceptionList = pvStack_c;
                                  return param_2;
                                }
                                FUN_00406a80();
                                fStack_14 = *(float *)(param_1 + 0x564);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uStack_264 = 2;
      *param_2 = 2;
      FUN_00424770(auStack_25c);
      ExceptionList = pvStack_c;
      return param_2;
    }
    FUN_00406a80();
    uStack_24 = *(undefined4 *)(param_1 + 0x98);
    uStack_20 = *(undefined4 *)(param_1 + 0x9c);
  }
LAB_00616b76:
  uStack_264 = 0xf;
  *param_2 = 0xf;
  FUN_00424770(auStack_25c);
  ExceptionList = pvStack_c;
  return param_2;
}

