
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0068353b(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  void *pvVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  float *pfVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  float *pfVar23;
  int local_3c;
  int local_34;
  void *local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  
  local_24 = (int *)0x0;
  local_20 = (int *)0x0;
  local_c = (undefined4 *)0x0;
  local_14 = (int *)0x0;
  local_28 = (void *)0x0;
  if ((*(int *)(param_1[1] + 8) != 1) || (*(int *)(*param_1 + 8) != 1)) {
    return 0x80004005;
  }
  uVar14 = param_1[2];
  piVar6 = (int *)FUN_00682ee4(*(undefined4 *)(*param_1 + 0x1050),
                               *(undefined4 *)(param_1[1] + 0x1050),~(uVar14 >> 0x10) & 1);
  if (((piVar6 == (int *)0x0) ||
      (local_24 = (int *)FUN_00682ee4(*(undefined4 *)(*param_1 + 0x1054),
                                      *(undefined4 *)(param_1[1] + 0x1054),~(uVar14 >> 0x11) & 1),
      local_24 == (int *)0x0)) ||
     (local_20 = (int *)FUN_00682ee4(*(undefined4 *)(*param_1 + 0x1058),
                                     *(undefined4 *)(param_1[1] + 0x1058),~(uVar14 >> 0x12) & 1),
     local_20 == (int *)0x0)) {
    uVar21 = 0x80004005;
  }
  else {
    iVar3 = *piVar6;
    iVar4 = *local_24;
    piVar20 = (int *)(*local_20 + (int)local_20);
    local_c = (undefined4 *)operator_new(*(int *)(param_1[1] + 0x1058) << 2);
    if (local_c != (undefined4 *)0x0) {
      local_10 = 0;
      puVar22 = local_c;
      for (uVar14 = *(uint *)(param_1[1] + 0x1058) & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar22 = 0;
        puVar22 = puVar22 + 1;
      }
      for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
        *(undefined1 *)puVar22 = 0;
        puVar22 = (undefined4 *)((int)puVar22 + 1);
      }
      local_28 = operator_new(*(int *)(*param_1 + 0x1050) << 4);
      if (local_28 != (void *)0x0) {
        local_3c = 0;
        piVar7 = local_20 + 1;
        piVar8 = piVar20;
        if (piVar7 < piVar20) {
          do {
            piVar18 = (int *)(*piVar7 + (int)piVar7);
            piVar7 = piVar7 + 1;
            for (piVar10 = piVar7; piVar10 < piVar18; piVar10 = piVar10 + 2) {
              piVar8 = (int *)local_c[*piVar10];
              if (piVar8 == (int *)0x0) {
                if (local_14 == (int *)0x0) {
                  piVar8 = (int *)operator_new(0xc);
                  if (piVar8 == (int *)0x0) goto LAB_006839ae;
                  pvVar9 = operator_new(*(int *)(param_1[1] + 0x1054) *
                                        *(int *)(param_1[1] + 0x1050) * 0x10);
                  *piVar8 = (int)pvVar9;
                  if (pvVar9 == (void *)0x0) {
                    FUN_00682ec2();
                    FUN_006bf840(piVar8);
                    goto LAB_006839ae;
                  }
                }
                else {
                  piVar8 = local_14;
                  local_14 = (int *)local_14[2];
                }
                puVar22 = (undefined4 *)*piVar8;
                for (uVar14 = (uint)(*(int *)(param_1[1] + 0x1054) * *(int *)(param_1[1] + 0x1050) *
                                    0x10) >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
                  *(undefined1 *)puVar22 = 0;
                  puVar22 = (undefined4 *)((int)puVar22 + 1);
                }
                piVar8[1] = 0;
                piVar8[2] = 0;
                local_10 = local_10 + 1;
                local_c[*piVar10] = piVar8;
              }
            }
            local_34 = 0;
            piVar10 = local_24 + 1;
            while (piVar10 < (int *)(iVar4 + (int)local_24)) {
              iVar15 = *piVar10;
              (**(code **)(*(int *)*param_1 + 4))(local_34,local_3c,local_28);
              if (piVar6 + 1 < (int *)(iVar3 + (int)piVar6)) {
                pfVar19 = (float *)((int)local_28 + 8);
                piVar11 = piVar6 + 1;
                do {
                  piVar16 = (int *)(*piVar11 + (int)piVar11);
                  for (piVar5 = piVar7; piVar5 < piVar18; piVar5 = piVar5 + 2) {
                    for (piVar12 = piVar10 + 1; piVar12 < (int *)(iVar15 + (int)piVar10);
                        piVar12 = piVar12 + 2) {
                      iVar13 = *(int *)(param_1[1] + 0x1050) * *piVar12 * 0x10 +
                               *(int *)local_c[*piVar5];
                      for (piVar17 = piVar11 + 1; piVar17 < piVar16; piVar17 = piVar17 + 2) {
                        fVar1 = (float)piVar17[1] * (float)piVar5[1] * (float)piVar12[1];
                        pfVar23 = (float *)(*piVar17 * 0x10 + iVar13);
                        *pfVar23 = fVar1 * pfVar19[-2] + *pfVar23;
                        pfVar23 = (float *)(*piVar17 * 0x10 + 4 + iVar13);
                        *pfVar23 = fVar1 * pfVar19[-1] + *pfVar23;
                        pfVar23 = (float *)(*piVar17 * 0x10 + 8 + iVar13);
                        *pfVar23 = fVar1 * *pfVar19 + *pfVar23;
                        pfVar23 = (float *)(*piVar17 * 0x10 + 0xc + iVar13);
                        *pfVar23 = fVar1 * pfVar19[1] + *pfVar23;
                      }
                    }
                  }
                  pfVar19 = pfVar19 + 4;
                  piVar11 = piVar16;
                } while (piVar16 < (int *)(iVar3 + (int)piVar6));
              }
              local_34 = local_34 + 1;
              piVar10 = (int *)(iVar15 + (int)piVar10);
            }
            for (; piVar7 < piVar18; piVar7 = piVar7 + 2) {
              fVar1 = (float)piVar7[1];
              piVar8 = (int *)local_c[*piVar7];
              fVar2 = (float)piVar8[1];
              piVar8[1] = (int)(fVar1 + fVar2);
              if (DAT_006e92e8 <= _DAT_006ec0e0 + fVar1 + fVar2) {
                piVar10 = (int *)param_1[1];
                local_18 = 0;
                if (piVar10[0x415] != 0) {
                  do {
                    (**(code **)(*piVar10 + 8))
                              (local_18,*piVar7,piVar10[0x414] * local_18 * 0x10 + *piVar8);
                    local_18 = local_18 + 1;
                    piVar10 = (int *)param_1[1];
                  } while (local_18 < (uint)piVar10[0x415]);
                }
                local_c[*piVar7] = 0;
                local_10 = local_10 + -1;
                piVar8[2] = (int)local_14;
                local_14 = piVar8;
              }
            }
            local_3c = local_3c + 1;
            piVar7 = piVar18;
          } while (piVar18 < piVar20);
          if (local_10 != 0) {
            piVar20 = (int *)param_1[1];
            uVar14 = 0;
            if (piVar20[0x416] != 0) {
              do {
                if (local_c[uVar14] != 0) {
                  local_1c = 0;
                  if (piVar20[0x415] != 0) {
                    do {
                      (**(code **)(*piVar20 + 8))
                                (local_1c,uVar14,piVar20[0x414] * local_1c * 0x10 + *piVar8);
                      local_1c = local_1c + 1;
                      piVar20 = (int *)param_1[1];
                    } while (local_1c < (uint)piVar20[0x415]);
                  }
                  iVar3 = local_c[uVar14];
                  if (iVar3 != 0) {
                    FUN_00682ec2();
                    FUN_006bf840(iVar3);
                  }
                  local_10 = local_10 + -1;
                  if (local_10 == 0) break;
                }
                piVar20 = (int *)param_1[1];
                uVar14 = uVar14 + 1;
              } while (uVar14 < (uint)piVar20[0x416]);
            }
          }
        }
        uVar21 = 0;
        goto LAB_006839ba;
      }
    }
LAB_006839ae:
    uVar21 = 0x8007000e;
  }
LAB_006839ba:
  FUN_006bf840(local_c);
  if (local_14 != (int *)0x0) {
    FUN_00682ec2();
    FUN_006bf840(local_14);
  }
  FUN_006bf840(local_20);
  FUN_006bf840(local_24);
  FUN_006bf840(piVar6);
  FUN_006bf840(local_28);
  FUN_006bf840(0);
  return uVar21;
}

