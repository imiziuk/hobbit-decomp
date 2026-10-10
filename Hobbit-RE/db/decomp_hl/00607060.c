
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607060(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  
  fVar1 = *param_3;
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    fVar1 = -fVar1;
  }
  fVar2 = param_3[1];
  if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
    fVar2 = -fVar2;
  }
  fVar3 = param_3[2];
  if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
    fVar3 = -fVar3;
  }
  if (fVar1 <= fVar2) {
    iVar8 = 1;
    if (fVar3 < fVar2) goto LAB_006070df;
  }
  else if (fVar3 < fVar1) {
    iVar8 = 0;
    goto LAB_006070df;
  }
  iVar8 = 2;
LAB_006070df:
  if (param_3[iVar8] <= DAT_006e92e4) {
    iVar9 = (&DAT_00748c28)[iVar8 * 2];
    iVar8 = (&DAT_00748c24)[iVar8 * 2];
  }
  else {
    iVar9 = (&DAT_00748c24)[iVar8 * 2];
    iVar8 = (&DAT_00748c28)[iVar8 * 2];
  }
  iVar9 = iVar9 * 4;
  iVar8 = iVar8 * 4;
  fVar1 = *(float *)(iVar9 + param_1) - *(float *)(iVar9 + param_2);
  fVar2 = *(float *)(iVar8 + param_1) - *(float *)(iVar8 + param_2);
  fVar3 = *(float *)(iVar9 + 0xc + param_2) - *(float *)(iVar9 + param_2);
  fVar4 = *(float *)(iVar8 + 0xc + param_2) - *(float *)(iVar8 + param_2);
  fVar5 = *(float *)(iVar9 + 0x18 + param_2) - *(float *)(iVar9 + param_2);
  fVar6 = *(float *)(iVar8 + 0x18 + param_2) - *(float *)(iVar8 + param_2);
  if ((fVar3 <= _DAT_006f40cc) || (fVar3 < _DAT_006ebfe4 == (NAN(fVar3) || NAN(_DAT_006ebfe4)))) {
    fVar7 = (fVar3 * fVar2 - fVar4 * fVar1) / (fVar6 * fVar3 - fVar5 * fVar4);
    if (fVar7 < DAT_006e92e4) {
      return 0;
    }
    if (fVar7 < DAT_006e92e8 == (fVar7 == DAT_006e92e8)) {
      return 0;
    }
    fVar4 = (fVar1 - fVar7 * fVar5) / fVar3;
  }
  else {
    fVar7 = fVar1 / fVar5;
    if (fVar7 < DAT_006e92e4) {
      return 0;
    }
    if (fVar7 < DAT_006e92e8 == (fVar7 == DAT_006e92e8)) {
      return 0;
    }
    fVar4 = (fVar2 - fVar7 * fVar6) / fVar4;
  }
  if ((DAT_006e92e4 <= fVar4) && (fVar7 + fVar4 < DAT_006e92e8 != (fVar7 + fVar4 == DAT_006e92e8)))
  {
    return 1;
  }
  return 0;
}

