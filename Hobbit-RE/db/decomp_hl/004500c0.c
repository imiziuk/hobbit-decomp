
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004500c0(int param_1,int param_2,float *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((DAT_0075c94c & 1) == 0) {
    DAT_0075c94c = DAT_0075c94c | 1;
    DAT_0075c924 = &DAT_0075c880;
    DAT_0075c920 = 0x20;
    DAT_0075c930 = 0;
    DAT_0075c928 = 0x20;
    DAT_0075c92c = 2;
    _DAT_0075c918 = 0;
    _DAT_0075c91c = 0;
    FUN_006bfe55(&LAB_00450410);
  }
  if (DAT_0075c92c == 0) {
    FUN_006bf840(DAT_0075c924);
    DAT_0075c924 = (undefined *)0x0;
    DAT_0075c928 = 0;
  }
  DAT_0075c920 = 0;
  iVar1 = *(int *)(param_2 + 8);
  local_8 = 0;
  if (0 < iVar1) {
    do {
      iVar12 = 0;
      iVar8 = local_8 * 8;
      piVar4 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_2 + 0xc) + iVar8),
                                   *(undefined4 *)(*(int *)(param_2 + 0xc) + 4 + iVar8));
      if (piVar4 != (int *)0x0) {
        iVar6 = *(int *)(param_1 + 8);
        bVar3 = false;
        pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
        fVar2 = (*param_3 - *pfVar5) * (*param_3 - *pfVar5) +
                (param_3[1] - pfVar5[1]) * (param_3[1] - pfVar5[1]) +
                (param_3[2] - pfVar5[2]) * (param_3[2] - pfVar5[2]);
        if (0 < iVar6) {
          do {
            if (param_4 <= iVar12) break;
            if (fVar2 < *(float *)(DAT_0075c924 + iVar12 * 4) !=
                (NAN(fVar2) || NAN(*(float *)(DAT_0075c924 + iVar12 * 4)))) {
              puVar10 = (undefined4 *)(*(int *)(param_2 + 0xc) + iVar8);
              puVar11 = (undefined4 *)FUN_00451c60(iVar12);
              *puVar11 = *puVar10;
              puVar11[1] = puVar10[1];
              pfVar5 = (float *)FUN_00451d70(iVar12);
              *pfVar5 = fVar2;
              bVar3 = true;
              break;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar6);
        }
        iVar12 = *(int *)(param_1 + 8);
        if (iVar12 < param_4) {
          if (!bVar3) {
            puVar11 = (undefined4 *)(*(int *)(param_2 + 0xc) + iVar8);
            if (*(int *)(param_1 + 0x10) < iVar12 + 1) {
              if (*(int *)(param_1 + 0x18) == 0) {
                iVar6 = *(int *)(param_1 + 0x10) / 2;
                iVar8 = 1;
                if (0 < iVar6) {
                  iVar8 = iVar6;
                }
                if (iVar8 + iVar12 < 1) {
                  iVar12 = 1;
                }
                else {
                  if (iVar6 < 1) {
                    iVar6 = 1;
                  }
                  iVar12 = iVar12 + iVar6;
                }
              }
              else {
                iVar12 = *(int *)(param_1 + 0x18) + iVar12;
              }
              pvVar7 = operator_new(iVar12 * 8);
              iVar8 = 0;
              if (0 < *(int *)(param_1 + 8)) {
                do {
                  iVar6 = *(int *)(param_1 + 0xc);
                  *(undefined4 *)((int)pvVar7 + iVar8 * 8) = *(undefined4 *)(iVar6 + iVar8 * 8);
                  *(undefined4 *)((int)pvVar7 + iVar8 * 8 + 4) =
                       *(undefined4 *)(iVar6 + 4 + iVar8 * 8);
                  iVar8 = iVar8 + 1;
                } while (iVar8 < *(int *)(param_1 + 8));
              }
              FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
              *(void **)(param_1 + 0xc) = pvVar7;
              *(int *)(param_1 + 0x10) = iVar12;
            }
            iVar8 = *(int *)(param_1 + 8);
            iVar12 = *(int *)(param_1 + 0xc);
            *(undefined4 *)(iVar12 + iVar8 * 8) = *puVar11;
            *(undefined4 *)(iVar12 + 4 + iVar8 * 8) = puVar11[1];
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
            if (DAT_0075c928 < DAT_0075c920 + 1) {
              if (DAT_0075c930 == 0) {
                iVar8 = DAT_0075c928 / 2;
                iVar12 = 1;
                if (0 < iVar8) {
                  iVar12 = iVar8;
                }
                if (iVar12 + DAT_0075c920 < 1) {
                  iVar8 = 1;
                }
                else {
                  if (iVar8 < 1) {
                    iVar8 = 1;
                  }
                  iVar8 = iVar8 + DAT_0075c920;
                }
              }
              else {
                iVar8 = DAT_0075c920 + DAT_0075c930;
              }
              puVar9 = (undefined *)operator_new(iVar8 * 4);
              iVar12 = 0;
              if (0 < DAT_0075c920) {
                do {
                  *(undefined4 *)(puVar9 + iVar12 * 4) = *(undefined4 *)(DAT_0075c924 + iVar12 * 4);
                  iVar12 = iVar12 + 1;
                } while (iVar12 < DAT_0075c920);
              }
              FUN_006bf840(DAT_0075c924);
              DAT_0075c924 = puVar9;
              DAT_0075c928 = iVar8;
            }
            *(float *)(DAT_0075c924 + DAT_0075c920 * 4) = fVar2;
            DAT_0075c920 = DAT_0075c920 + 1;
          }
        }
        else if (param_4 < iVar12) {
          FUN_00451b00(param_4,1);
          FUN_00451c10(param_4,1);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar1);
  }
  return;
}

