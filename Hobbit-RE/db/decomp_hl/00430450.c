
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00430450(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_14;
  
  uVar13 = 0;
  if (*(int *)(param_1 + 0x46d4) != -1) {
    iVar1 = *(int *)(param_1 + 0x46d4) * 3 + 0x1236;
    iVar10 = param_1 + iVar1 * 4;
    *(undefined4 *)(param_1 + 0x5ec4) = *(undefined4 *)(param_1 + iVar1 * 4);
    *(undefined4 *)(param_1 + 0x5ec8) = *(undefined4 *)(iVar10 + 4);
    *(undefined4 *)(param_1 + 0x5ecc) = *(undefined4 *)(iVar10 + 8);
    return 1;
  }
  local_14 = 999999.9;
  uVar12 = 0;
  piVar8 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x46d8),*(undefined4 *)(param_1 + 0x46dc));
  if (piVar8 != (int *)0x0) {
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
    fVar5 = *pfVar9 - *(float *)(param_1 + 0x14);
    fVar7 = pfVar9[1] - *(float *)(param_1 + 0x18);
    fVar6 = pfVar9[2] - *(float *)(param_1 + 0x1c);
    fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
    if ((fVar5 < _DAT_006ebff4 != (NAN(fVar5) || NAN(_DAT_006ebff4))) &&
       (iVar10 = FUN_00430b50(*pfVar9,pfVar9[1],pfVar9[2]), iVar10 != 0)) {
      uVar12 = *(undefined4 *)(param_1 + 0x46d8);
      uVar13 = *(undefined4 *)(param_1 + 0x46dc);
      local_14 = fVar5;
    }
  }
  piVar8 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x4ec8),*(undefined4 *)(param_1 + 0x4ecc));
  if (piVar8 != (int *)0x0) {
    puVar11 = (undefined4 *)(**(code **)(*piVar8 + 0x28))();
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    uVar4 = puVar11[2];
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
    fVar5 = *pfVar9 - *(float *)(param_1 + 0x14);
    fVar7 = pfVar9[1] - *(float *)(param_1 + 0x18);
    fVar6 = pfVar9[2] - *(float *)(param_1 + 0x1c);
    fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
    if ((fVar5 < local_14 != (NAN(fVar5) || NAN(local_14))) &&
       (iVar10 = FUN_00430b50(uVar2,uVar3,uVar4), iVar10 != 0)) {
      uVar12 = *(undefined4 *)(param_1 + 0x4ec8);
      uVar13 = *(undefined4 *)(param_1 + 0x4ecc);
      local_14 = fVar5;
    }
  }
  piVar8 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x4ed0),*(undefined4 *)(param_1 + 0x4ed4));
  if (piVar8 != (int *)0x0) {
    puVar11 = (undefined4 *)(**(code **)(*piVar8 + 0x28))();
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    uVar4 = puVar11[2];
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
    fVar5 = *pfVar9 - *(float *)(param_1 + 0x14);
    fVar6 = pfVar9[1] - *(float *)(param_1 + 0x18);
    fVar7 = pfVar9[2] - *(float *)(param_1 + 0x1c);
    fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
    if ((fVar5 < local_14 != (NAN(fVar5) || NAN(local_14))) &&
       (iVar10 = FUN_00430b50(uVar2,uVar3,uVar4), iVar10 != 0)) {
      uVar12 = *(undefined4 *)(param_1 + 0x4ed0);
      uVar13 = *(undefined4 *)(param_1 + 0x4ed4);
      local_14 = fVar5;
    }
  }
  piVar8 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x58f8),*(undefined4 *)(param_1 + 0x58fc));
  if (piVar8 != (int *)0x0) {
    puVar11 = (undefined4 *)(**(code **)(*piVar8 + 0x28))();
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    uVar4 = puVar11[2];
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
    fVar5 = *pfVar9 - *(float *)(param_1 + 0x14);
    fVar6 = pfVar9[1] - *(float *)(param_1 + 0x18);
    fVar7 = pfVar9[2] - *(float *)(param_1 + 0x1c);
    fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
    if ((fVar5 < local_14 != (NAN(fVar5) || NAN(local_14))) &&
       (iVar10 = FUN_00430b50(uVar2,uVar3,uVar4), iVar10 != 0)) {
      uVar12 = *(undefined4 *)(param_1 + 0x58f8);
      uVar13 = *(undefined4 *)(param_1 + 0x58fc);
      local_14 = fVar5;
    }
  }
  piVar8 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x5900),*(undefined4 *)(param_1 + 0x5904));
  if (piVar8 != (int *)0x0) {
    puVar11 = (undefined4 *)(**(code **)(*piVar8 + 0x28))();
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    uVar4 = puVar11[2];
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
    fVar5 = *pfVar9 - *(float *)(param_1 + 0x14);
    fVar6 = pfVar9[1] - *(float *)(param_1 + 0x18);
    fVar7 = pfVar9[2] - *(float *)(param_1 + 0x1c);
    fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
    if ((fVar5 < local_14 != (NAN(fVar5) || NAN(local_14))) &&
       (iVar10 = FUN_00430b50(uVar2,uVar3,uVar4), iVar10 != 0)) {
      uVar12 = *(undefined4 *)(param_1 + 0x5900);
      uVar13 = *(undefined4 *)(param_1 + 0x5904);
      local_14 = fVar5;
    }
  }
  piVar8 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x5918),*(undefined4 *)(param_1 + 0x591c));
  if (piVar8 != (int *)0x0) {
    puVar11 = (undefined4 *)(**(code **)(*piVar8 + 0x28))();
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    uVar4 = puVar11[2];
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
    fVar5 = *pfVar9 - *(float *)(param_1 + 0x14);
    fVar6 = pfVar9[1] - *(float *)(param_1 + 0x18);
    fVar7 = pfVar9[2] - *(float *)(param_1 + 0x1c);
    fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
    if ((fVar5 < local_14 != (NAN(fVar5) || NAN(local_14))) &&
       (iVar10 = FUN_00430b50(uVar2,uVar3,uVar4), iVar10 != 0)) {
      uVar12 = *(undefined4 *)(param_1 + 0x5918);
      uVar13 = *(undefined4 *)(param_1 + 0x591c);
      local_14 = fVar5;
    }
  }
  piVar8 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x5948),*(undefined4 *)(param_1 + 0x594c));
  if (piVar8 != (int *)0x0) {
    puVar11 = (undefined4 *)(**(code **)(*piVar8 + 0x28))();
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    uVar4 = puVar11[2];
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
    fVar5 = *pfVar9 - *(float *)(param_1 + 0x14);
    fVar6 = pfVar9[1] - *(float *)(param_1 + 0x18);
    fVar7 = pfVar9[2] - *(float *)(param_1 + 0x1c);
    fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
    if ((fVar5 < local_14 != (NAN(fVar5) || NAN(local_14))) &&
       (iVar10 = FUN_00430b50(uVar2,uVar3,uVar4), iVar10 != 0)) {
      uVar12 = *(undefined4 *)(param_1 + 0x5948);
      uVar13 = *(undefined4 *)(param_1 + 0x594c);
    }
  }
  piVar8 = (int *)FUN_004021c0(uVar12,uVar13);
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  puVar11 = (undefined4 *)(**(code **)(*piVar8 + 0x28))();
  *(undefined4 *)(param_1 + 0x5ec4) = *puVar11;
  *(undefined4 *)(param_1 + 0x5ec8) = puVar11[1];
  *(undefined4 *)(param_1 + 0x5ecc) = puVar11[2];
  *(undefined4 *)(param_1 + 0x5ed0) = uVar12;
  *(undefined4 *)(param_1 + 0x5ed4) = uVar13;
  return 1;
}

