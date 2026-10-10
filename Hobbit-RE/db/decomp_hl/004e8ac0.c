
void __thiscall FUN_004e8ac0(int param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float10 extraout_ST0;
  float10 fVar14;
  float10 extraout_ST1;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_40 [8];
  float local_20;
  float local_1c;
  float local_18;
  
  pfVar1 = (float *)(param_1 + 0x22c);
  if ((local_40 != pfVar1) && (pfVar1 != (float *)(param_1 + 0x26c))) {
    pfVar8 = local_40 + 2;
    pfVar11 = pfVar1;
    do {
      pfVar8[-2] = *pfVar11;
      pfVar8[-1] = pfVar11[1];
      *pfVar8 = *(float *)(((int)pfVar1 - (int)local_40) + (int)pfVar8);
      pfVar8[1] = pfVar11[3];
      pfVar11 = pfVar11 + 4;
      pfVar8 = pfVar8 + 4;
    } while (pfVar11 != (float *)(param_1 + 0x26c));
  }
  FUN_00401f00(*pfVar1 * *param_2 +
               *(float *)(param_1 + 0x23c) * param_2[1] + *(float *)(param_1 + 0x24c) * param_2[2] +
               *(float *)(param_1 + 0x25c),
               *(float *)(param_1 + 0x230) * *param_2 +
               *(float *)(param_1 + 0x240) * param_2[1] + *(float *)(param_1 + 0x250) * param_2[2] +
               *(float *)(param_1 + 0x260),
               *(float *)(param_1 + 0x234) * *param_2 +
               *(float *)(param_1 + 0x244) * param_2[1] + *(float *)(param_1 + 0x254) * param_2[2] +
               *(float *)(param_1 + 0x264));
  iVar5 = __ftol();
  iVar6 = __ftol();
  iVar13 = (int)*(short *)(param_1 + 0x1cc);
  iVar7 = iVar13 + -2;
  iVar12 = iVar7;
  if (iVar5 <= iVar7) {
    iVar12 = iVar5;
  }
  if (iVar12 < 1) {
    iVar12 = 1;
  }
  else {
    iVar12 = iVar5;
    if (iVar7 < iVar5) {
      iVar12 = iVar7;
    }
  }
  iVar9 = *(short *)(param_1 + 0x1ce) + -2;
  iVar7 = iVar9;
  if (iVar6 <= iVar9) {
    iVar7 = iVar6;
  }
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  else {
    iVar7 = iVar6;
    if (iVar9 < iVar6) {
      iVar7 = iVar9;
    }
  }
  iVar9 = *(int *)(param_1 + 0x1d4);
  iVar10 = iVar13 * iVar7 + iVar12;
  fVar14 = (float10)*(float *)(iVar9 + 4 + iVar10 * 0xc);
  iVar7 = iVar9 + ((iVar7 + 1) * iVar13 + iVar12) * 0xc;
  local_58 = *(float *)(iVar7 + 4);
  local_50 = *(float *)(iVar7 + 0x10);
  fVar14 = ((float10)*(float *)(iVar9 + 0x10 + iVar10 * 0xc) - fVar14) *
           (float10)(float)(extraout_ST1 - (float10)iVar5) + fVar14;
  fVar2 = param_2[2];
  *param_3 = *param_2;
  param_3[1] = (float)(((((float10)local_50 - (float10)local_58) *
                         (float10)(float)(extraout_ST1 - (float10)iVar5) + (float10)local_58) -
                       fVar14) * (extraout_ST0 - (float10)iVar6) + fVar14);
  param_3[2] = fVar2;
  FUN_0041b9f0(&local_5c,param_3);
  param_3[1] = local_58;
  *param_3 = local_5c;
  param_3[2] = local_54;
  *param_4 = 0.0;
  param_4[1] = 1.0;
  param_4[2] = 0.0;
  fVar2 = *param_4;
  fVar3 = param_4[2];
  fVar4 = *param_4;
  *param_4 = local_20 * param_4[2] + local_40[0] * *param_4 + local_40[4] * param_4[1];
  param_4[2] = local_18 * param_4[2] + local_40[2] * fVar4 + local_40[6] * param_4[1];
  param_4[1] = local_1c * fVar3 + local_40[1] * fVar2 + local_40[5] * param_4[1];
  return;
}

