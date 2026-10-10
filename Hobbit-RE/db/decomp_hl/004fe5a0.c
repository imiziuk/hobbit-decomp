
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004fe5a0(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 local_30 [8];
  undefined4 local_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6718;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f9910();
  local_4 = 0;
  FUN_004f9920();
  FUN_004f9d20();
  FUN_00649600(s_LoadLevel_00730e54);
  local_4._0_1_ = 1;
  FUN_00659ce0();
  DAT_00760354 = 1;
  _DAT_0072a8f0 = 0x461c4000;
  FUN_0052a670(&DAT_0075f968);
  DAT_0075f970 = 0;
  FUN_00649920(local_30,s_LoadLevel___s__00730e44,&DAT_0075f968);
  local_4._0_1_ = 2;
  uVar5 = FUN_00649940();
  FUN_006501d0(uVar5);
  local_4._0_1_ = 4;
  FUN_00649950();
  FUN_00675910(&DAT_0075f968,1);
  FUN_0052cb70();
  FUN_00649600(s_LoadLevel___resize_smem_fifo_00730e24);
  FUN_00649720();
  FUN_00649600(s_LoadLevel___random_crap_00730e0c);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004fce00(s_LoadLevelEntry_00730dfc);
  FUN_004fce00(s_HudIsInitialized_00730de8);
  uVar5 = FUN_005496c0(s_system_xsc_00730dd4,s_scripts_00730de0);
  iVar6 = FUN_00645060(uVar5);
  if (iVar6 == 0) {
    uVar5 = FUN_005496c0(s_system_xsc_00730dd4,s_scripts_00730de0);
    FUN_0064e7d0(s_SCRIPT__Failed_to_load___s__00730db4,uVar5);
  }
  uVar5 = FUN_005496c0(s_meridian_xsc_00730da4,s_scripts_00730de0);
  iVar6 = FUN_00645060(uVar5);
  if (iVar6 == 0) {
    uVar5 = FUN_005496c0(s_meridian_xsc_00730da4,s_scripts_00730de0);
    FUN_0064e7d0(s_SCRIPT__Failed_to_load___s__00730db4,uVar5);
  }
  uVar5 = FUN_005496c0(s_object_xsc_00730d98,s_scripts_00730de0);
  iVar6 = FUN_00645060(uVar5);
  if (iVar6 == 0) {
    uVar5 = FUN_005496c0(s_object_xsc_00730d98,s_scripts_00730de0);
    FUN_0064e7d0(s_SCRIPT__Failed_to_load___s__00730db4,uVar5);
  }
  uVar5 = FUN_005496c0(s_trigger_xsc_00730d8c,s_scripts_00730de0);
  iVar6 = FUN_00645060(uVar5);
  if (iVar6 == 0) {
    uVar5 = FUN_005496c0(s_trigger_xsc_00730d8c,s_scripts_00730de0);
    FUN_0064e7d0(s_SCRIPT__Failed_to_load___s__00730db4,uVar5);
  }
  uVar5 = FUN_005496c0(s_base_switch_xsc_00730d7c,s_scripts_00730de0);
  iVar6 = FUN_00645060(uVar5);
  if (iVar6 == 0) {
    uVar5 = FUN_005496c0(s_base_switch_xsc_00730d7c,s_scripts_00730de0);
    FUN_0064e7d0(s_SCRIPT__Failed_to_load___s__00730db4,uVar5);
  }
  FUN_00645280();
  FUN_00434400();
  FUN_004fec70();
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_00649600(s_LoadLevel___g_EventMgr_Init_00730d60);
  local_4._0_1_ = 6;
  FUN_00571f10();
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_004fd2b0();
  local_28 = FUN_004fbe30();
  FUN_00649600(s_LoadLevel___bilbo_stuffs_00730d44);
  local_4._0_1_ = 7;
  uVar8 = FUN_0041bcd0();
  DAT_007607ec = (uint)((ulonglong)uVar8 >> 0x20);
  DAT_007607e8 = (uint)uVar8;
  FUN_0054bad0(0x12,uVar8);
  uVar3 = DAT_007607ec;
  uVar2 = DAT_007607e8;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  iVar7 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
  for (iVar6 = iVar7; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)) {
  }
  while (iVar7 != -1) {
    piVar1 = (int *)(DAT_0076f648 + iVar7 * 0x14);
    iVar6 = *piVar1;
    if (((iVar6 != 0) && (*(uint *)(iVar6 + 8) == uVar2)) && (*(uint *)(iVar6 + 0xc) == uVar3))
    break;
    iVar7 = (int)*(short *)((int)piVar1 + 0xe);
  }
  local_4._0_1_ = 7;
  FUN_00649720();
  FUN_0041bcc0();
  FUN_0041c960();
  FUN_004fce00(s_InitialLayersLoaded_00730d30);
  FUN_004fce00(s_BilboIsInitialized_00730d1c);
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_00649600(s_LoadLevel___linking_nav_nodes_00730cfc);
  local_4 = CONCAT31(local_4._1_3_,9);
  uVar5 = FUN_0054c5c0(0x23,s_C__projects_meridian_apps_meridi_00730874,0xc55);
  sVar4 = FUN_0054c7c0();
  while (-1 < sVar4) {
    FUN_0049dd50();
    sVar4 = FUN_0054c7c0();
  }
  FUN_0054c880(uVar5);
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_00649600(s_LoadLevel___LevelCreate_00730ce4);
  local_4._0_1_ = 10;
  if (DAT_0075cf1c == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = DAT_0075cf1c + 0xd0;
  }
  DAT_0075fc00 = (int *)FUN_004196a0(iVar6);
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_00649600(s_LoadLevel___g_Main_pLevel_>Init_00730cc4);
  local_4._0_1_ = 0xb;
  (**(code **)(*DAT_0075fc00 + 8))();
  FUN_0065af40(DAT_00762ae0 * _DAT_006e9360);
  FUN_0065af80(_DAT_00762ae4 * _DAT_006e9360);
  FUN_0065afc0(_DAT_00762ae8 * _DAT_006e9360);
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_00649600(s_LoadLevel___g_infoOverlay_init_00730ca4);
  local_4._0_1_ = 0xc;
  FUN_00525e20();
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_00649600(s_LoadLevel___g_BilboInventory_Ini_00730c78);
  local_4._0_1_ = 0xd;
  FUN_004359a0();
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_00649600(s_LoadLevel___g_SwooshMgr_Init_00730c58);
  local_4._0_1_ = 0xe;
  FUN_005c1c00();
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_00649600(s_LoadLevel___g_CameraMgr_ResetCam_00730c34);
  local_4._0_1_ = 0xf;
  FUN_0064f020(s__00730c24);
  FUN_0056b6b0(1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00649720();
  FUN_004f6eb0();
  iVar6 = FUN_0052ac30();
  if (iVar6 == 0) {
    FUN_0055a960();
  }
  FUN_00649600(s_LoadLevel___random_crap2_00730c08);
  local_4._0_1_ = 0x10;
  FUN_004fce00(s_LoadLevelExit_00730bf8);
  FUN_00500ae0();
  FUN_004f1fc0();
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_005c6720();
  FUN_00649600(s_LoadLevel___g_LogicMgr_SingleSte_00730bd4);
  local_4._0_1_ = 0x11;
  FUN_0066f810();
  FUN_004f9d20();
  FUN_00557a00(0x3d088889);
  FUN_004f9d20();
  local_4._0_1_ = 4;
  FUN_00649720();
  FUN_004fa290();
  local_4._0_1_ = 1;
  FUN_006501e0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  local_4 = 0xffffffff;
  FUN_00429100();
  ExceptionList = pvStack_c;
  return local_28;
}

