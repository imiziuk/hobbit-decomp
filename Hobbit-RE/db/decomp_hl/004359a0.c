
void __fastcall FUN_004359a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_7c0;
  int *local_7bc;
  undefined1 local_7b4 [64];
  undefined1 local_774 [64];
  undefined1 local_734 [44];
  undefined1 local_708 [64];
  undefined1 local_6c8 [256];
  int local_5c8;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf8cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_bilboInventory__InitQuestData_00723b3c);
  local_4 = 0;
  FUN_006aafd0(s_QuestNames_00723b30);
  FUN_006aafd0(s_QuestDesc_00723b24);
  puVar2 = (undefined4 *)(param_1 + 4);
  iVar5 = 0x32;
  do {
    puVar2[0x40] = 0xffffffff;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_0063ddb0();
  local_4._0_1_ = 1;
  iVar5 = FUN_0052a650();
  if (iVar5 == 0) {
    FUN_00647d10(local_774,s_CH_01_Hobbiton_QuestNames_info_00723b04);
    FUN_00647d10(local_7b4,s_CH_01_Hobbiton_QuestDesc_info_00723ae4);
    uVar3 = FUN_0052ac90();
    FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
    local_4._0_1_ = 2;
    uVar3 = FUN_00649940();
    uVar3 = FUN_005496c0(s_CH_01_Hobbiton_QuestNames_bin_00723ab8,uVar3);
    FUN_006aae30(s_QuestNames_00723b30,uVar3);
    local_4._0_1_ = 1;
    FUN_00649950();
    uVar3 = FUN_0052ac90();
    FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
    local_4._0_1_ = 3;
LAB_00435ad8:
    uVar3 = FUN_00649940();
    uVar3 = FUN_005496c0(s_CH_01_Hobbiton_QuestDesc_bin_00723a98,uVar3);
    iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00649950();
    FUN_0064e7d0(s____________Found_Hobbiton_Quest_D_00723a64);
  }
  else {
    iVar5 = FUN_0052a650();
    if (iVar5 == 1) {
      FUN_00647d10(local_774,s_CH_01_Hobbiton_QuestNames_info_00723b04);
      FUN_00647d10(local_7b4,s_CH_01_Hobbiton_QuestDesc_info_00723ae4);
      uVar3 = FUN_0052ac90();
      FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
      local_4._0_1_ = 4;
      uVar3 = FUN_00649940();
      uVar3 = FUN_005496c0(s_CH_01_Hobbiton_QuestNames_bin_00723ab8,uVar3);
      FUN_006aae30(s_QuestNames_00723b30,uVar3);
      local_4._0_1_ = 1;
      FUN_00649950();
      uVar3 = FUN_0052ac90();
      FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
      local_4._0_1_ = 5;
      goto LAB_00435ad8;
    }
    iVar5 = FUN_0052a650();
    if (iVar5 == 2) {
      FUN_00647d10(local_774,s_CH_02_RoastMutton_QuestNames_inf_00723a40);
      FUN_00647d10(local_7b4,s_CH_02_RoastMutton_QuestDesc_info_00723a1c);
      uVar3 = FUN_0052ac90();
      FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
      local_4._0_1_ = 6;
      uVar3 = FUN_00649940();
      uVar3 = FUN_005496c0(s_CH_02_RoastMutton_QuestNames_bin_007239f8,uVar3);
      FUN_006aae30(s_QuestNames_00723b30,uVar3);
      local_4._0_1_ = 1;
      FUN_00649950();
      uVar3 = FUN_0052ac90();
      FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
      local_4._0_1_ = 7;
      uVar3 = FUN_00649940();
      uVar3 = FUN_005496c0(s_CH_02_RoastMutton_QuestDesc_bin_007239d8,uVar3);
      iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00649950();
      FUN_0064e7d0(s____________Found_RoastMutton_Que_007239a0);
    }
    else {
      iVar5 = FUN_0052a650();
      if (iVar5 == 3) {
        FUN_00647d10(local_774,s_CH_02a_TrollHole_QuestNames_info_0072397c);
        FUN_00647d10(local_7b4,s_CH_02a_TrollHole_QuestDesc_info_0072395c);
        uVar3 = FUN_0052ac90();
        FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
        local_4._0_1_ = 8;
        uVar3 = FUN_00649940();
        uVar3 = FUN_005496c0(s_CH_02a_TrollHole_QuestNames_bin_0072393c,uVar3);
        FUN_006aae30(s_QuestNames_00723b30,uVar3);
        local_4._0_1_ = 1;
        FUN_00649950();
        uVar3 = FUN_0052ac90();
        FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
        local_4._0_1_ = 9;
        uVar3 = FUN_00649940();
        uVar3 = FUN_005496c0(s_CH_02a_TrollHole_QuestDesc_bin_0072391c,uVar3);
        iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00649950();
        FUN_0064e7d0(s____________Found_TrollHole_Quest_007238e4);
      }
      else {
        iVar5 = FUN_0052a650();
        if (iVar5 == 4) {
          FUN_00647d10(local_774,s_CH_04_Overhill_QuestNames_info_007238c4);
          FUN_00647d10(local_7b4,s_CH_04_Overhill_QuestDesc_info_007238a4);
          uVar3 = FUN_0052ac90();
          FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
          local_4._0_1_ = 10;
          uVar3 = FUN_00649940();
          uVar3 = FUN_005496c0(s_CH_04_Overhill_QuestNames_bin_00723884,uVar3);
          FUN_006aae30(s_QuestNames_00723b30,uVar3);
          local_4._0_1_ = 1;
          FUN_00649950();
          uVar3 = FUN_0052ac90();
          FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
          local_4._0_1_ = 0xb;
          uVar3 = FUN_00649940();
          uVar3 = FUN_005496c0(s_CH_04_Overhill_QuestDesc_bin_00723864,uVar3);
          iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_00649950();
          FUN_0064e7d0(s____________Found_Overhill_Quest_D_00723830);
        }
        else {
          iVar5 = FUN_0052a650();
          if (iVar5 == 5) {
            FUN_00647d10(local_774,s_CH_05_Swordlight_QuestNames_info_0072380c);
            FUN_00647d10(local_7b4,s_CH_05_Swordlight_QuestDesc_info_007237ec);
            uVar3 = FUN_0052ac90();
            FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
            local_4._0_1_ = 0xc;
            uVar3 = FUN_00649940();
            uVar3 = FUN_005496c0(s_CH_05_Swordlight_QuestNames_bin_007237cc,uVar3);
            FUN_006aae30(s_QuestNames_00723b30,uVar3);
            local_4._0_1_ = 1;
            FUN_00649950();
            uVar3 = FUN_0052ac90();
            FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
            local_4._0_1_ = 0xd;
            uVar3 = FUN_00649940();
            uVar3 = FUN_005496c0(s_CH_05_Swordlight_QuestDesc_bin_007237ac,uVar3);
            iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_00649950();
            FUN_0064e7d0(s____________Found_Swordlight_Ques_00723774);
          }
          else {
            iVar5 = FUN_0052a650();
            if (iVar5 == 6) {
              FUN_00647d10(local_774,s_CH_06_Mirkwood_QuestNames_info_00723754);
              FUN_00647d10(local_7b4,s_CH_06_Mirkwood_QuestDesc_info_00723734);
              uVar3 = FUN_0052ac90();
              FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
              local_4._0_1_ = 0xe;
              uVar3 = FUN_00649940();
              uVar3 = FUN_005496c0(s_CH_06_Mirkwood_QuestNames_bin_00723714,uVar3);
              FUN_006aae30(s_QuestNames_00723b30,uVar3);
              local_4._0_1_ = 1;
              FUN_00649950();
              uVar3 = FUN_0052ac90();
              FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
              local_4._0_1_ = 0xf;
              uVar3 = FUN_00649940();
              uVar3 = FUN_005496c0(s_CH_06_Mirkwood_QuestDesc_bin_007236f4,uVar3);
              iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
              local_4 = CONCAT31(local_4._1_3_,1);
              FUN_00649950();
              FUN_0064e7d0(s____________Found_Mirkwood_Quest_D_007236c0);
            }
            else {
              iVar5 = FUN_0052a650();
              if (iVar5 == 7) {
                FUN_00647d10(local_774,s_CH_07_BarrelsOutOfBond_QuestName_00723698);
                FUN_00647d10(local_7b4,s_CH_07_BarrelsOutOfBond_QuestDesc_00723670);
                uVar3 = FUN_0052ac90();
                FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                local_4._0_1_ = 0x10;
                uVar3 = FUN_00649940();
                uVar3 = FUN_005496c0(s_CH_07_BarrelsOutOfBond_QuestName_00723648,uVar3);
                FUN_006aae30(s_QuestNames_00723b30,uVar3);
                local_4._0_1_ = 1;
                FUN_00649950();
                uVar3 = FUN_0052ac90();
                FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                local_4._0_1_ = 0x11;
                uVar3 = FUN_00649940();
                uVar3 = FUN_005496c0(s_CH_07_BarrelsOutOfBond_QuestDesc_00723620,uVar3);
                iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
                local_4 = CONCAT31(local_4._1_3_,1);
                FUN_00649950();
                FUN_0064e7d0(s____________Found_Barrels_Quest_D_007235ec);
              }
              else {
                iVar5 = FUN_0052a650();
                if (iVar5 == 8) {
                  FUN_00647d10(local_774,s_CH_08_Laketown_QuestNames_info_007235cc);
                  FUN_00647d10(local_7b4,s_CH_08_Laketown_QuestDesc_info_007235ac);
                  uVar3 = FUN_0052ac90();
                  FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                  local_4._0_1_ = 0x12;
                  uVar3 = FUN_00649940();
                  uVar3 = FUN_005496c0(s_CH_08_Laketown_QuestNames_bin_0072358c,uVar3);
                  FUN_006aae30(s_QuestNames_00723b30,uVar3);
                  local_4._0_1_ = 1;
                  FUN_00649950();
                  uVar3 = FUN_0052ac90();
                  FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                  local_4._0_1_ = 0x13;
                  uVar3 = FUN_00649940();
                  uVar3 = FUN_005496c0(s_CH_08_Laketown_QuestDesc_bin_0072356c,uVar3);
                  iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
                  local_4 = CONCAT31(local_4._1_3_,1);
                  FUN_00649950();
                  FUN_0064e7d0(s____________Found_LakeTown_Quest_D_00723538);
                }
                else {
                  iVar5 = FUN_0052a650();
                  if (iVar5 == 9) {
                    FUN_00647d10(local_774,s_CH_09_Smaug_QuestNames_info_0072351c);
                    FUN_00647d10(local_7b4,s_CH_09_Smaug_QuestDesc_info_00723500);
                    uVar3 = FUN_0052ac90();
                    FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                    local_4._0_1_ = 0x14;
                    uVar3 = FUN_00649940();
                    uVar3 = FUN_005496c0(s_CH_09_Smaug_QuestNames_bin_007234e4,uVar3);
                    FUN_006aae30(s_QuestNames_00723b30,uVar3);
                    local_4._0_1_ = 1;
                    FUN_00649950();
                    uVar3 = FUN_0052ac90();
                    FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                    local_4._0_1_ = 0x15;
                    uVar3 = FUN_00649940();
                    uVar3 = FUN_005496c0(s_CH_09_Smaug_QuestDesc_bin_007234c8,uVar3);
                    iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
                    local_4 = CONCAT31(local_4._1_3_,1);
                    FUN_00649950();
                    FUN_0064e7d0(s____________Found_Smaugs_Quest_Da_00723494);
                  }
                  else {
                    iVar5 = FUN_0052a650();
                    if (iVar5 == 10) {
                      FUN_00647d10(local_774,s_CH_10_Lonely_Mountain_QuestNames_0072346c);
                      FUN_00647d10(local_7b4,s_CH_10_Lonely_Mountain_QuestDesc__00723444);
                      uVar3 = FUN_0052ac90();
                      FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                      local_4._0_1_ = 0x16;
                      uVar3 = FUN_00649940();
                      uVar3 = FUN_005496c0(s_CH_10_Lonely_Mountain_QuestNames_0072341c,uVar3);
                      FUN_006aae30(s_QuestNames_00723b30,uVar3);
                      local_4._0_1_ = 1;
                      FUN_00649950();
                      uVar3 = FUN_0052ac90();
                      FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                      local_4._0_1_ = 0x17;
                      uVar3 = FUN_00649940();
                      uVar3 = FUN_005496c0(s_CH_10_Lonely_Mountain_QuestDesc__007233f8,uVar3);
                      iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
                      local_4 = CONCAT31(local_4._1_3_,1);
                      FUN_00649950();
                      FUN_0064e7d0(s____________Found_Lonely_Mtn__Que_007233c0);
                    }
                    else {
                      iVar5 = FUN_0052a650();
                      if (iVar5 == 0xb) {
                        FUN_00647d10(local_774,s_CH_11_CloudsBurst_QuestNames_inf_0072339c);
                        FUN_00647d10(local_7b4,s_CH_11_CloudsBurst_QuestDesc_info_00723378);
                        uVar3 = FUN_0052ac90();
                        FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                        local_4._0_1_ = 0x18;
                        uVar3 = FUN_00649940();
                        uVar3 = FUN_005496c0(s_CH_11_CloudsBurst_QuestNames_bin_00723354,uVar3);
                        FUN_006aae30(s_QuestNames_00723b30,uVar3);
                        local_4._0_1_ = 1;
                        FUN_00649950();
                        uVar3 = FUN_0052ac90();
                        FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                        local_4._0_1_ = 0x19;
                        uVar3 = FUN_00649940();
                        uVar3 = FUN_005496c0(s_CH_11_CloudsBurst_QuestDesc_bin_00723334,uVar3);
                        iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
                        local_4 = CONCAT31(local_4._1_3_,1);
                        FUN_00649950();
                        FUN_0064e7d0(s____________Found_Clouds_Quest_Da_00723300);
                      }
                      else {
                        FUN_0064e7d0(s__________________________________007232c4);
                        FUN_0064e7d0(s____________QUEST_DATA_FOR_LEVEL_n_0072328c);
                        FUN_0064e7d0(s____________Default_Loaded________00723254);
                        FUN_0064e7d0(s__________________________________0072321c);
                        FUN_00647d10(local_774,s_CH_02_RoastMutton_QuestNames_inf_00723a40);
                        FUN_00647d10(local_7b4,s_CH_02_RoastMutton_QuestDesc_info_00723a1c);
                        uVar3 = FUN_0052ac90();
                        FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                        local_4._0_1_ = 0x1a;
                        uVar3 = FUN_00649940();
                        uVar3 = FUN_005496c0(s_CH_02_RoastMutton_QuestNames_bin_007239f8,uVar3);
                        FUN_006aae30(s_QuestNames_00723b30,uVar3);
                        local_4._0_1_ = 1;
                        FUN_00649950();
                        uVar3 = FUN_0052ac90();
                        FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
                        local_4._0_1_ = 0x1b;
                        uVar3 = FUN_00649940();
                        uVar3 = FUN_005496c0(s_CH_02_RoastMutton_QuestDesc_bin_007239d8,uVar3);
                        iVar5 = FUN_006aae30(s_QuestDesc_00723b24,uVar3);
                        local_4 = CONCAT31(local_4._1_3_,1);
                        FUN_00649950();
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
  if (iVar5 == 0) {
    FUN_0064e7d0(s__________________________________007232c4);
    pcVar7 = s____________ERROR___Loading_Quest_007231e4;
  }
  else {
    uVar3 = FUN_0052ac90();
    FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
    local_4._0_1_ = 0x1c;
    uVar3 = FUN_00649940();
    uVar3 = FUN_005496c0(local_774,uVar3);
    iVar5 = FUN_0063df60(uVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00649950();
    if (iVar5 == 0) {
      FUN_0064e7d0(s__________________________________007232c4);
      FUN_0064e7d0(s_________ERROR___Loading_Quest_Da_00723198);
      FUN_0064e7d0(s__________________________________0072321c);
    }
    else {
      if (*(int *)(param_1 + 0xe0) == 0) {
        iVar5 = *(int *)(param_1 + 0xd8);
        if (iVar5 != 0) {
          FUN_006c026a(iVar5,0x2c,*(undefined4 *)(iVar5 + -4),FUN_00649ba0);
          FUN_006bf840(iVar5 + -4);
        }
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      *(undefined4 *)(param_1 + 0xd4) = 0;
      iVar5 = FUN_0063e510();
      while (iVar5 == 1) {
        iVar5 = FUN_00647ed0(local_6c8,s_Strings_007231dc);
        if (iVar5 == 0) {
          *(int *)(param_1 + 0xb5c) = local_5c8;
          local_7c0 = 0;
          if (0 < local_5c8) {
            do {
              FUN_0063e6a0();
              FUN_0063f5e0(s_StringID_007231d0,local_708);
              FUN_00649b20(local_708);
              iVar5 = *(int *)(param_1 + 0xd4);
              local_4._0_1_ = 0x1d;
              if (*(int *)(param_1 + 0xdc) < iVar5 + 1) {
                if (*(int *)(param_1 + 0xe4) == 0) {
                  iVar4 = *(int *)(param_1 + 0xdc) / 2;
                  iVar6 = 1;
                  if (0 < iVar4) {
                    iVar6 = iVar4;
                  }
                  if (iVar6 + iVar5 < 1) {
                    iVar4 = 1;
                  }
                  else {
                    if (iVar4 < 1) {
                      iVar4 = 1;
                    }
                    iVar4 = iVar4 + iVar5;
                  }
                }
                else {
                  iVar4 = *(int *)(param_1 + 0xe4) + iVar5;
                }
                local_7bc = (int *)operator_new(iVar4 * 0x2c + 4);
                local_4._0_1_ = 0x1e;
                if (local_7bc == (int *)0x0) {
                  local_7bc = (int *)0x0;
                }
                else {
                  piVar1 = local_7bc + 1;
                  *local_7bc = iVar4;
                  FUN_006c043b(piVar1,0x2c,iVar4,FUN_006499d0,FUN_00649ba0);
                  local_7bc = piVar1;
                }
                iVar5 = 0;
                local_4._0_1_ = 0x1d;
                if (0 < *(int *)(param_1 + 0xd4)) {
                  iVar6 = 0;
                  do {
                    FUN_0064a320(*(int *)(param_1 + 0xd8) + iVar6);
                    iVar5 = iVar5 + 1;
                    iVar6 = iVar6 + 0x2c;
                  } while (iVar5 < *(int *)(param_1 + 0xd4));
                }
                iVar5 = *(int *)(param_1 + 0xd8);
                if (iVar5 != 0) {
                  FUN_006c026a(iVar5,0x2c,*(undefined4 *)(iVar5 + -4),FUN_00649ba0);
                  FUN_006bf840(iVar5 + -4);
                }
                *(int **)(param_1 + 0xd8) = local_7bc;
                *(int *)(param_1 + 0xdc) = iVar4;
              }
              FUN_0064a320(local_734);
              *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
              local_4 = CONCAT31(local_4._1_3_,1);
              FUN_00649ba0();
              local_7c0 = local_7c0 + 1;
            } while (local_7c0 < local_5c8);
          }
        }
        iVar5 = FUN_0063e510();
      }
      FUN_0063df00();
    }
    uVar3 = FUN_0052ac90();
    FUN_00649920(&local_7c0,s_strings__s_00723ad8,uVar3);
    local_4._0_1_ = 0x1f;
    uVar3 = FUN_00649940();
    uVar3 = FUN_005496c0(local_7b4,uVar3);
    iVar5 = FUN_0063df60(uVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00649950();
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0xfc) == 0) {
        iVar5 = *(int *)(param_1 + 0xf4);
        if (iVar5 != 0) {
          FUN_006c026a(iVar5,0x2c,*(undefined4 *)(iVar5 + -4),FUN_00649ba0);
          FUN_006bf840(iVar5 + -4);
        }
        *(undefined4 *)(param_1 + 0xf4) = 0;
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
      *(undefined4 *)(param_1 + 0xf0) = 0;
      iVar5 = FUN_0063e510();
      while (iVar5 == 1) {
        iVar5 = FUN_00647ed0(local_6c8,s_Strings_007231dc);
        if ((iVar5 == 0) && (local_7c0 = 0, 0 < local_5c8)) {
          do {
            FUN_0063e6a0();
            FUN_0063f5e0(s_StringID_007231d0,local_708);
            FUN_00649b20(local_708);
            iVar5 = *(int *)(param_1 + 0xf0);
            local_4._0_1_ = 0x20;
            if (*(int *)(param_1 + 0xf8) < iVar5 + 1) {
              if (*(int *)(param_1 + 0x100) == 0) {
                iVar6 = *(int *)(param_1 + 0xf8) / 2;
                iVar4 = 1;
                if (0 < iVar6) {
                  iVar4 = iVar6;
                }
                if (iVar4 + iVar5 < 1) {
                  iVar5 = 1;
                }
                else {
                  if (iVar6 < 1) {
                    iVar6 = 1;
                  }
                  iVar5 = iVar5 + iVar6;
                }
              }
              else {
                iVar5 = *(int *)(param_1 + 0x100) + iVar5;
              }
              local_7bc = (int *)operator_new(iVar5 * 0x2c + 4);
              local_4._0_1_ = 0x21;
              if (local_7bc == (int *)0x0) {
                local_7bc = (int *)0x0;
              }
              else {
                piVar1 = local_7bc + 1;
                *local_7bc = iVar5;
                FUN_006c043b(piVar1,0x2c,iVar5,FUN_006499d0,FUN_00649ba0);
                local_7bc = piVar1;
              }
              iVar4 = 0;
              local_4._0_1_ = 0x20;
              if (0 < *(int *)(param_1 + 0xf0)) {
                iVar6 = 0;
                do {
                  FUN_0064a320(*(int *)(param_1 + 0xf4) + iVar6);
                  iVar4 = iVar4 + 1;
                  iVar6 = iVar6 + 0x2c;
                } while (iVar4 < *(int *)(param_1 + 0xf0));
              }
              iVar4 = *(int *)(param_1 + 0xf4);
              if (iVar4 != 0) {
                FUN_006c026a(iVar4,0x2c,*(undefined4 *)(iVar4 + -4),FUN_00649ba0);
                FUN_006bf840(iVar4 + -4);
              }
              *(int **)(param_1 + 0xf4) = local_7bc;
              *(int *)(param_1 + 0xf8) = iVar5;
            }
            FUN_0064a320(local_734);
            *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_00649ba0();
            local_7c0 = local_7c0 + 1;
          } while (local_7c0 < local_5c8);
        }
        iVar5 = FUN_0063e510();
      }
      FUN_0063df00();
      goto LAB_00436cb7;
    }
    FUN_0064e7d0(s__________________________________007232c4);
    pcVar7 = s__________ERROR___Loading_Quest_D_00723160;
  }
  FUN_0064e7d0(pcVar7);
  FUN_0064e7d0(s__________________________________0072321c);
LAB_00436cb7:
  local_4 = local_4 & 0xffffff00;
  FUN_0063de30();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

