
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054dcf0(void)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  float *pfVar15;
  uint uVar16;
  float10 fVar17;
  int local_178;
  ushort *local_174;
  float local_170 [7];
  float local_154;
  int local_150;
  uint local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_120;
  float local_110;
  float local_fc;
  float local_f8 [24];
  int local_98 [3];
  undefined4 local_8c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d990b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_144 = DAT_007784f4;
  local_4 = 0;
  DAT_0076fa30 = 0;
  local_170[0] = 3.4028235e+38;
  local_170[1] = 3.4028235e+38;
  local_170[2] = 3.4028235e+38;
  local_170[3] = -3.4028235e+38;
  local_170[4] = -3.4028235e+38;
  local_170[5] = -3.4028235e+38;
  local_170[6] = DAT_007784f0;
  FUN_00674670();
  pfVar5 = (float *)FUN_00672330();
  local_140 = *pfVar5;
  local_13c = pfVar5[1];
  local_138 = pfVar5[2];
  pfVar5 = (float *)FUN_00672260();
  local_134 = *pfVar5;
  local_130 = pfVar5[1];
  local_12c = pfVar5[2];
  iVar6 = FUN_00672830();
  iVar7 = FUN_00672860();
  piVar8 = (int *)FUN_00672890();
  iVar13 = local_150;
  local_14c = (int)local_f8 - iVar6;
  pfVar5 = (float *)(iVar6 + 8);
  piVar14 = (int *)(iVar7 + 8);
  iVar7 = (int)piVar8 - iVar7;
  piVar10 = local_98;
  pfVar15 = local_f8 + 1;
  local_178 = 6;
  do {
    pfVar15[-2] = pfVar5[-2];
    pfVar15[-1] = pfVar5[-1];
    *pfVar15 = *pfVar5;
    *(float *)(local_14c + (int)pfVar5) = pfVar5[1];
    piVar10[-1] = (int)(local_170 + piVar14[-2]);
    *piVar10 = (int)(local_170 + piVar14[-1]);
    piVar10[1] = (int)(local_170 + *piVar14);
    piVar10[2] = (int)(local_170 + *piVar8);
    piVar10[3] = (int)(local_170 + piVar8[1]);
    piVar10[4] = (int)(local_170 + *(int *)((int)piVar14 + iVar7));
    pfVar5 = pfVar5 + 4;
    pfVar15 = pfVar15 + 4;
    piVar14 = piVar14 + 3;
    piVar8 = piVar8 + 3;
    piVar10 = piVar10 + 6;
    local_178 = local_178 + -1;
  } while (local_178 != 0);
  *(short *)(local_150 + 0x28c8) = *(short *)(local_150 + 0x28c8) + 1;
  if (*(short *)(local_150 + 0x28c8) == 0) {
    FUN_0064cbe0();
    FUN_0064cc00();
    iVar6 = 0;
    if (0 < *(int *)(iVar13 + 0x28d8)) {
      iVar7 = 0;
      do {
        iVar2 = *(int *)(iVar7 + *(int *)(iVar13 + 0x28c0));
        if (iVar2 != 0) {
          *(undefined2 *)(iVar2 + 0x60) = 0xffff;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < *(int *)(iVar13 + 0x28d8));
    }
    FUN_0064cc50();
    fVar17 = (float10)FUN_0064cd30();
    FUN_0064e7d0(s_Cleared_m_VisSequence__7_3fMS_0073d0a0,(double)fVar17);
  }
  puVar9 = (undefined4 *)(iVar13 + 0x2014);
  iVar6 = 0x46;
  do {
    puVar9[-1] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9 = puVar9 + 8;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_174 = &DAT_00778500;
  do {
    uVar12 = (uint)*local_174;
joined_r0x0054df38:
    if (uVar12 != 0xffff) {
      if ((short)uVar12 == -1) {
        iVar6 = 0;
      }
      else {
        iVar6 = (uVar12 & 0x1ff) * 0x1c + *(int *)(&DAT_007780d0 + ((uVar12 & 0xffff) >> 9) * 4);
      }
      local_14c = (uint)*(ushort *)(iVar6 + 4);
      iVar7 = 0;
      puVar11 = (ushort *)(iVar6 + 0x12);
      do {
        if (*puVar11 != 0xffff) break;
        iVar7 = iVar7 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar7 < 1);
      uVar12 = local_14c;
      if (iVar7 != 1) {
        iVar7 = 0;
        local_170[0] = (float)(int)*(short *)(iVar6 + 8) * local_170[6];
        pfVar5 = local_f8;
        local_170[1] = (float)(int)*(short *)(iVar6 + 10) * local_144;
        puVar9 = local_8c;
        local_170[2] = (float)(int)*(short *)(iVar6 + 0xc) * local_170[6];
        local_170[3] = local_170[0] + local_170[6];
        local_170[4] = local_170[1] + local_144;
        local_170[5] = local_170[2] + local_170[6];
        do {
          fVar4 = *(float *)*puVar9 * *pfVar5 +
                  *(float *)puVar9[1] * pfVar5[1] + *(float *)puVar9[-1] * pfVar5[-1] + pfVar5[2];
          if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) break;
          pfVar5 = pfVar5 + 4;
          puVar9 = puVar9 + 6;
          iVar7 = iVar7 + 1;
        } while (iVar7 < 6);
        if (iVar7 == 6) {
          iVar7 = FUN_005a90d0(local_170,iVar6);
          local_154 = (float)(uint)(iVar7 == 0);
          uVar12 = local_14c;
          if (local_154 != 0.0) {
            iVar7 = 0;
            pfVar5 = local_f8;
            piVar10 = local_98;
            do {
              fVar4 = *(float *)*piVar10 * *pfVar5 +
                      *(float *)piVar10[1] * pfVar5[1] + *(float *)piVar10[-1] * pfVar5[-1] +
                      pfVar5[2];
              if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) break;
              pfVar5 = pfVar5 + 4;
              piVar10 = piVar10 + 6;
              iVar7 = iVar7 + 1;
            } while (iVar7 < 6);
            local_148 = (local_170[5] + local_170[2]) * _DAT_006e936c - local_12c;
            local_154 = (local_170[4] + local_170[1]) * _DAT_006e936c - local_130;
            bVar3 = (((local_170[3] + local_170[0]) * _DAT_006e936c - local_134) * local_140 +
                    local_138 * local_148 + local_13c * local_154) - local_170[6] < _DAT_0073ccbc;
            uVar16 = (uint)*(ushort *)(iVar6 + 0x12);
LAB_0054e140:
            uVar12 = local_14c;
            iVar13 = local_150;
            if (uVar16 != 0xffff) {
              while( true ) {
                iVar6 = *(int *)(*(int *)(&DAT_007782dc + ((int)uVar16 >> 10) * 4) + 8 +
                                (uVar16 & 0x3ff) * 0xc);
                puVar11 = (ushort *)
                          (*(int *)(&DAT_007782dc + ((int)uVar16 >> 10) * 4) +
                          (uVar16 & 0x3ff) * 0xc);
                if (*(short *)(iVar6 + 0x60) != *(short *)(local_150 + 0x28c8)) break;
                uVar16 = (uint)*puVar11;
                if (uVar16 == 0xffff) goto joined_r0x0054df38;
              }
              if (uVar16 != 0xffff) {
                uVar16 = (uint)*puVar11;
                *(short *)(iVar6 + 0x60) = *(short *)(local_150 + 0x28c8);
                local_170[0] = *(float *)(iVar6 + 0x44);
                local_170[1] = *(float *)(iVar6 + 0x48);
                local_170[2] = *(float *)(iVar6 + 0x4c);
                local_170[3] = *(float *)(iVar6 + 0x50);
                local_170[4] = *(float *)(iVar6 + 0x54);
                local_170[5] = *(float *)(iVar6 + 0x58);
                if (iVar7 != 6) goto code_r0x0054e1fe;
                goto LAB_0054e24f;
              }
            }
          }
        }
      }
      goto joined_r0x0054df38;
    }
    local_174 = local_174 + 1;
  } while ((int)local_174 < 0x7794a2);
  if (DAT_007794a2 == 0xffff) {
    iVar6 = 0;
  }
  else {
    iVar6 = (DAT_007794a2 & 0x1ff) * 0x1c + *(int *)(&DAT_007780d0 + (uint)(DAT_007794a2 >> 9) * 4);
  }
  uVar1 = *(ushort *)(iVar6 + 0x12);
  while (uVar12 = (uint)uVar1, uVar12 != 0xffff) {
    while( true ) {
      puVar11 = (ushort *)
                (*(int *)(&DAT_007782dc + ((int)uVar12 >> 10) * 4) + (uVar12 & 0x3ff) * 0xc);
      iVar6 = *(int *)(puVar11 + 4);
      if (*(short *)(iVar6 + 0x60) != *(short *)(iVar13 + 0x28c8)) break;
      uVar12 = (uint)*puVar11;
      if (uVar12 == 0xffff) goto LAB_0054e372;
    }
    if (uVar12 == 0xffff) break;
    uVar1 = *puVar11;
    iVar7 = (uint)*(byte *)(iVar6 + 0x7c) * 0x20;
    *(undefined4 *)(iVar6 + 100) = *(undefined4 *)(iVar7 + 0x2010 + iVar13);
    *(int *)(iVar7 + 0x2010 + iVar13) = iVar6;
    iVar6 = (uint)*(byte *)(iVar6 + 0x7c) * 0x20;
    *(int *)(iVar6 + 0x2014 + iVar13) = *(int *)(iVar6 + 0x2014 + iVar13) + 1;
    DAT_0076fa30 = DAT_0076fa30 + 1;
  }
