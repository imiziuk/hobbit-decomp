
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00448590(int *param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int *piVar15;
  float10 fVar16;
  float local_50;
  int local_48;
  int local_44;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfa90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__PushBox_CheckForPushBox_00724580);
  local_4 = 0;
  bVar2 = param_1[0x32] != 0 || param_1[0x33] != 0;
  if ((param_1[0x235] != 1) && (param_1[0x235] != 3)) {
    param_1[0x1646] = 0;
    param_1[0x1647] = 0;
    bVar2 = true;
  }
  iVar12 = FUN_0041fce0(0x43fa0000);
  if ((iVar12 == 0) && (!bVar2)) {
    if ((float)param_1[0x1650] <= (float)param_1[0x1649] * (float)param_1[0x1649]) {
      local_50 = (float)param_1[0x1650];
    }
    else {
      local_50 = (float)param_1[0x1649] * (float)param_1[0x1649];
    }
    FUN_00588ff0(param_2);
    iVar13 = FUN_00589010(param_2,&local_48);
    iVar12 = local_48;
    iVar11 = local_44;
    while (iVar13 != 0) {
      local_48 = iVar12;
      local_44 = iVar11;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar12 = FUN_00406ce0(iVar12,iVar11);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar12 == -1) {
        FUN_00649720();
      }
      else {
        uVar1 = *(uint *)(DAT_0076f648 + iVar12 * 0x14);
        piVar15 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        FUN_00649720();
        if (((piVar15 != (int *)0x0) && ((char)piVar15[0x1f] == '%')) &&
           ((*(byte *)(piVar15 + 0x98) & 2) == 0)) {
          pfVar14 = (float *)(**(code **)(*piVar15 + 0x28))();
          fStack_30 = *pfVar14;
          fStack_2c = pfVar14[1];
          fStack_28 = pfVar14[2];
          fVar5 = fStack_2c - (float)param_1[6];
          fVar3 = fVar5;
          if (fVar5 < DAT_006e92e4 != (NAN(fVar5) || NAN(DAT_006e92e4))) {
            fVar3 = -fVar5;
          }
          if (((fVar3 <= _DAT_006e9984) &&
              (fVar5 = (fStack_28 - (float)param_1[7]) * (fStack_28 - (float)param_1[7]) +
                       fVar5 * fVar5 +
                       (fStack_30 - (float)param_1[5]) * (fStack_30 - (float)param_1[5]),
              fVar5 < local_50 != (NAN(fVar5) || NAN(local_50)))) &&
             (fVar16 = (float10)FUN_0044cb00(&fStack_30),
             fVar16 < (float10)(float)param_1[0x164a] !=
             (NAN(fVar16) || NAN((float10)(float)param_1[0x164a])))) {
            fVar16 = (float10)(**(code **)(*param_1 + 0x10c))();
            fStack_14 = (float)fVar16;
            uStack_18 = 0;
            uStack_10 = 0;
            fStack_24 = 0.0;
            fStack_20 = 0.0;
            fStack_1c = 1.0;
            FUN_00429030(&uStack_18);
            pfVar14 = (float *)(**(code **)(*piVar15 + 0x28))();
            fVar4 = pfVar14[2] - (float)param_1[7];
            fVar3 = pfVar14[1] - (float)param_1[6];
            fVar6 = *pfVar14 - (float)param_1[5];
            fVar7 = DAT_006e92e8 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar6 * fVar6);
            iVar12 = FUN_0064cf30(fVar7);
            fVar8 = DAT_006e92e4;
            fVar9 = DAT_006e92e4;
            fVar10 = DAT_006e92e4;
            if (iVar12 != 0) {
              fVar8 = fVar6 * fVar7;
              fVar9 = fVar4 * fVar7;
              fVar10 = fVar3 * fVar7;
            }
            fVar9 = fStack_1c * fVar9;
            fVar10 = fStack_20 * fVar10;
            fVar8 = fVar8 * fStack_24;
            iVar12 = FUN_004ba6e0();
            if ((DAT_006e92e4 < fVar8 + fVar10 + fVar9) || (iVar12 != 0)) {
              param_1[0x1646] = local_48;
              param_1[0x1647] = local_44;
              param_1[0x1650] = (int)fVar5;
              param_1[0x164e] = local_48;
              param_1[0x164f] = local_44;
              goto LAB_004488ec;
            }
          }
        }
      }
      iVar13 = FUN_00589010(param_2,&local_48);
      iVar12 = local_48;
      iVar11 = local_44;
    }
  }
  param_1[0x1646] = 0;
  param_1[0x1647] = 0;
LAB_004488ec:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

