
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004846e0(int *param_1,float param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  short sVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  int *piVar19;
  float10 fVar20;
  float10 extraout_ST0;
  int iStack_a4;
  float fStack_a0;
  float fStack_9c;
  int iStack_98;
  int iStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 local_18 [4];
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2b63;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_fog_volume__OnAdvanceLogic_00728d24);
  local_4 = 0;
  FUN_0065fce0(0);
  pfVar9 = (float *)FUN_00672260(local_18);
  pfVar10 = (float *)(**(code **)(*param_1 + 0x28))();
  if (SQRT((pfVar10[2] - pfVar9[2]) * (pfVar10[2] - pfVar9[2]) +
           (pfVar10[1] - pfVar9[1]) * (pfVar10[1] - pfVar9[1]) +
           (*pfVar10 - *pfVar9) * (*pfVar10 - *pfVar9)) <= (float)param_1[0x4b]) {
    if ((param_1[0x55] != 0) &&
       (fVar17 = (float)param_1[0x8f], param_1[0x8f] = (int)(param_2 + fVar17),
       (float)param_1[0x56] <= param_2 + fVar17)) {
      do {
        FUN_0054d4f0(&fStack_a0,0xffffffff,0x50,param_1 + 0x11);
        if (fStack_a0 != -NAN) {
          iStack_48 = param_1[3];
          fVar17 = (float)param_1[2];
          iStack_94 = 0x10;
          iStack_a4 = 0;
          if (param_1[0x55] == 2) {
            iStack_a4 = param_1[0x57];
            iStack_94 = 0x11;
          }
          FUN_00588ff0(fStack_a0);
          iVar11 = FUN_00589010(fStack_a0,&fStack_9c);
          fVar14 = fStack_9c;
          iVar12 = iStack_98;
          while (fStack_9c = fVar14, iStack_98 = iVar12, iVar11 != 0) {
            if ((fVar14 != fVar17) || (iVar12 != iStack_48)) {
              FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
              local_4._0_1_ = 1;
              iVar12 = FUN_00406ce0(fVar14,iVar12);
              local_4 = (uint)local_4._1_3_ << 8;
              if (iVar12 == -1) {
                FUN_00649720();
                piVar19 = (int *)0x0;
              }
              else {
                uVar18 = *(uint *)(DAT_0076f648 + iVar12 * 0x14);
                piVar19 = (int *)(-(uint)((*(byte *)(uVar18 + 0x7f) & 0x10) != 0) & uVar18);
                FUN_00649720();
              }
              pfVar9 = (float *)(**(code **)(*piVar19 + 0x28))();
              fStack_90 = *pfVar9;
              fStack_8c = pfVar9[1];
              fStack_88 = pfVar9[2];
              FUN_00401f00((float)piVar19[0x14] - (float)piVar19[0x11],
                           (float)piVar19[0x15] - (float)piVar19[0x12],
                           (float)piVar19[0x16] - (float)piVar19[0x13]);
              iVar12 = FUN_004e2330(&fStack_90);
              if (iVar12 == 0) {
                fStack_14 = fStack_28 * _DAT_006e936c;
                fStack_38 = fStack_90;
                fStack_34 = fStack_8c + fStack_14;
                fStack_30 = fStack_88;
                iVar12 = FUN_004e2330(&fStack_38);
                if (iVar12 == 0) {
                  fStack_40 = fStack_8c + fStack_28;
                  fStack_44 = fStack_90;
                  fStack_3c = fStack_88;
                  iVar12 = FUN_004e2330(&fStack_44);
                  if (iVar12 == 0) goto LAB_004849b7;
                }
              }
              iVar12 = *piVar19;
              uVar13 = (**(code **)(iVar12 + 0x28))
                                 (0x3f800000,param_1[0x58],param_1[0x58],iStack_a4,iStack_94,0);
              (**(code **)(iVar12 + 0x78))(fVar17,iStack_48,uVar13);
            }
LAB_004849b7:
            iVar11 = FUN_00589010(fStack_a0,&fStack_9c);
            fVar14 = fStack_9c;
            iVar12 = iStack_98;
          }
          FUN_00588b20(fStack_a0);
        }
        fVar17 = (float)param_1[0x8f];
        param_1[0x8f] = (int)(fVar17 - (float)param_1[0x56]);
      } while ((float)param_1[0x56] <= fVar17 - (float)param_1[0x56]);
    }
    iVar12 = 0;
    if (0 < param_1[0x59]) {
      iVar11 = 0;
      do {
        *(undefined4 *)(param_1[0x5a] + iVar11 + 0x1c) =
             *(undefined4 *)(param_1[0x5a] + 0x18 + iVar11);
        *(undefined4 *)(iVar11 + 0x18 + param_1[0x5a]) = 0;
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 0x30;
      } while (iVar12 < param_1[0x59]);
    }
    uStack_4c = 0;
    if (0 < param_1[0x43]) {
      iStack_94 = 0;
      do {
        uVar18 = uStack_4c;
        fVar17 = *(float *)(param_1[0x5b] + 0x30 + iStack_94);
        pfVar9 = (float *)(param_1[0x5b] + iStack_94);
        if ((NAN(fVar17) || NAN(DAT_006e92e4)) == (fVar17 == DAT_006e92e4)) {
          fVar17 = param_2 * pfVar9[0xc] + pfVar9[0xb];
          if (((DAT_006e92e8 < fVar17 != (NAN(DAT_006e92e8) || NAN(fVar17))) ||
              (fVar14 = DAT_006e92e4, DAT_006e92e4 <= fVar17)) &&
             (fVar14 = fVar17, DAT_006e92e8 < fVar17 != (NAN(DAT_006e92e8) || NAN(fVar17)))) {
            fVar14 = DAT_006e92e8;
          }
          bVar4 = NAN(DAT_006e92e4);
          bVar5 = fVar14 == DAT_006e92e4;
          pfVar9[0xb] = fVar14;
          if ((NAN(fVar14) || bVar4) == bVar5) {
            if ((NAN(fVar14) || NAN(DAT_006e92e8)) != (fVar14 == DAT_006e92e8)) {
              pfVar9[0xc] = 0.0;
            }
          }
          else {
            fVar20 = (float10)FUN_00647b30(0,0x40a00000);
            pfVar9[9] = (float)fVar20;
            fVar17 = (float)(uVar18 & 0x80000001);
            pfVar9[5] = 0.0;
            pfVar9[4] = 0.0;
            pfVar9[3] = 0.0;
            if ((int)fVar17 < 0) {
              fVar17 = (float)(((int)fVar17 - 1U | 0xfffffffe) + 1);
            }
            pfVar9[10] = fVar17;
            fVar20 = (float10)FUN_00647b30((float)param_1[0x5d] * _DAT_006e99ec,
                                           (float)param_1[0x5d] * _DAT_006e936c);
            *pfVar9 = (float)fVar20;
            fVar20 = (float10)FUN_00647b30((float)param_1[0x5e] * _DAT_006e99ec,
                                           (float)param_1[0x5e] * _DAT_006e936c);
            pfVar9[2] = (float)fVar20;
            pfVar9[1] = 0.0;
            pfVar9[8] = 0.0;
            pfVar9[7] = 0.0;
            pfVar9[6] = 0.0;
            pfVar9[0xb] = 0.0;
            pfVar9[0xc] = 1.0;
          }
        }
        fStack_30 = 0.0;
        fStack_34 = 0.0;
        if (pfVar9[0xc] < DAT_006e92e4) {
          fStack_84 = 0.0;
          fVar17 = DAT_006e92e4;
LAB_00485005:
          fVar14 = DAT_006e92e8 - param_2 * (float)param_1[0x4a];
          pfVar9[3] = fVar14 * pfVar9[3];
          pfVar9[4] = fVar14 * pfVar9[4];
          pfVar9[5] = fVar14 * pfVar9[5];
          fStack_84 = fStack_84 + param_2 * pfVar9[7];
          pfVar9[3] = fVar17 + param_2 * pfVar9[6] + pfVar9[3];
          pfVar9[4] = fStack_84 + pfVar9[4];
          pfVar9[5] = fStack_30 + param_2 * pfVar9[8] + pfVar9[5];
          fStack_88 = param_2 * pfVar9[0xd];
          fStack_90 = fStack_88 * pfVar9[3];
          fStack_8c = pfVar9[4] * fStack_88;
          fStack_88 = pfVar9[5] * fStack_88;
          fVar2 = fStack_90 + *pfVar9;
          *pfVar9 = fVar2;
          fVar17 = pfVar9[1];
          pfVar9[1] = fStack_8c + fVar17;
          fVar14 = fStack_88 + pfVar9[2];
          pfVar9[2] = fVar14;
          fStack_9c = (DAT_006e92e8 - param_2 * (float)param_1[0x52]) * (fStack_8c + fVar17);
          pfVar9[1] = fStack_9c;
          fVar3 = (float)param_1[0x5d] * _DAT_006e936c;
          fVar6 = (float)param_1[0x5d] * _DAT_006e99ec;
          fVar7 = (float)param_1[0x5e] * _DAT_006e936c;
          fVar8 = (float)param_1[0x5e] * _DAT_006e99ec;
          fVar17 = -(float)param_1[0x2c];
          if (fStack_9c < fVar17 != (NAN(fStack_9c) || NAN(fVar17))) {
            pfVar9[1] = fVar17;
          }
          if (fVar14 < fVar8 ||
              (fVar7 < fVar14 != (NAN(fVar7) || NAN(fVar14)) ||
              (fVar2 < fVar6 != (NAN(fVar2) || NAN(fVar6)) || fVar3 < fVar2))) {
            pfVar9[0xc] = pfVar9[0xd] * _DAT_006e99ec;
          }
        }
        else {
          fStack_a0 = (float)param_1[0x2b] + *pfVar9;
          fVar17 = DAT_006e92e8 / (float)param_1[0x40];
          fVar14 = (float)__ftol();
          fStack_9c = fVar14;
          fStack_84 = (float)__ftol();
          iVar12 = (param_1[0x41] * (int)fStack_84 + (int)fVar14) * 0x30;
          if (*(int *)(iVar12 + 0x1c + param_1[0x5a]) <= param_1[0x53]) {
            fVar2 = (float)param_1[0x40];
            fVar3 = (float)param_1[0x5c];
            fStack_a0 = DAT_006e92e8 -
                        (fStack_a0 -
                        ((float)(int)fStack_9c * (float)param_1[0x40] + (float)param_1[0x5c])) *
                        fVar17;
            pfVar9[0x10] = fStack_a0;
            fVar20 = (float10)DAT_006e92e8 -
                     (extraout_ST0 - ((float10)(int)fStack_84 * (float10)fVar2 + (float10)fVar3)) /
                     (float10)(float)param_1[0x40];
            fVar17 = (float)fVar20;
            pfVar9[0x11] = (float)fVar20;
            if ((((int)fVar14 < 0) || ((int)fStack_84 < 0)) ||
               ((param_1[0x41] <= (int)fVar14 || (param_1[0x42] <= (int)fStack_84)))) {
              fStack_74 = 0.0;
              fStack_78 = 0.0;
              fStack_7c = 0.0;
              *(undefined2 *)(pfVar9 + 0xe) = 0xffff;
            }
            else {
              sVar15 = (short)param_1[0x41] * SUB42(fStack_84,0) + SUB42(fVar14,0);
              *(short *)(pfVar9 + 0xe) = sVar15;
              piVar19 = (int *)(sVar15 * 0x30 + 0x18 + param_1[0x5a]);
              *piVar19 = *piVar19 + 1;
              pfVar10 = (float *)(*(short *)(pfVar9 + 0xe) * 0x30 + param_1[0x5a]);
              fStack_7c = *pfVar10;
              fStack_78 = pfVar10[1];
              fStack_74 = pfVar10[2];
            }
            iVar12 = (int)fVar14 + 1;
            if (((iVar12 < 0) || ((int)fStack_84 < 0)) ||
               ((param_1[0x41] <= iVar12 || (param_1[0x42] <= (int)fStack_84)))) {
              fStack_68 = 0.0;
              fStack_6c = 0.0;
              fStack_70 = 0.0;
              *(undefined2 *)((int)pfVar9 + 0x3a) = 0xffff;
            }
            else {
              sVar15 = (short)param_1[0x41] * SUB42(fStack_84,0) + (short)iVar12;
              *(short *)((int)pfVar9 + 0x3a) = sVar15;
              piVar19 = (int *)(sVar15 * 0x30 + 0x18 + param_1[0x5a]);
              *piVar19 = *piVar19 + 1;
              pfVar10 = (float *)(*(short *)((int)pfVar9 + 0x3a) * 0x30 + param_1[0x5a]);
              fStack_70 = *pfVar10;
              fStack_6c = pfVar10[1];
              fStack_68 = pfVar10[2];
            }
            iVar11 = (int)fStack_84 + 1;
            if (((((int)fVar14 < 0) || (iVar11 < 0)) || (param_1[0x41] <= (int)fVar14)) ||
               (param_1[0x42] <= iVar11)) {
              fStack_5c = 0.0;
              fStack_60 = 0.0;
              fStack_64 = 0.0;
              *(undefined2 *)(pfVar9 + 0xf) = 0xffff;
            }
            else {
              sVar15 = (short)param_1[0x41] * (short)iVar11 + SUB42(fVar14,0);
              *(short *)(pfVar9 + 0xf) = sVar15;
              piVar19 = (int *)(sVar15 * 0x30 + 0x18 + param_1[0x5a]);
              *piVar19 = *piVar19 + 1;
              pfVar10 = (float *)(*(short *)(pfVar9 + 0xf) * 0x30 + param_1[0x5a]);
              fStack_64 = *pfVar10;
              fStack_60 = pfVar10[1];
              fStack_5c = pfVar10[2];
            }
            fVar14 = DAT_006e92e4;
            if (((iVar12 < 0) || (iVar11 < 0)) ||
               ((param_1[0x41] <= iVar12 || (param_1[0x42] <= iVar11)))) {
              fStack_54 = 0.0;
              fStack_58 = 0.0;
              *(undefined2 *)((int)pfVar9 + 0x3e) = 0xffff;
            }
            else {
              sVar15 = (short)param_1[0x41] * (short)iVar11 + (short)iVar12;
              *(short *)((int)pfVar9 + 0x3e) = sVar15;
              iVar12 = sVar15 * 0x30;
              *(int *)(iVar12 + 0x18 + param_1[0x5a]) = *(int *)(iVar12 + 0x18 + param_1[0x5a]) + 1;
              iVar12 = *(short *)((int)pfVar9 + 0x3e) * 0x30;
              fStack_54 = *(float *)(iVar12 + 4 + param_1[0x5a]);
              pfVar10 = (float *)(iVar12 + param_1[0x5a]);
              fStack_58 = *pfVar10;
              fVar14 = pfVar10[2];
            }
            fStack_50 = DAT_006e92e8 - fStack_a0;
            fStack_70 = fStack_70 * fStack_50;
            fStack_6c = fStack_6c * fStack_50;
            fStack_68 = fStack_50 * fStack_68;
            fStack_64 = fStack_64 * fStack_a0;
            fStack_60 = fStack_a0 * fStack_60;
            fStack_5c = fStack_a0 * fStack_5c;
            fStack_58 = fStack_58 * fStack_50;
            fStack_54 = fStack_54 * fStack_50;
            fStack_50 = fStack_50 * fVar14;
            fStack_44 = (fStack_70 + fStack_7c * fStack_a0) * fVar17;
            fStack_40 = (fStack_78 * fStack_a0 + fStack_6c) * fVar17;
            fStack_3c = (fStack_74 * fStack_a0 + fStack_68) * fVar17;
            fVar17 = DAT_006e92e8 - fVar17;
            fStack_2c = (fStack_58 + fStack_64) * fVar17;
            fStack_28 = (fStack_54 + fStack_60) * fVar17;
            fStack_84 = (fStack_28 + fStack_40) * param_2;
            fStack_30 = ((fStack_50 + fStack_5c) * fVar17 + fStack_3c) * param_2;
            uVar18 = uStack_4c;
            fVar17 = (fStack_2c + fStack_44) * param_2;
            goto LAB_00485005;
          }
          pfVar9[0xc] = -1.0;
          puVar1 = (uint *)(iVar12 + 0x1c + param_1[0x5a]);
          uVar16 = *puVar1 - 1;
          *puVar1 = uVar16 & ((int)uVar16 < 0) - 1;
        }
        uStack_4c = uVar18 + 1;
        iStack_94 = iStack_94 + 0x48;
      } while ((int)uStack_4c < param_1[0x43]);
    }
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else {
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  ExceptionList = pvStack_c;
  return;
}

