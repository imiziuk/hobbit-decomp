
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005a9910(int param_1,undefined4 param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  undefined4 uVar14;
  float *local_1bc;
  float *local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  float local_1a4;
  float local_19c;
  float local_198;
  float local_190;
  float local_184;
  float local_180 [48];
  float local_c0 [48];
  
  iVar12 = 0;
  local_1a8 = param_1;
  if (0 < *(int *)(param_1 + 0x8888)) {
    piVar10 = (int *)(param_1 + 0x888c);
    do {
      iVar6 = FUN_005a97f0(*piVar10 * 0x1b4 + param_1,param_2);
      if (iVar6 != 0) {
        return 1;
      }
      iVar12 = iVar12 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x8888));
  }
  FUN_005a92c0(param_2,local_180,&local_1b0);
  iVar12 = local_1b0;
  if (local_1b0 == 0) {
    return 0;
  }
  local_1bc = local_180;
  local_1b4 = local_1b0;
  if (DAT_007447b8 != 0) {
    local_1b8 = local_c0;
    uVar14 = 0;
    FUN_0065fd00(0,0);
    iVar6 = FUN_00672830(uVar14);
    local_1b0 = 0;
    pfVar13 = (float *)(iVar6 + 4);
    do {
      if (iVar12 == 0) {
        return 1;
      }
      DAT_007a59e8 = DAT_007a59e8 + 1;
      pfVar11 = local_1bc + iVar12 * 3 + -3;
      local_1b4 = 0;
      if (0 < iVar12) {
        pfVar7 = local_1bc + 2;
        pfVar8 = local_1b8;
        local_1ac = iVar12;
        fVar2 = pfVar13[-1] * *pfVar11 +
                pfVar11[2] * pfVar13[1] + local_1bc[iVar12 * 3 + -2] * *pfVar13 + pfVar13[2];
        do {
          pfVar1 = pfVar7 + -2;
          fVar3 = pfVar13[-1] * *pfVar1 + *pfVar7 * pfVar13[1] + pfVar7[-1] * *pfVar13 + pfVar13[2];
          pfVar9 = pfVar8;
          if (fVar2 < DAT_006e92e4) {
LAB_005a9a88:
            if ((fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) &&
               (DAT_006e92e4 <= fVar3)) goto LAB_005a9aae;
          }
          else {
            if (local_1b8 != (float *)0x0) {
              local_1b4 = local_1b4 + 1;
              *pfVar8 = *pfVar11;
              pfVar8[1] = pfVar11[1];
              pfVar9 = pfVar8 + 3;
              pfVar8[2] = pfVar11[2];
            }
            if (fVar3 < DAT_006e92e4 == (NAN(fVar3) || NAN(DAT_006e92e4))) goto LAB_005a9a88;
LAB_005a9aae:
            fVar4 = fVar3 - fVar2;
            fVar5 = fVar4;
            if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
              fVar5 = -fVar4;
            }
            if (fVar5 < _DAT_006ec0e0 != (NAN(fVar5) || NAN(_DAT_006ec0e0))) {
              fVar4 = _DAT_006ec0e0;
            }
            fVar4 = -fVar2 / fVar4;
            local_184 = *pfVar7 - pfVar11[2];
            local_1a4 = (*pfVar1 - *pfVar11) * fVar4;
            local_19c = fVar4 * local_184;
            local_198 = local_1a4 + *pfVar11;
            local_190 = local_19c + pfVar11[2];
            if (local_1b8 != (float *)0x0) {
              local_1b4 = local_1b4 + 1;
              pfVar9[1] = fVar4 * (pfVar7[-1] - pfVar11[1]) + pfVar11[1];
              *pfVar9 = local_198;
              pfVar9[2] = local_190;
              pfVar9 = pfVar9 + 3;
            }
          }
          pfVar7 = pfVar7 + 3;
          local_1ac = local_1ac + -1;
          pfVar8 = pfVar9;
          pfVar11 = pfVar1;
          fVar2 = fVar3;
        } while (local_1ac != 0);
        local_1ac = 0;
      }
      local_1bc = local_1b8;
      if (local_1b8 == local_180) {
        local_1b8 = local_c0;
      }
      else {
        local_1b8 = local_180;
      }
      local_1b0 = local_1b0 + 1;
      pfVar13 = pfVar13 + 4;
      iVar12 = local_1b4;
    } while (local_1b0 < 4);
  }
  uVar14 = FUN_005a94b0(local_1bc,local_1b4,0);
  return uVar14;
}

