
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00506db0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  char *pcVar9;
  int *local_4b4;
  int local_4b0;
  int local_4a4 [2];
  undefined1 local_49c [68];
  undefined1 auStack_458 [8];
  undefined1 local_450 [72];
  undefined1 auStack_408 [4];
  undefined1 local_404 [72];
  undefined1 auStack_3bc [4];
  undefined1 local_3b8 [76];
  undefined1 local_36c [76];
  undefined1 local_320 [68];
  undefined1 auStack_2dc [8];
  undefined1 local_2d4 [76];
  undefined1 local_288 [72];
  undefined1 auStack_240 [4];
  undefined1 local_23c [76];
  undefined1 local_1f0 [44];
  undefined1 local_1c4 [44];
  undefined1 local_198 [44];
  undefined1 local_16c [44];
  undefined1 local_140 [44];
  undefined1 local_114 [44];
  undefined1 local_e8 [44];
  undefined1 local_bc [44];
  undefined1 local_90 [44];
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6b14;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_dlg_buy_sale__OnUpdate_00732254);
  iVar6 = 0;
  local_4 = 0;
  FUN_005c8690();
  if (*(int *)(param_1 + 0x5d0) != 0) {
    if (*(int *)(param_1 + 0x56c) == 1) {
      FUN_0052a630(0x14);
    }
    else if (*(int *)(param_1 + 0x56c) == 2) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
    }
    goto LAB_00507d53;
  }
  if (*(int *)(param_1 + 0x5c4) == 0) {
    iVar1 = __ftol();
    local_4a4[0] = __ftol();
    iVar2 = FUN_00670ef0(0xe8,0);
    if ((iVar2 != 0) && (iVar2 = __ftol(), (&DAT_00731e8c)[iVar2] == 1)) {
      *(float *)(param_1 + 0x518) = *(float *)(param_1 + 0x518) - DAT_006e92e8;
    }
    iVar2 = FUN_00670ef0(0xea,0);
    if ((iVar2 != 0) && (iVar2 = __ftol(), *(int *)(&DAT_00731e94 + iVar2 * 4) == 1)) {
      *(float *)(param_1 + 0x518) = *(float *)(param_1 + 0x518) + DAT_006e92e8;
    }
    iVar2 = FUN_00670ef0(0xe5,0);
    if ((iVar2 != 0) && (iVar2 = __ftol(), (&PTR_DAT_00731e78)[iVar2] == (undefined *)0x1)) {
      *(float *)(param_1 + 0x518) = *(float *)(param_1 + 0x518) - _DAT_006ee600;
      *(float *)(param_1 + 0x51c) = *(float *)(param_1 + 0x51c) - DAT_006e92e8;
    }
    iVar2 = FUN_00670ef0(0xed,0);
    if ((iVar2 != 0) && (iVar2 = __ftol(), *(int *)(&DAT_00731ea8 + iVar2 * 4) == 1)) {
      *(float *)(param_1 + 0x518) = *(float *)(param_1 + 0x518) + _DAT_006ee600;
      *(float *)(param_1 + 0x51c) = *(float *)(param_1 + 0x51c) + DAT_006e92e8;
    }
    piVar5 = (int *)(param_1 + 0x5d4);
    local_4b0 = 0;
    iVar2 = 0;
    local_4b4 = piVar5;
LAB_005077b0:
    if ((*piVar5 == 0) || (iVar3 = FUN_006a3270(0x400), iVar3 == 0)) goto LAB_005077cc;
    if ((&DAT_00731e90)[iVar2 + iVar6] != 0) {
      *(float *)(param_1 + 0x518) = (float)(iVar2 + iVar6);
      *(float *)(param_1 + 0x51c) = (float)local_4b0;
    }
    goto LAB_005077fa;
  }
  if (*(int *)(param_1 + 0x56c) != 1) {
    if (*(int *)(param_1 + 0x56c) != 2) goto LAB_00507d53;
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    pcVar9 = s_Vendor_CancelPurchase_0073223c;
    goto LAB_00507d49;
  }
  FUN_00659600(s_Vendor_ConfirmPurchase_00732224,1);
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 7:
    FUN_00649b20(&DAT_00723054);
    local_4._0_1_ = 1;
    FUN_00434fb0(2);
    iVar6 = __ftol();
    FUN_00434ca0(2);
    iVar1 = __ftol();
    FUN_00434e10(local_140,(float)(iVar6 - iVar1));
    local_4._0_1_ = 0;
    FUN_00649ba0();
    FUN_00434fb0(2);
    iVar6 = __ftol();
    FUN_00434ca0(2);
    iVar1 = __ftol();
    FUN_00434d10(0xae,(float)(iVar6 - iVar1));
    FUN_00649b20(s_Stones_0072304c);
    local_4._0_1_ = 2;
    fVar8 = (float10)FUN_00434fb0(2);
    FUN_00434d90(local_16c,(float)fVar8);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    goto LAB_00507d53;
  case 8:
    FUN_00649b20(s_Skeleton_Key_00722f28);
    local_4._0_1_ = 7;
    FUN_00434d90(local_1f0,0x3f800000);
    local_4._0_1_ = 0;
    FUN_00649ba0();
    FUN_00649b20(&DAT_00723054);
    local_4._0_1_ = 8;
    FUN_00434e10(local_e8,0x42a00000);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
    uVar4 = 0x42a00000;
    goto LAB_0050764f;
  case 9:
    FUN_00649b20(s_Level_Potion_00722d2c);
    local_4._0_1_ = 0xb;
    FUN_00434d90(local_64,0x3f800000);
    local_4._0_1_ = 0;
    FUN_00649ba0();
    FUN_00649b20(&DAT_00723054);
    local_4._0_1_ = 0xc;
    FUN_00434e10(local_49c,0x44fa0000);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
    FUN_00434d10(0xae,0x44fa0000);
    FUN_00434cf0(0x1a);
    fVar8 = (float10)FUN_00434c10();
    FUN_00434c20((float)(fVar8 + (float10)_DAT_006e99bc));
    fVar8 = (float10)FUN_00434c10();
    FUN_00434c40(4,(float)fVar8);
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    goto LAB_00507d53;
  case 0xd:
    FUN_00649b20(s_Antidote_00722d10);
    local_4._0_1_ = 5;
    FUN_00434d90(local_1c4,0x3f800000);
    local_4._0_1_ = 0;
    FUN_00649ba0();
    FUN_00649b20(&DAT_00723054);
    local_4._0_1_ = 6;
    FUN_00434e10(local_198,0x42200000);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
    uVar4 = 0x42200000;
    goto LAB_0050764f;
  case 0xe:
    FUN_00649b20(s_Health_Potion_00722d1c);
    local_4._0_1_ = 3;
    FUN_00434d90(local_bc,0x3f800000);
    local_4._0_1_ = 0;
    FUN_00649ba0();
    FUN_00649b20(&DAT_00723054);
    local_4._0_1_ = 4;
    FUN_00434e10(local_114,0x42200000);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
    FUN_00434d10(0xae,0x42200000);
    FUN_00434cf0(0xaf);
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    goto LAB_00507d53;
  case 0xf:
    FUN_00649b20(s_Water_of_Vigor_00722d00);
    local_4._0_1_ = 9;
    FUN_00434d90(local_90,0x3f800000);
    local_4._0_1_ = 0;
    FUN_00649ba0();
    FUN_00649b20(&DAT_00723054);
    local_4 = CONCAT31(local_4._1_3_,10);
    FUN_00434e10(local_38,0x447a0000);
