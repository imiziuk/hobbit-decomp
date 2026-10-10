
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540000(float param_1,float param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  ushort *puVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar5 = param_3;
  iVar1 = (int)param_1;
  iVar8 = 0;
  if (DAT_007670ac == 0) {
    *param_3 = 1.0;
    param_3[1] = 1.0;
    param_3[2] = 1.0;
LAB_00540049:
    iVar8 = 1;
  }
  else if (DAT_007670ac == 1) {
    pfVar7 = (float *)(DAT_007670a4 + DAT_007670b4);
    *param_3 = *pfVar7;
    param_3[1] = pfVar7[1];
    param_3[2] = pfVar7[2];
    goto LAB_00540049;
  }
  if (DAT_007670a0 == 2) {
    puVar6 = (ushort *)(DAT_0076709c + (int)param_1 * 8 + DAT_007670a4);
    fVar10 = (float)*puVar6 * _DAT_006f3bf0 - DAT_006e92e8;
    fVar3 = (float)puVar6[1] * _DAT_006f3bf0 - DAT_006e92e8;
    fVar4 = (float)puVar6[2] * _DAT_006f3bf0 - DAT_006e92e8;
    param_1 = (float)puVar6[3] * _DAT_006f3bf0 - DAT_006e92e8;
    local_10 = (float)puVar6[4] * _DAT_006f3bf0 - DAT_006e92e8;
    local_c = (float)puVar6[5] * _DAT_006f3bf0 - DAT_006e92e8;
    local_8 = (float)puVar6[6] * _DAT_006f3bf0 - DAT_006e92e8;
    local_4 = (float)puVar6[7] * _DAT_006f3bf0 - DAT_006e92e8;
    fVar2 = local_10 * fVar10 + local_c * fVar3 + local_8 * fVar4 + local_4 * param_1;
    if ((_DAT_006e999c < fVar2) || (fVar2 < _DAT_006ef7fc != (NAN(fVar2) || NAN(_DAT_006ef7fc)))) {
      param_3[4] = fVar3;
      param_3[3] = fVar10;
      param_3[5] = fVar4;
LAB_005402cc:
      param_3[6] = param_1;
    }
    else {
      param_3 = (float *)fVar4;
      if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
        fVar10 = -fVar10;
        fVar3 = -fVar3;
        param_1 = -param_1;
        param_3 = (float *)-fVar4;
      }
      fVar10 = (local_10 - fVar10) * param_2 + fVar10;
      fVar3 = (local_c - fVar3) * param_2 + fVar3;
      fVar2 = (local_8 - (float)param_3) * param_2 + (float)param_3;
      param_1 = (local_4 - param_1) * param_2 + param_1;
      fVar4 = fVar10 * fVar10 + fVar3 * fVar3 + fVar2 * fVar2 + param_1 * param_1;
      if (fVar4 < _DAT_006f3c0c == (NAN(fVar4) || NAN(_DAT_006f3c0c))) {
        fVar4 = (_DAT_006f3bfc * fVar4 - _DAT_006f3bf8) * fVar4 + _DAT_006f3bf4;
      }
      else {
        fVar4 = (_DAT_006f3c08 * fVar4 - _DAT_006f3c04) * fVar4 + _DAT_006f3c00;
      }
      pfVar5[3] = fVar10 * fVar4;
      pfVar5[4] = fVar4 * fVar3;
      pfVar5[5] = fVar2 * fVar4;
      pfVar5[6] = fVar4 * param_1;
    }
    iVar8 = iVar8 + 1;
  }
  else if (DAT_007670a0 == 1) {
    pfVar7 = (float *)(DAT_007670a4 + DAT_0076709c);
    param_3[3] = *pfVar7;
    param_3[4] = pfVar7[1];
    param_3[5] = pfVar7[2];
    param_1 = pfVar7[3];
    goto LAB_005402cc;
  }
  if (DAT_007670b0 == 0) {
    pfVar5[7] = 0.0;
    pfVar5[8] = 0.0;
    pfVar5[9] = 0.0;
LAB_00540307:
    iVar8 = iVar8 + 1;
  }
  else if (DAT_007670b0 == 1) {
    pfVar7 = (float *)(DAT_007670a4 + DAT_007670a8);
    pfVar5[7] = *pfVar7;
    pfVar5[8] = pfVar7[1];
    pfVar5[9] = pfVar7[2];
    goto LAB_00540307;
  }
  if (iVar8 == 3) {
    return;
  }
  if (DAT_007670ac == 3) {
    pfVar7 = (float *)(DAT_007670b4 + iVar1 * 0xc + DAT_007670a4);
    iVar8 = DAT_007670b4 + (iVar1 * 3 + 3) * 4;
    iVar9 = iVar8 + DAT_007670a4;
    *pfVar5 = (*(float *)(iVar8 + DAT_007670a4) - *pfVar7) * param_2 + *pfVar7;
    pfVar5[1] = (*(float *)(iVar9 + 4) - pfVar7[1]) * param_2 + pfVar7[1];
    pfVar5[2] = (*(float *)(iVar9 + 8) - pfVar7[2]) * param_2 + pfVar7[2];
  }
  fVar10 = 1.0;
  if (DAT_007670a0 == 0) {
    pfVar5[3] = 0.0;
    pfVar5[4] = 0.0;
    pfVar5[5] = 0.0;
  }
  else {
    if (DAT_007670a0 != 3) goto LAB_005403cc;
    pfVar7 = (float *)FUN_0064d250(&local_10,iVar1 * 0x10 + DAT_0076709c + DAT_007670a4,
                                   (iVar1 + 1) * 0x10 + DAT_0076709c + DAT_007670a4,param_2);
    pfVar5[3] = *pfVar7;
    pfVar5[4] = pfVar7[1];
    pfVar5[5] = pfVar7[2];
    fVar10 = pfVar7[3];
  }
  pfVar5[6] = fVar10;
LAB_005403cc:
  if (DAT_007670b0 == 3) {
    pfVar7 = (float *)(DAT_007670a8 + iVar1 * 0xc + DAT_007670a4);
    iVar1 = DAT_007670a8 + (iVar1 * 3 + 3) * 4;
    iVar8 = iVar1 + DAT_007670a4;
    pfVar5[7] = (*(float *)(iVar1 + DAT_007670a4) - *pfVar7) * param_2 + *pfVar7;
    pfVar5[8] = (*(float *)(iVar8 + 4) - pfVar7[1]) * param_2 + pfVar7[1];
    pfVar5[9] = (*(float *)(iVar8 + 8) - pfVar7[2]) * param_2 + pfVar7[2];
  }
  return;
}

