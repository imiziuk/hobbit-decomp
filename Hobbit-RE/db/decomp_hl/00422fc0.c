
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00422fc0(int *param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  float10 fVar15;
  undefined8 uVar16;
  char *pcVar17;
  float fStack_64;
  int iStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 auStack_3c [3];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf510;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_bilbo__Water_CheckForWater_00720700);
  local_4 = 0;
  pfVar8 = (float *)(**(code **)(*param_1 + 0x28))();
  fStack_30 = *pfVar8;
  fStack_2c = pfVar8[1];
  fStack_28 = pfVar8[2];
  iVar3 = param_1[0x231];
  fVar4 = (float)param_1[0x232];
  fStack_64 = 0.0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  fStack_24 = fStack_30;
  fStack_20 = fStack_2c;
  fStack_1c = fStack_28;
  if (param_2 != -1) {
    FUN_00588ff0(param_2);
    iVar9 = FUN_00589010(param_2,&uStack_54);
    uVar5 = uStack_54;
    uVar6 = uStack_50;
    while (iVar9 != 0) {
      uStack_54 = uVar5;
      uStack_50 = uVar6;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar9 = FUN_00406ce0(uVar5,uVar6);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar9 == -1) {
        FUN_00649720();
      }
      else {
        uVar13 = *(uint *)(DAT_0076f648 + iVar9 * 0x14);
        uVar13 = -(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13;
        FUN_00649720();
        if (((uVar13 != 0) && (*(char *)(uVar13 + 0x7c) == '&')) &&
           (iVar9 = FUN_004e7c90(&fStack_24), iVar9 != 0)) {
          param_1[0x231] = 1;
          param_1[0x10d] = *(int *)(param_1[0x114] + 0x1a4);
          fVar15 = (float10)FUN_004e7ba0(&fStack_24);
          param_1[0x232] = (int)(float)fVar15;
          fStack_2c = (float)(fVar15 + (float10)fStack_2c);
          fStack_18 = fStack_30;
          fStack_14 = fStack_2c - _DAT_006e9994;
          fStack_10 = fStack_28;
          FUN_00579720(param_1[2],param_1[3],&fStack_30,&fStack_18,0xffffffff);
          FUN_005798f0(4);
          iVar9 = FUN_00577e70();
          if (iVar9 == 0) {
            fStack_64 = 200.0;
          }
          else {
            iStack_60 = 0;
            if (0 < DAT_00773970) {
              puVar11 = &DAT_00773520;
              do {
                uVar5 = *puVar11;
                uVar6 = puVar11[1];
                FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
                local_4._0_1_ = 2;
                iVar9 = FUN_00406ce0(uVar5,uVar6);
                local_4 = (uint)local_4._1_3_ << 8;
                if (iVar9 == -1) {
                  FUN_00649720();
                }
                else {
                  uVar13 = *(uint *)(DAT_0076f648 + iVar9 * 0x14);
                  uVar13 = -(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13;
                  FUN_00649720();
                  if ((uVar13 != 0) &&
                     (((cVar2 = *(char *)(uVar13 + 0x7c), cVar2 == '\x04' || (cVar2 == '\x05')) ||
                      (cVar2 == '\x06')))) {
                    fStack_64 = (float)(&DAT_007734f0)[iStack_60 * 0x12] * _DAT_006e9994;
                    break;
                  }
                }
                iStack_60 = iStack_60 + 1;
                puVar11 = puVar11 + 0x12;
              } while (iStack_60 < DAT_00773970);
            }
          }
        }
      }
      iVar9 = FUN_00589010(param_2,&uStack_54);
      uVar5 = uStack_54;
      uVar6 = uStack_50;
    }
  }
  if (param_1[0x231] != 0) {
    if (((iVar3 == 0) && (param_1[0x235] != 3)) && (param_1[0x235] != 4)) {
      fVar1 = *(float *)(param_1[0x114] + 0x1cc) * _DAT_006e99b0;
      if (fVar1 < fStack_64 == (NAN(fVar1) || NAN(fStack_64))) {
        if (fStack_64 <= *(float *)(param_1[0x114] + 0x1cc)) {
          pcVar17 = s_Bilbo_Splash_Small_007206c4;
        }
        else {
          pcVar17 = s_Bilbo_Splash_Medium_007206d8;
        }
      }
      else {
        pcVar17 = s_Bilbo_Splash_Large_007206ec;
      }
      fStack_18 = 1.0;
      fStack_14 = 1.0;
      fStack_10 = 1.0;
      uStack_44 = 0;
      uStack_40 = 0;
      auStack_3c[0] = 0;
      FUN_00488d30(pcVar17,&fStack_30,&uStack_44,&fStack_18);
      FUN_00659600(s_BilboSplashWater_0071fe04,1);
    }
    if (param_1[0x231] != 0) {
      iVar9 = param_1[0x1660];
      iVar10 = param_1[0x1661];
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 3;
      iVar9 = FUN_00406ce0(iVar9,iVar10);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar9 == -1) {
        FUN_00649720();
        uVar13 = 0;
      }
      else {
        uVar13 = *(uint *)(DAT_0076f648 + iVar9 * 0x14);
        uVar13 = -(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13;
        FUN_00649720();
      }
      iVar9 = param_1[0x1662];
      iVar10 = param_1[0x1663];
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 4;
      iVar9 = FUN_00406ce0(iVar9,iVar10);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar9 == -1) {
        FUN_00649720();
        piVar12 = (int *)0x0;
      }
      else {
        uVar7 = *(uint *)(DAT_0076f648 + iVar9 * 0x14);
        piVar12 = (int *)(-(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7);
        FUN_00649720();
      }
      if (uVar13 == 0) {
        uVar16 = FUN_0054bad0(0x2d,0,0);
        *(undefined8 *)(param_1 + 0x1660) = uVar16;
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 5;
        iVar9 = FUN_00406ce0(uVar16);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar9 == -1) {
          FUN_00649720();
          piVar14 = (int *)0x0;
          FUN_00488c30(s_Bilbo_WaterSpray_007206b0);
        }
        else {
          uVar13 = *(uint *)(DAT_0076f648 + iVar9 * 0x14);
          piVar14 = (int *)(-(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13);
          FUN_00649720();
          FUN_00488c30(s_Bilbo_WaterSpray_007206b0);
        }
LAB_00423514:
        if (piVar14 == (int *)0x0) goto LAB_00423518;
      }
      else {
        iVar9 = param_1[0x1660];
        iVar10 = param_1[0x1661];
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 6;
        iVar9 = FUN_00406ce0(iVar9,iVar10);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar9 != -1) {
          uVar13 = *(uint *)(DAT_0076f648 + iVar9 * 0x14);
          piVar14 = (int *)(-(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13);
          FUN_00649720();
          goto LAB_00423514;
        }
        FUN_00649720();
        piVar14 = (int *)0x0;
LAB_00423518:
        param_1[0x1660] = 0;
        param_1[0x1661] = 0;
      }
      if (param_1[0x1662] == 0 && param_1[0x1663] == 0) {
        uVar16 = FUN_0054bad0(0x2d,0,0);
        *(undefined8 *)(param_1 + 0x1662) = uVar16;
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 7;
        iVar9 = FUN_00406ce0(uVar16);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar9 == -1) {
          FUN_00649720();
          piVar12 = (int *)0x0;
        }
        else {
          uVar13 = *(uint *)(DAT_0076f648 + iVar9 * 0x14);
          piVar12 = (int *)(-(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13);
          FUN_00649720();
        }
        FUN_00488c30(s_Bilbo_WaterTrail_0072069c);
      }
      if (piVar12 == (int *)0x0) {
        param_1[0x1662] = 0;
        param_1[0x1663] = 0;
        goto LAB_0042391b;
      }
      if (piVar14 == (int *)0x0) goto LAB_0042391b;
      if (param_1[0x235] == 3) {
        if (*(float *)(param_1[0x114] + 0x1cc) < (float)param_1[0x232]) {
LAB_00423680:
          iVar9 = (**(code **)(*piVar12 + 0x10c))();
          if (iVar9 == 0) {
            (**(code **)(*piVar12 + 0x110))();
          }
          goto LAB_004236cd;
        }
        iVar9 = param_1[0x158];
        if (*(int *)(iVar9 + 8) != -1) {
          FUN_00549470(iVar9 + 4);
          FUN_00549580(iVar9 + 4);
          iVar10 = FUN_0053cc70(s_WALK_WEAPON_007204f4);
          if (*(int *)(iVar9 + 8) == iVar10) goto LAB_00423680;
        }
        iVar9 = param_1[0x158];
        if (*(int *)(iVar9 + 8) != -1) {
          FUN_00549470(iVar9 + 4);
          FUN_00549580(iVar9 + 4);
          iVar10 = FUN_0053cc70(s_WALK_NO_WEAPON_00720500);
          if (*(int *)(iVar9 + 8) == iVar10) goto LAB_00423680;
        }
        if (param_1[0x235] != 3) goto LAB_004236c6;
        FUN_0048a740();
        iVar9 = (**(code **)(*piVar14 + 0x10c))();
        if (iVar9 == 0) {
          (**(code **)(*piVar14 + 0x110))();
        }
      }
      else {
LAB_004236c6:
        FUN_0048a740();
LAB_004236cd:
        FUN_0048a740();
      }
      (**(code **)(*piVar14 + 0x14))(&fStack_30,0);
      pfVar8 = (float *)(**(code **)(*param_1 + 0x30))();
      fStack_18 = pfVar8[2];
      fStack_20 = *pfVar8;
      fStack_1c = pfVar8[1] + _DAT_006e9368;
      (**(code **)(*piVar14 + 0x1c))(&fStack_20);
      (**(code **)(*piVar12 + 0x14))(auStack_3c,0);
      pfVar8 = (float *)(**(code **)(*param_1 + 0x30))();
      fStack_24 = pfVar8[2];
      fStack_2c = *pfVar8;
      fStack_28 = pfVar8[1] + _DAT_006e9368;
      (**(code **)(*piVar12 + 0x1c))(&fStack_2c);
      goto LAB_0042391b;
    }
  }
  uVar13 = param_1[0x1660];
  uVar7 = param_1[0x1661];
  uStack_4c = uVar13;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  iVar10 = (int)*(short *)(&DAT_0076cd88 + ((uVar13 ^ uVar7) * -0xfb & 0xfff) * 2);
  for (iVar9 = iVar10; iVar9 != -1; iVar9 = (int)*(short *)(DAT_0076f648 + iVar9 * 0x14 + 0xe)) {
  }
  if (iVar10 == -1) {
LAB_004237ed:
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  else {
    do {
      iVar9 = *(int *)(DAT_0076f648 + iVar10 * 0x14);
      if (((iVar9 != 0) && (*(uint *)(iVar9 + 8) == uStack_4c)) && (*(uint *)(iVar9 + 0xc) == uVar7)
         ) {
        if (iVar10 == -1) goto LAB_004237ed;
        uVar13 = *(uint *)(DAT_0076f648 + iVar10 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        piVar12 = (int *)(-(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13);
        FUN_00649720();
        if ((piVar12 != (int *)0x0) && (iVar9 = (**(code **)(*piVar12 + 0x10c))(), iVar9 != 0)) {
          FUN_0048a740();
        }
        goto LAB_00423837;
      }
      iVar10 = (int)*(short *)(DAT_0076f648 + iVar10 * 0x14 + 0xe);
    } while (iVar10 != -1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
LAB_00423837:
  uVar13 = param_1[0x1662];
  uVar7 = param_1[0x1663];
  uStack_4c = uVar13;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  iVar10 = (int)*(short *)(&DAT_0076cd88 + ((uVar13 ^ uVar7) * -0xfb & 0xfff) * 2);
  for (iVar9 = iVar10; iVar9 != -1; iVar9 = (int)*(short *)(DAT_0076f648 + iVar9 * 0x14 + 0xe)) {
  }
  if (iVar10 == -1) {
LAB_004238d1:
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  else {
    do {
      piVar12 = (int *)(DAT_0076f648 + iVar10 * 0x14);
      iVar9 = *piVar12;
      if (((iVar9 != 0) && (*(uint *)(iVar9 + 8) == uStack_4c)) && (*(uint *)(iVar9 + 0xc) == uVar7)
         ) {
        if (iVar10 == -1) goto LAB_004238d1;
        uVar13 = *(uint *)(DAT_0076f648 + iVar10 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        piVar12 = (int *)(-(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13);
        FUN_00649720();
        if ((piVar12 != (int *)0x0) && (iVar9 = (**(code **)(*piVar12 + 0x10c))(), iVar9 != 0)) {
          FUN_0048a740();
        }
        goto LAB_0042391b;
      }
      iVar10 = (int)*(short *)((int)piVar12 + 0xe);
    } while (iVar10 != -1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
LAB_0042391b:
  if ((float)param_1[0x232] <= *(float *)(param_1[0x114] + 0x1c0)) {
    param_1[0x233] = 0;
    param_1[0x234] = 0;
  }
  else {
    param_1[0x233] = (int)((float)param_1[0x248] + (float)param_1[0x233]);
  }
  if (*(float *)(param_1[0x114] + 0x1c4) < (float)param_1[0x232]) {
    FUN_0043a3f0(0x2b,s_C__projects_meridian_Support_Obj_007200c0,0x1098);
  }
  if ((((float)param_1[0x233] <= DAT_006e92e8) || (param_1[0x235] == 0x2b)) ||
     (param_1[0x235] == 0x1a)) {
    param_1[0x234] = 0;
  }
  else {
    fVar1 = (float)param_1[0x234];
    param_1[0x234] = (int)((float)param_1[0x248] + fVar1);
    if (DAT_006e92e8 < (float)param_1[0x248] + fVar1) {
      FUN_00659600(s_BilboFlinchWater_00720688,1);
      param_1[0x234] = (int)((float)param_1[0x234] - DAT_006e92e8);
      FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_007200c0,0x10a5);
      (**(code **)(*param_1 + 0x128))(0xfffffff8);
      FUN_0044c120(0xc,0x3f800000);
      FUN_0064e7d0(s_DROWNING____00720678);
    }
  }
  if (((iVar3 != 0) && (param_1[0x231] == 0)) &&
     ((param_1[0x235] == 5 && (*(float *)(param_1[0x114] + 0x1cc) <= fVar4)))) {
    param_1[0x231] = 1;
    param_1[0x232] = (int)fVar4;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