LAB_0050763d:
    local_4 = local_4 & 0xffffff00;
    FUN_00649ba0();
    uVar4 = 0x447a0000;
LAB_0050764f:
    FUN_00434d10(0xae,uVar4);
    break;
  case 0x13:
    FUN_00649b20(s_Rock_Bag_00722f44);
    local_4._0_1_ = 0xd;
    fVar7 = (float10)FUN_00434cd0(local_3b8);
    fVar8 = (float10)DAT_006e92e4;
    local_4._0_1_ = 0;
    FUN_00649ba0();
    if ((NAN(fVar7) || NAN(fVar8)) != (fVar7 == fVar8)) {
      FUN_00434f50(2,0,0x41a00000);
      FUN_00649b20(s_Rock_Bag_00722f44);
      local_4._0_1_ = 0xe;
      FUN_00434d90(local_288,0x3f800000);
      local_4._0_1_ = 0;
      FUN_00649ba0();
      FUN_00649b20(&DAT_00723054);
      local_4._0_1_ = 0xf;
      FUN_00434e10(local_450,0x43fa0000);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649ba0();
      FUN_00434d10(0xae,0x43fa0000);
      *(undefined **)(param_1 + 0x424) = &DAT_00763620;
      *(undefined4 *)(param_1 + 0x5c4) = 0;
      goto LAB_00507d53;
    }
    FUN_00649b20(s_Rock_Bag_00722f44);
    local_4._0_1_ = 0x10;
    fVar7 = (float10)FUN_00434cd0(local_404);
    fVar8 = (float10)DAT_006e92e8;
    local_4._0_1_ = 0;
    FUN_00649ba0();
    if ((NAN(fVar7) || NAN(fVar8)) != (fVar7 == fVar8)) {
      *(undefined4 *)(param_1 + 0x540) = 1;
      FUN_00434f50(2,0,0x41f00000);
      FUN_00649b20(s_Rock_Bag_00722f44);
      local_4._0_1_ = 0x11;
      FUN_00434d90(local_36c,0x3f800000);
      local_4._0_1_ = 0;
      FUN_00649ba0();
      FUN_00649b20(&DAT_00723054);
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_00434e10(local_2d4,0x447a0000);
      goto LAB_0050763d;
    }
    break;
  case 0x14:
    fVar8 = (float10)FUN_00434ca0(0x16);
    if ((NAN(fVar8) || NAN((float10)DAT_006e92e4)) != (fVar8 == (float10)DAT_006e92e4)) {
      FUN_00434f50(0x32,0,0x40000000);
      FUN_00434f50(0x30,0,0x41200000);
      FUN_00434f50(0x31,0,0x41200000);
      FUN_00434d10(0x16,0x3f800000);
      FUN_00649b20(&DAT_00723054);
      local_4._0_1_ = 0x13;
      FUN_00434e10(local_23c,0x43fa0000);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649ba0();
      FUN_00434d10(0xae,0x43fa0000);
      *(undefined **)(param_1 + 0x428) = &DAT_00763540;
      *(undefined4 *)(param_1 + 0x5c4) = 0;
      goto LAB_00507d53;
    }
    fVar8 = (float10)FUN_00434ca0(0x16);
    if ((NAN(fVar8) || NAN((float10)DAT_006e92e8)) != (fVar8 == (float10)DAT_006e92e8)) {
      *(undefined4 *)(param_1 + 0x544) = 1;
      FUN_00434f50(0x32,0,0x40400000);
      FUN_00434f50(0x30,0,0x41700000);
      FUN_00434f50(0x31,0,0x41700000);
      FUN_00434d10(0x16,0x3f800000);
      FUN_00649b20(&DAT_00723054);
      local_4 = CONCAT31(local_4._1_3_,0x14);
      FUN_00434e10(local_320,0x447a0000);
      goto LAB_0050763d;
    }
  }
  *(undefined4 *)(param_1 + 0x5c4) = 0;
  goto LAB_00507d53;
