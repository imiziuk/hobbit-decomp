
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0057d810(float *param_1,float *param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbeb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_GetCylinderSpherePositions_00740508);
  fVar4 = param_2[2] - param_1[2];
  local_4 = 0;
  fVar1 = param_2[1] - param_1[1];
  fVar2 = *param_2 - *param_1;
  fVar3 = DAT_006e92e8 / SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2);
  iVar7 = FUN_0064cf30(fVar3);
  if (iVar7 == 0) {
    fVar10 = (float10)DAT_006e92e4;
    fVar11 = (float10)DAT_006e92e4;
    fVar4 = DAT_006e92e4;
  }
  else {
    fVar10 = (float10)fVar1 * (float10)fVar3;
    fVar11 = (float10)fVar4 * (float10)fVar3;
    fVar4 = fVar2 * fVar3;
  }
  fVar1 = (float)((float10)param_3 * fVar11 + (float10)param_1[2]);
  fVar2 = (float)(fVar10 * (float10)param_3 + (float10)param_1[1]);
  fVar5 = fVar4 * param_3 + *param_1;
  fVar6 = (float)((float10)param_2[2] - (float10)param_3 * fVar11) - fVar1;
  fVar3 = (float)(((float10)param_2[1] - fVar10 * (float10)param_3) - (float10)fVar2);
  fVar12 = ((float10)*param_2 - (float10)(fVar4 * param_3)) - (float10)fVar5;
  fVar12 = SQRT((float10)fVar6 * (float10)fVar6 + (float10)fVar3 * (float10)fVar3 + fVar12 * fVar12)
  ;
  iVar7 = __ftol();
  if ((float10)_DAT_006e99f4 < extraout_ST0 - (float10)iVar7) {
    iVar7 = iVar7 + 1;
  }
  iVar9 = iVar7 + 2;
  if (param_5 < iVar7 + 2) {
    iVar9 = param_5;
  }
  fVar4 = (float)(extraout_ST1 / (float10)(iVar9 + -1));
  local_10 = (float)(fVar12 * (float10)fVar4);
  local_18 = (float)(fVar10 * (float10)fVar4);
  local_14 = (float)(fVar11 * (float10)fVar4);
  if (0 < iVar9) {
    pfVar8 = (float *)(param_4 + 8);
    iVar7 = iVar9;
    do {
      pfVar8[-2] = fVar5;
      pfVar8[-1] = fVar2;
      *pfVar8 = fVar1;
      FUN_0042faf0(&local_18);
      pfVar8 = pfVar8 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return iVar9;
}

