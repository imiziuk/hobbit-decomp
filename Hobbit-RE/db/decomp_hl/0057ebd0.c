
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0057ebd0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int local_a8;
  int local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float *local_84 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  uint *local_60;
  float local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbf38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Collmgr_ApplyPolyCacheToSphere_00740584);
  local_74 = *(float *)(param_1 + 0x4068) - *(float *)(param_1 + 0x405c);
  iVar14 = 0;
  local_4 = 0;
  local_40 = 0;
  local_70 = *(float *)(param_1 + 0x4064) - *(float *)(param_1 + 0x4058);
  local_5c = *(float *)(param_1 + 0x4060) - *(float *)(param_1 + 0x4054);
  fVar4 = SQRT(local_74 * local_74 + local_70 * local_70 + local_5c * local_5c);
  if (fVar4 < _DAT_006e9360 != (NAN(fVar4) || NAN(_DAT_006e9360))) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  pfVar9 = (float *)FUN_0057dc80();
  local_9c = *pfVar9 - DAT_006e92e8;
  local_98 = pfVar9[1] - DAT_006e92e8;
  local_94 = pfVar9[2] - DAT_006e92e8;
  local_90 = pfVar9[3] + DAT_006e92e8;
  local_8c = pfVar9[4] + DAT_006e92e8;
  local_88 = pfVar9[5] + DAT_006e92e8;
  FUN_0058ce30(&local_9c,&local_3c,&local_4c,&local_58,&local_54,&local_44,&local_48);
  local_a8 = local_3c;
  iVar10 = local_58;
  iVar11 = local_48;
  iVar13 = local_44;
  if (local_3c <= local_54) {
    do {
      iVar18 = local_4c;
      if (local_4c <= iVar13) {
        do {
          iVar17 = iVar10;
          if (iVar10 <= iVar11) {
            do {
              iVar10 = FUN_0058c720(local_a8,iVar18,iVar17);
              if ((iVar10 != 0) && (sVar1 = *(short *)(iVar10 + 0xc), sVar1 != -1)) {
                while (sVar1 != -1) {
                  iVar10 = sVar1 * 0x198;
                  if ((((((*(uint *)(param_1 + 0x43dc) & *(uint *)(&DAT_0077d45c + iVar10)) != 0) &&
                        (*(float *)(&DAT_0077d440 + iVar10) <= local_90)) &&
                       (*(float *)(&DAT_0077d44c + iVar10) < local_9c ==
                        (NAN(*(float *)(&DAT_0077d44c + iVar10)) || NAN(local_9c)))) &&
                      ((*(float *)(&DAT_0077d448 + iVar10) <= local_88 &&
                       (*(float *)(&DAT_0077d454 + iVar10) < local_94 ==
                        (NAN(*(float *)(&DAT_0077d454 + iVar10)) || NAN(local_94)))))) &&
                     ((*(float *)(&DAT_0077d444 + iVar10) <= local_8c &&
                      ((*(float *)(&DAT_0077d450 + iVar10) < local_98 ==
                        (NAN(*(float *)(&DAT_0077d450 + iVar10)) || NAN(local_98)) &&
                       (iVar14 < 0x400)))))) {
                    (&DAT_00772cf0)[iVar14] = sVar1;
                    iVar14 = iVar14 + 1;
                  }
                  sVar1 = *(short *)(&DAT_0077d458 + iVar10);
                }
              }
              iVar17 = iVar17 + 1;
              iVar10 = local_58;
              iVar11 = local_48;
              iVar13 = local_44;
            } while (iVar17 <= local_48);
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 <= iVar13);
      }
      local_a8 = local_a8 + 1;
    } while (local_a8 <= local_54);
    local_40 = iVar14;
  }
  do {
    iVar10 = 0;
    local_a4 = 0;
    if (0 < iVar14) {
      do {
        local_a4 = iVar10;
        if ((&DAT_00772cf0)[iVar10] != -1) break;
        iVar10 = iVar10 + 1;
        local_a4 = iVar10;
      } while (iVar10 < iVar14);
    }
    if (local_a4 == iVar14) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
    sVar1 = (&DAT_00772cf0)[local_a4];
    *(undefined4 *)(param_1 + 0x42d8) = *(undefined4 *)(&DAT_0077d438 + sVar1 * 0x198);
    uVar2 = *(undefined4 *)(&DAT_0077d43c + sVar1 * 0x198);
    *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
    *(undefined4 *)(param_1 + 0x42dc) = uVar2;
    if (local_a4 < iVar14) {
      do {
        if ((((&DAT_00772cf0)[local_a4] != -1) &&
            (iVar10 = (short)(&DAT_00772cf0)[local_a4] * 0x198,
            *(int *)(&DAT_0077d438 + iVar10) == *(int *)(param_1 + 0x42d8))) &&
           (*(int *)(&DAT_0077d43c + iVar10) == *(int *)(param_1 + 0x42dc))) {
          sVar1 = *(short *)(&DAT_0077d45a + iVar10);
          (&DAT_00772cf0)[local_a4] = 0xffff;
          local_50 = 0;
          if (0 < sVar1) {
            local_60 = (uint *)(&DAT_0077d57c + iVar10);
            do {
              uVar12 = *local_60;
              uVar16 = uVar12 >> 0xf & 0x3fff;
              uVar15 = *(ushort *)((int)local_60 + -2) & 0x3fff;
              if ((*(short *)(&DAT_007986c8 + uVar15 * 2) != *(short *)(param_1 + 0x3d44)) ||
                 (*(short *)(&DAT_007986c8 + uVar16 * 2) != *(short *)(param_1 + 0x3d44))) {
                uVar3 = local_60[-1];
                pfVar9 = (float *)(iVar10 + 0x77d464 + (uVar3 & 0xf) * 0xc);
                local_84[1] = (float *)(iVar10 + 0x77d464 + (uVar3 >> 4 & 0xf) * 0xc);
                local_84[3] = (float *)(iVar10 + 0x77d464 + (uVar3 >> 0xc & 0xf) * 0xc);
                local_84[0] = pfVar9;
                local_84[2] = (float *)(iVar10 + 0x77d464 + (uVar3 >> 8 & 0xf) * 0xc);
                local_20 = *local_84[uVar12 >> 2 & 3];
                local_28 = local_84[uVar12 >> 4 & 3][1];
                local_1c = local_84[uVar12 >> 6 & 3][1];
                local_24 = local_84[uVar12 >> 8 & 3][2];
                local_18 = local_84[uVar12 >> 10 & 3][2];
                if (((*local_84[uVar12 & 3] <= local_90) &&
                    ((local_20 < local_9c == (NAN(local_20) || NAN(local_9c)) &&
                     (local_84[uVar12 >> 8 & 3][2] <= local_88)))) &&
                   ((local_18 < local_94 == (NAN(local_18) || NAN(local_94)) &&
                    ((local_84[uVar12 >> 4 & 3][1] <= local_8c &&
                     (local_1c < local_98 == (NAN(local_1c) || NAN(local_98)))))))) {
                  uVar12 = uVar12 >> 0xc & 7;
                  if (uVar12 == 7) {
                    local_38 = *local_84[1] - *pfVar9;
                    local_34 = local_84[1][1] - pfVar9[1];
                    local_6c = local_34 * (local_84[2][2] - pfVar9[2]) -
                               (local_84[1][2] - pfVar9[2]) * (local_84[2][1] - pfVar9[1]);
                    local_68 = (local_84[1][2] - pfVar9[2]) * (*local_84[2] - *pfVar9) -
                               (local_84[2][2] - pfVar9[2]) * local_38;
                    local_64 = (local_84[2][1] - pfVar9[1]) * local_38 -
                               local_34 * (*local_84[2] - *pfVar9);
                    fVar5 = DAT_006e92e8 /
                            SQRT(local_68 * local_68 + local_64 * local_64 + local_6c * local_6c);
                    iVar14 = FUN_0064cf30(fVar5);
                    fVar4 = DAT_006e92e4;
                    fVar6 = DAT_006e92e4;
                    fVar7 = DAT_006e92e4;
                    if (iVar14 != 0) {
                      fVar4 = local_6c * fVar5;
                      fVar6 = local_68 * fVar5;
                      fVar7 = local_64 * fVar5;
                    }
                  }
                  else {
                    iVar14 = iVar10 + 0x77d524 + uVar12 * 0xc;
                    fVar4 = *(float *)(iVar10 + 0x77d524 + uVar12 * 0xc);
                    fVar6 = *(float *)(iVar14 + 4);
                    fVar7 = *(float *)(iVar14 + 8);
                  }
                  fVar4 = fVar4 * local_5c + fVar7 * local_74 + fVar6 * local_70;
                  if (fVar4 < _DAT_006e9360 != (NAN(fVar4) || NAN(_DAT_006e9360))) {
                    if (*(short *)(&DAT_007986c8 + uVar15 * 2) != *(short *)(param_1 + 0x3d44)) {
                      *(short *)(&DAT_007986c8 + uVar15 * 2) = *(short *)(param_1 + 0x3d44);
                      FUN_0057c770(pfVar9,local_84[1],local_84[2],*(undefined4 *)(param_1 + 0x42d8),
                                   *(undefined4 *)(param_1 + 0x42dc),uVar15);
                    }
                    pfVar8 = local_84[2];
                    if (*(short *)(&DAT_007986c8 + uVar16 * 2) != *(short *)(param_1 + 0x3d44)) {
                      *(short *)(&DAT_007986c8 + uVar16 * 2) = *(short *)(param_1 + 0x3d44);
                      local_84[2] = local_84[3];
                      FUN_0057c770(pfVar9,pfVar8,local_84[3],*(undefined4 *)(param_1 + 0x42d8),
                                   *(undefined4 *)(param_1 + 0x42dc),uVar16);
                    }
                  }
                }
              }
              local_50 = local_50 + 1;
              local_60 = local_60 + 2;
              iVar14 = local_40;
            } while (local_50 < *(short *)(&DAT_0077d45a + iVar10));
          }
        }
        local_a4 = local_a4 + 1;
      } while (local_a4 < iVar14);
    }
  } while( true );
}

