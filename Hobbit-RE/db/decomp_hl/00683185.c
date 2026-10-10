
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00683185(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  int *piVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined4 *puVar18;
  float *pfVar19;
  void *local_24;
  int local_20;
  int *local_1c;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  iVar3 = param_1[1];
  local_1c = (int *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_24 = (void *)0x0;
  if ((((*(int *)(iVar3 + 8) != 1) || (iVar4 = *param_1, *(int *)(iVar4 + 8) != 1)) ||
      (*(int *)(iVar3 + 0x1058) != 1)) || (*(int *)(iVar4 + 0x1058) != 1)) {
    return 0x80004005;
  }
  uVar12 = param_1[2];
  piVar6 = (int *)FUN_00682ee4(*(undefined4 *)(iVar4 + 0x1050),*(undefined4 *)(iVar3 + 0x1050),
                               ~(uVar12 >> 0x10) & 1);
  if ((piVar6 == (int *)0x0) ||
     (local_1c = (int *)FUN_00682ee4(*(undefined4 *)(*param_1 + 0x1054),
                                     *(undefined4 *)(param_1[1] + 0x1054),~(uVar12 >> 0x11) & 1),
     local_1c == (int *)0x0)) {
    uVar16 = 0x80004005;
  }
  else {
    iVar3 = *piVar6;
    iVar4 = *local_1c;
    local_c = (undefined4 *)operator_new(*(int *)(param_1[1] + 0x1054) << 2);
    if (local_c != (undefined4 *)0x0) {
      local_14 = 0;
      puVar8 = local_c;
      for (uVar12 = *(uint *)(param_1[1] + 0x1054) & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_24 = operator_new(*(int *)(*param_1 + 0x1050) << 4);
      if (local_24 != (void *)0x0) {
        local_20 = 0;
        piVar7 = local_1c + 1;
        if (local_1c + 1 < (int *)(iVar4 + (int)local_1c)) {
          do {
            piVar17 = (int *)(*piVar7 + (int)piVar7);
            piVar7 = piVar7 + 1;
            local_8 = piVar7;
            if (piVar7 < piVar17) {
              do {
                if (local_c[*local_8] == 0) {
                  if (local_10 == (undefined4 *)0x0) {
                    puVar8 = (undefined4 *)operator_new(0xc);
                    if (puVar8 == (undefined4 *)0x0) goto LAB_006834df;
                    pvVar9 = operator_new(*(int *)(param_1[1] + 0x1050) << 4);
                    *puVar8 = pvVar9;
                    if (pvVar9 == (void *)0x0) {
                      FUN_00682ec2();
                      FUN_006bf840(puVar8);
                      goto LAB_006834df;
                    }
                  }
                  else {
                    puVar8 = local_10;
                    local_10 = (undefined4 *)local_10[2];
                  }
                  puVar18 = (undefined4 *)*puVar8;
                  for (uVar12 = (uint)(*(int *)(param_1[1] + 0x1050) << 4) >> 2; uVar12 != 0;
                      uVar12 = uVar12 - 1) {
                    *puVar18 = 0;
                    puVar18 = puVar18 + 1;
                  }
                  for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
                    *(undefined1 *)puVar18 = 0;
                    puVar18 = (undefined4 *)((int)puVar18 + 1);
                  }
                  puVar8[1] = 0;
                  puVar8[2] = 0;
                  local_14 = local_14 + 1;
                  local_c[*local_8] = puVar8;
                }
                local_8 = local_8 + 2;
              } while (local_8 < piVar17);
              (**(code **)(*(int *)*param_1 + 4))(local_20,0,local_24);
              if (piVar6 + 1 < (int *)(iVar3 + (int)piVar6)) {
                pfVar14 = (float *)((int)local_24 + 8);
                piVar10 = piVar6 + 1;
                do {
                  piVar15 = (int *)(*piVar10 + (int)piVar10);
                  local_8 = piVar7;
                  do {
                    piVar5 = (int *)local_c[*local_8];
                    for (piVar11 = piVar10 + 1; piVar11 < piVar15; piVar11 = piVar11 + 2) {
                      fVar1 = (float)piVar11[1] * (float)local_8[1];
                      pfVar19 = (float *)(*piVar11 * 0x10 + *piVar5);
                      *pfVar19 = fVar1 * pfVar14[-2] + *pfVar19;
                      pfVar19 = (float *)(*piVar11 * 0x10 + 4 + *piVar5);
                      *pfVar19 = fVar1 * pfVar14[-1] + *pfVar19;
                      pfVar19 = (float *)(*piVar11 * 0x10 + 8 + *piVar5);
                      *pfVar19 = fVar1 * *pfVar14 + *pfVar19;
                      pfVar19 = (float *)(*piVar11 * 0x10 + 0xc + *piVar5);
                      *pfVar19 = fVar1 * pfVar14[1] + *pfVar19;
                    }
                    local_8 = local_8 + 2;
                  } while (local_8 < piVar17);
                  pfVar14 = pfVar14 + 4;
                  piVar10 = piVar15;
                } while (piVar15 < (int *)(iVar3 + (int)piVar6));
              }
              do {
                fVar1 = (float)piVar7[1];
                puVar8 = (undefined4 *)local_c[*piVar7];
                fVar2 = (float)puVar8[1];
                puVar8[1] = fVar1 + fVar2;
                if (DAT_006e92e8 <= _DAT_006ec0e0 + fVar1 + fVar2) {
                  (**(code **)(*(int *)param_1[1] + 8))(*piVar7,0,*puVar8);
                  local_c[*piVar7] = 0;
                  local_14 = local_14 + -1;
                  puVar8[2] = local_10;
                  local_10 = puVar8;
                }
                piVar7 = piVar7 + 2;
              } while (piVar7 < piVar17);
            }
            local_20 = local_20 + 1;
            piVar7 = piVar17;
          } while (piVar17 < (int *)(iVar4 + (int)local_1c));
          if (local_14 != 0) {
            piVar7 = (int *)param_1[1];
            uVar12 = 0;
            if (piVar7[0x415] != 0) {
              do {
                puVar8 = (undefined4 *)local_c[uVar12];
                if (puVar8 != (undefined4 *)0x0) {
                  (**(code **)(*piVar7 + 8))(uVar12,0,*puVar8);
                  iVar3 = local_c[uVar12];
                  if (iVar3 != 0) {
                    FUN_00682ec2();
                    FUN_006bf840(iVar3);
                  }
                  local_14 = local_14 + -1;
                  if (local_14 == 0) break;
                }
                piVar7 = (int *)param_1[1];
                uVar12 = uVar12 + 1;
              } while (uVar12 < (uint)piVar7[0x415]);
            }
          }
        }
        uVar16 = 0;
        goto LAB_006834eb;
      }
    }
LAB_006834df:
    uVar16 = 0x8007000e;
  }
LAB_006834eb:
  FUN_006bf840(local_c);
  if (local_10 != (undefined4 *)0x0) {
    FUN_00682ec2();
    FUN_006bf840(local_10);
  }
  FUN_006bf840(local_1c);
  FUN_006bf840(piVar6);
  FUN_006bf840(local_24);
  FUN_006bf840(0);
  return uVar16;
}

