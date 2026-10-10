
void __fastcall FUN_004189d0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 auStack_98 [37];
  
  FUN_00648600(auStack_98 + 0x12,0,0x48);
  iVar10 = 0;
  puVar9 = (undefined4 *)(param_1 + 0x38);
  do {
    piVar5 = (int *)FUN_004021c0(*puVar9,puVar9[1]);
    pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
    fVar1 = *pfVar6;
    fVar2 = pfVar6[2];
    puVar11 = auStack_98 + iVar10 * 2;
    if ((NAN(fVar2) || NAN(*(float *)(param_1 + 0x130))) == (fVar2 == *(float *)(param_1 + 0x130)))
    {
      fVar4 = *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x130);
      if ((NAN(fVar2) || NAN(fVar4)) == (fVar2 == fVar4)) {
        *puVar11 = 0x40000000;
      }
      else {
        *puVar11 = 0x3f800000;
      }
    }
    else {
      *puVar11 = 0;
    }
    if ((NAN(fVar1) || NAN(*(float *)(param_1 + 0x128))) == (fVar1 == *(float *)(param_1 + 0x128)))
    {
      fVar2 = *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x128);
      if ((NAN(fVar1) || NAN(fVar2)) == (fVar1 == fVar2)) {
        auStack_98[iVar10 * 2 + 1] = 0x40000000;
      }
      else {
        auStack_98[iVar10 * 2 + 1] = 0x3f800000;
      }
    }
    else {
      auStack_98[iVar10 * 2 + 1] = 0;
    }
    iVar7 = __ftol();
    iVar8 = __ftol();
    uVar3 = puVar9[1];
    iVar8 = iVar7 * 3 + iVar8;
    iVar10 = iVar10 + 1;
    auStack_98[iVar8 * 2 + 0x12] = *puVar9;
    puVar9 = puVar9 + 2;
    auStack_98[iVar8 * 2 + 0x13] = uVar3;
  } while (iVar10 < 9);
  puVar9 = auStack_98 + 0x12;
  puVar11 = (undefined4 *)(param_1 + 0x38);
  for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  return;
}