LAB_0054e372:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
code_r0x0054e1fe:
  iVar13 = 0;
  pfVar5 = local_f8;
  puVar9 = local_8c;
  do {
    fVar4 = *(float *)*puVar9 * *pfVar5 +
            *(float *)puVar9[1] * pfVar5[1] + *(float *)puVar9[-1] * pfVar5[-1] + pfVar5[2];
    if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) break;
    pfVar5 = pfVar5 + 4;
    puVar9 = puVar9 + 6;
    iVar13 = iVar13 + 1;
  } while (iVar13 < 6);
  if (iVar13 == 6) {
LAB_0054e24f:
    local_120 = local_170[5] - local_170[2];
    local_110 = (local_170[3] - local_170[0]) * _DAT_006e936c;
    fVar4 = (local_170[4] - local_170[1]) * _DAT_006e936c;
    if (((bVar3) ||
        (fVar4 = local_110 * local_110 +
                 fVar4 * fVar4 + local_120 * _DAT_006e936c * local_120 * _DAT_006e936c,
        fVar4 < _DAT_0076f900 == (NAN(fVar4) || NAN(_DAT_0076f900)))) &&
       ((DAT_0073ccb4 == 0 || (iVar13 = FUN_005a90d0(local_170,iVar6 + 0x5c), iVar13 == 0)))) {
      iVar13 = (uint)*(byte *)(iVar6 + 0x7c) * 0x20;
      *(undefined4 *)(iVar6 + 100) = *(undefined4 *)(iVar13 + 0x2010 + local_150);
      *(int *)(iVar13 + 0x2010 + local_150) = iVar6;
      piVar10 = (int *)((uint)*(byte *)(iVar6 + 0x7c) * 0x20 + 0x2014 + local_150);
      *piVar10 = *piVar10 + 1;
      DAT_0076fa30 = DAT_0076fa30 + 1;
    }
  }
  goto LAB_0054e140;
}

