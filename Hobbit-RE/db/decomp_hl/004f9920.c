
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9920(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  undefined1 local_118 [12];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d62a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_LoadScreen__Init_0072fd08);
  local_4 = 0;
  if (DAT_0075f8c8 == 0) {
    DAT_0075f8c8 = 1;
    FUN_00647d10(local_10c,s_common_hud__0072fcfc);
    uVar1 = FUN_0052a650();
    switch(uVar1) {
    case 0:
      pcVar3 = s_LoadingScreen_00DreamWorld_xbmp_0072fcdc;
      break;
    case 1:
      pcVar3 = s_LoadingScreen_01Hobbiton_xbmp_0072fcbc;
      break;
    case 2:
      pcVar3 = s_LoadingScreen_02RoastMutton_xbmp_0072fc98;
      break;
    case 3:
      pcVar3 = s_LoadingScreen_02aTrollHole_xbmp_0072fc78;
      break;
    case 4:
      pcVar3 = s_LoadingScreen_04TrollHole_xbmp_0072fc58;
      break;
    case 5:
      pcVar3 = s_LoadingScreen_05Swordlight_xbmp_0072fc38;
      break;
    case 6:
      pcVar3 = s_LoadingScreen_06Mirkwood_xbmp_0072fc18;
      break;
    case 7:
      pcVar3 = s_LoadingScreen_07BarrelsOutOfBond_0072fbf0;
      break;
    case 8:
      pcVar3 = s_LoadingScreen_08LakeTown_xbmp_0072fbd0;
      break;
    case 9:
      pcVar3 = s_LoadingScreen_09Smaug_xbmp_0072fbb4;
      break;
    case 10:
      pcVar3 = s_LoadingScreen_10LonelyMountain_x_0072fb90;
      break;
    case 0xb:
      pcVar3 = s_LoadingScreen_11CloudsBurst_xbmp_0072fb6c;
      break;
    default:
      pcVar3 = s_LoadingScreen_11CloudsBurst_xbmp_0072fb6c;
    }
    FUN_00647dc0(local_10c,pcVar3);
    DAT_0075f8cc = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_DREAMWORLD_0072fb50);
    DAT_0075f8d0 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_HOBBITON_0072fb38);
    DAT_0075f8d4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_ROASTMUTTON_0072fb1c);
    DAT_0075f8d8 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_TROLLHOLE_0072fb04);
    DAT_0075f8dc = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_OVERHILL_0072faec);
    DAT_0075f8e0 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_SWORDLIGHT_0072fad0);
    DAT_0075f8e4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_MIRKWOOD_0072fab8);
    DAT_0075f8e8 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_BARRELS_0072faa0);
    DAT_0075f8ec = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_LAKETOWN_0072fa88);
    DAT_0075f8f0 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_SMAUG_0072fa74);
    DAT_0075f8f4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_LONELYMTN_0072fa5c);
    DAT_0075f8f8 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LEVELNAME_CLOUDSBURST_0072fa40);
    DAT_0075f8fc = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LOAD_LINE_1_0072fa30);
    _DAT_0075f900 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LOAD_LINE_2_0072fa20);
    _DAT_0075f904 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LOAD_LINE_3_0072fa10);
    _DAT_0075f908 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LOAD_LINE_4_0072fa00);
    iVar2 = FUN_00652870(local_10c);
    if (iVar2 == 0) {
      FUN_00649920(local_11c,s_LoadScreen_Not_Found__UI1004___s_0072f9dc,local_10c);
      local_4._0_1_ = 1;
      FUN_00649940();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
    }
    FUN_00674c70(&DAT_0075f878);
    DAT_0075f8b9 = 0;
    _DAT_0075f8c0 = 0;
    _DAT_0075f8c4 = 0;
    DAT_0075f868 = 0x1c2;
    DAT_0075f86c = 0x2f3;
    DAT_0075f870 = 1;
    DAT_0075f874 = 1;
    FUN_0065f8a0(local_118,local_120);
    DAT_0075f868 = __ftol();
    DAT_0075f86c = __ftol();
    DAT_00760360 = 0;
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

