
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006b26f0(int param_1,void *param_2)

{
  float *pfVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  void *pvVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  undefined1 *puVar24;
  int local_30;
  int local_2c;
  void *local_28;
  float *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8265;
  local_c = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar23 = *(int *)(param_1 + 0x10);
    local_30 = 0;
    local_2c = 0x1c;
    local_14 = (int *)0xe0;
    ExceptionList = &local_c;
    do {
      iVar10 = *(int *)(local_30 + 0x10 + iVar23);
      local_20 = (int *)0x0;
      piVar14 = local_14;
      pvVar12 = (void *)local_30;
      if (0 < iVar10) {
        do {
          local_28 = (void *)((int)pvVar12 + 8);
          local_10 = (float)((int)local_20 + 1);
          if ((int)local_10 < iVar10) {
            local_1c = (int)local_20 << 3;
            local_24 = (float *)((int)pvVar12 + 0xec + iVar23);
            fVar22 = local_10;
            do {
              if (*(float *)(iVar23 + 0xe4 + local_30 + local_1c) < *local_24) {
                local_1c = (int)fVar22 * 8;
                local_20 = (int *)fVar22;
              }
              fVar22 = (float)((int)fVar22 + 1);
              local_24 = local_24 + 2;
            } while ((int)fVar22 < iVar10);
          }
          uVar3 = *(undefined4 *)(iVar23 + (int)piVar14);
          uVar4 = *(undefined4 *)(iVar23 + 4 + (int)piVar14);
          iVar10 = (local_2c + (int)local_20) * 8;
          *(undefined4 *)(iVar23 + (int)piVar14) = *(undefined4 *)(iVar10 + iVar23);
          *(undefined4 *)(iVar23 + 4 + (int)piVar14) = *(undefined4 *)(iVar10 + 4 + iVar23);
          iVar23 = *(int *)(param_1 + 0x10);
          *(undefined4 *)(iVar10 + iVar23) = uVar3;
          *(undefined4 *)(iVar10 + 4 + iVar23) = uVar4;
          iVar23 = *(int *)(param_1 + 0x10);
          iVar10 = *(int *)(local_30 + 0x10 + iVar23);
          local_20 = (int *)local_10;
          piVar14 = piVar14 + 2;
          pvVar12 = local_28;
        } while ((int)local_10 < iVar10);
      }
      local_2c = local_2c + 0x2c;
      local_18 = local_18 + 1;
      local_14 = local_14 + 0x58;
      local_30 = local_30 + 0x160;
    } while (local_18 < *(int *)(param_1 + 0xc));
  }
  local_2c = 0;
  local_30 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_24 = (float *)0x0;
    local_28 = (void *)0x0;
    do {
      iVar23 = *(int *)(param_1 + 0x18);
      iVar10 = *(int *)(param_1 + 0x10);
      piVar14 = (int *)(iVar23 + (int)local_28);
      pfVar1 = (float *)(*(int *)(iVar23 + 8 + (int)local_28) * 0x160 + iVar10);
      iVar11 = piVar14[4] * 0x160;
      fVar5 = *(float *)(iVar11 + 8 + iVar10) - pfVar1[2];
      fVar8 = *(float *)(iVar11 + 4 + iVar10) - pfVar1[1];
      fVar6 = *(float *)(iVar11 + iVar10) - *pfVar1;
      iVar11 = piVar14[3] * 0x160;
      fVar22 = *(float *)(iVar11 + 8 + iVar10) - pfVar1[2];
      local_14 = (int *)(*(float *)(iVar11 + 4 + iVar10) - pfVar1[1]);
      fVar9 = *(float *)(iVar11 + iVar10) - *pfVar1;
      fVar7 = fVar9 * fVar8 - (float)local_14 * fVar6;
      fVar6 = fVar22 * fVar6 - fVar9 * fVar5;
      fVar22 = (float)local_14 * fVar5 - fVar22 * fVar8;
      if (((param_2 == (void *)0xffffffff) || ((void *)*piVar14 != param_2)) &&
         (fVar22 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar22 * fVar22),
         fVar22 < _DAT_006ec0e0 == (NAN(fVar22) || NAN(_DAT_006ec0e0)))) {
        piVar2 = (int *)(iVar23 + (int)local_24);
        *piVar2 = *piVar14;
        piVar2[1] = piVar14[1];
        piVar15 = piVar2 + 2;
        iVar23 = 0x10;
        do {
          *piVar15 = *(int *)(((int)piVar14 - (int)piVar2) + (int)piVar15);
          piVar15 = piVar15 + 1;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
        piVar2[0x12] = piVar14[0x12];
        piVar2[0x13] = piVar14[0x13];
        piVar2[0x14] = piVar14[0x14];
        piVar2[0x15] = piVar14[0x15];
        piVar2[0x16] = piVar14[0x16];
        local_2c = local_2c + 1;
        local_24 = (float *)((int)local_24 + 0x5c);
      }
      local_30 = local_30 + 1;
      local_28 = (void *)((int)local_28 + 0x5c);
    } while (local_30 < *(int *)(param_1 + 0x14));
  }
  *(int *)(param_1 + 0x14) = local_2c;
  pvVar12 = operator_new(*(int *)(param_1 + 0xc) << 2);
  iVar23 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      *(undefined4 *)((int)pvVar12 + iVar23 * 4) = 0xffffffff;
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(param_1 + 0xc));
  }
  param_2 = (void *)0x0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar23 = 0;
    do {
      iVar10 = *(int *)(param_1 + 0x18);
      iVar11 = 0;
      if (0 < *(int *)(iVar10 + 4 + iVar23)) {
        iVar21 = iVar23 + 8;
        do {
          if ((*(int *)(iVar10 + iVar21) < 0) ||
             (*(int *)(param_1 + 0xc) <= *(int *)(iVar10 + iVar21))) {
            FUN_00649920(&local_10,s_Found_a_facet_that_was_indexing_a_00757398,param_2,
                         *(undefined4 *)(iVar10 + iVar21));
            local_4 = 0;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          *(undefined4 *)((int)pvVar12 + *(int *)(iVar21 + *(int *)(param_1 + 0x18)) * 4) =
               0xfffffffe;
          iVar10 = *(int *)(param_1 + 0x18);
          iVar11 = iVar11 + 1;
          iVar21 = iVar21 + 4;
        } while (iVar11 < *(int *)(iVar10 + 4 + iVar23));
      }
      param_2 = (void *)((int)param_2 + 1);
      iVar23 = iVar23 + 0x5c;
    } while ((int)param_2 < *(int *)(param_1 + 0x14));
  }
  param_2 = (void *)0x0;
  local_2c = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    local_24 = (float *)0x0;
    local_28 = (void *)0x0;
    do {
      local_10 = *(float *)((int)pvVar12 + (int)param_2 * 4);
      *(int *)((int)pvVar12 + (int)param_2 * 4) = local_2c;
      puVar13 = (undefined4 *)((int)local_28 + *(int *)(param_1 + 0x10));
      puVar17 = (undefined4 *)(*(int *)(param_1 + 0x10) + (int)local_24);
      *puVar17 = *puVar13;
      puVar17[1] = puVar13[1];
      puVar17[2] = puVar13[2];
      puVar17[3] = puVar13[3];
      puVar17[4] = puVar13[4];
      puVar17[5] = puVar13[5];
      puVar17[6] = puVar13[6];
      puVar17[7] = puVar13[7];
      puVar18 = puVar13 + 8;
      puVar19 = puVar17 + 9;
      iVar23 = (int)puVar13 - (int)puVar17;
      local_14 = (int *)0x8;
      do {
        puVar19[-1] = *puVar18;
        *puVar19 = *(undefined4 *)(iVar23 + (int)puVar19);
        puVar18 = puVar18 + 2;
        puVar19 = puVar19 + 2;
        local_14 = (int *)((int)local_14 + -1);
      } while (local_14 != (int *)0x0);
      puVar18 = puVar13 + 0x18;
      puVar19 = puVar17 + 0x19;
      local_14 = (int *)0x8;
      do {
        puVar19[-1] = *puVar18;
        *puVar19 = *(undefined4 *)((int)puVar19 + iVar23);
        puVar19[1] = puVar18[2];
        puVar18 = puVar18 + 3;
        puVar19 = puVar19 + 3;
        local_14 = (int *)((int)local_14 + -1);
      } while (local_14 != (int *)0x0);
      puVar20 = (undefined1 *)((int)puVar13 + 0xc1);
      puVar24 = (undefined1 *)((int)puVar17 + 0xc3);
      iVar10 = 8;
      do {
        *puVar24 = puVar24[iVar23];
        puVar24[-1] = puVar20[1];
        puVar24[-2] = *puVar20;
        puVar24[-3] = puVar20[-1];
        puVar20 = puVar20 + 4;
        puVar24 = puVar24 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      puVar17 = puVar17 + 0x38;
      iVar10 = 0x10;
      do {
        *puVar17 = *(undefined4 *)((int)puVar17 + iVar23);
        puVar17[1] = *(undefined4 *)((int)puVar17 + iVar23 + 4);
        puVar17 = puVar17 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (local_10 == -NAN) {
        local_2c = local_2c + 1;
        local_24 = (float *)((int)local_24 + 0x160);
      }
      param_2 = (void *)((int)param_2 + 1);
      local_28 = (void *)((int)local_28 + 0x160);
      local_14 = (int *)0x0;
    } while ((int)param_2 < *(int *)(param_1 + 0xc));
  }
  *(int *)(param_1 + 0xc) = local_2c;
  param_2 = (void *)0x0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar23 = *(int *)(param_1 + 0x18);
    iVar10 = 0;
    do {
      iVar11 = 0;
      if (0 < *(int *)(iVar23 + 4 + iVar10)) {
        iVar21 = iVar10 + 8;
        do {
          *(undefined4 *)(iVar23 + iVar21) =
               *(undefined4 *)((int)pvVar12 + *(int *)(iVar23 + iVar21) * 4);
          iVar23 = *(int *)(param_1 + 0x18);
          iVar11 = iVar11 + 1;
          iVar21 = iVar21 + 4;
        } while (iVar11 < *(int *)(iVar23 + 4 + iVar10));
      }
      param_2 = (void *)((int)param_2 + 1);
      iVar10 = iVar10 + 0x5c;
    } while ((int)param_2 < *(int *)(param_1 + 0x14));
  }
  FUN_006bf840(pvVar12);
  iVar10 = *(int *)(param_1 + 0xc) * 10;
  iVar23 = 0x14;
  if (0x13 < iVar10) {
    iVar23 = iVar10;
  }
  pvVar12 = operator_new(iVar23 * 8);
  piVar14 = (int *)operator_new(*(int *)(param_1 + 0xc) * 0xc);
  if (0 < iVar23) {
    puVar18 = (undefined4 *)((int)pvVar12 + 4);
    iVar10 = iVar23;
    do {
      *puVar18 = 0xffffffff;
      puVar18 = puVar18 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  param_2 = (void *)**(float **)(param_1 + 0x10);
  iVar10 = 0;
  fVar22 = (float)param_2;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar11 = 0;
    piVar15 = piVar14 + 2;
    do {
      piVar15[-1] = iVar10;
      *piVar15 = -1;
      piVar15[-2] = iVar10;
      pfVar1 = (float *)(iVar11 + *(int *)(param_1 + 0x10));
      if (fVar22 <= *(float *)(iVar11 + *(int *)(param_1 + 0x10))) {
        fVar22 = *pfVar1;
      }
      if (*pfVar1 <= (float)param_2) {
        param_2 = (void *)*pfVar1;
      }
      iVar10 = iVar10 + 1;
      piVar15 = piVar15 + 3;
      iVar11 = iVar11 + 0x160;
    } while (iVar10 < *(int *)(param_1 + 0xc));
  }
  iVar10 = 0;
  local_10 = (float)iVar23 / ((fVar22 - (float)param_2) + DAT_006e92e8);
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar15 = piVar14 + 2;
    do {
      iVar11 = __ftol();
      *piVar15 = *(int *)((int)pvVar12 + iVar11 * 8 + 4);
      *(int *)((int)pvVar12 + iVar11 * 8 + 4) = iVar10;
      iVar10 = iVar10 + 1;
      piVar15 = piVar15 + 3;
    } while (iVar10 < *(int *)(param_1 + 0xc));
  }
  param_2 = (void *)0x0;
  if (0 < iVar23) {
    do {
      iVar10 = *(int *)((int)pvVar12 + (int)param_2 * 8 + 4);
      iVar11 = (int)param_2;
      while (iVar10 != -1) {
        local_14 = piVar14 + iVar10 * 3;
        if (piVar14[iVar10 * 3] == piVar14[iVar10 * 3 + 1]) {
          iVar21 = local_14[2];
          while (iVar21 != -1) {
            piVar15 = piVar14 + iVar21 * 3;
            if ((piVar14[iVar21 * 3] == piVar15[1]) &&
               (iVar11 = FUN_006b3a30(iVar10 * 0x160 + *(int *)(param_1 + 0x10),
                                      iVar21 * 0x160 + *(int *)(param_1 + 0x10)), iVar11 != 0)) {
              *piVar15 = iVar10;
            }
            iVar11 = (int)param_2;
            iVar21 = piVar15[2];
          }
          if (iVar11 + 1 < iVar23) {
            iVar21 = *(int *)((int)pvVar12 + iVar11 * 8 + 0xc);
            while (iVar21 != -1) {
              piVar15 = piVar14 + iVar21 * 3;
              if ((piVar14[iVar21 * 3] == piVar15[1]) &&
                 (iVar11 = FUN_006b3a30(iVar10 * 0x160 + *(int *)(param_1 + 0x10),
                                        iVar21 * 0x160 + *(int *)(param_1 + 0x10)), iVar11 != 0)) {
                *piVar15 = iVar10;
              }
              iVar11 = (int)param_2;
              iVar21 = piVar15[2];
            }
          }
        }
        iVar10 = local_14[2];
      }
      param_2 = (void *)(iVar11 + 1);
    } while ((int)param_2 < iVar23);
  }
  iVar10 = 0;
  iVar23 = 0;
  local_1c = 0;
  piVar15 = piVar14;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      if (*piVar15 == piVar15[1]) {
        *piVar15 = iVar10;
        piVar15[1] = -1;
        iVar10 = iVar10 + 1;
      }
      iVar23 = iVar23 + 1;
      piVar15 = piVar15 + 3;
      local_1c = iVar10;
    } while (iVar23 < *(int *)(param_1 + 0xc));
  }
  param_2 = (void *)0x0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar23 = 0;
    do {
      iVar10 = *(int *)(param_1 + 0x18);
      iVar11 = 0;
      if (0 < *(int *)(iVar10 + 4 + iVar23)) {
        iVar21 = iVar23 + 8;
        do {
          if (piVar14[*(int *)(iVar10 + iVar21) * 3 + 1] == -1) {
            *(int *)(iVar10 + iVar21) = piVar14[*(int *)(iVar10 + iVar21) * 3];
          }
          else {
            *(int *)(iVar10 + iVar21) = piVar14[piVar14[*(int *)(iVar10 + iVar21) * 3] * 3];
          }
          iVar10 = *(int *)(param_1 + 0x18);
          iVar11 = iVar11 + 1;
          iVar21 = iVar21 + 4;
        } while (iVar11 < *(int *)(iVar10 + 4 + iVar23));
      }
      param_2 = (void *)((int)param_2 + 1);
      iVar23 = iVar23 + 0x5c;
    } while ((int)param_2 < *(int *)(param_1 + 0x14));
  }
  local_28 = operator_new(local_1c * 0x160);
  local_4 = 1;
  if (local_28 == (void *)0x0) {
    local_28 = (void *)0x0;
  }
  else if (-1 < local_1c + -1) {
    iVar23 = (int)local_28 + 0x60;
    iVar10 = local_1c;
    param_2 = local_28;
    do {
      FUN_00401080(iVar23 + -0x40,8,8,FUN_0041def0);
      FUN_00401080(iVar23,0xc,8,FUN_0041def0);
      FUN_00401080(iVar23 + 0x60,4,8,FUN_0041def0);
      iVar23 = iVar23 + 0x160;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  local_4 = 0xffffffff;
  param_2 = (void *)0x0;
  if (0 < *(int *)(param_1 + 0xc)) {
    local_2c = 0;
    local_20 = piVar14;
    do {
      if (local_20[1] == -1) {
        puVar13 = (undefined4 *)(*local_20 * 0x160 + (int)local_28);
        iVar23 = *(int *)(param_1 + 0x10) + local_2c;
        *puVar13 = *(undefined4 *)(*(int *)(param_1 + 0x10) + local_2c);
        puVar13[1] = *(undefined4 *)(iVar23 + 4);
        puVar13[2] = *(undefined4 *)(iVar23 + 8);
        puVar13[3] = *(undefined4 *)(iVar23 + 0xc);
        puVar13[4] = *(undefined4 *)(iVar23 + 0x10);
        puVar13[5] = *(undefined4 *)(iVar23 + 0x14);
        puVar13[6] = *(undefined4 *)(iVar23 + 0x18);
        puVar13[7] = *(undefined4 *)(iVar23 + 0x1c);
        puVar18 = (undefined4 *)(iVar23 + 0x20);
        puVar19 = puVar13 + 9;
        iVar10 = iVar23 - (int)puVar13;
        local_14 = (int *)0x8;
        do {
          puVar19[-1] = *puVar18;
          *puVar19 = *(undefined4 *)(iVar10 + (int)puVar19);
          puVar18 = puVar18 + 2;
          puVar19 = puVar19 + 2;
          local_14 = (int *)((int)local_14 + -1);
        } while (local_14 != (int *)0x0);
        puVar18 = (undefined4 *)(iVar23 + 0x60);
        puVar19 = puVar13 + 0x19;
        local_14 = (int *)0x8;
        do {
          puVar19[-1] = *puVar18;
          *puVar19 = *(undefined4 *)((int)puVar19 + iVar10);
          puVar19[1] = puVar18[2];
          puVar18 = puVar18 + 3;
          puVar19 = puVar19 + 3;
          local_14 = (int *)((int)local_14 + -1);
        } while (local_14 != (int *)0x0);
        puVar20 = (undefined1 *)(iVar23 + 0xc1);
        puVar24 = (undefined1 *)((int)puVar13 + 0xc3);
        iVar23 = 8;
        do {
          *puVar24 = puVar24[iVar10];
          puVar24[-1] = puVar20[1];
          puVar24[-2] = *puVar20;
          puVar24[-3] = puVar20[-1];
          puVar20 = puVar20 + 4;
          puVar24 = puVar24 + 4;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
        puVar13 = puVar13 + 0x38;
        iVar23 = 0x10;
        do {
          *puVar13 = *(undefined4 *)(iVar10 + (int)puVar13);
          puVar13[1] = *(undefined4 *)(iVar10 + 4 + (int)puVar13);
          puVar13 = puVar13 + 2;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      else {
        puVar13 = (undefined4 *)(piVar14[*local_20 * 3] * 0x160 + (int)local_28);
        iVar23 = *(int *)(param_1 + 0x10) + local_2c;
        *puVar13 = *(undefined4 *)(*(int *)(param_1 + 0x10) + local_2c);
        puVar13[1] = *(undefined4 *)(iVar23 + 4);
        puVar13[2] = *(undefined4 *)(iVar23 + 8);
        puVar13[3] = *(undefined4 *)(iVar23 + 0xc);
        puVar13[4] = *(undefined4 *)(iVar23 + 0x10);
        puVar13[5] = *(undefined4 *)(iVar23 + 0x14);
        puVar13[6] = *(undefined4 *)(iVar23 + 0x18);
        puVar13[7] = *(undefined4 *)(iVar23 + 0x1c);
        puVar18 = (undefined4 *)(iVar23 + 0x20);
        puVar19 = puVar13 + 9;
        iVar10 = iVar23 - (int)puVar13;
        local_14 = (int *)0x8;
        do {
          puVar19[-1] = *puVar18;
          *puVar19 = *(undefined4 *)(iVar10 + (int)puVar19);
          puVar18 = puVar18 + 2;
          puVar19 = puVar19 + 2;
          local_14 = (int *)((int)local_14 + -1);
        } while (local_14 != (int *)0x0);
        puVar18 = (undefined4 *)(iVar23 + 0x60);
        puVar19 = puVar13 + 0x19;
        local_14 = (int *)0x8;
        do {
          puVar19[-1] = *puVar18;
          *puVar19 = *(undefined4 *)((int)puVar19 + iVar10);
          puVar19[1] = puVar18[2];
          puVar18 = puVar18 + 3;
          puVar19 = puVar19 + 3;
          local_14 = (int *)((int)local_14 + -1);
        } while (local_14 != (int *)0x0);
        puVar20 = (undefined1 *)(iVar23 + 0xc1);
        puVar24 = (undefined1 *)((int)puVar13 + 0xc3);
        iVar23 = 8;
        do {
          *puVar24 = puVar24[iVar10];
          puVar24[-1] = puVar20[1];
          puVar24[-2] = *puVar20;
          puVar24[-3] = puVar20[-1];
          puVar20 = puVar20 + 4;
          puVar24 = puVar24 + 4;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
        puVar13 = puVar13 + 0x38;
        iVar23 = 0x10;
        do {
          *puVar13 = *(undefined4 *)((int)puVar13 + iVar10);
          puVar13[1] = *(undefined4 *)((int)puVar13 + iVar10 + 4);
          puVar13 = puVar13 + 2;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      local_14 = (int *)0x0;
      param_2 = (void *)((int)param_2 + 1);
      local_20 = local_20 + 3;
      local_2c = local_2c + 0x160;
    } while ((int)param_2 < *(int *)(param_1 + 0xc));
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 0x10));
  *(void **)(param_1 + 0x10) = local_28;
  *(int *)(param_1 + 0xc) = local_1c;
  FUN_006bf840(pvVar12);
  FUN_006bf840(piVar14);
  iVar23 = *(int *)(param_1 + 0x14);
  iVar10 = 0;
  if (0 < iVar23) {
    piVar14 = (int *)(*(int *)(param_1 + 0x18) + 4);
    do {
      iVar10 = iVar10 + *piVar14;
      piVar14 = piVar14 + 0x17;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
  }
  pvVar12 = operator_new(*(int *)(param_1 + 0xc) << 2);
  pvVar16 = operator_new(iVar10 * 8);
  iVar23 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      *(undefined4 *)((int)pvVar12 + iVar23 * 4) = 0xffffffff;
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(param_1 + 0xc));
  }
  iVar23 = 0;
  param_2 = (void *)0x0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar10 = *(int *)(param_1 + 0x18);
    local_1c = 0;
    do {
      iVar11 = 0;
      if (0 < *(int *)(iVar10 + 4 + local_1c)) {
        iVar21 = local_1c + 8;
        do {
          *(void **)((int)pvVar16 + iVar23 * 8) = param_2;
          *(undefined4 *)((int)pvVar16 + iVar23 * 8 + 4) =
               *(undefined4 *)((int)pvVar12 + *(int *)(iVar21 + *(int *)(param_1 + 0x18)) * 4);
          *(int *)((int)pvVar12 + *(int *)(iVar21 + *(int *)(param_1 + 0x18)) * 4) = iVar23;
          iVar10 = *(int *)(param_1 + 0x18);
          iVar23 = iVar23 + 1;
          iVar11 = iVar11 + 1;
          iVar21 = iVar21 + 4;
        } while (iVar11 < *(int *)(iVar10 + 4 + local_1c));
      }
      param_2 = (void *)((int)param_2 + 1);
      local_1c = local_1c + 0x5c;
    } while ((int)param_2 < *(int *)(param_1 + 0x14));
  }
  param_2 = (void *)0x0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      for (iVar23 = *(int *)((int)pvVar12 + (int)param_2 * 4); iVar23 != -1;
          iVar23 = *(int *)((int)pvVar16 + iVar23 * 8 + 4)) {
        iVar10 = *(int *)((int)pvVar16 + iVar23 * 8) * 0x5c;
        local_10 = (float)(iVar10 + *(int *)(param_1 + 0x18));
        if (-1 < *(int *)(iVar10 + 4 + *(int *)(param_1 + 0x18))) {
          for (iVar10 = *(int *)((int)pvVar16 + iVar23 * 8 + 4); iVar10 != -1;
              iVar10 = *(int *)((int)pvVar16 + iVar10 * 8 + 4)) {
            iVar11 = *(int *)((int)pvVar16 + iVar10 * 8) * 0x5c;
            iVar21 = iVar11 + *(int *)(param_1 + 0x18);
            if ((-1 < *(int *)(iVar11 + 4 + *(int *)(param_1 + 0x18))) &&
               (iVar11 = FUN_006b3cc0(local_10,iVar21), iVar11 != 0)) {
              *(undefined4 *)(iVar21 + 4) = 0;
            }
          }
        }
      }
      param_2 = (void *)((int)param_2 + 1);
    } while ((int)param_2 < *(int *)(param_1 + 0xc));
  }
  local_24 = (float *)0x0;
  param_2 = (void *)0x0;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_1c = 0;
    local_20 = (int *)0x0;
    do {
      iVar23 = *(int *)(param_1 + 0x18);
      puVar18 = (undefined4 *)((int)local_20 + iVar23);
      if (*(int *)((int)local_20 + 4 + iVar23) != 0) {
        puVar13 = (undefined4 *)(iVar23 + local_1c);
        *puVar13 = *puVar18;
        puVar13[1] = puVar18[1];
        puVar19 = puVar13 + 2;
        local_14 = (int *)0x10;
        do {
          *puVar19 = *(undefined4 *)(((int)puVar18 - (int)puVar13) + (int)puVar19);
          puVar19 = puVar19 + 1;
          local_14 = (int *)((int)local_14 + -1);
        } while (local_14 != (int *)0x0);
        puVar13[0x12] = puVar18[0x12];
        puVar13[0x13] = puVar18[0x13];
        puVar13[0x14] = puVar18[0x14];
        puVar13[0x15] = puVar18[0x15];
        puVar13[0x16] = puVar18[0x16];
        local_24 = (float *)((int)local_24 + 1);
        local_1c = local_1c + 0x5c;
        local_14 = (int *)0x0;
      }
      param_2 = (void *)((int)param_2 + 1);
      local_20 = (int *)((int)local_20 + 0x5c);
    } while ((int)param_2 < *(int *)(param_1 + 0x14));
  }
  *(float **)(param_1 + 0x14) = local_24;
  FUN_006bf840(pvVar12);
  FUN_006bf840(pvVar16);
  if (0 < *(int *)(param_1 + 0x24)) {
    pvVar12 = operator_new(*(int *)(param_1 + 0x24) * 8);
    iVar23 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        *(undefined4 *)((int)pvVar12 + iVar23 * 8) = 0;
        *(undefined4 *)((int)pvVar12 + iVar23 * 8 + 4) = 0xffffffff;
        iVar23 = iVar23 + 1;
      } while (iVar23 < *(int *)(param_1 + 0x24));
    }
    iVar23 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar10 = 0;
      do {
        iVar11 = *(int *)(*(int *)(param_1 + 0x18) + 0x48 + iVar10);
        if ((iVar11 < 0) || (*(int *)(param_1 + 0x24) < iVar11)) {
          FUN_00649920(&param_2,s_Found_a_face_which_was_using_an_u_007573f0,iVar23,
                       *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48 + iVar10));
          local_4 = 2;
          FUN_00649940();
          local_4 = 0xffffffff;
          FUN_00649950();
        }
        *(undefined4 *)((int)pvVar12 + *(int *)(*(int *)(param_1 + 0x18) + 0x48 + iVar10) * 8) = 1;
        iVar23 = iVar23 + 1;
        iVar10 = iVar10 + 0x5c;
      } while (iVar23 < *(int *)(param_1 + 0x14));
    }
    piVar14 = (int *)0x0;
    local_14 = (int *)0x0;
    local_20 = (int *)0x0;
    if (0 < *(int *)(param_1 + 0x24)) {
      param_2 = (void *)0x0;
      local_1c = 0;
      do {
        if (*(int *)((int)pvVar12 + (int)local_20 * 8) != 0) {
          iVar23 = *(int *)(param_1 + 0x28) + local_1c;
          puVar24 = (undefined1 *)(*(int *)(param_1 + 0x28) + (int)param_2);
          iVar11 = iVar23 - (int)puVar24;
          iVar10 = 0x100;
          puVar20 = puVar24;
          do {
            *puVar20 = puVar20[iVar11];
            puVar20 = puVar20 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          *(undefined4 *)(puVar24 + 0x100) = *(undefined4 *)(iVar23 + 0x100);
          *(undefined4 *)(puVar24 + 0x104) = *(undefined4 *)(iVar23 + 0x104);
          *(undefined4 *)(puVar24 + 0x108) = *(undefined4 *)(iVar23 + 0x108);
          *(undefined4 *)(puVar24 + 0x10c) = *(undefined4 *)(iVar23 + 0x10c);
          *(undefined4 *)(puVar24 + 0x110) = *(undefined4 *)(iVar23 + 0x110);
          puVar18 = (undefined4 *)(puVar24 + 0x114);
          iVar10 = 8;
          do {
            *puVar18 = *(undefined4 *)((int)puVar18 + iVar11);
            puVar18 = puVar18 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          *(undefined4 *)(puVar24 + 0x134) = *(undefined4 *)(iVar23 + 0x134);
          puVar20 = (undefined1 *)(iVar23 + 0x175);
          puVar24 = puVar24 + 0x177;
          iVar23 = 8;
          do {
            *(undefined4 *)(puVar24 + -0x3f) = *(undefined4 *)(puVar20 + -0x3d);
            *(undefined4 *)(puVar24 + -0x3b) = *(undefined4 *)(puVar20 + -0x39);
            *(undefined4 *)(puVar24 + -0x37) = *(undefined4 *)(puVar20 + -0x35);
            *(undefined4 *)(puVar24 + -0x33) = *(undefined4 *)(puVar20 + -0x31);
            *(undefined4 *)(puVar24 + -0x2f) = *(undefined4 *)(puVar20 + -0x2d);
            *(undefined4 *)(puVar24 + -0x2b) = *(undefined4 *)(puVar20 + -0x29);
            *(undefined4 *)(puVar24 + -0x27) = *(undefined4 *)(puVar20 + -0x25);
            *(undefined4 *)(puVar24 + -0x23) = *(undefined4 *)(puVar20 + -0x21);
            *(undefined4 *)(puVar24 + -0x1f) = *(undefined4 *)(puVar20 + -0x1d);
            *(undefined4 *)(puVar24 + -0x1b) = *(undefined4 *)(puVar20 + -0x19);
            *(undefined4 *)(puVar24 + -0x17) = *(undefined4 *)(puVar20 + -0x15);
            *(undefined4 *)(puVar24 + -0x13) = *(undefined4 *)(puVar20 + -0x11);
            *(undefined4 *)(puVar24 + -0xf) = *(undefined4 *)(puVar20 + -0xd);
            *(undefined4 *)(puVar24 + -0xb) = *(undefined4 *)(puVar20 + -9);
            *(undefined4 *)(puVar24 + -7) = *(undefined4 *)(puVar20 + -5);
            *puVar24 = puVar24[iVar11];
            puVar24[-1] = puVar20[1];
            puVar24[-2] = *puVar20;
            puVar24[-3] = puVar20[-1];
            puVar20 = puVar20 + 0x40;
            puVar24 = puVar24 + 0x40;
            iVar23 = iVar23 + -1;
          } while (iVar23 != 0);
          *(int **)((int)pvVar12 + (int)local_20 * 8 + 4) = local_14;
          piVar14 = (int *)((int)local_14 + 1);
          param_2 = (void *)((int)param_2 + 0x338);
          local_14 = piVar14;
        }
        local_20 = (int *)((int)local_20 + 1);
        local_1c = local_1c + 0x338;
      } while ((int)local_20 < *(int *)(param_1 + 0x24));
    }
    iVar23 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar10 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48 + iVar10) =
             *(undefined4 *)
              ((int)pvVar12 + *(int *)(*(int *)(param_1 + 0x18) + 0x48 + iVar10) * 8 + 4);
        iVar23 = iVar23 + 1;
        iVar10 = iVar10 + 0x5c;
      } while (iVar23 < *(int *)(param_1 + 0x14));
    }
    *(int **)(param_1 + 0x24) = piVar14;
    FUN_006bf840(pvVar12);
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    pvVar12 = operator_new(*(int *)(param_1 + 0x1c) * 8);
    iVar23 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      do {
        *(undefined4 *)((int)pvVar12 + iVar23 * 8) = 0;
        *(undefined4 *)((int)pvVar12 + iVar23 * 8 + 4) = 0xffffffff;
        iVar23 = iVar23 + 1;
      } while (iVar23 < *(int *)(param_1 + 0x1c));
    }
    param_2 = (void *)0x0;
    if (0 < *(int *)(param_1 + 0x24)) {
      local_14 = (int *)0x0;
      do {
        iVar23 = *(int *)(param_1 + 0x28);
        iVar10 = 0;
        piVar14 = local_14;
        piVar15 = local_14;
        if (0 < *(int *)(iVar23 + 0x134 + (int)local_14)) {
          do {
            if (*(int *)(iVar23 + 0x140 + (int)piVar15) != 0) {
              piVar14 = (int *)(iVar23 + 0x144 + (int)piVar15);
              iVar23 = *piVar14;
              if ((iVar23 < 0) || (*(int *)(param_1 + 0x1c) < iVar23)) {
                FUN_00649920(&local_10,s_Found_a_material_which_was_using_00757440,param_2,iVar10,
                             iVar23);
                local_4 = 3;
                FUN_00649940();
                local_4 = 0xffffffff;
                FUN_00649950();
              }
              *(undefined4 *)((int)pvVar12 + *piVar14 * 8) = 1;
              piVar14 = local_14;
            }
            iVar23 = *(int *)(param_1 + 0x28);
            iVar10 = iVar10 + 1;
            piVar15 = piVar15 + 0x10;
          } while (iVar10 < *(int *)(iVar23 + 0x134 + (int)piVar14));
        }
        param_2 = (void *)((int)param_2 + 1);
        local_14 = piVar14 + 0xce;
      } while ((int)param_2 < *(int *)(param_1 + 0x24));
    }
    iVar23 = 0;
    iVar10 = 0;
    local_1c = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      param_2 = (void *)0x0;
      local_1c = 0;
      iVar11 = local_1c;
      do {
        local_1c = iVar11;
        if (*(int *)((int)pvVar12 + iVar23 * 8) != 0) {
          puVar18 = (undefined4 *)(*(int *)(param_1 + 0x20) + local_1c);
          puVar19 = (undefined4 *)(*(int *)(param_1 + 0x20) + (int)param_2);
          for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar19 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar19 = puVar19 + 1;
          }
          *(int *)((int)pvVar12 + iVar23 * 8 + 4) = iVar10;
          iVar10 = iVar10 + 1;
          param_2 = (void *)((int)param_2 + 0x100);
        }
        iVar23 = iVar23 + 1;
        iVar11 = local_1c + 0x100;
        local_1c = iVar10;
      } while (iVar23 < *(int *)(param_1 + 0x1c));
    }
    param_2 = (void *)0x0;
    if (0 < *(int *)(param_1 + 0x24)) {
      local_2c = 0;
      do {
        iVar23 = *(int *)(param_1 + 0x28);
        iVar11 = 0;
        iVar10 = local_2c;
        if (0 < *(int *)(iVar23 + 0x134 + local_2c)) {
          do {
            if (*(int *)(iVar23 + 0x140 + iVar10) != 0) {
              piVar14 = (int *)(iVar23 + 0x144 + iVar10);
              iVar23 = *(int *)((int)pvVar12 + *piVar14 * 8 + 4);
              if ((iVar23 < 0) || (local_1c < iVar23)) {
                FUN_00649920(&local_14,s_Found_a_problem_material_Materia_007574a8,param_2,iVar11,
                             *piVar14);
                local_4 = 4;
                FUN_00649940();
                local_4 = 0xffffffff;
                FUN_00649950();
              }
              *piVar14 = *(int *)((int)pvVar12 + *piVar14 * 8 + 4);
            }
            iVar23 = *(int *)(param_1 + 0x28);
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 0x40;
          } while (iVar11 < *(int *)(iVar23 + 0x134 + local_2c));
        }
        param_2 = (void *)((int)param_2 + 1);
        local_2c = local_2c + 0x338;
      } while ((int)param_2 < *(int *)(param_1 + 0x24));
    }
    *(int *)(param_1 + 0x1c) = local_1c;
    FUN_006bf840(pvVar12);
  }
  pvVar12 = operator_new(*(int *)(param_1 + 0x2c) << 2);
  FUN_00648600(pvVar12,0xffffffff,*(int *)(param_1 + 0x2c) << 2);
  iVar10 = 0;
  iVar23 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar11 = 0;
    do {
      *(undefined4 *)((int)pvVar12 + *(int *)(iVar11 + *(int *)(param_1 + 0x18)) * 4) = 1;
      iVar23 = iVar23 + 1;
      iVar11 = iVar11 + 0x5c;
    } while (iVar23 < *(int *)(param_1 + 0x14));
  }
  param_2 = (void *)0x0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    local_1c = 0;
    local_20 = (int *)0x0;
    do {
      if (*(int *)((int)pvVar12 + iVar10 * 4) == 1) {
        *(void **)((int)pvVar12 + iVar10 * 4) = param_2;
        puVar18 = (undefined4 *)(*(int *)(param_1 + 0x30) + (int)local_20);
        puVar19 = (undefined4 *)(*(int *)(param_1 + 0x30) + local_1c);
        for (iVar23 = 0x103; iVar23 != 0; iVar23 = iVar23 + -1) {
          *puVar19 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        }
        param_2 = (void *)((int)param_2 + 1);
        local_1c = local_1c + 0x40c;
      }
      else {
        *(undefined4 *)((int)pvVar12 + iVar10 * 4) = 0xffffffff;
      }
      iVar10 = iVar10 + 1;
      local_20 = (int *)((int)local_20 + 0x40c);
    } while (iVar10 < *(int *)(param_1 + 0x2c));
  }
  iVar23 = 0;
  *(void **)(param_1 + 0x2c) = param_2;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar10 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar10) =
           *(undefined4 *)((int)pvVar12 + *(int *)(*(int *)(param_1 + 0x18) + iVar10) * 4);
      iVar23 = iVar23 + 1;
      iVar10 = iVar10 + 0x5c;
    } while (iVar23 < *(int *)(param_1 + 0x14));
  }
  FUN_006bf840(pvVar12);
  ExceptionList = local_c;
  return;
}

