
void __fastcall FUN_00525e20(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_87c;
  int *local_878;
  undefined1 local_874 [128];
  undefined1 local_7f4 [44];
  undefined1 local_7c8 [256];
  undefined1 local_6c8 [256];
  int local_5c8;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7cee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  FUN_006aafd0(&DAT_0071da28);
  FUN_0063ddb0();
  local_4 = 0;
  iVar2 = FUN_0052a650();
  if (iVar2 == 0) {
    FUN_00647d10(local_874,s_CH_01_Hobbiton_Info_info_00735af8);
    uVar3 = FUN_0052ac90();
    FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
LAB_005262d1:
    uVar3 = FUN_00649940();
    pcVar7 = s_CH_01_Hobbiton_Info_bin_00735878;
  }
  else {
    iVar2 = FUN_0052a650();
    if (iVar2 == 1) {
      FUN_00647d10(local_874,s_CH_01_Hobbiton_Info_info_00735af8);
      uVar3 = FUN_0052ac90();
      FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
      local_4 = CONCAT31(local_4._1_3_,2);
      goto LAB_005262d1;
    }
    iVar2 = FUN_0052a650();
    if (iVar2 == 2) {
      FUN_00647d10(local_874,s_CH_02_RoastMutton_Info_info_00735adc);
      uVar3 = FUN_0052ac90();
      FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
      local_4 = CONCAT31(local_4._1_3_,3);
      uVar3 = FUN_00649940();
      pcVar7 = s_CH_02_RoastMutton_Info_bin_00735ac0;
    }
    else {
      iVar2 = FUN_0052a650();
      if (iVar2 == 3) {
        FUN_00647d10(local_874,s_CH_02a_TrollHole_Info_info_00735aa4);
        uVar3 = FUN_0052ac90();
        FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
        local_4 = CONCAT31(local_4._1_3_,4);
        uVar3 = FUN_00649940();
        pcVar7 = s_CH_02a_TrollHole_Info_bin_00735a88;
      }
      else {
        iVar2 = FUN_0052a650();
        if (iVar2 == 4) {
          FUN_00647d10(local_874,s_CH_04_Overhill_Info_info_00735a6c);
          uVar3 = FUN_0052ac90();
          FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
          local_4 = CONCAT31(local_4._1_3_,5);
          uVar3 = FUN_00649940();
          pcVar7 = s_CH_04_Overhill_Info_bin_00735a54;
        }
        else {
          iVar2 = FUN_0052a650();
          if (iVar2 == 5) {
            FUN_00647d10(local_874,s_CH_05_Swordlight_Info_info_00735a38);
            uVar3 = FUN_0052ac90();
            FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
            local_4 = CONCAT31(local_4._1_3_,6);
            uVar3 = FUN_00649940();
            pcVar7 = s_CH_05_Swordlight_Info_bin_00735a1c;
          }
          else {
            iVar2 = FUN_0052a650();
            if (iVar2 == 6) {
              FUN_00647d10(local_874,s_CH_06_Mirkwood_Info_info_00735a00);
              uVar3 = FUN_0052ac90();
              FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
              local_4 = CONCAT31(local_4._1_3_,7);
              uVar3 = FUN_00649940();
              pcVar7 = s_CH_06_Mirkwood_Info_bin_007359e8;
            }
            else {
              iVar2 = FUN_0052a650();
              if (iVar2 == 7) {
                FUN_00647d10(local_874,s_CH_07_BarrelsOutOfBond_Info_info_007359c4);
                uVar3 = FUN_0052ac90();
                FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
                local_4 = CONCAT31(local_4._1_3_,8);
                uVar3 = FUN_00649940();
                pcVar7 = s_CH_07_BarrelsOutOfBond_Info_bin_007359a4;
              }
              else {
                iVar2 = FUN_0052a650();
                if (iVar2 == 8) {
                  FUN_00647d10(local_874,s_CH_08_Laketown_Info_info_00735988);
                  uVar3 = FUN_0052ac90();
                  FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
                  local_4 = CONCAT31(local_4._1_3_,9);
                  uVar3 = FUN_00649940();
                  pcVar7 = s_CH_08_Laketown_Info_bin_00735970;
                }
                else {
                  iVar2 = FUN_0052a650();
                  if (iVar2 == 9) {
                    FUN_00647d10(local_874,s_CH_09_Smaug_Info_info_00735958);
                    uVar3 = FUN_0052ac90();
                    FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
                    local_4 = CONCAT31(local_4._1_3_,10);
                    uVar3 = FUN_00649940();
                    pcVar7 = s_CH_09_Smaug_Info_bin_00735940;
                  }
                  else {
                    iVar2 = FUN_0052a650();
                    if (iVar2 == 10) {
                      FUN_00647d10(local_874,s_CH_10_Lonely_Mountain_Info_info_00735920);
                      uVar3 = FUN_0052ac90();
                      FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
                      local_4 = CONCAT31(local_4._1_3_,0xb);
                      uVar3 = FUN_00649940();
                      pcVar7 = s_CH_10_Lonely_Mountain_Info_bin_00735900;
                    }
                    else {
                      iVar2 = FUN_0052a650();
                      if (iVar2 != 0xb) {
                        FUN_0064e7d0(s__________________________________0072321c);
                        FUN_0064e7d0(s____________INFO_file_Not_found___00735890);
                        FUN_0064e7d0(s____________Default_Loaded________00723254);
                        FUN_0064e7d0(s__________________________________0072321c);
                        FUN_00647d10(local_874,s_CH_01_Hobbiton_Info_info_00735af8);
                        uVar3 = FUN_0052ac90();
                        FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
                        local_4 = CONCAT31(local_4._1_3_,0xd);
                        goto LAB_005262d1;
                      }
                      FUN_00647d10(local_874,s_CH_11_CloudsBurst_Info_info_007358e4);
                      uVar3 = FUN_0052ac90();
                      FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
                      local_4 = CONCAT31(local_4._1_3_,0xc);
                      uVar3 = FUN_00649940();
                      pcVar7 = s_CH_11_CloudsBurst_Info_bin_007358c8;
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
  uVar3 = FUN_005496c0(pcVar7,uVar3);
  iVar2 = FUN_006aae30(&DAT_0071da28,uVar3);
  local_4 = local_4 & 0xffffff00;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_0064e7d0(s__________________________________0072321c);
    pcVar7 = s____________ERROR___Loading_Info_O_00735840;
  }
  else {
    uVar3 = FUN_0052ac90();
    FUN_00649920(&local_87c,s_strings__s_00723ad8,uVar3);
    local_4._0_1_ = 0xe;
    uVar3 = FUN_00649940();
    uVar3 = FUN_005496c0(local_874,uVar3);
    iVar2 = FUN_0063df60(uVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649950();
    if (iVar2 != 0) {
      iVar2 = FUN_0063e510();
      while (iVar2 == 1) {
        iVar2 = FUN_00647ed0(local_6c8,s_strings_00735838);
        if ((iVar2 == 0) && (local_87c = 0, 0 < local_5c8)) {
          do {
            iVar5 = 0;
            FUN_0063e6a0();
            FUN_0063f5e0(s_StringID_007231d0,local_7c8);
            FUN_00649b20(local_7c8);
            iVar2 = *(int *)(param_1 + 0x174);
            local_4._0_1_ = 0xf;
            if (*(int *)(param_1 + 0x17c) < iVar2 + 1) {
              if (*(int *)(param_1 + 0x184) == 0) {
                iVar4 = *(int *)(param_1 + 0x17c) / 2;
                iVar6 = 1;
                if (0 < iVar4) {
                  iVar6 = iVar4;
                }
                if (iVar6 + iVar2 < 1) {
                  iVar2 = 1;
                }
                else {
                  if (iVar4 < 1) {
                    iVar4 = 1;
                  }
                  iVar2 = iVar2 + iVar4;
                }
              }
              else {
                iVar2 = *(int *)(param_1 + 0x184) + iVar2;
              }
              local_878 = (int *)operator_new(iVar2 * 0x2c + 4);
              local_4._0_1_ = 0x10;
              if (local_878 == (int *)0x0) {
                local_878 = (int *)0x0;
              }
              else {
                piVar1 = local_878 + 1;
                *local_878 = iVar2;
                FUN_006c043b(piVar1,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
                local_878 = piVar1;
              }
              local_4._0_1_ = 0xf;
              if (0 < *(int *)(param_1 + 0x174)) {
                iVar6 = 0;
                do {
                  FUN_0064a320(*(int *)(param_1 + 0x178) + iVar6);
                  iVar5 = iVar5 + 1;
                  iVar6 = iVar6 + 0x2c;
                } while (iVar5 < *(int *)(param_1 + 0x174));
              }
              iVar5 = *(int *)(param_1 + 0x178);
              if (iVar5 != 0) {
                FUN_006c026a(iVar5,0x2c,*(undefined4 *)(iVar5 + -4),FUN_00649ba0);
                FUN_006bf840(iVar5 + -4);
              }
              *(int **)(param_1 + 0x178) = local_878;
              *(int *)(param_1 + 0x17c) = iVar2;
            }
            FUN_0064a320(local_7f4);
            *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00649ba0();
            local_87c = local_87c + 1;
          } while (local_87c < local_5c8);
        }
        iVar2 = FUN_0063e510();
      }
      FUN_0063df00();
      goto LAB_005265b8;
    }
    FUN_0064e7d0(s__________________________________0072321c);
    pcVar7 = s____________Failed_to_Open_INFO_f_00735800;
  }
  FUN_0064e7d0(pcVar7);
  FUN_0064e7d0(s__________________________________0072321c);
LAB_005265b8:
  local_4 = 0xffffffff;
  FUN_0063de30();
  ExceptionList = local_c;
  return;
}

