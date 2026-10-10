
void __thiscall FUN_004eb130(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  int *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5db0;
  local_c = ExceptionList;
  piVar5 = (int *)0x0;
  ExceptionList = &local_c;
  local_48 = param_1;
  if (DAT_0072eae8 != 0) {
    DAT_0072eae8 = 0;
    ExceptionList = &local_c;
    FUN_00649b20(&DAT_007291ac);
    local_4 = 0;
    piVar2 = DAT_0075e28c;
    iVar3 = DAT_0075e290;
    if (DAT_0075e290 < DAT_0075e288 + 1) {
      if (DAT_0075e298 == 0) {
        iVar3 = DAT_0075e290 / 2;
        iVar7 = 1;
        if (0 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar7 + DAT_0075e288 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar3 = DAT_0075e288 + iVar3;
        }
      }
      else {
        iVar3 = DAT_0075e288 + DAT_0075e298;
      }
      local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
      local_4._0_1_ = 1;
      if (local_3c != (int *)0x0) {
        piVar5 = local_3c + 1;
        *local_3c = iVar3;
        FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
      }
      iVar7 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < DAT_0075e288) {
        iVar6 = 0;
        do {
          FUN_0064a320(iVar6 + (int)DAT_0075e28c);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075e288);
      }
      piVar2 = piVar5;
      if (DAT_0075e28c != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075e290 = iVar3;
    DAT_0075e28c = piVar2;
    FUN_0064a320(local_38);
    DAT_0075e288 = DAT_0075e288 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Normal_Pain_00729138);
    local_4 = 2;
    piVar5 = DAT_0075e28c;
    iVar3 = DAT_0075e290;
    if (DAT_0075e290 < DAT_0075e288 + 1) {
      if (DAT_0075e298 == 0) {
        iVar3 = DAT_0075e290 / 2;
        iVar7 = 1;
        if (0 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar7 + DAT_0075e288 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar3 = DAT_0075e288 + iVar3;
        }
      }
      else {
        iVar3 = DAT_0075e288 + DAT_0075e298;
      }
      local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
      local_4._0_1_ = 3;
      if (local_3c == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = local_3c + 1;
        *local_3c = iVar3;
        FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
      }
      iVar7 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < DAT_0075e288) {
        iVar6 = 0;
        do {
          FUN_0064a320(iVar6 + (int)DAT_0075e28c);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075e288);
      }
      if (DAT_0075e28c != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075e290 = iVar3;
    DAT_0075e28c = piVar5;
    FUN_0064a320(local_38);
    DAT_0075e288 = DAT_0075e288 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Poison_Pain_0072912c);
    local_4 = 4;
    piVar5 = DAT_0075e28c;
    iVar3 = DAT_0075e290;
    if (DAT_0075e290 < DAT_0075e288 + 1) {
      if (DAT_0075e298 == 0) {
        iVar3 = DAT_0075e290 / 2;
        iVar7 = 1;
        if (0 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar7 + DAT_0075e288 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar3 = DAT_0075e288 + iVar3;
        }
      }
      else {
        iVar3 = DAT_0075e288 + DAT_0075e298;
      }
      local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
      local_4._0_1_ = 5;
      if (local_3c == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = local_3c + 1;
        *local_3c = iVar3;
        FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
      }
      iVar7 = 0;
      local_4 = CONCAT31(local_4._1_3_,4);
      if (0 < DAT_0075e288) {
        iVar6 = 0;
        do {
          FUN_0064a320(iVar6 + (int)DAT_0075e28c);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075e288);
      }
      if (DAT_0075e28c != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075e290 = iVar3;
    DAT_0075e28c = piVar5;
    FUN_0064a320(local_38);
    DAT_0075e288 = DAT_0075e288 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_0072eff0);
    local_4 = 6;
    piVar5 = DAT_0075e2c4;
    iVar3 = DAT_0075e2c8;
    if (DAT_0075e2c8 < DAT_0075e2c0 + 1) {
      if (DAT_0075e2d0 == 0) {
        iVar3 = DAT_0075e2c8 / 2;
        iVar7 = 1;
        if (0 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar7 + DAT_0075e2c0 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar3 = DAT_0075e2c0 + iVar3;
        }
      }
      else {
        iVar3 = DAT_0075e2c0 + DAT_0075e2d0;
      }
      local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
      local_4._0_1_ = 7;
      if (local_3c == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = local_3c + 1;
        *local_3c = iVar3;
        FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
      }
      iVar7 = 0;
      local_4 = CONCAT31(local_4._1_3_,6);
      if (0 < DAT_0075e2c0) {
        iVar6 = 0;
        do {
          FUN_0064a320(iVar6 + (int)DAT_0075e2c4);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075e2c0);
      }
      if (DAT_0075e2c4 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075e2c8 = iVar3;
    DAT_0075e2c4 = piVar5;
    FUN_0064a320(local_38);
    DAT_0075e2c0 = DAT_0075e2c0 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_0072efec);
    local_4 = 8;
    piVar5 = DAT_0075e2c4;
    iVar3 = DAT_0075e2c8;
    if (DAT_0075e2c8 < DAT_0075e2c0 + 1) {
      if (DAT_0075e2d0 == 0) {
        iVar3 = DAT_0075e2c8 / 2;
        iVar7 = 1;
        if (0 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar7 + DAT_0075e2c0 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar3 = DAT_0075e2c0 + iVar3;
        }
      }
      else {
        iVar3 = DAT_0075e2c0 + DAT_0075e2d0;
      }
      local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
      local_4._0_1_ = 9;
      if (local_3c == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = local_3c + 1;
        *local_3c = iVar3;
        FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
      }
      iVar7 = 0;
      local_4 = CONCAT31(local_4._1_3_,8);
      if (0 < DAT_0075e2c0) {
        iVar6 = 0;
        do {
          FUN_0064a320(iVar6 + (int)DAT_0075e2c4);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075e2c0);
      }
      if (DAT_0075e2c4 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075e2c8 = iVar3;
    DAT_0075e2c4 = piVar5;
    FUN_0064a320(local_38);
    DAT_0075e2c0 = DAT_0075e2c0 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_0072efe8);
    local_4 = 10;
    piVar5 = DAT_0075e2c4;
    iVar3 = DAT_0075e2c8;
    if (DAT_0075e2c8 < DAT_0075e2c0 + 1) {
      if (DAT_0075e2d0 == 0) {
        iVar3 = DAT_0075e2c8 / 2;
        iVar7 = 1;
        if (0 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar7 + DAT_0075e2c0 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar3 = iVar3 + DAT_0075e2c0;
        }
      }
      else {
        iVar3 = DAT_0075e2c0 + DAT_0075e2d0;
      }
      local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
      local_4._0_1_ = 0xb;
      if (local_3c == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = local_3c + 1;
        *local_3c = iVar3;
        FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
      }
      iVar7 = 0;
      local_4 = CONCAT31(local_4._1_3_,10);
      if (0 < DAT_0075e2c0) {
        iVar6 = 0;
        do {
          FUN_0064a320(iVar6 + (int)DAT_0075e2c4);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075e2c0);
      }
      if (DAT_0075e2c4 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075e2c8 = iVar3;
    DAT_0075e2c4 = piVar5;
    FUN_0064a320(local_38);
    DAT_0075e2c0 = DAT_0075e2c0 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_0072efe4);
    local_4 = 0xc;
    piVar5 = DAT_0075e2c4;
    iVar3 = DAT_0075e2c8;
    if (DAT_0075e2c8 < DAT_0075e2c0 + 1) {
      if (DAT_0075e2d0 == 0) {
        iVar3 = DAT_0075e2c8 / 2;
        iVar7 = 1;
        if (0 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar7 + DAT_0075e2c0 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar3 = iVar3 + DAT_0075e2c0;
        }
      }
      else {
        iVar3 = DAT_0075e2c0 + DAT_0075e2d0;
      }
      local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
      local_4._0_1_ = 0xd;
      if (local_3c == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = local_3c + 1;
        *local_3c = iVar3;
        FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
      }
      iVar7 = 0;
      local_4 = CONCAT31(local_4._1_3_,0xc);
      if (0 < DAT_0075e2c0) {
        iVar6 = 0;
        do {
          FUN_0064a320(iVar6 + (int)DAT_0075e2c4);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075e2c0);
      }
      if (DAT_0075e2c4 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075e2c8 = iVar3;
    DAT_0075e2c4 = piVar5;
    FUN_0064a320(local_38);
    DAT_0075e2c0 = DAT_0075e2c0 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_0072efe0);
    local_4 = 0xe;
    piVar5 = DAT_0075e2c4;
    iVar3 = DAT_0075e2c8;
    if (DAT_0075e2c8 < DAT_0075e2c0 + 1) {
      if (DAT_0075e2d0 == 0) {
        iVar3 = DAT_0075e2c8 / 2;
        iVar7 = 1;
        if (0 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar7 + DAT_0075e2c0 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar3 = iVar3 + DAT_0075e2c0;
        }
      }
      else {
        iVar3 = DAT_0075e2c0 + DAT_0075e2d0;
      }
      local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
      local_4._0_1_ = 0xf;
      if (local_3c == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = local_3c + 1;
        *local_3c = iVar3;
        FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
      }
      iVar7 = 0;
      local_4 = CONCAT31(local_4._1_3_,0xe);
      if (0 < DAT_0075e2c0) {
        iVar6 = 0;
        do {
          FUN_0064a320(iVar6 + (int)DAT_0075e2c4);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075e2c0);
      }
      if (DAT_0075e2c4 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075e2c8 = iVar3;
    DAT_0075e2c4 = piVar5;
    FUN_0064a320(local_38);
    DAT_0075e2c0 = DAT_0075e2c0 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_0072efdc);
    local_4 = 0x10;
    FUN_00469980(local_38);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_0072efd8);
    local_4 = 0x11;
    FUN_00469980(local_38);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_0072efd4);
    local_4 = 0x12;
    FUN_00469980(local_38);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_0072efd0);
    local_4 = 0x13;
    FUN_00469980(local_38);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_0072efcc);
    local_4 = 0x14;
    FUN_00469980(local_38);
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  uVar1 = param_2;
  FUN_005669e0(param_2,s_DontRebuild_0072efc0,0x38);
  FUN_00537ff0(uVar1,s_CurHeight_0072efb4,0x38,0x800000,0x7f7fffff);
  FUN_00537ff0(uVar1,s_DesiredHeight_0072efa4,0x38,0x800000,0x7f7fffff);
  FUN_00537ff0(uVar1,s_TransSpeed_007298cc,0x38,0x800000,0x7f7fffff);
  FUN_004e30f0(uVar1);
  FUN_00496020(uVar1,s_Water_Level_0072ef98,&DAT_0075e2b8,0x22);
  FUN_00474220(uVar1,s_Water_Heights_0072ef88,2,0);
  iVar3 = 0;
  do {
    FUN_00649920(&param_2,s_Water_Heights_Height__d_0072ef70,iVar3);
    local_4 = 0x15;
    uVar4 = FUN_00649940(2,0x800000,0x7f7fffff);
    FUN_00537ff0(uVar1,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  FUN_005669e0(uVar1,s_Show_Grid_0072ef64,2);
  FUN_005669e0(uVar1,s_Render_0072ef5c,2);
  FUN_005669e0(uVar1,s_Splash_0072ef54,2);
  FUN_005669e0(uVar1,s_Show_Freeze_Distance_0072dec4,2);
  FUN_00537ff0(uVar1,s_Freeze_Distance_0072ef44,2,0x800000,0x7f7fffff);
  FUN_005669e0(uVar1,s_Show_Water_Force_Arrow_0072ef2c,2);
  FUN_00537ff0(uVar1,s_Water_Force_Intensity__cm_sec__0072ef0c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(uVar1,s_Water_Force_Yaw_0072eefc,2,0x800000,0x7f7fffff);
  FUN_00537ff0(uVar1,s_Water_Force_Pitch_0072eee8,2,0x800000,0x7f7fffff);
  FUN_005669e0(uVar1,s_Interactive_0072ecb4,2);
  FUN_00537ff0(uVar1,s_Max_Interactive_Amp_0072eed4,2,0x800000,0x7f7fffff);
  FUN_00537ff0(uVar1,s_Quad_Size__cm__0072eec4,2,0x800000,0x7f7fffff);
  FUN_00537ff0(uVar1,s_UV_Density__cm_tile__0072eeac,2,0x800000,0x7f7fffff);
  FUN_00499e60(uVar1,s_Alpha_Minimum_0072ee9c,2,0,0xffffffff);
  FUN_00499e60(uVar1,s_Alpha_Maximum_0072ee8c,2,0,0xffffffff);
  FUN_00537ff0(uVar1,s_Normal_Exaggeration_0072ee78,2,0x800000,0x7f7fffff);
  FUN_0048b8e0(uVar1,&DAT_00728df0,2);
  FUN_004f1e00(uVar1,s_Texture_Resource_0072ee64,4,1,2);
  FUN_004f1e00(uVar1,s_Reflection_Map_0072ee54,4,1,2);
  FUN_004f1e00(uVar1,s_Gloss_Map_0072ee48,4,1,2);
  FUN_00496020(uVar1,s_Pain_Mode_0072ee3c,&DAT_0075e280,2);
  FUN_00537ff0(uVar1,s_Pain_Freq__sec__0072ee2c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(uVar1,s_Poison_Duration__secs___hits_evr_0072ee00,2,0x800000,0x7f7fffff);
  FUN_00537ff0(uVar1,s_Pain_Amount_0072edf4,2,0x800000,0x7f7fffff);
  iVar3 = 0;
  do {
    FUN_00649920(&param_2,s_Wave__d_0072edec,iVar3);
    local_4 = 0x16;
    uVar4 = FUN_00649940(2,0);
    FUN_00474220(uVar1,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_48,s_Wave__d_Rotation_0072edd8,iVar3);
    local_4 = 0x17;
    uVar4 = FUN_00649940(2,0x800000,0x7f7fffff);
    FUN_00537ff0(uVar1,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(local_44,s_Wave__d_Amplitude_0072edc4,iVar3);
    local_4 = 0x18;
    uVar4 = FUN_00649940(2,0x800000,0x7f7fffff);
    FUN_00537ff0(uVar1,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(local_40,s_Wave__d_Wavelength_0072edb0,iVar3);
    local_4 = 0x19;
    uVar4 = FUN_00649940(2,0x800000,0x7f7fffff);
    FUN_00537ff0(uVar1,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_3c,s_Wave__d_TimeScale_0072ed9c,iVar3);
    local_4 = 0x1a;
    uVar4 = FUN_00649940(2,0x800000,0x7f7fffff);
    FUN_00537ff0(uVar1,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  ExceptionList = local_c;
  return;
}

