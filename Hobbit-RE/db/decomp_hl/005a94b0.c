
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005a94b0(int param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *local_44;
  int local_40;
  int local_3c;
  int local_34;
  int local_2c;
  
  if (param_4 != *(int *)(param_1 + 0x8888)) {
    piVar6 = (int *)(param_1 + 0x888c + param_4 * 4);
    do {
      if (param_3 < 3) {
        return 0;
      }
      if (0x56 < param_3) {
        return 0;
      }
      iVar8 = *piVar6 * 0x1b4 + param_1;
      if (*(int *)(*piVar6 * 0x1b4 + 0x1a0 + param_1) == 0) {
        iVar10 = param_4 * 0xc18;
        pfVar11 = (float *)(&DAT_007a59f0 + iVar10);
        local_2c = 0;
        if (*(int *)(iVar8 + 0x10) < 0) {
          return 1;
        }
        pfVar14 = (float *)(iVar8 + 0x78);
        pfVar13 = param_2;
        local_44 = pfVar11;
        do {
          local_40 = param_3;
          pfVar7 = local_44;
          if (((*(uint *)(iVar8 + 0x19c) & 1 << ((byte)local_2c & 0x1f)) != 0) && (param_3 != 0)) {
            DAT_007a59e8 = DAT_007a59e8 + 1;
            local_3c = 0;
            local_40 = 0;
            pfVar7 = pfVar13 + param_3 * 3 + -3;
            if (0 < param_3) {
              pfVar9 = (float *)(&DAT_007a6200 + iVar10);
              param_2 = local_44;
              pfVar12 = pfVar13 + 2;
              local_34 = param_3;
              fVar1 = pfVar14[-1] * *pfVar7 +
                      pfVar7[1] * *pfVar14 + pfVar13[param_3 * 3 + -1] * pfVar14[1] + pfVar14[2];
              do {
                pfVar13 = pfVar12 + -2;
                fVar3 = *pfVar14 * pfVar12[-1] + *pfVar12 * pfVar14[1] + pfVar14[-1] * *pfVar13 +
                        pfVar14[2];
                if ((DAT_006e92e4 <= fVar1) && (local_44 != (float *)0x0)) {
                  local_40 = local_40 + 1;
                  *param_2 = *pfVar7;
                  param_2[1] = pfVar7[1];
                  param_2[2] = pfVar7[2];
                  param_2 = param_2 + 3;
                }
                if ((fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4)) &&
                   (pfVar11 != (float *)0xfffff7f0)) {
                  local_3c = local_3c + 1;
                  *pfVar9 = *pfVar7;
                  pfVar9[1] = pfVar7[1];
                  pfVar9[2] = pfVar7[2];
                  pfVar9 = pfVar9 + 3;
                }
                if (((DAT_006e92e4 <= fVar1) &&
                    (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4)))) ||
                   ((fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4)) &&
                    (DAT_006e92e4 <= fVar3)))) {
                  fVar2 = fVar3 - fVar1;
                  fVar4 = fVar2;
                  if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
                    fVar4 = -fVar2;
                  }
                  if (fVar4 < _DAT_006ec0e0 != (NAN(fVar4) || NAN(_DAT_006ec0e0))) {
                    fVar2 = _DAT_006ec0e0;
                  }
                  fVar2 = -fVar1 / fVar2;
                  fVar1 = (*pfVar13 - *pfVar7) * fVar2 + *pfVar7;
                  fVar4 = fVar2 * (pfVar12[-1] - pfVar7[1]) + pfVar7[1];
                  fVar2 = fVar2 * (*pfVar12 - pfVar7[2]) + pfVar7[2];
                  if (local_44 != (float *)0x0) {
                    param_2[1] = fVar4;
                    local_40 = local_40 + 1;
                    *param_2 = fVar1;
                    param_2[2] = fVar2;
                    param_2 = param_2 + 3;
                  }
                  if (pfVar11 != (float *)0xfffff7f0) {
                    local_3c = local_3c + 1;
                    pfVar9[1] = fVar4;
                    *pfVar9 = fVar1;
                    pfVar9[2] = fVar2;
                    pfVar9 = pfVar9 + 3;
                  }
                }
                pfVar12 = pfVar12 + 3;
                local_34 = local_34 + -1;
                pfVar7 = pfVar13;
                fVar1 = fVar3;
              } while (local_34 != 0);
              if ((local_3c != 0) &&
                 (iVar5 = FUN_005a94b0(&DAT_007a6200 + iVar10,local_3c,param_4 + 1), iVar5 == 0)) {
                return 0;
              }
            }
            pfVar13 = local_44;
            pfVar7 = pfVar11;
            if (local_44 == pfVar11) {
              pfVar7 = (float *)(iVar10 + 0x7a5df8);
            }
          }
          local_44 = pfVar7;
          local_2c = local_2c + 1;
          pfVar14 = pfVar14 + 4;
          param_3 = local_40;
          if (*(int *)(iVar8 + 0x10) < local_2c) {
            return 1;
          }
        } while( true );
      }
      param_4 = param_4 + 1;
      piVar6 = piVar6 + 1;
    } while (param_4 != *(int *)(param_1 + 0x8888));
  }
  return 0;
}

