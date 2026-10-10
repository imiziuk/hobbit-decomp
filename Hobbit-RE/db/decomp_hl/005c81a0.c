
void __fastcall FUN_005c81a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  iVar10 = -1;
  local_10 = -1;
  local_14 = -1.0;
  local_1c = -1.0;
  local_18 = -1.0;
  piVar6 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  pfVar7 = (float *)(**(code **)(*piVar6 + 0x28))();
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  iVar11 = 0;
  iVar8 = -1;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + iVar11 * 4) + 0xc) = 0;
      puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x28) + iVar11 * 4);
      piVar6 = (int *)FUN_004021c0(*puVar4,puVar4[1]);
      iVar9 = iVar8;
      if (piVar6 != (int *)0x0) {
        pfVar7 = (float *)(**(code **)(*piVar6 + 0x28))();
        fVar5 = (fVar1 - *pfVar7) * (fVar1 - *pfVar7) +
                (fVar2 - pfVar7[1]) * (fVar2 - pfVar7[1]) +
                (fVar3 - pfVar7[2]) * (fVar3 - pfVar7[2]);
        if ((fVar5 < local_14 == (NAN(fVar5) || NAN(local_14))) &&
           (local_14 < DAT_006e92e4 == (NAN(local_14) || NAN(DAT_006e92e4)))) {
          if ((fVar5 < local_1c == (NAN(fVar5) || NAN(local_1c))) &&
             (local_1c < DAT_006e92e4 == (NAN(local_1c) || NAN(DAT_006e92e4)))) {
            if ((fVar5 < local_18 != (NAN(fVar5) || NAN(local_18))) ||
               (local_18 < DAT_006e92e4 != (NAN(local_18) || NAN(DAT_006e92e4)))) {
              iVar10 = iVar11;
              local_18 = fVar5;
            }
          }
          else {
            local_18 = local_1c;
            iVar9 = iVar11;
            iVar10 = iVar8;
            local_1c = fVar5;
          }
        }
        else {
          local_18 = local_1c;
          local_1c = local_14;
          iVar9 = local_10;
          iVar10 = iVar8;
          local_14 = fVar5;
          local_10 = iVar11;
        }
      }
      iVar11 = iVar11 + 1;
      iVar8 = iVar9;
    } while (iVar11 < *(int *)(param_1 + 0x24));
    if (-1 < local_10) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + local_10 * 4) + 0xc) = 1;
    }
    if (-1 < iVar9) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + iVar9 * 4) + 0xc) = 1;
    }
    if (-1 < iVar10) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + iVar10 * 4) + 0xc) = 1;
    }
  }
  return;
}

