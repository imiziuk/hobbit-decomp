
void __fastcall FUN_00415070(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ceee0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  uVar9 = FUN_0054c210(s_Inst_LT_BarrelLite_001_0071f9d8,1);
  *(undefined8 *)(param_1 + 0x2c8) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_BarrelMed_001_0071f9c0,1);
  *(undefined8 *)(param_1 + 0x2d0) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_BarrelHvy_001_0071f9a8,1);
  *(undefined8 *)(param_1 + 0x2d8) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_WH2_LT_Door_O_15_001_0071f98c,1);
  *(undefined8 *)(param_1 + 0x300) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_WH2_RT_Door_O_15_001_0071f970,1);
  *(undefined8 *)(param_1 + 0x308) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_WH2_LT_Door_O_15_003_0071f954,1);
  *(undefined8 *)(param_1 + 0x2f0) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_WH2_RT_Door_O_15_002_0071f938,1);
  *(undefined8 *)(param_1 + 0x2f8) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_WH2_LT_BigDoor_O_15_001_0071f918,1);
  *(undefined8 *)(param_1 + 0x2e0) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_WH2_RT_BigDoor_O_15_001_0071f8f8,1);
  *(undefined8 *)(param_1 + 0x2e8) = uVar9;
  uVar9 = FUN_0054c210(s_Torch1_007_0071f8ec,1);
  *(undefined8 *)(param_1 + 0x3a0) = uVar9;
  uVar9 = FUN_0054c210(s_Torch1_008_0071f8e0,1);
  *(undefined8 *)(param_1 + 0x3a8) = uVar9;
  puVar8 = (undefined8 *)(param_1 + 0x3b0);
  uVar9 = FUN_0054c210(s_Torch1_009_0071f8d4,1);
  *puVar8 = uVar9;
  uVar9 = FUN_0054c210(s_Torch1_010_0071f8c8,1);
  *(undefined8 *)(param_1 + 0x3b8) = uVar9;
  uVar9 = FUN_0054c210(s_Torch1_011_0071f8bc,1);
  *(undefined8 *)(param_1 + 0x3c0) = uVar9;
  uVar9 = FUN_0054c210(s_Torch1_012_0071f8b0,1);
  *(undefined8 *)(param_1 + 0x3c8) = uVar9;
  iVar6 = 2;
  do {
    FUN_00415550(puVar8 + -2,0);
    FUN_00415550(puVar8,0);
    FUN_00415550(puVar8 + 2,0);
    puVar8 = puVar8 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateLite_001_0071f898,1);
  *(undefined8 *)(param_1 + 0x310) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateLite_002_0071f880,1);
  *(undefined8 *)(param_1 + 0x318) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateMed_001_0071f868,1);
  *(undefined8 *)(param_1 + 800) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateMed_002_0071f850,1);
  *(undefined8 *)(param_1 + 0x328) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateHvy_001_0071f838,1);
  *(undefined8 *)(param_1 + 0x330) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateHvy_002_0071f820,1);
  *(undefined8 *)(param_1 + 0x338) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateLite_on_001_0071f804,1);
  *(undefined8 *)(param_1 + 0x340) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateLite_on_002_0071f7e8,1);
  *(undefined8 *)(param_1 + 0x348) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateMed_on_001_0071f7cc,1);
  *(undefined8 *)(param_1 + 0x350) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateMed_on_002_0071f7b0,1);
  *(undefined8 *)(param_1 + 0x358) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateHvy_on_001_0071f794,1);
  *(undefined8 *)(param_1 + 0x360) = uVar9;
  uVar9 = FUN_0054c210(s_Inst_LT_PPlateHvy_on_002_0071f778,1);
  *(undefined8 *)(param_1 + 0x368) = uVar9;
  local_1c = 0;
  puVar7 = (uint *)(param_1 + 0x370);
  do {
    FUN_00649920(local_18,s_TrigPP_d_0071f76c,local_1c);
    uVar10 = 1;
    local_4 = 0;
    uVar4 = FUN_00649940(1);
    uVar9 = FUN_0054c210(uVar4,uVar10);
    *(undefined8 *)puVar7 = uVar9;
    local_4 = 0xffffffff;
    FUN_00649950();
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
    iVar5 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
    for (iVar6 = iVar5; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)) {
    }
    while (iVar5 != -1) {
      piVar1 = (int *)(DAT_0076f648 + iVar5 * 0x14);
      iVar6 = *piVar1;
      if (((iVar6 != 0) && (*(uint *)(iVar6 + 8) == uVar2)) && (*(uint *)(iVar6 + 0xc) == uVar3)) {
        if (iVar5 != -1) {
          local_4 = 0xffffffff;
          FUN_00649720();
          goto LAB_00415502;
        }
        break;
      }
      iVar5 = (int)*(short *)((int)piVar1 + 0xe);
    }
    local_4 = 0xffffffff;
    FUN_00649720();
LAB_00415502:
    FUN_004e1a10(1);
    FUN_004e1a90(1);
    FUN_004de650(0);
    local_1c = local_1c + 1;
    puVar7 = puVar7 + 2;
    if (5 < local_1c) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

