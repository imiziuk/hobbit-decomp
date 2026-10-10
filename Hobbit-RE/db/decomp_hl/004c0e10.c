
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c0e10(int *param_1,float param_2)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_8c [2];
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_24;
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d477d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_rigid_instance__AdvanceAnim_0072c9e0);
  local_24 = param_1[0x11];
  local_20 = param_1[0x12];
  local_1c = param_1[0x13];
  local_4 = 0;
  FUN_004357e0(param_1 + 0x14);
  if ((*(byte *)((int)param_1 + 0x15d) & 0x10) == 0) {
    FUN_00649600(s_rigid_instance__AdvanceAnim___st_0072c9bc);
    local_7c = *(undefined4 *)(param_1[0x50] + 8);
    local_84 = param_1[2];
    local_80 = param_1[3];
    local_4._0_1_ = 1;
    local_8c[0] = 0x17;
    if (DAT_0075cf1c != 0) {
      FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),local_8c);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  FUN_00649600(s_rigid_instance__AdvanceAnim___ad_0072c994);
  local_4._0_1_ = 2;
  fVar3 = DAT_006e92e8;
  if (param_1[0x50] != 0) {
    fVar3 = *(float *)(param_1[0x50] + 0x80);
  }
  fVar3 = fVar3 * param_2;
  fVar4 = fVar3;
  if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
    fVar4 = -fVar3;
  }
  if (fVar4 < _DAT_006ee9b4 == (NAN(fVar4) || NAN(_DAT_006ee9b4))) {
    FUN_0053b780(fVar3);
    local_4._0_1_ = 0;
    FUN_00649720();
    FUN_00649600(s_rigid_instance__AdvanceAnim___la_0072c96c);
    fVar3 = *(float *)(param_1[0x50] + 0x10);
    if ((fVar3 <= DAT_006e92e8) ||
       (fVar4 = *(float *)(param_1[0x50] + 0x18), (NAN(fVar3) || NAN(fVar4)) == (fVar3 == fVar4))) {
      if (fVar3 < DAT_006e92e8 != (NAN(fVar3) || NAN(DAT_006e92e8))) {
        *(byte *)((int)param_1 + 0x15d) = *(byte *)((int)param_1 + 0x15d) & 0xf7;
      }
    }
    else {
      *(byte *)((int)param_1 + 0x15d) = *(byte *)((int)param_1 + 0x15d) | 8;
      *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) & 0xfe ^ 1;
    }
    FUN_00649720();
    FUN_00649600(s_rigid_instance__AdvanceAnim___bb_0072c948);
    local_4 = CONCAT31(local_4._1_3_,3);
    iVar7 = FUN_00549470(param_1 + 0x2f);
    if (iVar7 != 0) {
      local_3c = 0;
      local_4c = 0;
      local_5c = 0;
      local_38 = 0;
      local_48 = 0;
      local_68 = 0;
      local_34 = 0;
      local_54 = 0;
      local_64 = 0;
      local_40 = 0;
      local_50 = 0;
      local_60 = 0;
      local_6c = 0x3f800000;
      local_58 = 0x3f800000;
      local_44 = 0x3f800000;
      local_30 = 0x3f800000;
      FUN_0053c110(*(undefined4 *)(param_1[0x50] + 0x98),&local_6c);
      FUN_004357e0(iVar7 + 0xac);
      FUN_004357e0(iVar7 + 0xb8);
      FUN_004936f0(&local_6c);
    }
    FUN_00549580(param_1 + 0x2f);
    param_1[0xb] = param_1[0x11];
    param_1[0xc] = param_1[0x12];
    param_1[0xd] = param_1[0x13];
    param_1[0xe] = param_1[0x14];
    param_1[0xf] = param_1[0x15];
    param_1[0x10] = param_1[0x16];
    pfVar1 = (float *)(param_1 + 5);
    local_4 = local_4 & 0xffffff00;
    param_1[0xb] = (int)(-*pfVar1 + (float)param_1[0xb]);
    param_1[0xc] = (int)(-(float)param_1[6] + (float)param_1[0xc]);
    param_1[0xd] = (int)(-(float)param_1[7] + (float)param_1[0xd]);
    param_1[0xe] = (int)(-*pfVar1 + (float)param_1[0xe]);
    param_1[0xf] = (int)(-(float)param_1[6] + (float)param_1[0xf]);
    param_1[0x10] = (int)(-(float)param_1[7] + (float)param_1[0x10]);
    FUN_00649720();
    FUN_00649600(s_rigid_instance__AdvanceAnim___sd_0072c920);
    local_4._0_1_ = 4;
    FUN_0058b130(&local_24,param_1 + 0x11,(int)*(char *)((int)param_1 + 0x7d),param_1,
                 (int)param_1 + 0x62);
    local_4._0_1_ = 0;
    FUN_00649720();
    FUN_00649600(s_rigid_instance__AdvanceAnim___ca_0072c8fc);
    local_4._0_1_ = 5;
    (**(code **)(*param_1 + 0x9c))(0);
    FUN_004c3500(&local_24,1);
    local_4._0_1_ = 0;
    FUN_00649720();
    FUN_00649600(s_rigid_instance__AdvanceAnim___ev_0072c8d4);
    local_4._0_1_ = 6;
    if (0 < *(int *)(param_1[0x50] + 0x9c)) {
      FUN_00576050(param_1[0x50],param_1[2],param_1[3],pfVar1,pfVar1);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    if ((*(byte *)((int)param_1 + 0x15d) & 0x40) != 0) {
      FUN_00649600(s_rigid_instance__AdvanceAnim___fa_0072c8b0);
      uVar6 = __ftol();
      *(undefined1 *)(param_1 + 0x20) = uVar6;
      FUN_00649720();
    }
    iVar7 = param_1[0x50];
    if ((*(int *)(iVar7 + 0x60) == 0) &&
       ((*(int *)(iVar7 + 0x68) != 0 ||
        (fVar3 = (float)(*(int *)(iVar7 + 0xc) + -1),
        fVar3 < *(float *)(iVar7 + 0x10) != (fVar3 == *(float *)(iVar7 + 0x10)))))) {
      FUN_00649600(s_rigid_instance__AdvanceAnim___do_0072c88c);
      local_7c = *(undefined4 *)(param_1[0x50] + 8);
      local_84 = param_1[2];
      local_80 = param_1[3];
      local_4 = CONCAT31(local_4._1_3_,7);
      local_8c[0] = 0x18;
      if (DAT_0075cf1c != 0) {
        FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),local_8c)
        ;
      }
      *(byte *)((int)param_1 + 0x15b) = *(byte *)((int)param_1 + 0x15b) & 0xbf;
      if (*(short *)((int)param_1 + 0x15a) < 0) {
        FUN_004aaa60();
      }
      uVar9 = param_1[0x54];
      uVar5 = param_1[0x55];
      if (uVar9 != 0 || uVar5 != 0) {
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        iVar8 = (int)*(short *)(&DAT_0076cd88 + ((uVar9 ^ uVar5) * -0xfb & 0xfff) * 2);
        for (iVar7 = iVar8; iVar7 != -1; iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe))
        {
        }
        if (iVar8 == -1) {
LAB_004c140f:
          local_4 = CONCAT31(local_4._1_3_,7);
          FUN_00649720();
        }
        else {
          do {
            piVar2 = (int *)(DAT_0076f648 + iVar8 * 0x14);
            iVar7 = *piVar2;
            if (((iVar7 != 0) && (*(uint *)(iVar7 + 8) == uVar9)) &&
               (*(uint *)(iVar7 + 0xc) == uVar5)) {
              if (iVar8 == -1) goto LAB_004c140f;
              uVar9 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
              local_4 = CONCAT31(local_4._1_3_,7);
              uVar9 = -(uint)((*(byte *)(uVar9 + 0x7f) & 0x10) != 0) & uVar9;
              FUN_00649720();
              if ((uVar9 != 0) && (*(char *)(uVar9 + 0x7c) == '\x05')) {
                FUN_004c7c60();
              }
              goto LAB_004c1458;
            }
            iVar8 = (int)*(short *)((int)piVar2 + 0xe);
          } while (iVar8 != -1);
          local_4 = CONCAT31(local_4._1_3_,7);
          FUN_00649720();
        }
      }
LAB_004c1458:
      local_4 = local_4 & 0xffffff00;
      FUN_00649720();
    }
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  ExceptionList = local_c;
  return;
}

