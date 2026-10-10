
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0057e300(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  int local_c0;
  int local_bc;
  float *local_b8 [4];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  int local_8c;
  uint *local_88;
  int local_84;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [4];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_34;
  float local_30;
  int local_28 [3];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbf18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_c0 = param_1;
  FUN_00649600(s_Collmgr_ApplyPolyCacheToCylinder_00740560);
  iVar13 = 0;
  local_4 = 0;
  local_90 = 0;
  if (*(float *)(param_1 + 0x3ddc) < _DAT_006e9360 !=
      (NAN(*(float *)(param_1 + 0x3ddc)) || NAN(_DAT_006e9360))) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  local_44 = *(float *)(param_1 + 0x3dc4);
  local_3c = *(float *)(param_1 + 0x3dcc);
  local_40 = *(float *)(param_1 + 0x3dc8);
  local_7c = (uint)(DAT_006e92e4 <= local_40);
  if (((NAN(local_44) || NAN(DAT_006e92e4)) == (local_44 == DAT_006e92e4)) ||
     (local_74 = 1, (NAN(local_3c) || NAN(DAT_006e92e4)) == (local_3c == DAT_006e92e4))) {
    local_74 = 0;
  }
  pfVar7 = (float *)FUN_0057dc80();
  local_a8 = *pfVar7 - DAT_006e92e8;
  local_a4 = pfVar7[1] - DAT_006e92e8;
  local_a0 = pfVar7[2] - DAT_006e92e8;
  local_9c = pfVar7[3] + DAT_006e92e8;
  local_98 = pfVar7[4] + DAT_006e92e8;
  local_94 = pfVar7[5] + DAT_006e92e8;
  FUN_0058ce30(&local_a8,local_28,&local_6c,&local_80,&local_78,&local_84,&local_70);
  local_d4 = local_28[0];
  iVar8 = local_80;
  iVar9 = local_70;
  iVar12 = local_84;
  if (local_28[0] <= local_78) {
    do {
      iVar16 = local_6c;
      if (local_6c <= iVar12) {
        do {
          iVar15 = iVar8;
          if (iVar8 <= iVar9) {
            do {
              iVar8 = FUN_0058c720(local_d4,iVar16,iVar15);
              if ((iVar8 != 0) && (sVar1 = *(short *)(iVar8 + 0xc), sVar1 != -1)) {
                while (sVar1 != -1) {
                  iVar8 = sVar1 * 0x198;
                  if ((((((*(uint *)(param_1 + 0x43dc) & *(uint *)(&DAT_0077d45c + iVar8)) != 0) &&
                        ((*(uint *)(&DAT_0077d460 + iVar8) & *(uint *)(param_1 + 0x3d88)) != 0)) &&
                       (*(float *)(&DAT_0077d440 + iVar8) <= local_9c)) &&
                      (((*(float *)(&DAT_0077d44c + iVar8) < local_a8 ==
                         (NAN(*(float *)(&DAT_0077d44c + iVar8)) || NAN(local_a8)) &&
                        (*(float *)(&DAT_0077d448 + iVar8) <= local_94)) &&
                       ((*(float *)(&DAT_0077d454 + iVar8) < local_a0 ==
                         (NAN(*(float *)(&DAT_0077d454 + iVar8)) || NAN(local_a0)) &&
                        ((*(float *)(&DAT_0077d444 + iVar8) <= local_98 &&
                         (*(float *)(&DAT_0077d450 + iVar8) < local_a4 ==
                          (NAN(*(float *)(&DAT_0077d450 + iVar8)) || NAN(local_a4)))))))))) &&
                     (iVar13 < 0x400)) {
                    (&DAT_00772cf0)[iVar13] = sVar1;
                    iVar13 = iVar13 + 1;
                  }
                  sVar1 = *(short *)(&DAT_0077d458 + iVar8);
                }
              }
              iVar15 = iVar15 + 1;
              iVar8 = local_80;
              iVar9 = local_70;
              iVar12 = local_84;
            } while (iVar15 <= local_70);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 <= iVar12);
      }
      local_d4 = local_d4 + 1;
    } while (local_d4 <= local_78);
    local_90 = iVar13;
  }
  do {
    iVar8 = 0;
    local_bc = 0;
    if (0 < iVar13) {
      do {
        local_bc = iVar8;
        if ((&DAT_00772cf0)[iVar8] != -1) break;
        iVar8 = iVar8 + 1;
        local_bc = iVar8;
      } while (iVar8 < iVar13);
    }
    if (local_bc == iVar13) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
    sVar1 = (&DAT_00772cf0)[local_bc];
    *(undefined4 *)(param_1 + 0x42d8) = *(undefined4 *)(&DAT_0077d438 + sVar1 * 0x198);
    uVar3 = *(undefined4 *)(&DAT_0077d43c + sVar1 * 0x198);
    *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
    *(undefined4 *)(param_1 + 0x42dc) = uVar3;
    if (local_bc < iVar13) {
      do {
        iVar8 = local_bc;
        if ((((&DAT_00772cf0)[local_bc] != -1) &&
            (iVar9 = (short)(&DAT_00772cf0)[local_bc] * 0x198, iVar13 = local_90,
            *(int *)(&DAT_0077d438 + iVar9) == *(int *)(param_1 + 0x42d8))) &&
           (*(int *)(&DAT_0077d43c + iVar9) == *(int *)(param_1 + 0x42dc))) {
          sVar1 = *(short *)(&DAT_0077d45a + iVar9);
          (&DAT_00772cf0)[local_bc] = 0xffff;
          local_8c = 0;
          if (0 < sVar1) {
            local_88 = (uint *)(&DAT_0077d57c + iVar9);
            do {
              uVar11 = local_88[-1];
              if (((-1 < (int)uVar11) || (local_74 == 0)) &&
                 ((uVar10 = uVar11 >> 0x1e & 1, uVar10 == 0 || (local_7c == 0)))) {
                uVar4 = *local_88;
                uVar2 = *(ushort *)(local_c0 + 0x3d44);
                uVar17 = uVar4 >> 0xf & 0x3fff;
                local_38 = (uint)uVar2;
                uVar14 = *(ushort *)((int)local_88 + -2) & 0x3fff;
                iVar8 = local_bc;
                param_1 = local_c0;
                if ((*(ushort *)(&DAT_007986c8 + uVar14 * 2) != uVar2) ||
                   (*(ushort *)(&DAT_007986c8 + uVar17 * 2) != uVar2)) {
                  pfVar7 = (float *)(iVar9 + 0x77d464 + (uVar11 & 0xf) * 0xc);
                  local_b8[1] = (float *)(iVar9 + 0x77d464 + (uVar11 >> 4 & 0xf) * 0xc);
                  local_b8[3] = (float *)(iVar9 + 0x77d464 + (uVar11 >> 0xc & 0xf) * 0xc);
                  local_b8[0] = pfVar7;
                  local_b8[2] = (float *)(iVar9 + 0x77d464 + (uVar11 >> 8 & 0xf) * 0xc);
                  local_50 = *local_b8[uVar4 >> 2 & 3];
                  local_58 = local_b8[uVar4 >> 4 & 3][1];
                  local_4c = local_b8[uVar4 >> 6 & 3][1];
                  local_54 = local_b8[uVar4 >> 8 & 3][2];
                  local_48 = local_b8[uVar4 >> 10 & 3][2];
                  if ((*local_b8[uVar4 & 3] <= local_9c) &&
                     ((((local_50 < local_a8 == (NAN(local_50) || NAN(local_a8)) &&
                        (local_b8[uVar4 >> 8 & 3][2] <= local_94)) &&
                       (local_48 < local_a0 == (NAN(local_48) || NAN(local_a0)))) &&
                      ((local_b8[uVar4 >> 4 & 3][1] <= local_98 &&
                       (local_4c < local_a4 == (NAN(local_4c) || NAN(local_a4)))))))) {
                    if ((uVar10 == 0) || (DAT_00740220 == 0)) {
                      uVar11 = uVar4 >> 0xc & 7;
                      if (uVar11 == 7) {
                        local_34 = *local_b8[1] - *pfVar7;
                        local_30 = local_b8[1][1] - pfVar7[1];
                        local_d0 = local_30 * (local_b8[2][2] - pfVar7[2]) -
                                   (local_b8[1][2] - pfVar7[2]) * (local_b8[2][1] - pfVar7[1]);
                        local_cc = (local_b8[1][2] - pfVar7[2]) * (*local_b8[2] - *pfVar7) -
                                   (local_b8[2][2] - pfVar7[2]) * local_34;
                        local_c8 = (local_b8[2][1] - pfVar7[1]) * local_34 -
                                   local_30 * (*local_b8[2] - *pfVar7);
                        fVar5 = DAT_006e92e8 /
                                SQRT(local_d0 * local_d0 + local_cc * local_cc + local_c8 * local_c8
                                    );
                        local_68 = local_d0;
                        local_64 = local_cc;
                        iVar13 = FUN_0064cf30(fVar5);
                        if (iVar13 == 0) {
                          local_d0 = 0.0;
                          local_cc = 0.0;
                          local_c8 = 0.0;
                        }
                        else {
                          local_d0 = local_d0 * fVar5;
                          local_cc = local_cc * fVar5;
                          local_c8 = local_c8 * fVar5;
                        }
                        fVar5 = local_cc * pfVar7[1] + local_d0 * *pfVar7;
                        fVar6 = local_c8 * pfVar7[2];
                      }
                      else {
                        local_d0 = *(float *)(iVar9 + 0x77d524 + uVar11 * 0xc);
                        iVar13 = iVar9 + 0x77d524 + uVar11 * 0xc;
                        local_cc = *(float *)(iVar13 + 4);
                        local_c8 = *(float *)(iVar13 + 8);
                        fVar5 = local_c8 * pfVar7[2] + local_cc * pfVar7[1];
                        fVar6 = local_d0 * *pfVar7;
                      }
                      iVar13 = local_c0;
                      local_c4 = -(fVar6 + fVar5);
                      fVar5 = local_d0 * local_44 + local_cc * local_40 + local_c8 * local_3c;
                      iVar8 = local_bc;
                      param_1 = local_c0;
                      if (fVar5 < _DAT_006f3ee0 != (fVar5 == _DAT_006f3ee0)) {
                        if (*(short *)(&DAT_007986c8 + uVar14 * 2) != *(short *)(local_c0 + 0x3d44))
                        {
                          *(short *)(&DAT_007986c8 + uVar14 * 2) = *(short *)(local_c0 + 0x3d44);
                          FUN_0057b700(local_b8,local_5c,&local_d0,uVar14);
                        }
                        pfVar7 = local_b8[2];
                        iVar8 = local_bc;
                        param_1 = local_c0;
                        if (*(short *)(&DAT_007986c8 + uVar17 * 2) != *(short *)(iVar13 + 0x3d44)) {
                          *(short *)(&DAT_007986c8 + uVar17 * 2) = *(short *)(iVar13 + 0x3d44);
                          local_b8[2] = local_b8[3];
                          local_b8[1] = pfVar7;
                          FUN_0057b700(local_b8,local_5c,&local_d0,uVar17);
                          iVar8 = local_bc;
                          param_1 = local_c0;
                        }
                      }
                    }
                    else {
                      local_1c = 0;
                      local_18 = 0x3f800000;
                      local_14 = 0;
                      local_10 = -pfVar7[1];
                      if (*(ushort *)(&DAT_007986c8 + uVar14 * 2) != uVar2) {
                        *(ushort *)(&DAT_007986c8 + uVar14 * 2) = uVar2;
                        FUN_0057c060(local_b8,local_5c,&local_1c,uVar14);
                      }
                      pfVar7 = local_b8[2];
                      iVar8 = local_bc;
                      param_1 = local_c0;
                      if (*(short *)(&DAT_007986c8 + uVar17 * 2) != *(short *)(local_c0 + 0x3d44)) {
                        *(short *)(&DAT_007986c8 + uVar17 * 2) = *(short *)(local_c0 + 0x3d44);
                        local_b8[2] = local_b8[3];
                        local_b8[1] = pfVar7;
                        FUN_0057c060(local_b8,local_5c,&local_1c,uVar17);
                        iVar8 = local_bc;
                        param_1 = local_c0;
                      }
                    }
                  }
                }
              }
              local_8c = local_8c + 1;
              local_88 = local_88 + 2;
              iVar13 = local_90;
            } while (local_8c < *(short *)(&DAT_0077d45a + iVar9));
          }
        }
        local_bc = iVar8 + 1;
      } while (local_bc < iVar13);
    }
  } while( true );
}

