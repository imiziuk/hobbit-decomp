
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042c8b0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  short *psVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int extraout_ECX;
  float *pfVar18;
  int iVar19;
  short *psVar20;
  int iVar21;
  int iVar22;
  float *pfVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float10 fVar28;
  float10 fVar29;
  int iVar30;
  uint *puStack00000004;
  undefined2 uStack00000008;
  int iStack0000000c;
  float *pfStack00000010;
  short *psStack00000014;
  uint uStack0000001c;
  float in_stack_00000034;
  float in_stack_00000038;
  float in_stack_0000003c;
  float in_stack_00000064;
  float in_stack_00000068;
  float in_stack_0000006c;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  int in_stack_00002650;
  
  FUN_006c04f0();
  fVar2 = DAT_006e92e4;
  *(undefined4 *)(extraout_ECX + 0x804) = 0;
  *(undefined4 *)(extraout_ECX + 0xef8) = 0;
  *(undefined4 *)(extraout_ECX + 0x1600) = 0;
  *(undefined4 *)(extraout_ECX + 0x3a08) = 0;
  if (fVar2 < *(float *)(extraout_ECX + 0x3a30)) {
    return 0;
  }
  if (in_stack_00002650 != 0) {
    FUN_0042c800();
  }
  FUN_00405080();
  FUN_004357e0();
  FUN_00401f00();
  FUN_00402130();
  FUN_004357e0();
  *(undefined4 *)(extraout_ECX + 0x3a18) = in_stack_00000088;
  *(undefined4 *)(extraout_ECX + 0x3a1c) = in_stack_0000008c;
  *(undefined4 *)(extraout_ECX + 0x3a20) = in_stack_00000090;
  FUN_004357e0();
  if ((*(int *)(*(int *)(extraout_ECX + 0x450) + 0xdc) != 0) && (DAT_0075bba0 != 0)) {
    FUN_00669cf0();
    FUN_0066a810();
  }
  FUN_00578950();
  if (DAT_00777218 == 0) {
    return 0;
  }
  uVar27 = 0;
  uStack0000001c = 0;
  _uStack00000008 = 0;
  if (0 < DAT_00777218) {
    puStack00000004 = &DAT_00773a3c;
    uVar25 = 0;
    do {
      uVar26 = puStack00000004[3];
      uVar6 = puStack00000004[4];
      if ((uVar26 == uVar25) && (uVar6 == uStack0000001c)) goto LAB_0042cac8;
      iVar10 = FUN_004021c0();
      uStack0000001c = uVar6;
      if (iVar10 != 0) {
        uVar27 = *(uint *)(iVar10 + 0x10) & 0x400400;
        uVar25 = uVar26;
        if (*(char *)(iVar10 + 0x7c) == '\x05') {
          if ((*(byte *)(iVar10 + 0x15a) & 0x40) == 0) {
LAB_0042cac8:
            uVar26 = uVar25;
            if (uVar27 == 0) goto LAB_0042cad3;
          }
          else {
            uVar27 = 1;
          }
          *puStack00000004 = *puStack00000004 | 2;
        }
        else {
          if ((*(char *)(iVar10 + 0x7c) != '%') ||
             ((iVar30 = FUN_004be9b0(), iVar30 == 1 &&
              (*(float *)(iVar10 + 0x264) < _DAT_006e9988 ==
               (NAN(*(float *)(iVar10 + 0x264)) || NAN(_DAT_006e9988)))))) goto LAB_0042cac8;
          uVar27 = 0;
        }
      }
LAB_0042cad3:
      _uStack00000008 = _uStack00000008 + 1;
      puStack00000004 = puStack00000004 + 0xe;
      uVar25 = uVar26;
    } while (_uStack00000008 < DAT_00777218);
  }
  *(undefined4 *)(extraout_ECX + 0x1600) = 0;
  _uStack00000008 = 0;
  if (0 < DAT_00777218) {
    pfStack00000010 = (float *)&DAT_00773a34;
    do {
      if (((uint)pfStack00000010[2] & 2) != 0) {
        iVar10 = *(int *)(extraout_ECX + 0x1600);
        if (iVar10 == 0x20) break;
        *(int *)(extraout_ECX + 0x1600) = iVar10 + 1;
        iVar10 = iVar10 * 0x38 + 0xf00 + extraout_ECX;
        FUN_00401f00();
        FUN_00405080();
        FUN_0042eb90();
        FUN_004357e0();
        FUN_0042e1f0();
        fVar28 = (float10)FUN_00402020();
        *(float *)(iVar10 + 0x18) = (float)-fVar28;
        *(undefined4 *)(iVar10 + 0x28) = 0;
        if (*(float *)(*(int *)(extraout_ECX + 0x450) + 0x118) < *(float *)(iVar10 + 0x10)) {
          *(undefined4 *)(iVar10 + 0x28) = 2;
        }
        fVar2 = *(float *)(*(int *)(extraout_ECX + 0x450) + 0x11c);
        if (*(float *)(iVar10 + 0x10) < fVar2 != (NAN(*(float *)(iVar10 + 0x10)) || NAN(fVar2))) {
          *(uint *)(iVar10 + 0x28) = *(uint *)(iVar10 + 0x28) | 1;
        }
        if (*(int *)(iVar10 + 0x28) == 0) {
          *(int *)(extraout_ECX + 0x1600) = *(int *)(extraout_ECX + 0x1600) + -1;
        }
        else {
          *(float *)(iVar10 + 0x30) = pfStack00000010[5];
          *(float *)(iVar10 + 0x34) = pfStack00000010[6];
          pfVar18 = pfStack00000010 + -5;
          iVar30 = 0;
          fVar8 = (pfStack00000010[-3] + pfStack00000010[-6] + *pfStack00000010) * _DAT_006ebfc0;
          fVar2 = (*pfVar18 + pfStack00000010[-2] + pfStack00000010[1]) * _DAT_006ebfc0;
          *(float *)(iVar10 + 0x1c) =
               (pfStack00000010[-7] + pfStack00000010[-4] + pfStack00000010[-1]) * _DAT_006ebfc0;
          *(float *)(iVar10 + 0x24) = fVar2;
          *(float *)(iVar10 + 0x20) = fVar8;
          do {
            iVar22 = *(int *)(extraout_ECX + 0xef8);
            iVar24 = 0;
            if (0 < iVar22) {
              pfVar23 = (float *)(extraout_ECX + 0xa80);
              do {
                fVar2 = (pfVar23[-1] - pfVar18[-1]) * (pfVar23[-1] - pfVar18[-1]) +
                        (*pfVar23 - *pfVar18) * (*pfVar23 - *pfVar18) +
                        (pfVar23[-2] - pfVar18[-2]) * (pfVar23[-2] - pfVar18[-2]);
                if (fVar2 < DAT_006e92e8 != (NAN(fVar2) || NAN(DAT_006e92e8))) break;
                iVar24 = iVar24 + 1;
                pfVar23 = pfVar23 + 3;
              } while (iVar24 < iVar22);
            }
            if (iVar24 == iVar22) {
              pfVar23 = (float *)(extraout_ECX + 0xa78 + iVar22 * 0xc);
              *pfVar23 = pfVar18[-2];
              pfVar23[1] = pfVar18[-1];
              pfVar23[2] = *pfVar18;
              *(int *)(extraout_ECX + 0xef8) = *(int *)(extraout_ECX + 0xef8) + 1;
            }
            *(int *)(iVar10 + iVar30 * 4) = iVar24;
            iVar30 = iVar30 + 1;
            pfVar18 = pfVar18 + 3;
          } while (iVar30 < 3);
          iVar30 = 0;
          do {
            iVar22 = *(int *)(iVar10 + iVar30 * 4);
            iVar30 = iVar30 + 1;
            iVar24 = *(int *)(iVar10 + (iVar30 % 3) * 4);
            iVar21 = iVar24;
            if (iVar24 < iVar22) {
              iVar21 = iVar22;
              iVar22 = iVar24;
            }
            iVar24 = 0;
            if (0 < *(int *)(extraout_ECX + 0x3a08)) {
              puStack00000004 = (uint *)(extraout_ECX + 0x160a);
              do {
                if ((*(short *)((int)puStack00000004 + -2) == iVar22) &&
                   (*(short *)puStack00000004 == iVar21)) break;
                puStack00000004 = (uint *)((int)puStack00000004 + 0x60);
                iVar24 = iVar24 + 1;
              } while (iVar24 < *(int *)(extraout_ECX + 0x3a08));
            }
            if (iVar24 == *(int *)(extraout_ECX + 0x3a08)) {
              iVar19 = iVar24 * 0x60 + extraout_ECX;
              *(short *)(iVar19 + 0x1608) = (short)iVar22;
              *(short *)(iVar19 + 0x160a) = (short)iVar21;
              *(undefined2 *)(iVar19 + 0x1610) = 0;
              *(float *)(iVar19 + 0x1650) = pfStack00000010[5];
              *(float *)(iVar19 + 0x1654) = pfStack00000010[6];
              *(int *)(extraout_ECX + 0x3a08) = *(int *)(extraout_ECX + 0x3a08) + 1;
            }
            sVar4 = *(short *)(iVar24 * 0x60 + 0x1610 + extraout_ECX);
            psVar14 = (short *)(iVar24 * 0x60 + 0x1610 + extraout_ECX);
            if (sVar4 < 2) {
              *(short *)(extraout_ECX + 0x160c + (iVar24 * 0x30 + (int)sVar4) * 2) =
                   *(short *)(extraout_ECX + 0x1600) + -1;
              *psVar14 = *psVar14 + 1;
            }
          } while (iVar30 < 3);
        }
      }
      _uStack00000008 = _uStack00000008 + 1;
      pfStack00000010 = pfStack00000010 + 0xe;
    } while (_uStack00000008 < DAT_00777218);
  }
  pfStack00000010 = (float *)0x0;
  _uStack00000008 = 0;
  if (0 < *(int *)(extraout_ECX + 0x3a08)) {
    psStack00000014 = (short *)(extraout_ECX + 0x1608);
    pfVar18 = (float *)(extraout_ECX + 0x1644);
    do {
      if (*(short *)(pfVar18 + -0xd) == 2) {
        iVar22 = *(short *)((int)pfVar18 + -0x36) * 0x38;
        iVar10 = *(short *)(pfVar18 + -0xe) * 0x38 + 0xf00 + extraout_ECX;
        iVar30 = iVar22 + 0xf00 + extraout_ECX;
        pfVar23 = pfVar18 + -0xf;
        if (((((*(uint *)(iVar22 + 0xf28 + extraout_ECX) |
               *(uint *)(*(short *)(pfVar18 + -0xe) * 0x38 + 0xf28 + extraout_ECX)) == 3) &&
             (*(float *)(iVar10 + 0xc) * *(float *)(iVar30 + 0xc) +
              *(float *)(iVar30 + 0x10) * *(float *)(iVar10 + 0x10) +
              *(float *)(iVar30 + 0x14) * *(float *)(iVar10 + 0x14) <=
              *(float *)(*(int *)(extraout_ECX + 0x450) + 0x120))) &&
            (*(float *)(iVar30 + 0x1c) * *(float *)(iVar10 + 0xc) +
             *(float *)(iVar30 + 0x20) * *(float *)(iVar10 + 0x10) +
             *(float *)(iVar30 + 0x24) * *(float *)(iVar10 + 0x14) + *(float *)(iVar10 + 0x18) <=
             DAT_006e92e4)) &&
           (*(float *)(iVar10 + 0x1c) * *(float *)(iVar30 + 0xc) +
            *(float *)(iVar10 + 0x20) * *(float *)(iVar30 + 0x10) +
            *(float *)(iVar10 + 0x24) * *(float *)(iVar30 + 0x14) + *(float *)(iVar30 + 0x18) <=
            DAT_006e92e4)) {
          FUN_00401f00();
          FUN_00405080();
          fVar28 = (float10)FUN_00402020();
          if ((float10)_DAT_006e92f8 < fVar28) {
            fVar29 = (float10)FUN_00402020();
            if ((float10)(float)fVar28 < fVar29) {
              FUN_0042eea0();
            }
            FUN_0042ebf0();
          }
          FUN_0042ebd0();
          fVar8 = in_stack_0000003c * in_stack_0000003c +
                  in_stack_00000038 * in_stack_00000038 + in_stack_00000034 * in_stack_00000034;
          fVar2 = *(float *)(*(int *)(extraout_ECX + 0x450) + 0x108);
          if (fVar8 <= fVar2 * fVar2) {
            fVar2 = *(float *)(extraout_ECX + 0x3a10);
            fVar3 = *(float *)(extraout_ECX + 0x3a14);
            pfVar18[5] = in_stack_00000034 + *(float *)(extraout_ECX + 0x3a0c);
            pfVar18[7] = in_stack_0000003c + fVar3;
            pfVar18[6] = in_stack_00000038 + fVar2;
            pfVar18[8] = SQRT(fVar8);
            FUN_00401f00();
            pfVar1 = pfVar18 + -1;
            FUN_00405080();
            FUN_0042eb90();
            FUN_004357e0();
            FUN_0042e1f0();
            fVar28 = (float10)FUN_00402020();
            pfVar18[2] = (float)-fVar28;
            if ((*(byte *)(iVar10 + 0x28) & 1) == 0) {
              fVar2 = *(float *)(iVar30 + 0x10) * *pfVar18 + *(float *)(iVar30 + 0x14) * pfVar18[1];
              fVar8 = *(float *)(iVar30 + 0xc) * *pfVar1;
            }
            else {
              fVar2 = *(float *)(iVar10 + 0x10) * *pfVar18 + *(float *)(iVar10 + 0x14) * pfVar18[1];
              fVar8 = *pfVar1 * *(float *)(iVar10 + 0xc);
            }
            if (fVar8 + fVar2 < DAT_006e92e4 != (NAN(fVar8 + fVar2) || NAN(DAT_006e92e4))) {
              FUN_00401f00();
              pfVar18[2] = -pfVar18[2];
              *pfVar1 = in_stack_00000064;
              *pfVar18 = in_stack_00000068;
              pfVar18[1] = in_stack_0000006c;
              uVar5 = *(undefined2 *)pfVar23;
              *(undefined2 *)pfVar23 = *(undefined2 *)((int)pfVar18 + -0x3a);
              *(undefined2 *)((int)pfVar18 + -0x3a) = uVar5;
            }
            pfVar18[-0xb] = *(float *)(extraout_ECX + 0xa78 + *(short *)pfVar23 * 0xc);
            iVar10 = extraout_ECX + 0xa78 + *(short *)pfVar23 * 0xc;
            pfVar18[-10] = *(float *)(iVar10 + 4);
            pfVar18[-9] = *(float *)(iVar10 + 8);
            pfVar18[-8] = *(float *)(extraout_ECX + 0xa78 + *(short *)((int)pfVar18 + -0x3a) * 0xc);
            iVar10 = extraout_ECX + 0xa78 + *(short *)((int)pfVar18 + -0x3a) * 0xc;
            pfVar18[-7] = *(float *)(iVar10 + 4);
            pfVar18[-6] = *(float *)(iVar10 + 8);
            iVar30 = 2;
            fVar3 = pfVar18[-8] - pfVar18[-0xb];
            fVar2 = pfVar18[-7] - pfVar18[-10];
            fVar8 = pfVar18[-6] - pfVar18[-9];
            fVar9 = SQRT(fVar2 * fVar2 + fVar8 * fVar8 + fVar3 * fVar3);
            pfVar18[-2] = fVar9;
            fVar9 = DAT_006e92e8 / fVar9;
            pfVar18[-5] = fVar3 * fVar9;
            pfVar18[-3] = fVar9 * fVar8;
            pfVar18[-4] = fVar9 * fVar2;
            iVar10 = (int)pfVar23 - (int)psStack00000014;
            puVar11 = psStack00000014;
            do {
              *puVar11 = *(undefined2 *)(iVar10 + (int)puVar11);
              puVar11 = puVar11 + 1;
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
            puVar11 = psStack00000014 + 2;
            iVar30 = 2;
            do {
              *puVar11 = *(undefined2 *)((int)puVar11 + iVar10);
              puVar11 = puVar11 + 1;
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
            psStack00000014[4] = *(undefined2 *)(pfVar18 + -0xd);
            puVar11 = psStack00000014 + 5;
            iVar30 = 2;
            do {
              *puVar11 = *(undefined2 *)((int)puVar11 + iVar10);
              puVar11 = puVar11 + 1;
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
            psStack00000014[7] = *(undefined2 *)((int)pfVar18 + -0x2e);
            pfVar23 = pfVar18 + -0xb;
            puVar15 = (undefined4 *)(psStack00000014 + 10);
            iVar30 = 2;
            do {
              puVar15[-1] = *pfVar23;
              *puVar15 = *(undefined4 *)((int)puVar15 + iVar10);
              puVar15[1] = pfVar23[2];
              pfVar23 = pfVar23 + 3;
              puVar15 = puVar15 + 3;
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
            *(float *)(psStack00000014 + 0x14) = pfVar18[-5];
            *(float *)(psStack00000014 + 0x16) = pfVar18[-4];
            *(float *)(psStack00000014 + 0x18) = pfVar18[-3];
            *(float *)(psStack00000014 + 0x1a) = pfVar18[-2];
            FUN_0042fda0();
            *(float *)(psStack00000014 + 0x24) = pfVar18[3];
            *(float *)(psStack00000014 + 0x26) = pfVar18[4];
            FUN_004357e0();
            pfStack00000010 = (float *)((int)pfStack00000010 + 1);
            *(float *)(psStack00000014 + 0x2e) = pfVar18[8];
            psStack00000014 = psStack00000014 + 0x30;
          }
        }
      }
      _uStack00000008 = _uStack00000008 + 1;
      pfVar18 = pfVar18 + 0x18;
    } while (_uStack00000008 < *(int *)(extraout_ECX + 0x3a08));
    if (pfStack00000010 != (float *)0x0) {
      iVar10 = 0;
      *(float **)(extraout_ECX + 0x3a08) = pfStack00000010;
      if (0 < (int)pfStack00000010) {
        puVar11 = (undefined2 *)(extraout_ECX + 0x1612);
        do {
          puVar11[2] = 0;
          *puVar11 = 0xffff;
          puVar11[1] = 0xffff;
          iVar10 = iVar10 + 1;
          puVar11 = puVar11 + 0x30;
        } while (iVar10 < *(int *)(extraout_ECX + 0x3a08));
      }
      iVar10 = *(int *)(extraout_ECX + 0x3a08);
      _uStack00000008 = 0;
      if (0 < iVar10) {
        psVar14 = (short *)(extraout_ECX + 0x1616);
        puStack00000004 = (uint *)0x0;
        do {
          iVar30 = _uStack00000008 + 1;
          iStack0000000c = 0;
          do {
            if (iVar30 < iVar10) {
              iVar10 = iVar30 * 0x60 + extraout_ECX;
              iVar24 = iVar30 * 0x30;
              psVar20 = (short *)(iVar10 + 0x1616);
              psStack00000014 = (short *)(iVar10 + 0x1608);
              iVar22 = iVar30;
              do {
                iVar10 = 0;
                pfStack00000010 = (float *)psStack00000014;
                do {
                  if (((*(short *)pfStack00000010 ==
                        *(short *)(extraout_ECX + 0x1608 +
                                  ((int)puStack00000004 + iStack0000000c) * 2)) && (*psVar14 < 2))
                     && (*psVar20 < 2)) {
                    *(short *)(extraout_ECX + 0x1612 + ((int)puStack00000004 + iStack0000000c) * 2)
                         = (short)iVar22;
                    *psVar14 = *psVar14 + 1;
                    *(undefined2 *)(extraout_ECX + 0x1612 + (iVar24 + iVar10) * 2) = uStack00000008;
                    *psVar20 = *psVar20 + 1;
                  }
                  iVar10 = iVar10 + 1;
                  pfStack00000010 = (float *)((int)pfStack00000010 + 2);
                } while (iVar10 < 2);
                iVar10 = *(int *)(extraout_ECX + 0x3a08);
                iVar22 = iVar22 + 1;
                psStack00000014 = psStack00000014 + 0x30;
                iVar24 = iVar24 + 0x30;
                psVar20 = psVar20 + 0x30;
              } while (iVar22 < iVar10);
            }
            iStack0000000c = iStack0000000c + 1;
          } while (iStack0000000c < 2);
          puStack00000004 = (uint *)((int)puStack00000004 + 0x30);
          iVar10 = *(int *)(extraout_ECX + 0x3a08);
          psVar14 = psVar14 + 0x30;
          _uStack00000008 = iVar30;
        } while (iVar30 < iVar10);
      }
      iVar30 = 0;
      iVar10 = -1;
      if (0 < *(int *)(extraout_ECX + 0x3a08)) {
        psVar14 = (short *)(extraout_ECX + 0x1612);
        do {
          iVar10 = iVar30;
          if (*psVar14 == -1) break;
          iVar30 = iVar30 + 1;
          psVar14 = psVar14 + 0x30;
          iVar10 = -1;
        } while (iVar30 < *(int *)(extraout_ECX + 0x3a08));
      }
      _uStack00000008 = 0;
      iVar30 = 0x60;
      do {
        FUN_00401080();
        iVar30 = iVar30 + -1;
      } while (iVar30 != 0);
      iVar30 = *(int *)(extraout_ECX + 0x3a08);
      if (0 < iVar30) {
        puVar15 = (undefined4 *)&stack0x000000c4;
        for (; iVar30 != 0; iVar30 = iVar30 + -1) {
          *puVar15 = 0xffffffff;
          puVar15 = puVar15 + 1;
        }
      }
      if (iVar10 != -1) {
        puVar11 = (undefined2 *)&stack0x00000244;
        do {
          if (*(int *)(&stack0x000000c4 + iVar10 * 4) != -1) break;
          iVar30 = iVar10 * 0x60 + extraout_ECX;
          *(int *)(&stack0x000000c4 + iVar10 * 4) = _uStack00000008;
          iVar10 = (iVar30 + 0x1608) - (int)puVar11;
          iVar22 = 2;
          puVar12 = puVar11;
          do {
            *puVar12 = *(undefined2 *)(iVar10 + (int)puVar12);
            puVar12 = puVar12 + 1;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          puVar12 = puVar11 + 2;
          iVar22 = 2;
          do {
            *puVar12 = *(undefined2 *)((int)puVar12 + iVar10);
            puVar12 = puVar12 + 1;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          puVar11[4] = *(undefined2 *)(iVar30 + 0x1610);
          puVar12 = puVar11 + 5;
          iVar22 = 2;
          do {
            *puVar12 = *(undefined2 *)((int)puVar12 + iVar10);
            puVar12 = puVar12 + 1;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          puVar11[7] = *(undefined2 *)(iVar30 + 0x1616);
          puVar15 = (undefined4 *)(iVar30 + 0x1618);
          puVar13 = (undefined4 *)(puVar11 + 10);
          iStack0000000c = 2;
          do {
            puVar13[-1] = *puVar15;
            *puVar13 = *(undefined4 *)(iVar10 + (int)puVar13);
            puVar13[1] = puVar15[2];
            puVar15 = puVar15 + 3;
            puVar13 = puVar13 + 3;
            iStack0000000c = iStack0000000c + -1;
          } while (iStack0000000c != 0);
          FUN_004357e0();
          *(undefined4 *)(puVar11 + 0x1a) = *(undefined4 *)(iVar30 + 0x163c);
          FUN_0042fda0();
          *(undefined4 *)(puVar11 + 0x24) = *(undefined4 *)(iVar30 + 0x1650);
          *(undefined4 *)(puVar11 + 0x26) = *(undefined4 *)(iVar30 + 0x1654);
          FUN_004357e0();
          _uStack00000008 = _uStack00000008 + 1;
          *(undefined4 *)(puVar11 + 0x2e) = *(undefined4 *)(iVar30 + 0x1664);
          iVar10 = (int)*(short *)(iVar30 + 0x1614);
          puVar11 = puVar11 + 0x30;
        } while (iVar10 != -1);
      }
      if (0 < _uStack00000008) {
        psVar14 = (short *)&stack0x00000250;
        iVar10 = _uStack00000008;
        do {
          if (psVar14[-1] != -1) {
            psVar14[-1] = *(short *)(&stack0x000000c4 + psVar14[-1] * 4);
          }
          if (*psVar14 != -1) {
            *psVar14 = *(short *)(&stack0x000000c4 + *psVar14 * 4);
          }
          psVar14 = psVar14 + 0x30;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        if (0 < _uStack00000008) {
          puVar15 = (undefined4 *)(extraout_ECX + 0x1610);
          puVar11 = (undefined2 *)&stack0x0000024c;
          pfStack00000010 = (float *)_uStack00000008;
          do {
            puVar15[-2] = *(undefined4 *)(puVar11 + -4);
            puVar15[-1] = *(undefined4 *)(puVar11 + -2);
            *(undefined2 *)puVar15 = *puVar11;
            *(undefined4 *)((int)puVar15 + 2) = *(undefined4 *)(puVar11 + 1);
            *(undefined2 *)((int)puVar15 + 6) = puVar11[3];
            puVar13 = (undefined4 *)(puVar11 + 4);
            iStack0000000c = 2;
            puVar17 = puVar15;
            do {
              puVar16 = puVar17 + 3;
              puVar17[2] = *puVar13;
              *puVar16 = *(undefined4 *)((int)puVar16 + (int)puVar11 + (-8 - (int)(puVar15 + -2)));
              puVar17[4] = puVar13[2];
              puVar13 = puVar13 + 3;
              iStack0000000c = iStack0000000c + -1;
              puVar17 = puVar16;
            } while (iStack0000000c != 0);
            FUN_004357e0();
            puVar15[0xb] = *(undefined4 *)(puVar11 + 0x16);
            FUN_0042fda0();
            uVar7 = *(undefined4 *)(puVar11 + 0x20);
            puVar15[0x11] = *(undefined4 *)(puVar11 + 0x22);
            puVar15[0x10] = uVar7;
            FUN_004357e0();
            puVar15[0x15] = *(undefined4 *)(puVar11 + 0x2a);
            puVar15 = puVar15 + 0x18;
            puVar11 = puVar11 + 0x30;
            pfStack00000010 = (float *)((int)pfStack00000010 + -1);
          } while (pfStack00000010 != (float *)0x0);
        }
      }
      *(int *)(extraout_ECX + 0x3a08) = _uStack00000008;
      if (_uStack00000008 != 0) {
        *(undefined4 *)(extraout_ECX + 0x804) = 1;
        return 1;
      }
      return _uStack00000008;
    }
  }
  return 0;
}

