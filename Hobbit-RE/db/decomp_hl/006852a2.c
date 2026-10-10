
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_006852a2(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  uint uVar27;
  float fVar28;
  float *pfVar29;
  void *pvVar30;
  int iVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  void *pvVar38;
  void *pvVar39;
  float *pfVar40;
  void *pvVar41;
  undefined4 uVar42;
  void *pvVar43;
  void *local_34;
  void *local_2c;
  uint local_1c;
  float *local_18;
  uint local_14;
  void *local_c;
  uint local_8;
  
  if ((((char)param_1[2] == '\x05') && (iVar31 = param_1[1], *(int *)(iVar31 + 8) == 1)) &&
     (iVar26 = *param_1, *(int *)(iVar26 + 8) == 1)) {
    uVar27 = *(uint *)(iVar31 + 0x1050);
    if ((((uVar27 == *(uint *)(iVar26 + 0x1050) >> 1) ||
         ((uVar27 == 1 && (*(uint *)(iVar26 + 0x1050) == 1)))) &&
        ((*(uint *)(iVar31 + 0x1054) == *(uint *)(iVar26 + 0x1054) >> 1 ||
         ((*(uint *)(iVar31 + 0x1054) == 1 && (*(int *)(iVar26 + 0x1054) == 1)))))) &&
       (*(uint *)(iVar31 + 0x1058) == *(uint *)(iVar26 + 0x1058) >> 1)) {
      pfVar29 = (float *)operator_new(uVar27 << 4);
      if (pfVar29 == (float *)0x0) {
        return 0x8007000e;
      }
      iVar31 = *(int *)(*param_1 + 0x1050);
      if (*(int *)(*param_1 + 0x1054) == 1) {
        pvVar30 = operator_new(iVar31 << 5);
        iVar31 = *(int *)(*param_1 + 0x1050);
        pvVar41 = (void *)(iVar31 * 0x10 + (int)pvVar30);
        pvVar38 = pvVar41;
        local_c = pvVar30;
      }
      else {
        local_c = operator_new(iVar31 << 6);
        iVar31 = *(int *)(*param_1 + 0x1050);
        pvVar30 = (void *)(iVar31 * 0x20 + (int)local_c);
        pvVar41 = (void *)(iVar31 * 0x10 + (int)local_c);
        pvVar38 = (void *)(iVar31 * 0x30 + (int)local_c);
      }
      if (local_c == (void *)0x0) {
        uVar42 = 0x8007000e;
      }
      else {
        if (iVar31 == 1) {
          local_2c = local_c;
          pvVar39 = pvVar30;
          pvVar43 = pvVar38;
          local_34 = pvVar41;
        }
        else {
          local_2c = (void *)((int)local_c + 0x10);
          local_34 = (void *)((int)pvVar41 + 0x10);
          pvVar39 = (void *)((int)pvVar30 + 0x10);
          pvVar43 = (void *)((int)pvVar38 + 0x10);
        }
        iVar31 = param_1[1];
        local_14 = 0;
        if (*(int *)(iVar31 + 0x1058) != 0) {
          do {
            local_8 = 0;
            if (*(int *)(iVar31 + 0x1054) != 0) {
              do {
                iVar31 = local_14 * 2;
                (**(code **)(*(int *)*param_1 + 4))(local_8 * 2,iVar31,local_c);
                if (pvVar41 != local_c) {
                  (**(code **)(*(int *)*param_1 + 4))(local_8 * 2,iVar31 + 1,pvVar41);
                }
                if (pvVar30 != local_c) {
                  (**(code **)(*(int *)*param_1 + 4))(local_8 * 2 + 1,iVar31,pvVar30);
                }
                if ((pvVar38 != pvVar41) && (pvVar38 != pvVar30)) {
                  (**(code **)(*(int *)*param_1 + 4))(local_8 * 2 + 1,iVar31 + 1,pvVar38);
                }
                fVar28 = _DAT_006ec118;
                local_1c = 0;
                local_18 = pfVar29;
                if (*(int *)(param_1[1] + 0x1050) != 0) {
                  do {
                    iVar31 = local_1c * 0x20;
                    pfVar33 = (float *)((int)local_c + iVar31);
                    pfVar40 = (float *)((int)local_2c + iVar31);
                    fVar2 = pfVar40[1];
                    fVar3 = pfVar33[1];
                    fVar4 = pfVar40[2];
                    fVar5 = pfVar33[2];
                    fVar6 = pfVar40[3];
                    fVar7 = pfVar33[3];
                    pfVar1 = (float *)(iVar31 + (int)pvVar41);
                    fVar8 = pfVar1[1];
                    fVar9 = pfVar1[2];
                    fVar10 = pfVar1[3];
                    pfVar34 = (float *)((int)local_34 + iVar31);
                    fVar11 = pfVar34[1];
                    fVar12 = pfVar34[2];
                    fVar13 = pfVar34[3];
                    pfVar35 = (float *)((int)pvVar30 + iVar31);
                    fVar14 = pfVar35[1];
                    fVar15 = pfVar35[2];
                    fVar16 = pfVar35[3];
                    pfVar36 = (float *)((int)pvVar39 + iVar31);
                    fVar17 = pfVar36[1];
                    fVar18 = pfVar36[2];
                    fVar19 = pfVar36[3];
                    pfVar37 = (float *)((int)pvVar38 + iVar31);
                    fVar20 = pfVar37[1];
                    fVar21 = pfVar37[2];
                    fVar22 = pfVar37[3];
                    pfVar32 = (float *)(iVar31 + (int)pvVar43);
                    local_1c = local_1c + 1;
                    fVar23 = pfVar32[1];
                    fVar24 = pfVar32[2];
                    fVar25 = pfVar32[3];
                    *local_18 = (*pfVar33 + *pfVar40 + *pfVar1 + *pfVar34 + *pfVar35 + *pfVar36 +
                                 *pfVar37 + *pfVar32) * fVar28;
                    local_18[1] = (fVar2 + fVar3 + fVar8 + fVar11 + fVar14 + fVar17 + fVar20 +
                                  fVar23) * fVar28;
                    local_18[2] = (fVar4 + fVar5 + fVar9 + fVar12 + fVar15 + fVar18 + fVar21 +
                                  fVar24) * fVar28;
                    local_18[3] = (fVar6 + fVar7 + fVar10 + fVar13 + fVar16 + fVar19 + fVar22 +
                                  fVar25) * fVar28;
                    local_18 = local_18 + 4;
                  } while (local_1c < *(uint *)(param_1[1] + 0x1050));
                }
                (**(code **)(*(int *)param_1[1] + 8))(local_8,local_14,pfVar29);
                local_8 = local_8 + 1;
              } while (local_8 < *(uint *)(param_1[1] + 0x1054));
            }
            local_14 = local_14 + 1;
            iVar31 = param_1[1];
          } while (local_14 < *(uint *)(iVar31 + 0x1058));
        }
        FUN_006bf840(local_c);
        uVar42 = 0;
      }
      FUN_006bf840(pfVar29);
      return uVar42;
    }
  }
  return 0x80004005;
}

