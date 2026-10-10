
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00690bf3(int param_1,undefined2 *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined2 *puVar15;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  float local_1a0 [60];
  float local_b0 [13];
  float local_7c [4];
  float local_6c [4];
  float local_5c [4];
  float local_4c [4];
  float local_3c [4];
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  int local_18;
  float *local_14;
  float *local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  if (param_2 != (undefined2 *)0x0) {
    local_c = 0;
    pbVar6 = (byte *)(param_1 + 0x3d);
    iVar11 = 0x10;
    bVar4 = true;
    do {
      if ((pbVar6[1] < param_3._2_1_) || (param_4._2_1_ < pbVar6[1])) {
LAB_00690c50:
        local_8 = local_8 << 1 | 1;
        local_c = local_c + 1;
      }
      else {
        if ((*pbVar6 < param_3._1_1_) || (param_4._1_1_ < *pbVar6)) goto LAB_00690c50;
        if ((pbVar6[-1] < param_3._0_1_) || (param_4._0_1_ < pbVar6[-1])) goto LAB_00690c50;
        local_8 = local_8 << 1 & 0xfffe;
      }
      pbVar6 = pbVar6 + -4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    if (local_c == 0) {
      *param_2 = 0;
      param_2[1] = 0xffff;
      *(undefined4 *)(param_2 + 2) = 0xffffffff;
    }
    else {
      iVar11 = 0;
      pcVar7 = (char *)(param_1 + 2);
      do {
        if (((bVar4) && (0 < iVar11)) &&
           ((*pcVar7 != pcVar7[-4] || ((pcVar7[-1] != pcVar7[-5] || (pcVar7[-2] != pcVar7[-6]))))))
        {
          bVar4 = false;
        }
        iVar11 = iVar11 + 1;
        pcVar7 = pcVar7 + 4;
      } while (iVar11 < 0x10);
      if (!bVar4) {
        iVar11 = 0x10;
        do {
          FUN_00690852(param_1);
          param_1 = param_1 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        iVar11 = 0;
        do {
          pfVar9 = (float *)((int)local_7c + iVar11);
          *pfVar9 = 0.0;
          iVar14 = 1;
          pfVar8 = (float *)((int)local_1a0 + iVar11);
          iVar16 = 0x10;
          do {
            if ((ushort)((ushort)iVar14 & (ushort)local_8) != 0) {
              *pfVar9 = *pfVar8 + *pfVar9;
            }
            iVar14 = iVar14 << 1;
            pfVar8 = pfVar8 + 4;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          iVar11 = iVar11 + 4;
          *pfVar9 = (DAT_006e92e8 / (float)local_c) * *pfVar9;
        } while (iVar11 < 0xc);
        iVar11 = 0;
        do {
          fVar1 = *(float *)((int)local_7c + iVar11);
          pfVar9 = (float *)((int)local_1a0 + iVar11);
          iVar16 = 0x10;
          do {
            *pfVar9 = *pfVar9 - fVar1;
            pfVar9 = pfVar9 + 4;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          iVar11 = iVar11 + 4;
        } while (iVar11 < 0xc);
        param_4 = 0.0;
        local_14 = local_3c;
        pfVar9 = local_1a0;
        do {
          iVar11 = 3 - (int)param_4;
          local_10 = pfVar9;
          pfVar8 = local_14;
          do {
            *pfVar8 = 0.0;
            param_3 = 1.4013e-45;
            local_18 = 0x10;
            pfVar12 = local_10;
            pfVar17 = pfVar9;
            do {
              if ((ushort)(SUB42(param_3,0) & (ushort)local_8) != 0) {
                *pfVar8 = *pfVar12 * *pfVar17 + *pfVar8;
              }
              param_3 = (float)((int)param_3 << 1);
              pfVar12 = pfVar12 + 4;
              pfVar17 = pfVar17 + 4;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
            local_10 = local_10 + 1;
            pfVar8 = pfVar8 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          param_4 = (float)((int)param_4 + 1);
          local_14 = local_14 + 4;
          pfVar9 = pfVar9 + 1;
        } while ((int)param_4 < 3);
        iVar11 = 0;
        local_18 = 0;
        do {
          FUN_00690936();
          FUN_00690936();
          fVar1 = local_1c + local_2c + local_3c[0];
          if ((NAN(fVar1) || NAN(DAT_006e92e4)) != (fVar1 == DAT_006e92e4)) goto LAB_00690f7d;
          iVar16 = 0;
          pfVar9 = local_3c;
          do {
            iVar14 = 3 - iVar16;
            pfVar8 = pfVar9;
            do {
              *pfVar8 = (_DAT_006e958c / fVar1) * *pfVar8;
              pfVar8 = pfVar8 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar16 = iVar16 + 1;
            pfVar9 = pfVar9 + 4;
          } while (iVar16 < 3);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 9);
        fVar1 = 0.0;
        local_3c[3] = local_3c[1];
        local_24 = local_3c[2];
        local_20 = local_28;
        puVar13 = (undefined2 *)0x0;
        pfVar9 = local_3c;
        puVar15 = param_2;
        do {
          if (fVar1 < *pfVar9 != (NAN(fVar1) || NAN(*pfVar9))) {
            fVar1 = *pfVar9;
            puVar15 = puVar13;
          }
          puVar13 = (undefined2 *)((int)puVar13 + 1);
          pfVar9 = pfVar9 + 4;
        } while ((int)puVar13 < 3);
        pfVar9 = local_3c + (int)puVar15;
        iVar11 = 0;
        do {
          iVar16 = iVar11 + 1;
          fVar2 = *pfVar9;
          pfVar9 = pfVar9 + 3;
          local_7c[iVar11 + 4] = (DAT_006e92e8 / SQRT(fVar1)) * fVar2;
          iVar11 = iVar16;
        } while (iVar16 < 3);
        iVar11 = 0;
        fVar1 = 0.0;
        do {
          iVar16 = iVar11 + 4;
          iVar11 = iVar11 + 1;
          fVar1 = local_7c[iVar16] * local_7c[iVar16] + fVar1;
        } while (iVar11 < 3);
        if ((NAN(fVar1) || NAN(DAT_006e92e4)) == (fVar1 == DAT_006e92e4)) {
          iVar16 = 1;
          param_4 = -99999.0;
          param_3 = 99999.0;
          pfVar9 = local_1a0;
          iVar11 = 0x10;
          do {
            if ((ushort)((ushort)iVar16 & (ushort)local_8) != 0) {
              fVar2 = 0.0;
              iVar14 = 0;
              pfVar8 = pfVar9;
              do {
                iVar5 = iVar14 + 4;
                iVar14 = iVar14 + 1;
                fVar3 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                fVar2 = local_7c[iVar5] * fVar3 + fVar2;
              } while (iVar14 < 3);
              fVar2 = fVar2 / fVar1;
              if (fVar2 < param_3 != (NAN(fVar2) || NAN(param_3))) {
                param_3 = fVar2;
              }
              if (param_4 < fVar2) {
                param_4 = fVar2;
              }
            }
            iVar16 = iVar16 << 1;
            pfVar9 = pfVar9 + 4;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          iVar11 = 0;
          do {
            pfVar9 = (float *)((int)local_7c + iVar11 + 0x10);
            iVar16 = iVar11 + 4;
            *(float *)((int)local_4c + iVar11) =
                 param_3 * *pfVar9 + *(float *)((int)local_7c + iVar11);
            *(float *)((int)local_5c + iVar11) =
                 param_4 * *pfVar9 + *(float *)((int)local_7c + iVar11);
            iVar11 = iVar16;
          } while (iVar16 < 0xc);
          FUN_00690a60();
          FUN_006909d5(local_4c,local_5c,local_c);
          fVar1 = 0.0;
          iVar11 = 0;
          do {
            iVar16 = iVar11 + 4;
            fVar2 = *(float *)((int)local_5c + iVar11) - *(float *)((int)local_4c + iVar11);
            fVar1 = fVar2 * fVar2 + fVar1;
            iVar11 = iVar16;
          } while (iVar16 < 0xc);
          if (((NAN(fVar1) || NAN(DAT_006e92e4)) == (fVar1 == DAT_006e92e4)) || (local_c != 0x10)) {
            param_3._0_2_ = 0x8000;
            pfVar9 = local_b0;
            param_1 = 0x10;
            do {
              if ((param_3._0_2_ & (ushort)local_8) == 0) {
                uVar10 = *(int *)(param_2 + 2) << 2 | 3;
              }
              else {
                iVar11 = 0;
                pfVar8 = pfVar9;
                do {
                  pfVar12 = (float *)((int)local_7c + iVar11);
                  iVar11 = iVar11 + 4;
                  *pfVar8 = *pfVar12 + *pfVar8;
                  pfVar8 = pfVar8 + 1;
                } while (iVar11 < 0xc);
                if (local_c == 0x10) {
                  *(int *)(param_2 + 2) = *(int *)(param_2 + 2) << 2;
                  uVar18 = *(uint *)(param_2 + 2);
                  iVar11 = __ftol();
                  uVar10 = *(uint *)(&DAT_007545ac + iVar11 * 4);
                }
                else {
                  *(int *)(param_2 + 2) = *(int *)(param_2 + 2) << 2;
                  uVar18 = *(uint *)(param_2 + 2);
                  iVar11 = __ftol();
                  uVar10 = *(uint *)(&DAT_007545bc + iVar11 * 4);
                }
                uVar10 = uVar10 | uVar18;
              }
              param_3._0_2_ = param_3._0_2_ >> 1;
              pfVar9 = pfVar9 + -4;
              param_1 = param_1 + -1;
              *(uint *)(param_2 + 2) = uVar10;
            } while (param_1 != 0);
            return;
          }
        }
      }
LAB_00690f7d:
      FUN_00690b92(local_8);
    }
  }
  return;
}

