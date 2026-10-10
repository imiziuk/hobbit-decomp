
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00682ee4(uint param_1,uint param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float local_24;
  uint local_1c;
  float local_18;
  uint local_10;
  float local_c;
  float local_8;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    fVar2 = (float)param_2;
    uVar16 = 0;
    uVar13 = 0x10;
    fVar3 = fVar2 / (float)param_1;
    fVar4 = _DAT_006e936c / fVar3;
    if (param_1 != 0) {
      do {
        iVar8 = __ftol();
        uVar16 = uVar16 + 1;
        uVar13 = uVar13 + 0xc + iVar8 * 0x10;
      } while (uVar16 < param_1);
    }
    piVar9 = (int *)operator_new(uVar13);
    if (piVar9 != (int *)0x0) {
      iVar8 = 0;
      local_1c = 0;
      iVar15 = 4;
      iVar14 = iVar15;
      if (param_1 != 0) {
        do {
          local_8 = 0.0;
          local_10 = 0;
          iVar15 = iVar14 + 4;
          do {
            fVar5 = ((float)local_10 + (float)local_1c) - _DAT_006e936c;
            local_24 = fVar5 * fVar3;
            local_c = fVar3 + local_24;
            if (param_3 == 0) {
              if (local_24 < DAT_006e92e4 != (NAN(local_24) || NAN(DAT_006e92e4))) {
                local_24 = 0.0;
              }
              if (fVar2 < local_c) {
                local_c = fVar2;
              }
            }
            FUN_006c0ae5((double)local_24);
            iVar10 = __ftol();
            fVar6 = (float)iVar10;
            if (fVar6 < local_c != (NAN(fVar6) || NAN(local_c))) {
              iVar11 = iVar10 - param_2;
              do {
                local_18 = DAT_006e92e8 + fVar6;
                if (iVar10 < 0) {
                  iVar12 = iVar10 + param_2;
                }
                else {
                  iVar12 = iVar11;
                  if (iVar10 < (int)param_2) {
                    iVar12 = iVar10;
                  }
                }
                if (iVar12 != iVar8) {
                  if (_DAT_006ec0e0 < local_8) {
                    piVar1 = (int *)(iVar15 + (int)piVar9);
                    *piVar1 = iVar8;
                    iVar15 = iVar15 + 8;
                    piVar1[1] = (int)local_8;
                  }
                  local_8 = 0.0;
                  iVar8 = iVar12;
                }
                if (fVar6 < local_24 != (NAN(fVar6) || NAN(local_24))) {
                  fVar6 = local_24;
                }
                if (local_c < local_18) {
                  local_18 = local_c;
                }
                if (param_3 == 0) {
                  if (fVar5 < DAT_006e92e4 == (NAN(fVar5) || NAN(DAT_006e92e4))) {
                    if (fVar5 + DAT_006e92e8 < (float)param_1) goto LAB_006830ef;
                    fVar7 = 0.0;
                  }
                  else {
                    fVar7 = 1.0;
                  }
                }
                else {
LAB_006830ef:
                  fVar7 = (local_18 + fVar6) * fVar4 - fVar5;
                }
                if (local_10 != 0) {
                  fVar7 = 1.0 - fVar7;
                }
                iVar10 = iVar10 + 1;
                iVar11 = iVar11 + 1;
                local_8 = (local_18 - fVar6) * fVar7 + local_8;
                fVar6 = (float)iVar10;
              } while (fVar6 < local_c != (NAN(fVar6) || NAN(local_c)));
            }
            local_10 = local_10 + 1;
          } while (local_10 < 2);
          if (_DAT_006ec0e0 < local_8) {
            piVar1 = (int *)(iVar15 + (int)piVar9);
            iVar15 = iVar15 + 8;
            *piVar1 = iVar8;
            piVar1[1] = (int)local_8;
          }
          local_1c = local_1c + 1;
          *(int *)(iVar14 + (int)piVar9) = iVar15 - iVar14;
          iVar14 = iVar15;
        } while (local_1c < param_1);
      }
      *piVar9 = iVar15;
      return piVar9;
    }
  }
  return (int *)0x0;
}

