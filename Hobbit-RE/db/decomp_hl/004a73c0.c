
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004a73c0(int *param_1,undefined1 *param_2,int *param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_74 [24];
  undefined4 uStack_5c;
  int iStack_58;
  char *pcStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d3ce0;
  pvStack_c = ExceptionList;
  piStack_4c = (int *)0x4a73e3;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x28))();
  piStack_4c = (int *)s_Position_00724d1c;
  piStack_50 = (int *)0x4a73ed;
  iVar3 = FUN_00647cf0();
  iVar5 = (int)param_2;
  pcStack_54 = s_Position_00724d1c;
  iStack_58 = (int)param_2;
  uStack_5c = 0x4a73ff;
  piStack_50 = (int *)iVar3;
  iVar4 = FUN_00647e80();
  piVar2 = param_3;
  if (iVar4 == 0) {
    piStack_4c = (int *)iVar5;
    piStack_50 = (int *)0x4a7410;
    iVar4 = FUN_00647cf0();
    if (iVar3 == iVar4) {
      bVar6 = *piVar2 == 8;
    }
    else {
      iVar3 = iVar3 + iVar5;
      piStack_50 = (int *)&DAT_00724e78;
      pcStack_54 = (char *)0x4a7429;
      piStack_4c = (int *)iVar3;
      iVar4 = FUN_00647e40();
      if (iVar4 != 0) {
        piStack_50 = (int *)&DAT_00724e74;
        pcStack_54 = (char *)0x4a743b;
        piStack_4c = (int *)iVar3;
        iVar4 = FUN_00647e40();
        if (iVar4 != 0) {
          piStack_50 = (int *)&DAT_00724e70;
          pcStack_54 = (char *)0x4a744d;
          piStack_4c = (int *)iVar3;
          iVar3 = FUN_00647e40();
          if (iVar3 != 0) goto LAB_004a746c;
        }
      }
      bVar6 = *piVar2 == 2;
    }
    if (bVar6) {
      piStack_4c = piVar2;
      piStack_50 = (int *)iVar5;
      pcStack_54 = (char *)0x4a7462;
      FUN_004ab750();
      ExceptionList = pvStack_c;
      return 1;
    }
  }
