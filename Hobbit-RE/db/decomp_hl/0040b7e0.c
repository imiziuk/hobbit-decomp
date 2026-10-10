
void __fastcall FUN_0040b7e0(int param_1)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint auStack_98 [2];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006cec5d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00647d10(param_1 + 4,s_CH10_LonelyMountain_0071e474);
  uVar4 = FUN_005496c0(s_SFX_Spiders_audiopkg_0071ce5c,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_GUI_audiopkg_0071cde8,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Player_audiopkg_0071cdd4,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Weapons_audiopkg_0071cdbc,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_AMB_Chapter10_audiopkg_0071e458,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Chapter10_audiopkg_0071e440,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Ring_audiopkg_0071cda8,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  FUN_00419620(auStack_8c,s_DX_CH10_PC_audiopkg_0071e42c);
  FUN_00658080(auStack_8c);
  FUN_0054e6d0(s_CH_10_Lonely_Mountain_SubTitles__0071e408);
  FUN_004fb060(4);
  FUN_0040e6a0();
  FUN_0040a810(param_1 + 0x270);
  uVar10 = FUN_0054c210(s_AA_Bellows_0071df00,0);
  *(undefined8 *)(param_1 + 0x1600) = uVar10;
  uVar10 = FUN_0054c210(s_View_Working_Bellows_0071e3f0,0);
  *(undefined8 *)(param_1 + 0x260) = uVar10;
  uVar10 = FUN_0054c210(s_View_Working_Cooler_0071e3dc,0);
  *(undefined8 *)(param_1 + 0x268) = uVar10;
  *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) & 0xfffffff3;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  uVar10 = FUN_0054c210(s_View_Doors_Opening_001_0071e3c4,0);
  *(undefined8 *)(param_1 + 0x2c0) = uVar10;
  uVar10 = FUN_0054c210(s_View_Doors_Opening_002_0071e3ac,0);
  *(int *)(param_1 + 0x2c8) = (int)uVar10;
  *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) & 0xffffffef | 0xc0000;
  *(int *)(param_1 + 0x2cc) = (int)((ulonglong)uVar10 >> 0x20);
  iVar5 = 0;
  puVar9 = (undefined8 *)(param_1 + 0x2a0);
  do {
    iVar5 = iVar5 + 1;
    FUN_00649920(auStack_98,s_AA_Hall_Door_Trigger_00_d_0071e390,iVar5);
    uVar11 = 0;
    uStack_4 = 0;
    uVar4 = FUN_00649940(0);
    uVar10 = FUN_0054c210(uVar4,uVar11);
    *puVar9 = uVar10;
    uStack_4 = 0xffffffff;
    FUN_00649950();
    puVar9 = puVar9 + 1;
  } while (iVar5 < 4);
  *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) & 0xfffef3ff;
  uVar10 = FUN_0054c210(s_GearBeltTrigger_0071e380,0);
  *(undefined8 *)(param_1 + 0x1558) = uVar10;
  uVar10 = FUN_0054c210(s_AA_Gears_001_0071e370,0);
  *(undefined8 *)(param_1 + 0x1560) = uVar10;
  uVar10 = FUN_0054c210(s_View_Initial_Working_Gears_0071e354,0);
  *(undefined8 *)(param_1 + 0x1568) = uVar10;
  uVar10 = FUN_0054c210(s_View_Gears_Solved_0071e340,0);
  *(undefined8 *)(param_1 + 0x1570) = uVar10;
  uStack_a4 = 0x4504d000;
  uStack_a0 = 0x44429333;
  uStack_9c = 0xc5827800;
  FUN_0040f470(&DAT_0071e2d8,s_WaterPuzzleExitCanal0_West_0071e2e0,
               s_WaterPuzzleExitCanal1_West_0071e2fc,s_Canal_Gear_Room_001_0071e318,
               s_Canal_Treasury_001_0071e32c,&DAT_0075b6e0,&DAT_0075b6e0,&uStack_a4);
  uStack_a4 = 0x4504d000;
  uStack_a0 = 0x44429333;
  uStack_9c = 0xc5d54800;
  FUN_0040f470(&DAT_0071e270,&DAT_0075b6e0,&DAT_0075b6e0,s_Canal_Cooler_001_0071e278,
               s_Canal_Bellows_001_0071e28c,s_WaterPuzzleExitCanal4_East_0071e2a0,
               s_WaterPuzzleExitCanal5_East_0071e2bc,&uStack_a4);
  *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) & 0xffffdfff;
  uVar10 = FUN_0054c210(s_TreasuryChainInvenTrigger_0071e254,0);
  *(undefined8 *)(param_1 + 0x1578) = uVar10;
  iVar5 = 0;
  puVar7 = (undefined4 *)(param_1 + 0x166c);
  puVar9 = (undefined8 *)(param_1 + 0x1580);
  do {
    iVar5 = iVar5 + 1;
    FUN_00649920(auStack_98,s_AA_Chain_Arm_00_d_0071e240,iVar5);
    uVar11 = 0;
    uStack_4 = 1;
    uVar4 = FUN_00649940(0);
    uVar10 = FUN_0054c210(uVar4,uVar11);
    *puVar9 = uVar10;
    uStack_4 = 0xffffffff;
    FUN_00649950();
    *puVar7 = 0;
    puVar9 = puVar9 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar5 < 4);
  uVar10 = FUN_0054c210(s_AA_Treasury_Pillar_0071e22c,0);
  *(undefined8 *)(param_1 + 0x15a0) = uVar10;
  *(undefined4 *)(param_1 + 0x15a8) = 0;
  uVar10 = FUN_0054c210(s_Treasury_Pillar_Key_Hole_0071e210,0);
  uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
  *(undefined8 *)(param_1 + 0x15b0) = uVar10;
  auStack_98[0] = (uint)uVar10;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  iVar6 = (int)*(short *)(&DAT_0076cd88 + (((uint)uVar10 ^ uVar8) * -0xfb & 0xfff) * 2);
  for (iVar5 = iVar6; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
  }
  do {
    if (iVar6 == -1) {
LAB_0040bccf:
      uStack_4 = 0xffffffff;
      FUN_00649720();
LAB_0040bd1a:
      *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) & 0xffffbfff;
      puVar9 = (undefined8 *)(param_1 + 0x15d0);
      iVar5 = 1;
      do {
        FUN_00649920(auStack_98,s_AA_Bucket_00_d_0071e200,iVar5);
        uVar11 = 0;
        uStack_4 = 3;
        uVar4 = FUN_00649940(0);
        uVar10 = FUN_0054c210(uVar4,uVar11);
        puVar9[-3] = uVar10;
        uStack_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(&uStack_a4,s_AA_Arkenstone_Door_00_d_0071e1e8,iVar5);
        uVar11 = 0;
        uStack_4 = 4;
        uVar4 = FUN_00649940(0);
        uVar10 = FUN_0054c210(uVar4,uVar11);
        *puVar9 = uVar10;
        uStack_4 = 0xffffffff;
        FUN_00649950();
        puVar9 = puVar9 + 1;
        bVar3 = iVar5 < 2;
        iVar5 = iVar5 + 1;
      } while (bVar3);
      *(undefined4 *)(param_1 + 0x15c8) = 0;
      uVar10 = FUN_0054c210(s_View_Treasury_Pillar_Lowering_0071e1c8,0);
      *(undefined8 *)(param_1 + 0x15e0) = uVar10;
      uVar10 = FUN_0054c210(s_View_Treasury_Door_Water_0071e1ac,0);
      *(undefined8 *)(param_1 + 0x15f0) = uVar10;
      uVar10 = FUN_0054c210(s_View_Treasury_Doors_Opening_0071e190,0);
      *(undefined8 *)(param_1 + 0x15e8) = uVar10;
      *(undefined4 *)(param_1 + 0x15f8) = 0;
      puVar7 = (undefined4 *)(param_1 + 0x164c);
      iVar5 = 4;
      do {
        puVar7[-4] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) & 0xfffdfdff;
      puVar9 = (undefined8 *)(param_1 + 0x1618);
      puVar7 = (undefined4 *)(param_1 + 0x1634);
      iVar5 = 1;
      do {
        *puVar7 = 0;
        FUN_00649920(&uStack_a4,s_ThroneTrigger0_d_0071e17c,iVar5);
        uVar11 = 0;
        uStack_4 = 5;
        uVar4 = FUN_00649940(0);
        uVar10 = FUN_0054c210(uVar4,uVar11);
        puVar9[-2] = uVar10;
        uStack_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(auStack_90,s_AA_Throne_Arm_00_d_0071e168,iVar5);
        uVar11 = 0;
        uStack_4 = 6;
        uVar4 = FUN_00649940(0);
        uVar10 = FUN_0054c210(uVar4,uVar11);
        *puVar9 = uVar10;
        uStack_4 = 0xffffffff;
        FUN_00649950();
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
        bVar3 = iVar5 < 2;
        iVar5 = iVar5 + 1;
      } while (bVar3);
      uVar10 = FUN_0054c210(s_View_Throne_Lowering_0071e150,0);
      *(undefined8 *)(param_1 + 0x1628) = uVar10;
      *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) & 0xfffffffc;
      *(undefined4 *)(param_1 + 0x165c) = 0;
      *(undefined4 *)(param_1 + 0x1660) = 0;
      *(undefined4 *)(param_1 + 0x1664) = 0;
      *(undefined4 *)(param_1 + 0x1668) = 0;
      *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) & 0xffce6fff;
      FUN_0040e080();
      *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 0x1e0;
      FUN_0040ce00(0);
      FUN_0040cfa0(0);
      FUN_0040d0e0(0);
      FUN_0040d400(0);
      FUN_00548de0(s_Props_antidote_potion_rgeom_0071cccc);
      FUN_00548de0(s_Props_stonepile_rgeom_0071d7c0);
      FUN_00548de0(s_Props_CoinPickUp05_rgeom_0071cce8);
      ExceptionList = pvStack_c;
      return;
    }
    piVar1 = (int *)(DAT_0076f648 + iVar6 * 0x14);
    iVar5 = *piVar1;
    if (((iVar5 != 0) && (*(uint *)(iVar5 + 8) == auStack_98[0])) &&
       (*(uint *)(iVar5 + 0xc) == uVar8)) {
      if (iVar6 != -1) {
        uVar8 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
        bVar2 = *(byte *)(uVar8 + 0x7f);
        uStack_4 = 0xffffffff;
        FUN_00649720();
        if ((-(uint)((bVar2 & 0x10) != 0) & uVar8) != 0) {
          FUN_004de6b0(0);
        }
        goto LAB_0040bd1a;
      }
      goto LAB_0040bccf;
    }
    iVar6 = (int)*(short *)((int)piVar1 + 0xe);
  } while( true );
}

