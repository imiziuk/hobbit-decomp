
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0048a760(int *param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int *piVar12;
  void *pvVar13;
  void *pvVar14;
  float10 fVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  float fStack_15c;
  float fStack_158;
  float local_154;
  void *local_150;
  float fStack_14c;
  float fStack_148;
  void *pvStack_144;
  void *pvStack_140;
  float fStack_13c;
  float fStack_138;
  void *pvStack_134;
  int local_130;
  int *piStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  void *pvStack_120;
  void *pvStack_11c;
  void *pvStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [32];
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  short sStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_44;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2ebd;
  local_c = ExceptionList;
  iVar4 = param_1[0x56];
  iVar8 = param_1[0x57];
  pvVar14 = (void *)0x0;
  bVar3 = false;
  local_130 = 0;
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4 = 0;
  iVar4 = FUN_00406ce0(iVar4,iVar8);
  local_4 = 0xffffffff;
  if (iVar4 == -1) {
    FUN_00649720();
LAB_0048a7fc:
    FUN_006b7660();
    FUN_004aaa60();
    (**(code **)(*param_1 + 0x114))();
    ExceptionList = local_c;
    return 0;
  }
  uVar7 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
  piVar12 = (int *)(-(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7);
  FUN_00649720();
  if (piVar12 == (int *)0x0) goto LAB_0048a7fc;
  if ((*(byte *)((int)piVar12 + 0x7f) & 0x10) == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if (((piVar12[4] & 0x1000U) != 0) && ((*(byte *)((int)piVar12 + 0x126) & 1) != 0)) {
    ExceptionList = local_c;
    return 0;
  }
  iVar4 = FUN_00647cf0(param_1[0x5f]);
  if (iVar4 == 0) {
    iVar4 = *param_1;
    uVar5 = (**(code **)(*piVar12 + 0x28))(0);
    (**(code **)(iVar4 + 0x14))(uVar5);
    local_130 = 1;
  }
  FUN_00544b10();
  pvStack_11c = (void *)0x0;
  pvStack_120 = (void *)0x0;
  pvStack_118 = (void *)0x0;
  uStack_110 = 0;
  uStack_114 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  cVar1 = (char)piVar12[0x1f];
  local_4 = 2;
  fStack_13c = 0.0;
  piStack_12c = (int *)0x0;
  if (cVar1 == '\x05') {
    piVar12 = (int *)FUN_004c74b0();
    piStack_12c = piVar12;
    if (piVar12 != (int *)0x0) {
      fStack_138 = (float)piVar12[6];
      fStack_15c = (float)piVar12[4];
      uVar7 = piVar12[1];
      uVar2 = uVar7 * 2;
      if (((uVar2 ^ uVar7) & 0x7fffffff ^ uVar2) == 0xffffffff) {
        iVar4 = *piVar12;
      }
      else {
        iVar4 = FUN_00549470(piVar12 + 1);
      }
      iVar4 = piVar12[2] * 0x50 + *(int *)(iVar4 + 0x58);
      uVar7 = 0;
      do {
        puVar16 = local_c0 + uVar7;
        uVar7 = uVar7 + 1;
        *puVar16 = puVar16[iVar4 - (int)local_c0];
      } while (uVar7 < 0x20);
      uStack_a0 = *(undefined4 *)(iVar4 + 0x20);
      uStack_9c = *(undefined2 *)(iVar4 + 0x24);
      sStack_9a = *(short *)(iVar4 + 0x26);
      uStack_98 = *(undefined2 *)(iVar4 + 0x28);
      uStack_96 = *(undefined2 *)(iVar4 + 0x2a);
      uStack_94 = *(undefined2 *)(iVar4 + 0x2c);
      uStack_92 = *(undefined1 *)(iVar4 + 0x2e);
      uStack_91 = *(undefined1 *)(iVar4 + 0x2f);
      uStack_90 = *(undefined2 *)(iVar4 + 0x30);
      uStack_8e = *(undefined2 *)(iVar4 + 0x32);
      uStack_8c = *(undefined2 *)(iVar4 + 0x34);
      FUN_004357e0(iVar4 + 0x38);
      uStack_7c = *(undefined4 *)(iVar4 + 0x44);
      uStack_78 = *(undefined4 *)(iVar4 + 0x48);
      uStack_74 = *(undefined2 *)(iVar4 + 0x4c);
      fStack_158 = 0.0;
      if (0 < sStack_9a) {
        do {
          pvStack_134 = (void *)FUN_0053c3a0(&fStack_10c,fStack_158);
          pvStack_144 = (void *)((int)pvVar14 + 1);
          if ((int)pvStack_118 < (int)pvStack_144) {
            iVar8 = (int)pvStack_118 / 2;
            iVar4 = 1;
            if (0 < iVar8) {
              iVar4 = iVar8;
            }
            if (iVar4 + (int)pvVar14 < 1) {
              pvStack_140 = (void *)0x1;
            }
            else {
              if (iVar8 < 1) {
                iVar8 = 1;
              }
              pvStack_140 = (void *)(iVar8 + (int)pvVar14);
            }
            pvVar13 = operator_new((int)pvStack_140 * 0xc);
            local_4._0_1_ = 4;
            local_150 = pvVar13;
            if (pvVar13 == (void *)0x0) {
              pvVar13 = (void *)0x0;
            }
            else {
              FUN_00401080(pvVar13,0xc,pvStack_140,FUN_0041def0);
            }
            local_4 = CONCAT31(local_4._1_3_,2);
            if (0 < (int)pvVar14) {
              iVar4 = (int)pvStack_11c - (int)pvVar13;
              pvVar9 = pvVar13;
              local_150 = pvVar14;
              do {
                FUN_004357e0((int)pvVar9 + iVar4);
                pvVar9 = (void *)((int)pvVar9 + 0xc);
                local_150 = (void *)((int)local_150 + -1);
              } while (local_150 != (void *)0x0);
            }
            FUN_006bf840(pvStack_11c);
            pvStack_118 = pvStack_140;
            pvStack_11c = pvVar13;
          }
          pvVar14 = pvStack_144;
          FUN_004357e0(pvStack_134);
          fStack_158 = (float)((int)fStack_158 + 1);
          pvStack_120 = pvVar14;
        } while ((int)fStack_158 < (int)sStack_9a);
        goto LAB_0048ada0;
      }
    }
  }
  else {
    if ((cVar1 != '\x12') && (cVar1 != '\x1c')) {
      FUN_006bf840(0);
      goto LAB_0048b467;
    }
    fVar6 = (float)(**(code **)(*piVar12 + 0x154))();
    fStack_138 = *(float *)((int)fVar6 + 0xe8);
    fStack_15c = *(float *)((int)fVar6 + 0xdc);
    fStack_13c = fVar6;
    local_150 = (void *)FUN_00549470((int)fVar6 + 0xd0);
    FUN_00549580((int)fVar6 + 0xd0);
    iVar4 = *(int *)((int)fVar6 + 0xd4) * 0x50 + *(int *)((int)local_150 + 0x58);
    uVar7 = 0;
    do {
      puVar16 = local_c0 + uVar7;
      uVar7 = uVar7 + 1;
      *puVar16 = puVar16[iVar4 - (int)local_c0];
    } while (uVar7 < 0x20);
    uStack_a0 = *(undefined4 *)(iVar4 + 0x20);
    uStack_9c = *(undefined2 *)(iVar4 + 0x24);
    sStack_9a = *(short *)(iVar4 + 0x26);
    uStack_98 = *(undefined2 *)(iVar4 + 0x28);
    uStack_96 = *(undefined2 *)(iVar4 + 0x2a);
    uStack_94 = *(undefined2 *)(iVar4 + 0x2c);
    uStack_92 = *(undefined1 *)(iVar4 + 0x2e);
    uStack_91 = *(undefined1 *)(iVar4 + 0x2f);
    uStack_90 = *(undefined2 *)(iVar4 + 0x30);
    uStack_8e = *(undefined2 *)(iVar4 + 0x32);
    uStack_8c = *(undefined2 *)(iVar4 + 0x34);
    FUN_004357e0(iVar4 + 0x38);
    uStack_7c = *(undefined4 *)(iVar4 + 0x44);
    uStack_78 = *(undefined4 *)(iVar4 + 0x48);
    uStack_74 = *(undefined2 *)(iVar4 + 0x4c);
    fStack_158 = 0.0;
    if (0 < sStack_9a) {
      do {
        uVar5 = FUN_005417e0(auStack_70,fStack_158);
        pvStack_144 = (void *)((int)pvVar14 + 1);
        if ((int)pvStack_118 < (int)pvStack_144) {
          iVar8 = (int)pvStack_118 / 2;
          iVar4 = 1;
          if (0 < iVar8) {
            iVar4 = iVar8;
          }
          if (iVar4 + (int)pvVar14 < 1) {
            pvVar13 = (void *)0x1;
          }
          else {
            if (iVar8 < 1) {
              iVar8 = 1;
            }
            pvVar13 = (void *)((int)pvVar14 + iVar8);
          }
          local_150 = pvVar13;
          pvVar9 = operator_new((int)pvVar13 * 0xc);
          local_4._0_1_ = 3;
          pvStack_134 = pvVar9;
          if (pvVar9 == (void *)0x0) {
            pvStack_140 = (void *)0x0;
          }
          else {
            FUN_00401080(pvVar9,0xc,pvVar13,FUN_0041def0);
            pvStack_140 = pvVar9;
          }
          local_4 = CONCAT31(local_4._1_3_,2);
          if (0 < (int)pvVar14) {
            iVar4 = (int)pvStack_11c - (int)pvStack_140;
            pvVar13 = pvStack_140;
            pvStack_134 = pvVar14;
            do {
              FUN_004357e0((int)pvVar13 + iVar4);
              pvVar13 = (void *)((int)pvVar13 + 0xc);
              pvStack_134 = (void *)((int)pvStack_134 + -1);
            } while (pvStack_134 != (void *)0x0);
          }
          FUN_006bf840(pvStack_11c);
          pvStack_11c = pvStack_140;
          pvStack_118 = local_150;
        }
        pvVar14 = pvStack_144;
        FUN_004357e0(uVar5);
        fStack_158 = (float)((int)fStack_158 + 1);
        pvStack_120 = pvVar14;
      } while ((int)fStack_158 < (int)sStack_9a);
LAB_0048ada0:
      pvStack_120 = pvVar14;
      if ((0 < (int)pvVar14) && (iVar4 = 0, 0 < sStack_9a)) {
        do {
          iVar8 = FUN_0053f210(0);
          if ((fStack_138 <= (float)iVar8) &&
             (iVar8 = FUN_0053f210(0),
             (float)iVar8 < fStack_15c != (NAN((float)iVar8) || NAN(fStack_15c)))) {
            iVar8 = param_1[0x5f];
            uVar5 = FUN_0053f1b0();
            iVar8 = FUN_00647e40(iVar8,uVar5);
            if (iVar8 != 0) goto LAB_0048ae24;
            *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 4;
            pfVar11 = (float *)((int)pvStack_11c + iVar4 * 0xc);
            FUN_00401f00((float)param_1[0x6a] + *pfVar11,(float)param_1[0x6b] + pfVar11[1],
                         (float)param_1[0x6c] + *(float *)((int)pvStack_11c + iVar4 * 0xc + 8));
            (**(code **)(*param_1 + 0x14))(&fStack_10c,0);
LAB_0048afae:
            bVar3 = true;
            break;
          }
LAB_0048ae24:
          iVar8 = FUN_0053f210(0);
          if (((float)iVar8 < fStack_15c != ((float)iVar8 == fStack_15c)) &&
             (iVar8 = FUN_0053f210(1), fStack_15c <= (float)iVar8)) {
            iVar8 = param_1[0x5f];
            uVar5 = FUN_0053f1b0();
            iVar8 = FUN_00647e40(iVar8,uVar5);
            if (iVar8 == 0) {
              fStack_148 = (float)param_1[0x6c] + *(float *)((int)pvStack_11c + iVar4 * 0xc + 8);
              pfVar11 = (float *)((int)pvStack_11c + iVar4 * 0xc);
              fStack_14c = (float)param_1[0x6b] + pfVar11[1];
              local_150 = (void *)((float)param_1[0x6a] + *pfVar11);
              (**(code **)(*param_1 + 0x14))(&local_150,0);
              if (((NAN(fStack_15c) || NAN(DAT_006e92e4)) != (fStack_15c == DAT_006e92e4)) &&
                 ((*(byte *)(param_1 + 0x55) & 8) == 0)) {
                *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 4;
              }
              goto LAB_0048afae;
            }
          }
          iVar8 = FUN_0053f210(1);
          if ((fStack_138 <= (float)iVar8) &&
             (iVar8 = FUN_0053f210(1),
             (float)iVar8 < fStack_15c != (NAN((float)iVar8) || NAN(fStack_15c)))) {
            iVar8 = param_1[0x5f];
            uVar5 = FUN_0053f1b0();
            iVar8 = FUN_00647e40(iVar8,uVar5);
            if (iVar8 == 0) {
              FUN_00489010();
              goto LAB_0048afae;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < sStack_9a);
      }
    }
  }
  if ((local_130 == 0) && (!bVar3)) {
    if (fStack_13c == 0.0) {
      if (piStack_12c != (int *)0x0) {
        iVar4 = param_1[0x5f];
        uVar5 = 0;
        FUN_00406dc0(iVar4,0);
        iVar4 = FUN_0053cb40(iVar4,uVar5);
        if (-1 < iVar4) {
          uStack_d0 = 0;
          uStack_e0 = 0;
          uStack_f0 = 0;
          uStack_cc = 0;
          fStack_dc = 0.0;
          uStack_fc = 0;
          uStack_c8 = 0;
          uStack_e8 = 0;
          uStack_f8 = 0;
          uStack_d4 = 0;
          uStack_e4 = 0;
          uStack_f4 = 0;
          uStack_100 = 0x3f800000;
          uStack_ec = 0x3f800000;
          uStack_d8 = 0x3f800000;
          uStack_c4 = 0x3f800000;
          FUN_0053c110(iVar4,&uStack_100);
          iVar4 = *param_1;
          uVar17 = 0;
          uVar5 = FUN_0041b9f0(auStack_64,param_1 + 0x6a);
          (**(code **)(iVar4 + 0x14))(uVar5,uVar17);
          goto LAB_0048b452;
        }
      }
LAB_0048b44b:
      FUN_00489010();
    }
    else {
      iVar4 = FUN_00540e90(param_1[0x5f],&uStack_100,0);
      if (iVar4 == 0) {
        iVar4 = param_1[0x5f];
        uVar5 = 0;
        FUN_0041ba80(iVar4,0);
        iVar4 = FUN_0053cb40(iVar4,uVar5);
        if (-1 < iVar4) {
          local_150 = (void *)param_1[0x6a];
          fStack_14c = (float)param_1[0x6b];
          fStack_148 = (float)param_1[0x6c];
          puVar16 = auStack_64;
          local_130 = 1;
          FUN_0048bb60(iVar4);
          puVar10 = (undefined4 *)FUN_004065c0(puVar16);
          FUN_00428790(puVar10[2]);
          FUN_004286f0(*puVar10);
          FUN_00428740(puVar10[1]);
          pfVar11 = (float *)FUN_0041bab0(iVar4);
          FUN_00401f00((float)local_150 + *pfVar11,fStack_14c + pfVar11[1],fStack_148 + pfVar11[2]);
          (**(code **)(*param_1 + 0x14))(auStack_70,0);
        }
        if (local_130 == 0) goto LAB_0048b44b;
      }
      else {
        if ((*(byte *)(param_1 + 0x55) & 8) == 0) {
          *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 4;
        }
        local_150 = (void *)param_1[0x6a];
        fStack_14c = (float)param_1[0x6b];
        fStack_148 = (float)param_1[0x6c];
        FUN_00401f00(uStack_100,uStack_fc,uStack_f8);
        fVar15 = (float10)FUN_00402000();
        if (fVar15 < (float10)DAT_006e92e4 != (NAN(fVar15) || NAN((float10)DAT_006e92e4))) {
          fVar15 = -fVar15;
        }
        fStack_13c = (float)fVar15;
        FUN_00401f00(uStack_f0,uStack_ec,uStack_e8);
        fVar15 = (float10)FUN_00402000();
        if (fVar15 < (float10)DAT_006e92e4 != (NAN(fVar15) || NAN((float10)DAT_006e92e4))) {
          fVar15 = -fVar15;
        }
        fStack_138 = (float)fVar15;
        FUN_00401f00(uStack_e0,fStack_dc,uStack_d8);
        fVar15 = (float10)FUN_00402000();
        if (fVar15 < (float10)DAT_006e92e4 != (NAN(fVar15) || NAN((float10)DAT_006e92e4))) {
          fVar15 = -fVar15;
        }
        pvStack_144 = (void *)(float)fVar15;
        if ((((_DAT_006e9378 < fStack_13c) ||
             (fStack_13c < _DAT_006e9374 != (NAN(fStack_13c) || NAN(_DAT_006e9374)))) ||
            (_DAT_006e9378 < fStack_138)) ||
           (((fStack_138 < _DAT_006e9374 != (NAN(fStack_138) || NAN(_DAT_006e9374)) ||
             (_DAT_006e9378 < (float)pvStack_144)) ||
            ((float)pvStack_144 < _DAT_006e9374 != (NAN((float)pvStack_144) || NAN(_DAT_006e9374))))
           )) {
          FUN_00424a30(&uStack_100);
          FUN_00424aa0();
          if (fStack_34 < DAT_006e92e8 == (NAN(fStack_34) || NAN(DAT_006e92e8))) goto LAB_0048b2ab;
          if (fStack_34 <= _DAT_006e9370) {
            fVar15 = (float10)FUN_0064ca10(uStack_50,uStack_58);
            fStack_158 = 1.5707964;
            goto LAB_0048b2bc;
          }
          fVar15 = (float10)FUN_0064ca10(uStack_54,uStack_44);
          fStack_15c = (float)fVar15;
          fVar15 = (float10)FUN_006c0370();
          fStack_158 = (float)-fVar15;
          fVar15 = (float10)FUN_0064ca10(uStack_38,uStack_30);
          local_154 = (float)fVar15;
        }
        else {
          uStack_58 = uStack_100;
          uStack_50 = uStack_f8;
          if (fStack_dc < DAT_006e92e8 == (NAN(fStack_dc) || NAN(DAT_006e92e8))) {
LAB_0048b2ab:
            fVar15 = (float10)FUN_0064ca10(uStack_50,uStack_58);
            fVar15 = -fVar15;
            fStack_158 = -1.5707964;
          }
          else {
            if (_DAT_006e9370 < fStack_dc) {
              fVar15 = (float10)FUN_0064ca10(uStack_fc,uStack_ec);
              fStack_15c = (float)fVar15;
              fVar15 = (float10)FUN_006c0370();
              fStack_158 = (float)-fVar15;
              fVar15 = (float10)FUN_0064ca10(uStack_e0,uStack_d8);
              local_154 = (float)fVar15;
              goto LAB_0048b2cb;
            }
            fVar15 = (float10)FUN_0064ca10(uStack_f8,uStack_100);
            fStack_158 = 1.5707964;
          }
LAB_0048b2bc:
          fStack_15c = (float)fVar15;
          local_154 = 0.0;
        }
LAB_0048b2cb:
        FUN_00401f00(fStack_158,local_154,fStack_15c);
        FUN_00428790(fStack_104);
        FUN_004286f0(fStack_10c);
        FUN_00428740(fStack_108);
        FUN_00401f00(uStack_d0,uStack_cc,uStack_c8);
        FUN_00401f00(fStack_10c + (float)local_150,fStack_14c + fStack_108,fStack_148 + fStack_104);
        (**(code **)(*param_1 + 0x14))(auStack_70,0);
      }
    }
  }
LAB_0048b452:
  FUN_006bf840(pvStack_11c);
LAB_0048b467:
  local_4 = 0xffffffff;
  FUN_00544b20();
  ExceptionList = local_c;
  return 1;
}