LAB_005077cc:
  iVar6 = iVar6 + 1;
  piVar5 = piVar5 + 1;
  if (5 < iVar6) {
LAB_005077fa:
    local_4b0 = local_4b0 + 1;
    piVar5 = local_4b4 + 6;
    iVar2 = iVar2 + 6;
    if (iVar2 < 0x1e) {
      iVar6 = 0;
      local_4b4 = piVar5;
      goto LAB_005077b0;
    }
    goto code_r0x00507816;
  }
  goto LAB_005077b0;
code_r0x00507816:
  uVar4 = __ftol();
  switch(uVar4) {
  case 7:
    iVar6 = **(int **)(param_1 + 0x54c);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_ROCKS_1_0073220c);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    iVar6 = **(int **)(param_1 + 0x550);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_ROCKS_2_007321f4);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    pcVar9 = s_IDS_BUY_DESC_ROCKS_3_007321dc;
    break;
  case 8:
    iVar6 = **(int **)(param_1 + 0x54c);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_SKEL_1_00732144);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    iVar6 = **(int **)(param_1 + 0x550);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_SKEL_2_00732130);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    pcVar9 = s_IDS_BUY_DESC_SKEL_3_0073211c;
    break;
  case 9:
    iVar6 = **(int **)(param_1 + 0x54c);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_LEVEL_1_007320c8);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    iVar6 = **(int **)(param_1 + 0x550);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_LEVEL_2_007320b0);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    pcVar9 = s_IDS_BUY_DESC_LEVEL_3_00732098;
    break;
  default:
    FUN_0064b130(&DAT_0073201c);
    local_4 = CONCAT31(local_4._1_3_,0x1b);
    (**(code **)(**(int **)(param_1 + 0x54c) + 0x20))(local_288);
    puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
    FUN_0064b190();
    FUN_0064b130(&DAT_0073201c);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1c);
    (**(code **)(**(int **)(param_1 + 0x550) + 0x20))(auStack_3bc);
    local_c = (void *)((uint)local_c & 0xffffff00);
    FUN_0064b190();
    FUN_0064b130(&DAT_0073201c);
    local_c = (void *)CONCAT31(local_c._1_3_,0x1d);
    (**(code **)(**(int **)(param_1 + 0x554) + 0x20))(local_4a4);
    goto LAB_00507d13;
  case 0xd:
    iVar6 = **(int **)(param_1 + 0x54c);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_ANTI_1_00732180);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    iVar6 = **(int **)(param_1 + 0x550);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_ANTI_2_0073216c);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    pcVar9 = s_IDS_BUY_DESC_ANTI_3_00732158;
    break;
  case 0xe:
    iVar6 = **(int **)(param_1 + 0x54c);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_HEALTH_1_007321c4);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    iVar6 = **(int **)(param_1 + 0x550);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_HEALTH_2_007321ac);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    pcVar9 = s_IDS_BUY_DESC_HEALTH_3_00732194;
    break;
  case 0xf:
    iVar6 = **(int **)(param_1 + 0x54c);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_VIG_1_00732108);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    iVar6 = **(int **)(param_1 + 0x550);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_VIG_2_007320f4);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    pcVar9 = s_IDS_BUY_DESC_VIG_3_007320e0;
    break;
  case 0x13:
    iVar6 = **(int **)(param_1 + 0x54c);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_BOX_1_00732084);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    iVar6 = **(int **)(param_1 + 0x550);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_BOX_2_00732070);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    pcVar9 = s_IDS_BUY_DESC_BOX_3_0073205c;
    break;
  case 0x14:
    iVar6 = **(int **)(param_1 + 0x54c);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_MED_1_00732048);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    iVar6 = **(int **)(param_1 + 0x550);
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BUY_DESC_MED_2_00732034);
    (**(code **)(iVar6 + 0x1c))(uVar4);
    pcVar9 = s_IDS_BUY_DESC_MED_3_00732020;
    break;
  case 0x15:
    FUN_0064b130(&DAT_0073201c);
    local_4 = CONCAT31(local_4._1_3_,0x15);
    (**(code **)(**(int **)(param_1 + 0x54c) + 0x20))(local_320);
    puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
    FUN_0064b190();
    FUN_0064b130(s_Total_Silver_Pennies_00732004);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x16);
    (**(code **)(**(int **)(param_1 + 0x550) + 0x20))(auStack_240);
    local_c = (void *)((uint)local_c & 0xffffff00);
    FUN_0064b190();
    FUN_0064b130(&DAT_0073201c);
    local_c = (void *)CONCAT31(local_c._1_3_,0x17);
    (**(code **)(**(int **)(param_1 + 0x554) + 0x20))(auStack_2dc);
    goto LAB_00507d13;
  case 0x16:
    FUN_0064b130(&DAT_0073201c);
    local_4 = CONCAT31(local_4._1_3_,0x18);
    (**(code **)(**(int **)(param_1 + 0x54c) + 0x20))(local_36c);
    puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
    FUN_0064b190();
    FUN_0064b130(s_Leave_Vendor_Screen__00731fec);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x19);
    (**(code **)(**(int **)(param_1 + 0x550) + 0x20))(auStack_408);
    local_c = (void *)((uint)local_c & 0xffffff00);
    FUN_0064b190();
    FUN_0064b130(&DAT_0073201c);
    local_c = (void *)CONCAT31(local_c._1_3_,0x1a);
    (**(code **)(**(int **)(param_1 + 0x554) + 0x20))(auStack_458);
LAB_00507d13:
    local_4 = local_4 & 0xffffff00;
    FUN_0064b190();
    goto LAB_00507d20;
  }
  iVar6 = **(int **)(param_1 + 0x554);
  uVar4 = FUN_006ab1a0(&DAT_0071ceb4,pcVar9);
  (**(code **)(iVar6 + 0x1c))(uVar4);
LAB_00507d20:
  iVar6 = __ftol();
  if ((iVar1 != iVar6) || (iVar6 = __ftol(), local_4a4[0] != iVar6)) {
    pcVar9 = s_CursorMove_00731fe0;
LAB_00507d49:
    FUN_00659600(pcVar9,1);
  }
LAB_00507d53:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

