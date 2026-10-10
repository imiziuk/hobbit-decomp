
undefined4 __fastcall FUN_0068571c(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
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
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float *pfVar27;
  float *pfVar28;
  void *pvVar29;
  void *pvVar30;
  undefined4 uVar31;
  int *piVar32;
  void *local_2c;
  uint local_28;
  float *local_20;
  void *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  float *local_c;
  
  local_c = (float *)0x0;
  local_2c = (void *)0x0;
  if (((*(int *)(param_1[1] + 8) == 1) && (*(int *)(*param_1 + 8) == 1)) &&
     (uVar22 = param_1[2], (char)uVar22 == '\x03')) {
    iVar25 = FUN_0068564b(~(uVar22 >> 0x10) & 1);
    iVar26 = FUN_0068564b(~(uVar22 >> 0x11) & 1);
    if (((iVar25 == 0) || (iVar26 == 0)) ||
       ((local_c = (float *)operator_new(*(int *)(param_1[1] + 0x1050) << 4),
        local_c == (float *)0x0 ||
        (local_2c = operator_new(*(int *)(*param_1 + 0x1050) << 5), local_2c == (void *)0x0)))) {
      uVar31 = 0x8007000e;
    }
    else {
      local_10 = 0;
      local_14 = -1;
      local_18 = -1;
      if (*(int *)(param_1[1] + 0x1054) != 0) {
        piVar32 = (int *)(iVar26 + 8);
        pvVar29 = (void *)(*(int *)(*param_1 + 0x1050) * 0x10 + (int)local_2c);
        local_1c = local_2c;
        do {
          iVar24 = local_18;
          iVar23 = piVar32[-2];
          local_28 = 0;
          pvVar30 = pvVar29;
          if (iVar23 != local_14) {
            if (iVar23 == local_18) {
              local_18 = -1;
              local_14 = iVar24;
              pvVar30 = local_1c;
              local_1c = pvVar29;
            }
            else {
              (**(code **)(*(int *)*param_1 + 4))(iVar23,0,local_1c);
              local_14 = iVar23;
            }
          }
          iVar23 = *piVar32;
          if (iVar23 != local_18) {
            (**(code **)(*(int *)*param_1 + 4))(iVar23,0,pvVar30);
            local_18 = iVar23;
          }
          if (*(int *)(param_1[1] + 0x1050) != 0) {
            pfVar27 = (float *)(iVar25 + 0xc);
            local_20 = local_c;
            do {
              fVar4 = *pfVar27;
              pfVar1 = (float *)((int)pfVar27[-1] * 0x10 + (int)pvVar30);
              fVar5 = pfVar1[1];
              fVar6 = pfVar1[2];
              fVar7 = pfVar1[3];
              fVar8 = pfVar27[-2];
              pfVar2 = (float *)((int)pfVar27[-3] * 0x10 + (int)pvVar30);
              fVar9 = pfVar2[1];
              fVar10 = pfVar2[2];
              fVar11 = pfVar2[3];
              pfVar28 = (float *)((int)pfVar27[-1] * 0x10 + (int)local_1c);
              fVar12 = (float)piVar32[1];
              fVar13 = *pfVar27;
              fVar14 = pfVar28[1];
              fVar15 = pfVar28[2];
              fVar16 = pfVar28[3];
              pfVar3 = (float *)((int)pfVar27[-3] * 0x10 + (int)local_1c);
              fVar17 = pfVar27[-2];
              pfVar27 = pfVar27 + 4;
              local_28 = local_28 + 1;
              fVar18 = pfVar3[1];
              fVar19 = pfVar3[2];
              fVar20 = pfVar3[3];
              fVar21 = (float)piVar32[-1];
              *local_20 = (fVar17 * *pfVar3 + fVar13 * *pfVar28) * fVar21 +
                          (fVar8 * *pfVar2 + fVar4 * *pfVar1) * fVar12;
              local_20[1] = (fVar17 * fVar18 + fVar13 * fVar14) * fVar21 +
                            (fVar8 * fVar9 + fVar4 * fVar5) * fVar12;
              local_20[2] = (fVar17 * fVar19 + fVar13 * fVar15) * fVar21 +
                            (fVar8 * fVar10 + fVar4 * fVar6) * fVar12;
              local_20[3] = (fVar17 * fVar20 + fVar13 * fVar16) * fVar21 +
                            (fVar8 * fVar11 + fVar4 * fVar7) * fVar12;
              local_20 = local_20 + 4;
            } while (local_28 < *(uint *)(param_1[1] + 0x1050));
          }
          (**(code **)(*(int *)param_1[1] + 8))(local_10,0,local_c);
          piVar32 = piVar32 + 4;
          local_10 = local_10 + 1;
          pvVar29 = pvVar30;
        } while (local_10 < *(uint *)(param_1[1] + 0x1054));
      }
      uVar31 = 0;
    }
    FUN_006bf840(iVar25);
    FUN_006bf840(iVar26);
    FUN_006bf840(local_c);
    FUN_006bf840(local_2c);
  }
  else {
    uVar31 = 0x80004005;
  }
  return uVar31;
}

