
void __fastcall FUN_00690a60(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *unaff_EDI;
  int local_14;
  
  fVar3 = DAT_006e92e8;
  fVar2 = DAT_006e92e4;
  iVar7 = (int)unaff_EDI - (int)param_2;
  local_14 = 3;
  pfVar6 = param_2;
  do {
    if ((*(float *)(iVar7 + (int)pfVar6) < fVar2 !=
        (NAN(*(float *)(iVar7 + (int)pfVar6)) || NAN(fVar2))) !=
        (*pfVar6 < fVar2 != (NAN(*pfVar6) || NAN(fVar2)))) {
      fVar1 = -(*pfVar6 / (*(float *)(iVar7 + (int)pfVar6) - *pfVar6));
      pfVar4 = param_2;
      if (*pfVar6 < fVar2 == (NAN(*pfVar6) || NAN(fVar2))) {
        fVar1 = fVar1 - fVar3;
        pfVar4 = unaff_EDI;
      }
      pfVar4[2] = (unaff_EDI[2] - param_2[2]) * fVar1 + pfVar4[2];
      pfVar4[1] = (unaff_EDI[1] - param_2[1]) * fVar1 + pfVar4[1];
      *pfVar4 = (*unaff_EDI - *param_2) * fVar1 + *pfVar4;
    }
    pfVar4 = (float *)(((int)&DAT_007545a0 - (int)param_2) + (int)pfVar6);
    if (*pfVar4 < *(float *)(iVar7 + (int)pfVar6) != *pfVar4 < *pfVar6) {
      fVar1 = (*pfVar4 - *pfVar6) / (*(float *)(iVar7 + (int)pfVar6) - *pfVar6);
      pfVar5 = param_2;
      if (*pfVar6 <= *pfVar4) {
        fVar1 = fVar1 - fVar3;
        pfVar5 = unaff_EDI;
      }
      pfVar5[2] = (unaff_EDI[2] - param_2[2]) * fVar1 + pfVar5[2];
      pfVar5[1] = (unaff_EDI[1] - param_2[1]) * fVar1 + pfVar5[1];
      *pfVar5 = (*unaff_EDI - *param_2) * fVar1 + *pfVar5;
    }
    pfVar6 = pfVar6 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return;
}

