
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00575440(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int local_2c4;
  uint local_2bc;
  float local_298;
  float local_290;
  float local_28c;
  float local_288;
  int local_27c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbae3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  iVar8 = FUN_00549470();
  FUN_00549580();
  iVar9 = *(int *)(param_1 + 0xd4) * 0x50;
  iVar19 = (int)*(short *)(iVar9 + 0x26 + *(int *)(iVar8 + 0x58));
  iVar9 = iVar9 + *(int *)(iVar8 + 0x58);
  if (iVar19 != 0) {
    fVar6 = *(float *)(param_1 + 0xdc);
    FUN_00571af0();
    local_2c4 = 0;
    if (0 < iVar19) {
      do {
        sVar5 = *(short *)(iVar9 + 0x28);
        iVar8 = *(int *)(*(int *)(iVar9 + 0x20) + 0x68);
        iVar10 = FUN_0053f210();
        iVar11 = FUN_0053f210();
        fVar7 = (float)iVar10;
        local_2bc = 0;
        if ((fVar7 <= fVar6) && (fVar6 <= (float)iVar11)) {
          pcVar12 = (char *)FUN_0053f1a0();
          local_2bc = 0x1505;
          cVar4 = *pcVar12;
          while (uVar16 = (uint)cVar4, uVar16 != 0) {
            pcVar12 = pcVar12 + 1;
            if ((0x60 < (int)uVar16) && ((int)uVar16 < 0x7b)) {
              uVar16 = uVar16 - 0x20;
            }
            local_2bc = local_2bc * 0x21 ^ uVar16;
            cVar4 = *pcVar12;
          }
          if (local_2bc == DAT_00772c00) {
            FUN_005417e0();
            FUN_00574c00();
          }
          else if (local_2bc == DAT_00772c04) {
            FUN_005418d0();
            FUN_005417e0();
            FUN_00573020();
          }
          else if (local_2bc == DAT_00772c08) {
            FUN_005418d0();
            FUN_005417e0();
            FUN_00573020();
          }
          else if (local_2bc == DAT_00772c0c) {
            FUN_00649600();
            local_4._0_1_ = 1;
            iVar8 = FUN_00406ce0();
            local_4 = (uint)local_4._1_3_ << 8;
            if (iVar8 == -1) {
              FUN_00649720();
            }
            else {
              uVar16 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
              bVar3 = *(byte *)(uVar16 + 0x7f);
              FUN_00649720();
              if ((-(uint)((bVar3 & 0x10) != 0) & uVar16) != 0) {
                FUN_00401f00();
                FUN_00402160();
                FUN_00573a80();
                goto LAB_00575974;
              }
            }
            FUN_005417e0();
            FUN_00573a80();
          }
          else {
            iVar10 = FUN_0053f210();
            if (iVar10 == 0x30) {
              FUN_00649600();
              local_4._0_1_ = 2;
              iVar8 = FUN_00406ce0();
              local_4 = (uint)local_4._1_3_ << 8;
              if (iVar8 == -1) {
                FUN_00649720();
              }
              else {
                uVar16 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
                bVar3 = *(byte *)(uVar16 + 0x7f);
                FUN_00649720();
                if ((-(uint)((bVar3 & 0x10) != 0) & uVar16) != 0) {
                  FUN_005417e0();
                  FUN_004aa020();
                  FUN_005aea90();
                }
              }
            }
            else if (iVar10 == 0x28) {
              FUN_00649600();
              local_4._0_1_ = 3;
              iVar10 = FUN_00406ce0();
              local_4 = (uint)local_4._1_3_ << 8;
              if (iVar10 == -1) {
                FUN_00649720();
              }
              else {
                uVar16 = *(uint *)(DAT_0076f648 + iVar10 * 0x14);
                bVar3 = *(byte *)(uVar16 + 0x7f);
                FUN_00649720();
                if ((-(uint)((bVar3 & 0x10) != 0) & uVar16) != 0) {
                  FUN_005417e0();
                  FUN_004a32c0(iVar8 + (sVar5 + local_2c4) * 0x18);
                  FUN_004a9620();
                }
              }
            }
            else if (iVar10 == 2) {
              FUN_00649600();
              local_4._0_1_ = 4;
              iVar8 = FUN_00406ce0();
              local_4 = (uint)local_4._1_3_ << 8;
              if (iVar8 == -1) {
                FUN_00649720();
              }
              else {
                uVar16 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
                uVar16 = -(uint)((*(byte *)(uVar16 + 0x7f) & 0x10) != 0) & uVar16;
                FUN_00649720();
                if (uVar16 != 0) {
                  puVar1 = (uint *)(uVar16 + 0xe8);
                  *puVar1 = *puVar1 | 4;
                }
              }
            }
          }
        }
LAB_00575974:
        if (((local_290 < fVar7 != (local_290 == fVar7)) &&
            (fVar7 < local_28c != (NAN(fVar7) || NAN(local_28c)))) ||
           ((local_298 < fVar7 != (local_298 == fVar7) &&
            (fVar7 < local_288 != (NAN(fVar7) || NAN(local_288)))))) {
          if (local_2bc == 0) {
            pcVar12 = (char *)FUN_0053f1a0();
            local_2bc = 0x1505;
            cVar4 = *pcVar12;
            while (uVar16 = (uint)cVar4, uVar16 != 0) {
              pcVar12 = pcVar12 + 1;
              if ((0x60 < (int)uVar16) && ((int)uVar16 < 0x7b)) {
                uVar16 = uVar16 - 0x20;
              }
              local_2bc = local_2bc * 0x21 ^ uVar16;
              cVar4 = *pcVar12;
            }
          }
          if (local_2bc == DAT_00772c10) {
            FUN_00649600();
            local_4._0_1_ = 5;
            iVar8 = FUN_00406ce0();
            local_4 = (uint)local_4._1_3_ << 8;
            if (iVar8 == -1) {
              FUN_00649720();
            }
            else {
              uVar16 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
              bVar3 = *(byte *)(uVar16 + 0x7f);
              FUN_00649720();
              if ((-(uint)((bVar3 & 0x10) != 0) & uVar16) != 0) {
                FUN_00401f00();
                FUN_00573ed0();
                goto LAB_00575f8e;
              }
            }
            FUN_005417e0();
            FUN_00573ed0();
          }
          else if (local_2bc == DAT_00772c14) {
            FUN_00649600();
            iVar10 = (int)*(short *)(&DAT_0076cd88 + ((param_2 ^ param_3) * -0xfb & 0xfff) * 2);
            for (iVar8 = iVar10; iVar8 != -1;
                iVar8 = (int)*(short *)(DAT_0076f648 + iVar8 * 0x14 + 0xe)) {
            }
            while (iVar10 != -1) {
              piVar2 = (int *)(DAT_0076f648 + iVar10 * 0x14);
              iVar8 = *piVar2;
              if (((iVar8 != 0) && (*(uint *)(iVar8 + 8) == param_2)) &&
                 (*(uint *)(iVar8 + 0xc) == param_3)) {
                if (iVar10 != -1) {
                  uVar16 = *(uint *)(DAT_0076f648 + iVar10 * 0x14);
                  bVar3 = *(byte *)(uVar16 + 0x7f);
                  local_4 = (uint)local_4._1_3_ << 8;
                  FUN_00649720();
                  if ((-(uint)((bVar3 & 0x10) != 0) & uVar16) == 0) goto LAB_00575c43;
                  FUN_00401f00();
                  FUN_00573790();
                  goto LAB_00575f8e;
                }
                break;
              }
              iVar10 = (int)*(short *)((int)piVar2 + 0xe);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00649720();
LAB_00575c43:
            FUN_005417e0();
            FUN_00573790();
          }
          else if (local_2bc == DAT_00772c18) {
            FUN_005417e0();
            FUN_005735a0();
          }
          else if (local_2bc == DAT_00772c1c) {
            if (*(int *)(param_1 + 0xe0) == 0) {
              FUN_00649600();
              iVar10 = (int)*(short *)(&DAT_0076cd88 + ((param_2 ^ param_3) * -0xfb & 0xfff) * 2);
              for (iVar8 = iVar10; iVar8 != -1;
                  iVar8 = (int)*(short *)(DAT_0076f648 + iVar8 * 0x14 + 0xe)) {
              }
              while (iVar10 != -1) {
                piVar2 = (int *)(DAT_0076f648 + iVar10 * 0x14);
                iVar8 = *piVar2;
                if (((iVar8 != 0) && (*(uint *)(iVar8 + 8) == param_2)) &&
                   (*(uint *)(iVar8 + 0xc) == param_3)) {
                  if (iVar10 != -1) {
                    uVar16 = *(uint *)(DAT_0076f648 + iVar10 * 0x14);
                    bVar3 = *(byte *)(uVar16 + 0x7f);
                    local_4 = (uint)local_4._1_3_ << 8;
                    FUN_00649720();
                    if ((-(uint)((bVar3 & 0x10) != 0) & uVar16) == 0) goto LAB_00575d4f;
                    FUN_00574980();
                    goto LAB_00575f8e;
                  }
                  break;
                }
                iVar10 = (int)*(short *)((int)piVar2 + 0xe);
              }
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00649720();
LAB_00575d4f:
              FUN_005417e0();
              FUN_00574980();
            }
          }
          else if (local_2bc == DAT_00772c20) {
            FUN_0053f1b0();
            iVar8 = FUN_00647ed0();
            if (iVar8 != 0) {
              FUN_0053f1b0();
              iVar8 = FUN_00647ed0();
              if (iVar8 != 0) goto LAB_00575f8e;
            }
            iVar8 = 0;
            local_27c = 0;
            local_4 = CONCAT31(local_4._1_3_,8);
            local_2bc = 0;
            puVar17 = (undefined4 *)0x0;
            do {
              puVar13 = (undefined4 *)FUN_005417e0();
              puVar14 = puVar17;
              if (iVar8 < local_27c + 1) {
                iVar8 = iVar8 / 2;
                iVar10 = 1;
                if (0 < iVar8) {
                  iVar10 = iVar8;
                }
                if (iVar10 + local_27c < 1) {
                  iVar8 = 1;
                }
                else {
                  if (iVar8 < 1) {
                    iVar8 = 1;
                  }
                  iVar8 = iVar8 + local_27c;
                }
                puVar14 = (undefined4 *)operator_new(iVar8 * 0xc);
                if (0 < local_27c) {
                  puVar15 = puVar14 + 1;
                  iVar18 = (int)puVar17 - (int)puVar14;
                  iVar10 = local_27c;
                  do {
                    puVar15[-1] = *puVar17;
                    *puVar15 = *(undefined4 *)(iVar18 + (int)puVar15);
                    puVar15[1] = puVar17[2];
                    puVar17 = puVar17 + 3;
                    puVar15 = puVar15 + 3;
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                }
                FUN_006bf840();
              }
              puVar17 = puVar14 + local_27c * 3;
              *puVar17 = *puVar13;
              puVar17[1] = puVar13[1];
              puVar17[2] = puVar13[2];
              local_2bc = local_2bc + 1;
              puVar17 = puVar14;
              local_27c = local_27c + 1;
            } while ((int)local_2bc < iVar19);
            FUN_005417e0();
            FUN_005734c0();
            local_4 = local_4 & 0xffffff00;
            FUN_006bf840();
          }
        }
LAB_00575f8e:
        if ((fVar6 <= fVar7) || ((float)iVar11 < fVar6 != ((float)iVar11 == fVar6))) {
          FUN_0053f1a0();
          iVar8 = FUN_00647f90();
          if ((iVar8 != 0) && (iVar8 = FUN_0053f210(), -1 < iVar8)) {
            FUN_0053efd0();
            FUN_0053ebf0();
            FUN_0053ee10();
          }
        }
        local_2c4 = local_2c4 + 1;
      } while (local_2c4 < iVar19);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

