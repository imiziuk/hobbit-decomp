
/* WARNING: Removing unreachable block (ram,0x004aca06) */

void __thiscall FUN_004ac600(int *param_1,uint param_2,int param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  float fVar12;
  uint uVar13;
  byte *pbVar14;
  byte bVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  int *piVar20;
  float *unaff_retaddr;
  ushort uVar22;
  undefined3 uVar21;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int local_54;
  float local_50;
  int *piStack_4c;
  int local_48;
  int *local_44;
  void *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined1 local_30 [4];
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3e4b;
  local_c = ExceptionList;
  if (param_2 != 0) {
    iVar7 = param_1[0x23];
    ExceptionList = &local_c;
    local_44 = param_1;
    if ((iVar7 != 0) && (ExceptionList = &local_c, param_1[0x24] - iVar7 >> 2 != 0)) {
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_1[0x24] - iVar7 >> 2;
      }
      ExceptionList = &local_c;
      if (iVar7 != *(int *)(param_2 + 0x74)) {
        ExceptionList = &local_c;
        if ((param_1[0x23] != 0) &&
           (ExceptionList = &local_c, param_1[0x24] - param_1[0x23] >> 2 != 0)) {
          ExceptionList = &local_c;
          FUN_0064e7d0(s_Resizing_primitives_0072b9f0);
        }
        FUN_004acb90();
      }
    }
    if ((param_1[0x26] != 0) && (param_1[0x26] != param_2)) {
      if ((param_1[0x23] != 0) && (param_1[0x24] - param_1[0x23] >> 2 != 0)) {
        FUN_0064e7d0(s_Geometry_changed_0072b9dc);
      }
      FUN_004acb90();
    }
    param_1[0x26] = param_2;
    iVar7 = FUN_005a3db0();
    local_3c = param_4 >> 0x10 & 0xff;
    uVar8 = local_3c - *(byte *)((int)param_1 + 0x9e);
    uVar13 = (int)uVar8 >> 0x1f;
    local_38 = param_4 >> 8 & 0xff;
    iVar18 = (uVar8 ^ uVar13) - uVar13;
    uVar8 = local_38 - *(byte *)((int)param_1 + 0x9d);
    uVar13 = (int)uVar8 >> 0x1f;
    local_34 = param_4 & 0xff;
    iVar16 = (uVar8 ^ uVar13) - uVar13;
    uVar8 = (int)(local_34 - *(byte *)(param_1 + 0x27)) >> 0x1f;
    iVar9 = (local_34 - *(byte *)(param_1 + 0x27) ^ uVar8) - uVar8;
    iVar7 = (0x10 - iVar7) * 2;
    if ((*(char *)((int)param_1 + 0x9f) == '\0') ||
       (iVar7 * iVar7 < iVar9 * iVar9 + iVar16 * iVar16 + iVar18 * iVar18)) {
      if ((param_1[0x23] != 0) && (param_1[0x24] - param_1[0x23] >> 2 != 0)) {
        FUN_0064e7d0(s_Ambient_changed_0072b9c8);
      }
      FUN_004acb90();
      *(char *)((int)param_1 + 0x9f) = (char)(param_4 >> 0x18);
      *(char *)((int)param_1 + 0x9e) = (char)(param_4 >> 0x10);
      *(char *)((int)param_1 + 0x9d) = (char)(param_4 >> 8);
      *(char *)(param_1 + 0x27) = (char)param_4;
      *(undefined1 *)((int)param_1 + 0x9f) = 0xff;
    }
    uStack_64 = (uint)(param_3 == 0) << 0x18;
    if (((param_1[0x23] != 0) && (param_1[0x24] - param_1[0x23] >> 2 != 0)) &&
       ((bool)*(char *)(*(int *)param_1[0x23] + 0x38) != (param_3 == 0))) {
      FUN_004acb90();
      FUN_0064e7d0(s_Mobility_Changed_0072b9b4);
    }
    if ((param_1[0x23] == 0) || (param_1[0x24] - param_1[0x23] >> 2 == 0)) {
      uVar8 = *(uint *)(param_2 + 0x74);
      local_48 = 0;
      if (param_1[0x23] == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = param_1[0x24] - param_1[0x23] >> 2;
      }
      if (uVar13 < uVar8) {
        iVar7 = param_1[0x24];
        piVar20 = &local_48;
        iVar9 = FUN_004ace10(piVar20);
        FUN_006683e0(iVar7,uVar8 - iVar9,piVar20);
      }
      else {
        uVar13 = FUN_004ace10();
        if (uVar8 < uVar13) {
          FUN_004ace30(param_1[0x23] + uVar8 * 4,param_1[0x24]);
        }
      }
      local_54 = 0;
      if (0 < *(int *)(param_2 + 0x74)) {
        local_50 = 0.0;
        do {
          iVar7 = *(int *)(param_2 + 0x70);
          fVar12 = *(float *)((int)local_50 + 4 + *(int *)(param_2 + 0x78));
          iVar9 = *(int *)((int)local_50 + 0x28 + *(int *)(param_2 + 0x78)) * 0x20;
          local_2c = *(float *)(iVar9 + 8 + iVar7);
          uVar8 = (int)local_2c - 0x18U >> 3;
          local_28 = fVar12;
          local_40 = operator_new(0x4c);
          local_4 = 0;
          if (local_40 == (void *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = FUN_00665040(fVar12,uVar8 * 8 + 0x20,*(undefined4 *)(&DAT_0072b75c + uVar8 * 4)
                                  ,*(undefined4 *)(*(int *)(param_2 + 0x78) + (int)local_50 + 0x14),
                                  *(undefined4 *)(*(int *)(param_2 + 0x78) + 0x20 + (int)local_50),5
                                 );
          }
          piVar20 = local_44;
          *(undefined4 *)(local_44[0x23] + local_54 * 4) = uVar10;
          *(undefined1 *)(*(int *)(local_44[0x23] + local_54 * 4) + 0x38) = uStack_64._3_1_;
          local_4 = 0xffffffff;
          (**(code **)(**(int **)(local_44[0x23] + local_54 * 4) + 4))(local_30,0);
          iVar7 = *(int *)(iVar9 + iVar7 + 0x18);
          local_48 = (**(code **)(*piVar20 + 0x3c))();
          if (0 < (int)fVar12) {
            pbVar14 = (byte *)(local_48 + 1 + iStack_60 * 4);
            uStack_64 = 0;
            pfVar19 = (float *)(iVar7 + 0x14);
            local_50 = fVar12;
            do {
              uVar13 = param_2 & 0xffffff;
              bVar15 = 0;
              if (local_48 != 0) {
                iVar7 = (int)local_44 + (uint)pbVar14[1];
                if ((iVar7 < 0) || (iVar7 < 0x100)) {
                  uVar22 = (ushort)(byte)((iVar7 < 0) - 1U & (byte)iVar7);
                }
                else {
                  uVar22 = 0xff;
                }
                iVar7 = (int)local_40 + (uint)*pbVar14;
                if ((iVar7 < 0) || (iVar7 < 0x100)) {
                  iVar7 = (uint)CONCAT21(uVar22,(iVar7 < 0) - 1U & (byte)iVar7) << 8;
                }
                else {
                  iVar7 = CONCAT22(uVar22,0xff00);
                }
                iVar9 = local_3c + pbVar14[-1];
                uVar21 = (undefined3)((uint)iVar7 >> 8);
                if ((iVar9 < 0) || (iVar9 < 0x100)) {
                  uVar13 = CONCAT31(uVar21,(iVar9 < 0) - 1U & (byte)iVar9);
                }
                else {
                  uVar13 = CONCAT31(uVar21,0xff);
                }
                bVar15 = pbVar14[2];
              }
              pfVar17 = (float *)(uStack_64 + local_38);
              if (unaff_retaddr == (float *)0x0) {
                *pfVar17 = pfVar19[-5];
                pfVar17[1] = pfVar19[-4];
                pfVar17[2] = pfVar19[-3];
                pfVar17[3] = pfVar19[-2];
                pfVar17[4] = pfVar19[-1];
                fVar12 = *pfVar19;
              }
              else {
                FUN_0041b9f0(&local_2c,pfVar19 + -5);
                pfVar17[2] = fStack_24;
                *pfVar17 = local_2c;
                pfVar17[1] = local_28;
                fVar1 = unaff_retaddr[9];
                fVar2 = *pfVar19;
                fVar3 = unaff_retaddr[5];
                fVar4 = pfVar19[-1];
                fVar5 = unaff_retaddr[1];
                fVar6 = pfVar19[-2];
                fVar12 = unaff_retaddr[2] * pfVar19[-2] +
                         unaff_retaddr[6] * pfVar19[-1] + unaff_retaddr[10] * *pfVar19;
                pfVar17[3] = *unaff_retaddr * pfVar19[-2] +
                             unaff_retaddr[4] * pfVar19[-1] + unaff_retaddr[8] * *pfVar19;
                pfVar17[4] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
                fStack_18 = fVar12;
              }
              pfVar17[5] = fVar12;
              *(char *)((int)pfVar17 + 0x1a) = (char)(uVar13 >> 0x10);
              *(byte *)((int)pfVar17 + 0x1b) = bVar15;
              *(char *)((int)pfVar17 + 0x19) = (char)(uVar13 >> 8);
              *(char *)(pfVar17 + 6) = (char)uVar13;
              *(byte *)((int)pfVar17 + 0x1f) = bVar15;
              *(undefined1 *)((int)pfVar17 + 0x1e) = 0xff;
              *(undefined1 *)((int)pfVar17 + 0x1d) = 0xff;
              *(undefined1 *)(pfVar17 + 7) = 0xff;
              if (uVar8 != 0) {
                pfVar17 = pfVar17 + 8;
                pfVar11 = pfVar19 + 1;
                uVar13 = uVar8;
                do {
                  *pfVar17 = *pfVar11;
                  pfVar17[1] = pfVar11[1];
                  pfVar11 = pfVar11 + 2;
                  pfVar17 = pfVar17 + 2;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              uStack_64 = uStack_64 + uVar8 * 8 + 0x20;
              pbVar14 = pbVar14 + 4;
              pfVar19 = (float *)((int)pfVar19 + local_34);
              local_50 = (float)((int)local_50 + -1);
            } while (local_50 != 0.0);
            local_50 = 0.0;
            piVar20 = piStack_4c;
          }
          (**(code **)(**(int **)(piVar20[0x23] + iStack_5c * 4) + 8))();
          local_54 = iStack_5c + 1;
          local_50 = (float)((int)local_50 + 0x34);
        } while (local_54 < *(int *)(param_2 + 0x74));
      }
    }
  }
  ExceptionList = local_c;
  return;
}

