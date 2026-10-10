
void __thiscall FUN_004d4a80(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piStack_138;
  int *piStack_130;
  undefined1 auStack_12c [4];
  undefined1 auStack_128 [4];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_dc;
  int iStack_ac;
  undefined1 auStack_a4 [72];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [68];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d50c1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1[0x8c] == 0) {
    ExceptionList = &pvStack_c;
    FUN_006499d0();
    uStack_4 = 0;
    FUN_006499d0();
    uStack_4._0_1_ = 1;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uVar1 = FUN_0064b130(&DAT_0075b6e0);
    uStack_4._0_1_ = 2;
    FUN_0064a360(uVar1);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_0064b190();
    uStack_dc = 0x3f800000;
    FUN_0064a2e0(&DAT_0075b6e0);
    iStack_ac = 1;
    uStack_4 = 3;
    FUN_0064a360(param_1 + 0x6b);
    FUN_0064a320(param_1 + 0x7f);
    iStack_ac = param_1[0x62];
    iVar6 = param_1[0x8c];
    if (param_1[0x8e] < iVar6 + 1) {
      if (param_1[0x90] == 0) {
        iVar2 = param_1[0x8e] / 2;
        iVar5 = 1;
        if (0 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar5 + iVar6 < 1) {
          iVar6 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar6 = iVar6 + iVar2;
        }
      }
      else {
        iVar6 = param_1[0x90] + iVar6;
      }
      piStack_130 = (int *)operator_new(iVar6 * 0x78 + 4);
      iVar5 = 0;
      uStack_4._0_1_ = 4;
      if (piStack_130 == (int *)0x0) {
        piStack_138 = (int *)0x0;
      }
      else {
        piStack_138 = piStack_130 + 1;
        *piStack_130 = iVar6;
        FUN_006c043b(piStack_138,0x78,iVar6,FUN_004d8dc0,FUN_004d5130);
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      if (0 < param_1[0x8c]) {
        iVar2 = 0;
        do {
          FUN_004d8c10(param_1[0x8d] + iVar2);
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 0x78;
        } while (iVar5 < param_1[0x8c]);
      }
      iVar5 = param_1[0x8d];
      if (iVar5 != 0) {
        FUN_006c026a(iVar5,0x78,*(undefined4 *)(iVar5 + -4),FUN_004d5130);
        FUN_006bf840(iVar5 + -4);
      }
      param_1[0x8e] = iVar6;
      param_1[0x8d] = (int)piStack_138;
    }
    FUN_004d8c10(&uStack_11c);
    param_1[0x8c] = param_1[0x8c] + 1;
    uStack_4 = 5;
    FUN_00649ba0();
    uStack_4 = 0xffffffff;
    FUN_00649ba0();
  }
  iVar6 = 0;
  FUN_00641760(&DAT_0072dacc,param_1[0x58]);
  FUN_00641480(s_Value_0072dac4,param_1[0x62]);
  FUN_006414f0(s_Contents_0072dab8,param_1[0x7f]);
  FUN_00641480(s_TrapNumGadgets_0072daa8,param_1[0x5b]);
  FUN_00641480(s_TrapDifficulty_0072da98,param_1[0x5c]);
  FUN_00641400(s_TrapTime_0072da8c,param_1[0x5d]);
  FUN_00641480(s_TrapDamageType_0072da7c,param_1[0x5e]);
  FUN_0064afa0();
  uStack_4 = 6;
  FUN_004d4980(param_1 + 0x6b,auStack_58);
  puVar3 = (undefined4 *)FUN_00649b80(auStack_58);
  uStack_4._0_1_ = 7;
  FUN_006414f0(s_ContentsResource_0072da68,*puVar3);
  uStack_4._0_1_ = 6;
  FUN_00649ba0();
  FUN_00641400(s_ContentsScale_0072da58,param_1[0x7e]);
  FUN_006412e0(s_CameraPos_0072da4c,param_1 + 0x92);
  uStack_120 = (**(code **)(*param_1 + 0xd4))();
  uVar1 = FUN_0064b130(uStack_120);
  uStack_4._0_1_ = 8;
  FUN_004d4980(uVar1,auStack_58);
  uStack_4._0_1_ = 6;
  FUN_0064b190();
  uVar1 = FUN_0064b130(s_props__0072da44);
  uStack_4._0_1_ = 9;
  uVar1 = FUN_0064bb70(auStack_a4,uVar1,auStack_58);
  uStack_4._0_1_ = 10;
  FUN_0064b7f0(uVar1);
  uStack_4._0_1_ = 9;
  FUN_0064b190();
  uStack_4._0_1_ = 6;
  FUN_0064b190();
  puVar3 = (undefined4 *)FUN_00649b80(auStack_58);
  uStack_4 = CONCAT31(uStack_4._1_3_,0xb);
  (**(code **)(*param_1 + 0xd0))(*puVar3);
  puStack_8._0_1_ = 6;
  FUN_00649ba0();
  uVar1 = FUN_004c7170();
  uVar1 = FUN_0064b130(uVar1);
  puStack_8._0_1_ = 0xc;
  FUN_004d4980(uVar1,auStack_5c);
  puStack_8._0_1_ = 6;
  FUN_0064b190();
  uVar1 = FUN_0064b130(s_props__0072da44);
  puStack_8._0_1_ = 0xd;
  uVar1 = FUN_0064bb70(&uStack_120,uVar1,auStack_5c);
  puStack_8._0_1_ = 0xe;
  FUN_0064b7f0(uVar1);
  puStack_8._0_1_ = 0xd;
  FUN_0064b190();
  puStack_8._0_1_ = 6;
  FUN_0064b190();
  puVar3 = (undefined4 *)FUN_00649b80(auStack_5c);
  puStack_8._0_1_ = 0xf;
  FUN_004c7010(*puVar3);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
  FUN_00649ba0();
  param_1[0x65] = param_1[0x8c];
  FUN_00641480(s_Contents_Count_0072da34,param_1[0x8c]);
  if (0 < param_1[0x8c]) {
    iVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(iVar5 + 0x44 + param_1[0x8d]);
      FUN_00649920(auStack_128,s_Contents_Item_03d_Type_0072da1c,iVar6);
      puStack_8._0_1_ = 0x10;
      uVar4 = FUN_00649940(uVar1);
      FUN_006414f0(uVar4,uVar1);
      puStack_8._0_1_ = 6;
      FUN_00649950();
      piStack_138 = *(int **)(iVar5 + 0x14 + param_1[0x8d]);
      FUN_00649920(auStack_12c,s_Contents_Item_03d_Resource_0072da00,iVar6);
      puStack_8._0_1_ = 0x11;
      piVar7 = piStack_138;
      uVar1 = FUN_00649940(piStack_138);
      FUN_006414f0(uVar1,piVar7);
      puStack_8._0_1_ = 6;
      FUN_00649950();
      FUN_00649920(&piStack_130,s_Contents_Item_03d_Value_0072d9e8,iVar6);
      uVar1 = *(undefined4 *)(iVar5 + 0x70 + param_1[0x8d]);
      puStack_8._0_1_ = 0x12;
      uVar4 = FUN_00649940(uVar1);
      FUN_00641480(uVar4,uVar1);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
      FUN_00649950();
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x78;
    } while (iVar6 < param_1[0x8c]);
  }
  FUN_004c1ff0(param_2);
  (**(code **)(*param_1 + 0xd0))(uStack_124);
  FUN_004c7010(piStack_138);
  pvStack_c = (void *)0xffffffff;
  FUN_0064b190();
  ExceptionList = pvStack_14;
  return;
}

