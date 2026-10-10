
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052b560(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_154;
  char *pcStack_150;
  char *pcStack_14c;
  int iStack_148;
  char *pcStack_144;
  int *piStack_140;
  int *local_13c;
  int local_124 [4];
  int local_114;
  int local_110;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d818b;
  local_c = ExceptionList;
  local_13c = (int *)s_FrontEnd_Mgr__Update___00735f54;
  piStack_140 = (int *)0x52b58e;
  ExceptionList = &local_c;
  FUN_006501d0();
  local_13c = &local_110;
  piStack_140 = local_124;
  local_4 = 0;
  pcStack_144 = (char *)0x52b5a6;
  FUN_0065f8a0();
  iStack_148 = 0x52b5b2;
  pcStack_144 = (char *)(param_1 + 0x84);
  FUN_0065f910();
  iStack_148 = 0;
  pcStack_150 = (char *)0x52b5b9;
  pcStack_14c = (char *)(param_1 + 0x84);
  FUN_0065f960();
  pcStack_150 = (char *)0x0;
  uStack_154 = 0x52b5bf;
  FUN_0065fc10();
  local_13c = (int *)0xff000000;
  piStack_140 = (int *)0x52b5d9;
  FUN_0065f940();
  local_13c = (int *)0x3d08ab86;
  piStack_140 = (int *)0x52b5eb;
  FUN_00658330();
  local_13c = (int *)0x3d08ab86;
  piStack_140 = (int *)0x52b5fa;
  FUN_00532ff0();
  local_13c = (int *)0x52b5ff;
  cVar1 = FUN_006628b0();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x710) = 1;
    goto LAB_0052bfd1;
  }
  local_114 = local_110 + -0x10;
  local_124[3] = local_124[0] + -0x10;
  local_124[1] = 0x10;
  local_124[2] = 0x10;
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 1:
    local_13c = (int *)0x6;
    piStack_140 = (int *)0x0;
    DAT_00760360 = 0;
    pcStack_144 = (char *)0x52b750;
    FUN_0052d740();
    local_13c = (int *)0x52b75a;
    FUN_0058ed90();
    local_13c = (int *)DAT_00762ae0;
    piStack_140 = (int *)0x52b76a;
    FUN_00532c80();
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b784;
    FUN_006a16c0();
    *(undefined4 *)(param_1 + 0x78) = 2;
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b79e;
    FUN_006a0420();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x5;
    pcStack_144 = (char *)0x0;
    FUN_0042fda0(local_124 + 1);
    FUN_006a1430(DAT_00813038,s_press_start_00734fb0);
    local_13c = (int *)0xffffffff;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b7e0;
    FUN_006a0410();
    local_13c = (int *)0x52b7e5;
    FUN_0051e860();
    break;
  case 3:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b87c;
    FUN_006a16c0();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x15;
    pcStack_144 = (char *)0x0;
    *(undefined4 *)(param_1 + 0x78) = 4;
    FUN_0042fda0(local_124 + 1);
    FUN_006a1430(DAT_00813038,s_frontend_options_00732dcc);
    break;
  case 5:
    _DAT_0075e390 = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
    local_13c = (int *)0x52b8cc;
    FUN_0058ed60();
    *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b8e7;
    FUN_006a16c0();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x5;
    pcStack_144 = (char *)0x0;
    *(undefined4 *)(param_1 + 0x78) = 6;
    FUN_0042fda0(local_124 + 1);
    FUN_006a1430(DAT_00813038,s_main_menu_00733d6c);
    local_13c = (int *)0xffffffff;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b92f;
    FUN_006a0410();
    DAT_00760114 = 0;
    break;
  case 7:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b952;
    FUN_006a16c0();
    piStack_140 = (int *)local_10c;
    local_13c = (int *)0xff;
    *(undefined4 *)(param_1 + 0x78) = 8;
    *(undefined4 *)(param_1 + 0x710) = 0;
    _DAT_0075e390 = 1;
    pcStack_144 = (char *)0x52b974;
    FUN_004fc380();
    pcStack_144 = local_10c;
    iStack_148 = param_1 + 0x604;
    pcStack_14c = (char *)0x52b985;
    FUN_00647d10();
    pcStack_14c = local_10c;
    pcStack_150 = s_ch00_dreamworld_00735f44;
    uStack_154 = 0x52b994;
    iVar2 = FUN_00647ed0();
    if (iVar2 == 0) {
      local_13c = (int *)0x1;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0x13;
      piStack_140 = (int *)0x52b9ad;
      FUN_0052abf0();
    }
    else {
      local_13c = (int *)local_10c;
      piStack_140 = (int *)s_ch01_hobbiton_00735f34;
      pcStack_144 = (char *)0x52b9c1;
      iVar2 = FUN_00647ed0();
      if (iVar2 == 0) {
        local_13c = (int *)0x1;
        *(undefined4 *)(param_1 + 0x7c) = 1;
        *(undefined4 *)(param_1 + 0x78) = 0x13;
        piStack_140 = (int *)0x52b9da;
        FUN_0052abf0();
      }
      else {
        local_13c = (int *)local_10c;
        piStack_140 = (int *)s_ch02_roastmutton_00735f20;
        pcStack_144 = (char *)0x52b9ee;
        iVar2 = FUN_00647ed0();
        if (iVar2 == 0) {
          local_13c = (int *)0x1;
          *(undefined4 *)(param_1 + 0x7c) = 2;
          *(undefined4 *)(param_1 + 0x78) = 0x13;
          piStack_140 = (int *)0x52ba0b;
          FUN_0052abf0();
        }
        else {
          local_13c = (int *)local_10c;
          piStack_140 = (int *)s_ch02a_trollhole_00735f10;
          pcStack_144 = (char *)0x52ba1f;
          iVar2 = FUN_00647ed0();
          if (iVar2 == 0) {
            local_13c = (int *)0x1;
            *(undefined4 *)(param_1 + 0x7c) = 3;
            *(undefined4 *)(param_1 + 0x78) = 0x13;
            piStack_140 = (int *)0x52ba3c;
            FUN_0052abf0();
          }
          else {
            local_13c = (int *)local_10c;
            piStack_140 = (int *)s_ch04__overhill_00735f00;
            pcStack_144 = (char *)0x52ba50;
            iVar2 = FUN_00647ed0();
            if (iVar2 == 0) {
              local_13c = (int *)0x1;
              *(undefined4 *)(param_1 + 0x7c) = 4;
              *(undefined4 *)(param_1 + 0x78) = 0x13;
              piStack_140 = (int *)0x52ba6d;
              FUN_0052abf0();
            }
            else {
              local_13c = (int *)local_10c;
              piStack_140 = (int *)s_overhill_00735ef4;
              pcStack_144 = (char *)0x52ba81;
              iVar2 = FUN_00647ed0();
              if (iVar2 == 0) {
                local_13c = (int *)0x1;
                *(undefined4 *)(param_1 + 0x7c) = 4;
                *(undefined4 *)(param_1 + 0x78) = 0x13;
                piStack_140 = (int *)0x52ba9e;
                FUN_0052abf0();
              }
              else {
                local_13c = (int *)local_10c;
                piStack_140 = (int *)s_ch4_overhill_00735ee4;
                pcStack_144 = (char *)0x52bab2;
                iVar2 = FUN_00647ed0();
                if (iVar2 == 0) {
                  local_13c = (int *)0x1;
                  *(undefined4 *)(param_1 + 0x7c) = 4;
                  *(undefined4 *)(param_1 + 0x78) = 0x13;
                  piStack_140 = (int *)0x52bacf;
                  FUN_0052abf0();
                }
                else {
                  local_13c = (int *)local_10c;
                  piStack_140 = (int *)s_ch05_swordlight_00735ed4;
                  pcStack_144 = (char *)0x52bae3;
                  iVar2 = FUN_00647ed0();
                  if (iVar2 == 0) {
                    local_13c = (int *)0x1;
                    *(undefined4 *)(param_1 + 0x7c) = 5;
                    *(undefined4 *)(param_1 + 0x78) = 0x13;
                    piStack_140 = (int *)0x52bb00;
                    FUN_0052abf0();
                  }
                  else {
                    local_13c = (int *)local_10c;
                    piStack_140 = (int *)s_mirkwood_00735ec8;
                    pcStack_144 = (char *)0x52bb14;
                    iVar2 = FUN_00647ed0();
                    if (iVar2 == 0) {
                      local_13c = (int *)0x1;
                      *(undefined4 *)(param_1 + 0x7c) = 6;
                      *(undefined4 *)(param_1 + 0x78) = 0x13;
                      piStack_140 = (int *)0x52bb31;
                      FUN_0052abf0();
                    }
                    else {
                      local_13c = (int *)local_10c;
                      piStack_140 = (int *)s_ch07_barrelsoutofbond_00735eb0;
                      pcStack_144 = (char *)0x52bb45;
                      iVar2 = FUN_00647ed0();
                      if (iVar2 == 0) {
                        local_13c = (int *)0x1;
                        *(undefined4 *)(param_1 + 0x7c) = 7;
                        *(undefined4 *)(param_1 + 0x78) = 0x13;
                        piStack_140 = (int *)0x52bb62;
                        FUN_0052abf0();
                      }
                      else {
                        local_13c = (int *)local_10c;
                        piStack_140 = (int *)s_ch08_laketown_0072f900;
                        pcStack_144 = (char *)0x52bb76;
                        iVar2 = FUN_00647ed0();
                        if (iVar2 == 0) {
                          local_13c = (int *)0x1;
                          *(undefined4 *)(param_1 + 0x7c) = 8;
                          *(undefined4 *)(param_1 + 0x78) = 0x13;
                          piStack_140 = (int *)0x52bb93;
                          FUN_0052abf0();
                        }
                        else {
                          local_13c = (int *)local_10c;
                          piStack_140 = (int *)s_ch09_smaug_00735ea4;
                          pcStack_144 = (char *)0x52bba7;
                          iVar2 = FUN_00647ed0();
                          if (iVar2 == 0) {
                            local_13c = (int *)0x1;
                            *(undefined4 *)(param_1 + 0x7c) = 9;
                            *(undefined4 *)(param_1 + 0x78) = 0x13;
                            piStack_140 = (int *)0x52bbc4;
                            FUN_0052abf0();
                          }
                          else {
                            local_13c = (int *)local_10c;
                            piStack_140 = (int *)s_smaugs_lair_00735e98;
                            pcStack_144 = (char *)0x52bbd8;
                            iVar2 = FUN_00647ed0();
                            if (iVar2 == 0) {
                              local_13c = (int *)0x1;
                              *(undefined4 *)(param_1 + 0x7c) = 9;
                              *(undefined4 *)(param_1 + 0x78) = 0x13;
                              piStack_140 = (int *)0x52bbf5;
                              FUN_0052abf0();
                            }
                            else {
                              local_13c = (int *)local_10c;
                              piStack_140 = (int *)s_ch10_lonely_mountain_00735e80;
                              pcStack_144 = (char *)0x52bc09;
                              iVar2 = FUN_00647ed0();
                              if (iVar2 == 0) {
                                local_13c = (int *)0x1;
                                *(undefined4 *)(param_1 + 0x7c) = 10;
                                *(undefined4 *)(param_1 + 0x78) = 0x13;
                                piStack_140 = (int *)0x52bc26;
                                FUN_0052abf0();
                              }
                              else {
                                local_13c = (int *)local_10c;
                                piStack_140 = (int *)s_ch11_cloudsburst_00735e6c;
                                pcStack_144 = (char *)0x52bc3a;
                                iVar2 = FUN_00647ed0();
                                if (iVar2 == 0) {
                                  local_13c = (int *)0x1;
                                  *(undefined4 *)(param_1 + 0x7c) = 0xb;
                                  *(undefined4 *)(param_1 + 0x78) = 0x13;
                                  piStack_140 = (int *)0x52bc57;
                                  FUN_0052abf0();
                                }
                                else {
                                  local_13c = (int *)local_10c;
                                  piStack_140 = (int *)s_obstaclecourse_00735e5c;
                                  pcStack_144 = (char *)0x52bc6b;
                                  FUN_00647ed0();
                                  *(undefined4 *)(param_1 + 0x7c) = 0xd;
                                  local_13c = (int *)local_10c;
                                  piStack_140 = (int *)(param_1 + 0x504);
                                  pcStack_144 = (char *)0x52bc98;
                                  FUN_00647d10();
                                  local_13c = (int *)0x1;
                                  *(undefined4 *)(param_1 + 0x78) = 0x13;
                                  piStack_140 = (int *)0x52bcaa;
                                  FUN_0052abf0();
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
      }
    }
    break;
  case 9:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b667;
    FUN_006a16c0();
    local_13c = (int *)0xffffffff;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b67b;
    FUN_006a0410();
    *(undefined4 *)(param_1 + 0x710) = 0;
    local_13c = (int *)0x52b68b;
    FUN_00532030();
    local_13c = (int *)s_PageTurns_SubTitles_bin_0071dda4;
    piStack_140 = (int *)0x52b69a;
    FUN_0054e6d0();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x0;
    pcStack_144 = s_Narrator_PT01_00733b08;
    iStack_148 = 0x52b6ab;
    FUN_0054e910();
    local_13c = (int *)0x140;
    piStack_140 = (int *)0x1;
    pcStack_144 = s_pt1_c1_6_17_00733afc;
    iStack_148 = 0x52b6bd;
    FUN_0052ae30();
    local_13c = (int *)0x52b6c7;
    FUN_0054ec40();
    *(undefined4 *)(param_1 + 0x78) = 10;
    if (DAT_00760104 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x7c) = DAT_00760108;
      DAT_0076010c = 1;
    }
    local_13c = (int *)(param_1 + 0x604);
    piStack_140 = (int *)0x52b6f8;
    FUN_0052a670();
    DAT_00760114 = 1;
    break;
  case 10:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b717;
    FUN_006a16c0();
    local_13c = (int *)0xffffffff;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b72b;
    FUN_006a0410();
    *(undefined4 *)(param_1 + 0x78) = 0x13;
    *(undefined4 *)(param_1 + 0x710) = 0;
    break;
  case 0xb:
    local_13c = (int *)0x6;
    piStack_140 = (int *)0x1;
    pcStack_144 = (char *)0x52bcc1;
    FUN_0052d740();
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52bcd4;
    FUN_006a16c0();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x5;
    pcStack_144 = (char *)0x0;
    *(undefined4 *)(param_1 + 0x78) = 0xc;
    FUN_0042fda0(local_124 + 1);
    FUN_006a1430(DAT_00813038,s_end_chapter_summary_0073298c);
    local_13c = (int *)0xffffffff;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52bd1d;
    FUN_006a0410();
    break;
  case 0xd:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52bd6d;
    FUN_006a16c0();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x5;
    pcStack_144 = (char *)0x0;
    *(undefined4 *)(param_1 + 0x78) = 0xe;
    FUN_0042fda0(local_124 + 1);
    FUN_006a1430(DAT_00813038,s_buy_sale_00731f74);
    local_13c = (int *)0xffffffff;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52bdb6;
    FUN_006a0410();
    break;
  case 0xf:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52bd35;
    FUN_006a16c0();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x15;
    pcStack_144 = (char *)0x0;
    *(undefined4 *)(param_1 + 0x78) = 0x10;
    FUN_0042fda0(local_124 + 1);
    pcVar3 = s_front_load_game_pc_00732b94;
    goto LAB_0052bedf;
  case 0x12:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52bdff;
    FUN_006a16c0();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x52be07;
    FUN_0052abf0();
    *(undefined4 *)(param_1 + 0x78) = 1;
    DAT_00760360 = 0;
    local_13c = (int *)0x52be1a;
    FUN_00532030();
    local_13c = (int *)0x140;
    piStack_140 = (int *)0x1;
    pcStack_144 = s_intro_6_2_00730a20;
    DAT_00735da4 = 1;
    iStack_148 = 0x52be35;
    iVar2 = FUN_0052ae30();
    if (iVar2 == 0) {
      local_13c = (int *)0x8;
      piStack_140 = (int *)0x1;
      pcStack_144 = s_Intro_Here_00735e50;
      iStack_148 = 0x52be4b;
      FUN_0052b120();
    }
    if (DAT_00735da4 == 1) {
      local_13c = (int *)0x1c0;
      piStack_140 = (int *)0x1;
      pcStack_144 = s_DemoLoop_00735e38;
      iStack_148 = 0x52be68;
      iVar2 = FUN_0052ae30();
      if (iVar2 == 0) {
        local_13c = (int *)0x8;
        piStack_140 = (int *)0x1;
        pcStack_144 = s_Demo_Movie_00735e44;
        iStack_148 = 0x52be7e;
        FUN_0052b120();
      }
    }
    DAT_00735da4 = 1;
    break;
  case 0x14:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52bdce;
    FUN_006a16c0();
    local_13c = (int *)0x52bdd5;
    FUN_0052b310();
    local_13c = (int *)0x6;
    piStack_140 = (int *)0x0;
    pcStack_144 = (char *)0x52bde2;
    FUN_0052d740();
    break;
  case 0x15:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52be9d;
    FUN_006a16c0();
    *(undefined4 *)(param_1 + 0x78) = 9;
    break;
  case 0x17:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52bebc;
    FUN_006a16c0();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x5;
    pcStack_144 = (char *)0x0;
    *(undefined4 *)(param_1 + 0x78) = 0x16;
    FUN_0042fda0(local_124 + 1);
    pcVar3 = s_level_select_00733890;
LAB_0052bedf:
    FUN_006a1430(DAT_00813038,pcVar3);
    local_13c = (int *)0xffffffff;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52bf04;
    FUN_006a0410();
    break;
  case 0x18:
    local_13c = (int *)(param_1 + 0x604);
    *(undefined4 *)(param_1 + 0x78) = 10;
    *(undefined4 *)(param_1 + 0x7c) = 6;
    piStack_140 = (int *)0x52bf25;
    FUN_0052a670();
    break;
  case 0x19:
    local_13c = (int *)(param_1 + 0x604);
    *(undefined4 *)(param_1 + 0x78) = 10;
    *(undefined4 *)(param_1 + 0x7c) = 5;
    piStack_140 = (int *)0x52bf46;
    FUN_0052a670();
    break;
  case 0x1a:
    local_13c = (int *)(param_1 + 0x604);
    *(undefined4 *)(param_1 + 0x78) = 10;
    *(undefined4 *)(param_1 + 0x7c) = 0xb;
    piStack_140 = (int *)0x52bf64;
    FUN_0052a670();
    break;
  case 0x1b:
    local_13c = (int *)0x52bf6d;
    FUN_0052c080();
  case 0x1c:
    *(undefined4 *)(param_1 + 0x78) = 1;
    break;
  case 0x1d:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b801;
    FUN_006a16c0();
    *(undefined4 *)(param_1 + 0x78) = 0x1e;
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b81b;
    FUN_006a0420();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x5;
    pcStack_144 = (char *)0x0;
    CRect::CRect((CRect *)&uStack_154,0,0,local_124[0],local_110);
    FUN_006a1430(DAT_00813038,s_outro_screen_0073459c);
    local_13c = (int *)0xffffffff;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52b864;
    FUN_006a0410();
    break;
  case 0x1f:
    local_13c = (int *)0x1;
    piStack_140 = (int *)DAT_00813038;
    pcStack_144 = (char *)0x52bf8a;
    FUN_006a16c0();
    local_13c = (int *)0x0;
    piStack_140 = (int *)0x5;
    pcStack_144 = (char *)0x0;
    FUN_0042fda0(local_124 + 1);
    FUN_006a1430(DAT_00813038,s_credits_007328d0);
    *(undefined4 *)(param_1 + 0x78) = 0x20;
  }
  if (DAT_00760360 != 0) {
    local_13c = (int *)0x52bfd1;
    FUN_004f8fb0();
  }
LAB_0052bfd1:
  local_4 = 0xffffffff;
  local_13c = (int *)0x52bfe5;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