LAB_004a746c:
  piStack_4c = (int *)s_LevelReset_0072073c;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a7477;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    param_1[0x9a] = param_1[0x9a] & 0xfffffbff;
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_ShieldGuid_0072b668;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a749d;
  iVar3 = FUN_00647e40();
  if ((iVar3 == 0) && ((*piVar2 == 0xf || (*piVar2 == 0x10)))) {
    iVar3 = param_1[0x98];
    iVar4 = piVar2[0x91];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) == 0 && *(int *)(iVar3 + 0x14) == 0)) {
      *(int *)(iVar3 + 0x10) = piVar2[0x90];
      *(int *)(iVar3 + 0x14) = iVar4;
    }
  }
  piStack_4c = (int *)s_Debug_Log_State_Changes_0072b4a8;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a74df;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x95] = piVar2[0x95];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Debug_Log_Animation_Changes_0072b48c;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a7513;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x96] = piVar2[0x95];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Debug_Current_Anim_Name_0072b474;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a7547;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if ((*piVar2 != 4) && (*piVar2 != 0xd)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    piStack_4c = (int *)0x0;
    piStack_50 = piVar2 + 2;
    pcStack_54 = (char *)0x4a7574;
    piStack_50 = (int *)FUN_00594390();
    pcStack_54 = (char *)0x4a757c;
    FUN_00592560();
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Debug_Current_State_0072b460;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a7591;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 4) {
      ExceptionList = pvStack_c;
      return 0;
    }
    piStack_4c = piVar2 + 2;
    piStack_50 = (int *)0x4a75b1;
    FUN_00649b20();
    param_2 = auStack_74;
    uStack_4 = 0;
    FUN_00649b60(auStack_38);
    uStack_4 = uStack_4 & 0xffffff00;
    FUN_004aa020();
    FUN_005aea00();
    uStack_4 = 0xffffffff;
    piStack_4c = (int *)0x4a75f0;
    FUN_00649ba0();
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Debug_Current_Target_0072b448;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a7605;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 0xf) {
      ExceptionList = pvStack_c;
      return 0;
    }
    iVar5 = param_1[0xc0];
    *(int *)(iVar5 + 0x180) = piVar2[0x90];
    *(int *)(iVar5 + 0x184) = piVar2[0x91];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Conversations_Triggered_Conversa_0072b40c;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a764b;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    piStack_4c = piVar2 + 2;
    piStack_50 = (int *)0x4a7662;
    FUN_00649b20();
    uStack_4 = 2;
    piStack_4c = (int *)0x4a7671;
    FUN_004aa020();
    piStack_4c = (int *)auStack_38;
    uStack_4 = 3;
    piStack_50 = (int *)0x4a7689;
    FUN_0064a320();
    uStack_4 = 0xffffffff;
    piStack_4c = (int *)0x4a7696;
    FUN_00649ba0();
  }
  piStack_4c = (int *)s_Cinemas_Triggered_Cinema_0072b3e8;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a76a1;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    iVar3 = param_1[0xc0];
    iVar4 = piVar2[0x91];
    *(int *)(iVar3 + 0x168) = piVar2[0x90];
    *(int *)(iVar3 + 0x16c) = iVar4;
  }
  piStack_4c = (int *)s_Combat_Tweaks_Block_Percent_0072b3bc;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a76d1;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 1) {
      ExceptionList = pvStack_c;
      return 0;
    }
    **(int **)(param_1[0xc0] + 0x214) = piVar2[0x93];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Combat_Tweaks_Evade_Percent_0072b3a0;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a770d;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 1) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(int *)(*(int *)(param_1[0xc0] + 0x214) + 4) = piVar2[0x93];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Combat_Tweaks_Shove_Percent_0072b384;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a774a;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 1) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(int *)(*(int *)(param_1[0xc0] + 0x214) + 8) = piVar2[0x93];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Combat_Tweaks_Strafe_Percent_0072b364;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a7787;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 1) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(int *)(*(int *)(param_1[0xc0] + 0x214) + 0xc) = piVar2[0x93];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Combat_Tweaks_Can_Block_Stones_0072b344;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a77c4;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(int *)(*(int *)(param_1[0xc0] + 0x214) + 0x18) = piVar2[0x95];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Combat_Tweaks_Blocking_Damage_Mo_0072b31c;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a7801;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 2) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(int *)(*(int *)(param_1[0xc0] + 0x214) + 0x1c) = piVar2[0x94];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Combat_Tweaks_Shield_Blocking_Da_0072b2ec;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a783e;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 2) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(int *)(*(int *)(param_1[0xc0] + 0x214) + 0x20) = piVar2[0x94];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Use_Default_HPs_0072b6b4;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a787b;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x11e] = (piVar2[0x95] ^ param_1[0x11e]) & 1U ^ param_1[0x11e];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Use_Default_LocalBBox_0072b2d4;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a78bc;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if (*piVar2 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x11e] = (piVar2[0x95] << 3 ^ param_1[0x11e]) & 8U ^ param_1[0x11e];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Max_Hit_Points_0072b6a4;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a7900;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    if ((*(byte *)(param_1 + 0x11e) & 1) == 0) {
      if (*piVar2 != 2) {
        ExceptionList = pvStack_c;
        return 0;
      }
      param_1[0xa5] = piVar2[0x94];
    }
    param_1[0xa4] = param_1[0xa5];
    ExceptionList = pvStack_c;
    return 1;
  }
  piStack_4c = (int *)s_Current_Hit_Points_0072b674;
  piStack_50 = (int *)iVar5;
  pcStack_54 = (char *)0x4a7949;
  iVar3 = FUN_00647e40();
  if (iVar3 == 0) {
    param_1[0x9a] = param_1[0x9a] | 0x8000;
    if (*piVar2 != 2) {
      ExceptionList = pvStack_c;
      return 0;
    }
    piStack_4c = (int *)0x0;
    param_1[0xa4] = piVar2[0x94];
    piStack_50 = (int *)0x4a797e;
    iVar5 = (**(code **)(*param_1 + 0x108))();
    if (iVar5 == 0) {
      param_1[0x9a] = param_1[0x9a] & 0xffff7fffU | 0x20000;
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  else {
    piStack_4c = (int *)s_Death_Cinema_0072b658;
    piStack_50 = (int *)iVar5;
    pcStack_54 = (char *)0x4a79b3;
    iVar3 = FUN_00647e40();
    if (iVar3 == 0) {
      if ((*piVar2 != 0xf) && (*piVar2 != 0x10)) {
        ExceptionList = pvStack_c;
        return 0;
      }
      param_1[0x9e] = piVar2[0x90];
      param_1[0x9f] = piVar2[0x91];
      ExceptionList = pvStack_c;
      return 1;
    }
    piStack_4c = (int *)s_Use_Default_CP_0072b694;
    piStack_50 = (int *)iVar5;
    pcStack_54 = (char *)0x4a79fa;
    iVar3 = FUN_00647e40();
    if (iVar3 == 0) {
      if (*piVar2 != 3) {
        ExceptionList = pvStack_c;
        return 0;
      }
      param_1[0x11e] = (piVar2[0x95] << 1 ^ param_1[0x11e]) & 2U ^ param_1[0x11e];
      ExceptionList = pvStack_c;
      return 1;
    }
    piStack_4c = (int *)s_Courage_Pts_0072b688;
    piStack_50 = (int *)iVar5;
    pcStack_54 = (char *)0x4a7a3d;
    iVar3 = FUN_00647e40();
    if (iVar3 == 0) {
      if ((*(byte *)(param_1 + 0x11e) & 2) == 0) {
        if (*piVar2 != 1) {
          ExceptionList = pvStack_c;
          return 0;
        }
        param_1[0xa6] = piVar2[0x93];
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    else {
      piStack_4c = (int *)s_Geometry_Is_Smooth_0072b6f0;
      piStack_50 = (int *)iVar5;
      pcStack_54 = (char *)0x4a7a7e;
      iVar3 = FUN_00647e40();
      if (iVar3 == 0) {
        param_1[0x9a] = (piVar2[0x95] << 0xc ^ param_1[0x9a]) & 0x1000U ^ param_1[0x9a];
      }
      piStack_4c = (int *)s_Geometry_Is_Smooth_0072b6f0;
      piStack_50 = (int *)iVar5;
      pcStack_54 = (char *)0x4a7aaf;
      iVar3 = FUN_00647e40();
      if (iVar3 == 0) {
        if (*piVar2 != 3) {
          ExceptionList = pvStack_c;
          return 0;
        }
        param_1[0x9a] = (piVar2[0x95] << 0xc ^ param_1[0x9a]) & 0x1000U ^ param_1[0x9a];
        ExceptionList = pvStack_c;
        return 1;
      }
      if ((param_1[0x9a] & 0x1000U) == 0) {
        piStack_4c = (int *)s_Geometry_Resource_007299e4;
        piStack_50 = (int *)iVar5;
        pcStack_54 = (char *)0x4a7b98;
        iVar3 = FUN_00647e40();
        if (iVar3 != 0) {
          piStack_4c = (int *)s_Smooth_Geometry_Resource_0072b6d4;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7be2;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            piStack_50 = (int *)&param_3;
            piStack_4c = (int *)&DAT_0072b718;
            pcStack_54 = (char *)0x4a7bf8;
            FUN_00649920();
            iVar5 = *param_1;
            uStack_4 = 5;
            piStack_4c = (int *)0x4a7c0c;
            piStack_4c = (int *)FUN_00649940();
            piStack_50 = (int *)0x4a7c15;
            (**(code **)(iVar5 + 0xd0))();
            uStack_4 = 0xffffffff;
            piStack_4c = (int *)0x4a7c22;
            FUN_00649950();
            ExceptionList = pvStack_c;
            return 1;
          }
          goto LAB_004a7c2c;
        }
        if ((*piVar2 != 7) && (*piVar2 != 4)) {
          ExceptionList = pvStack_c;
          return 0;
        }
        piStack_4c = piVar2 + 2;
        piStack_50 = (int *)0x4a7bc0;
        (**(code **)(*param_1 + 0xd0))();
        piStack_4c = (int *)0x0;
      }
      else {
        piStack_4c = (int *)s_Smooth_Geometry_Resource_0072b6d4;
        piStack_50 = (int *)iVar5;
        pcStack_54 = (char *)0x4a7b05;
        iVar3 = FUN_00647e40();
        if (iVar3 != 0) {
          piStack_4c = (int *)s_Geometry_Resource_007299e4;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7b3f;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            piStack_50 = (int *)&param_2;
            piStack_4c = (int *)&DAT_0072b718;
            pcStack_54 = (char *)0x4a7b59;
            FUN_00649920();
            iVar5 = *param_1;
            uStack_4 = 4;
            piStack_4c = (int *)0x4a7b6d;
            piStack_4c = (int *)FUN_00649940();
            piStack_50 = (int *)0x4a7b76;
            (**(code **)(iVar5 + 0xd0))();
            uStack_4 = 0xffffffff;
            piStack_4c = (int *)0x4a7b83;
            FUN_00649950();
            ExceptionList = pvStack_c;
            return 1;
          }
LAB_004a7c2c:
          piStack_4c = (int *)s_Creature_Type_Name_0072b704;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7c37;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if ((*piVar2 != 4) && (*piVar2 != 0xd)) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_2 = auStack_74;
            FUN_00649b20(piVar2 + 2);
            piStack_4c = (int *)FUN_00467620();
            piStack_50 = (int *)0x4a7c76;
            iVar5 = (**(code **)(*param_1 + 0x138))();
            if (iVar5 == 0) {
              ExceptionList = pvStack_c;
              return 0;
            }
            if (param_1[0xc1] != 0) {
              piStack_4c = (int *)0x4a7c8f;
              FUN_00592320();
            }
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Team_1_Bilbo_s_0072b6c4;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7ca4;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 1) {
              ExceptionList = pvStack_c;
              return 0;
            }
            iVar5 = piVar2[0x93];
            param_1[0x69] = iVar5;
            param_1[0x6a] = iVar5;
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Use_Default_Personal_Spac_0072b62c;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7cde;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x11e] = (piVar2[0x95] << 2 ^ param_1[0x11e]) & 4U ^ param_1[0x11e];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Personal_Space_Radius_0072b60c;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7d22;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if ((*(byte *)(param_1 + 0x11e) & 4) == 0) {
              if (*piVar2 != 2) {
                ExceptionList = pvStack_c;
                return 0;
              }
              param_1[0x3b] = piVar2[0x94];
            }
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Activity_Sphere_Radius_0072b5ec;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7d5f;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 2) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0xc3] = piVar2[0x94];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Die_Immediately_0072b5d4;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7d93;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x11e] = (piVar2[0x95] << 6 ^ param_1[0x11e]) & 0x40U ^ param_1[0x11e];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Sleeps_When_OffCamera_0072b5b4;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7dd7;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x9a] = (piVar2[0x95] << 0xd ^ param_1[0x9a]) & 0x2000U ^ param_1[0x9a];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Pushable_By_Bilbo_0072b598;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7e1e;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x9a] = (piVar2[0x95] << 0x12 ^ param_1[0x9a]) & 0x40000U ^ param_1[0x9a];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Invulnerable_0072b56c;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7e65;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x3a] = (piVar2[0x95] ^ param_1[0x3a]) & 1U ^ param_1[0x3a];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Run_AI_0072b55c;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7ea6;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            piStack_4c = (int *)piVar2[0x95];
            piStack_50 = (int *)0x4a7ec7;
            FUN_004a6630();
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Sleep_Timer_0072b548;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7edc;
          iVar3 = FUN_00647e40();
          if ((iVar3 == 0) && (*piVar2 == 2)) {
            fVar1 = (float)piVar2[0x94];
            param_1[0x118] = (int)fVar1;
            param_1[0x118] = (int)(fVar1 + _DAT_006e95a8);
          }
          piStack_4c = (int *)s_Tweaks_Do_Render_0072b534;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7f0b;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x9a] = (piVar2[0x95] << 1 ^ param_1[0x9a]) & 2U ^ param_1[0x9a];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Do_Shadow_0072b520;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7f4e;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x9a] = (piVar2[0x95] << 6 ^ param_1[0x9a]) & 0x40U ^ param_1[0x9a];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Do_Collision_0072b50c;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7f92;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x9a] = (piVar2[0x95] << 2 ^ param_1[0x9a]) & 4U ^ param_1[0x9a];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Do_StateControl_0072b4f4;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a7fd6;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x9a] = (piVar2[0x95] << 3 ^ param_1[0x9a]) & 8U ^ param_1[0x9a];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Do_PhysControl_0072b4dc;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a801a;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x9a] = (piVar2[0x95] << 4 ^ param_1[0x9a]) & 0x10U ^ param_1[0x9a];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Do_Senses_0072b4c8;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a805e;
          iVar3 = FUN_00647e40();
          if (iVar3 == 0) {
            if (*piVar2 != 3) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x9a] = (piVar2[0x95] << 5 ^ param_1[0x9a]) & 0x20U ^ param_1[0x9a];
            ExceptionList = pvStack_c;
            return 1;
          }
          piStack_4c = (int *)s_Tweaks_Root_to_Position_0072b580;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a80a2;
          iVar3 = FUN_00647e40();
          if ((iVar3 == 0) && (*piVar2 == 3)) {
            param_1[0x9a] = (piVar2[0x95] << 7 ^ param_1[0x9a]) & 0x80U ^ param_1[0x9a];
          }
          piStack_4c = (int *)s_LocalBBox_00724d04;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a80d7;
          iVar3 = FUN_00647e40();
          if ((iVar3 == 0) && ((*(byte *)(param_1 + 0x11e) & 8) != 0)) {
            ExceptionList = pvStack_c;
            return 1;
          }
          if ((int *)param_1[0xc0] != (int *)0x0) {
            piStack_4c = piVar2;
            piStack_50 = (int *)iVar5;
            pcStack_54 = (char *)0x4a80ff;
            iVar3 = (**(code **)(*(int *)param_1[0xc0] + 8))();
            if (iVar3 != 0) {
              ExceptionList = pvStack_c;
              return iVar3;
            }
          }
          if ((int *)param_1[0xc2] != (int *)0x0) {
            piStack_4c = piVar2;
            piStack_50 = (int *)iVar5;
            pcStack_54 = (char *)0x4a8114;
            iVar3 = (**(code **)(*(int *)param_1[0xc2] + 8))();
            if (iVar3 != 0) {
              ExceptionList = pvStack_c;
              return iVar3;
            }
          }
          if (param_1[0xc1] != 0) {
            piStack_4c = piVar2;
            piStack_50 = (int *)iVar5;
            pcStack_54 = (char *)0x4a8129;
            iVar3 = FUN_0059ad20();
            if (iVar3 != 0) {
              ExceptionList = pvStack_c;
              return iVar3;
            }
          }
          piStack_4c = piVar2;
          piStack_50 = (int *)iVar5;
          pcStack_54 = (char *)0x4a8136;
          iVar5 = FUN_004ab750();
          ExceptionList = pvStack_c;
          return iVar5;
        }
        if ((*piVar2 != 7) && (*piVar2 != 4)) {
          ExceptionList = pvStack_c;
          return 0;
        }
        piStack_4c = piVar2 + 2;
        piStack_50 = (int *)0x4a7b2d;
        (**(code **)(*param_1 + 0xd0))();
        piStack_4c = (int *)0x1;
      }
      piStack_50 = (int *)0x4a7bcd;
      FUN_00580a90();
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}

