
void FUN_0059b1d0(float param_1,float param_2,float param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = param_4 + 2;
  param_4[0xc] = 0.0;
  param_4[8] = 0.0;
  param_4[4] = 0.0;
  param_4[0xd] = 0.0;
  param_4[9] = 0.0;
  param_4[1] = 0.0;
  param_4[0xe] = 0.0;
  param_4[6] = 0.0;
  *pfVar1 = 0.0;
  param_4[0xb] = 0.0;
  param_4[7] = 0.0;
  param_4[3] = 0.0;
  *param_4 = 1.0;
  param_4[5] = 1.0;
  param_4[10] = 1.0;
  param_4[0xf] = 1.0;
  iVar5 = FUN_00592190();
  pfVar6 = (float *)(iVar5 + 0x4c);
  if ((param_4 != pfVar6) && (pfVar6 != (float *)(iVar5 + 0x8c))) {
    iVar8 = (int)pfVar6 - (int)param_4;
    pfVar7 = pfVar1;
    do {
      pfVar7[-2] = *pfVar6;
      pfVar7[-1] = pfVar6[1];
      *pfVar7 = *(float *)(iVar8 + (int)pfVar7);
      pfVar7[1] = pfVar6[3];
      pfVar6 = pfVar6 + 4;
      pfVar7 = pfVar7 + 4;
    } while (pfVar6 != (float *)(iVar5 + 0x8c));
  }
  FUN_0064d480();
  local_8 = param_2;
  local_c = param_1;
  local_4 = param_3;
  fVar3 = param_2 * param_4[10] - param_3 * param_4[6];
  fVar4 = param_3 * *pfVar1 - param_4[10] * param_1;
  fVar2 = param_4[6] * param_1 - param_2 * *pfVar1;
  local_24 = fVar3;
  local_20 = fVar4;
  local_1c = fVar2;
  FUN_00401f00(fVar4 * param_3 - fVar2 * param_2,fVar2 * param_1 - param_3 * fVar3,
               param_2 * fVar3 - fVar4 * param_1);
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  fVar2 = DAT_006e92e8 / SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  iVar5 = FUN_0064cf30(fVar2);
  if (iVar5 == 0) {
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
  }
  else {
    local_24 = local_24 * fVar2;
    local_20 = local_20 * fVar2;
    local_1c = local_1c * fVar2;
  }
  FUN_0042e1f0();
  FUN_0042e1f0();
  FUN_00550ef0(&local_24,&local_c,&local_18);
  FUN_0064d480();
  return;
}

