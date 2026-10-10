
void FUN_004e3b20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float local_5c;
  float local_58;
  float local_54;
  
  fVar1 = -param_3[3];
  FUN_00401f00(fVar1 * *param_3,fVar1 * param_3[1],fVar1 * param_3[2]);
  FUN_00401f00(local_5c * *param_2 + local_54 * param_2[8] + local_58 * param_2[4] + param_2[0xc],
               local_54 * param_2[9] + local_58 * param_2[5] + local_5c * param_2[1] + param_2[0xd],
               local_58 * param_2[6] + local_5c * param_2[2] + local_54 * param_2[10] + param_2[0xe]
              );
  fVar1 = (param_2[10] * param_2[5] - param_2[9] * param_2[6]) * *param_3 +
          (param_2[2] * param_2[9] - param_2[10] * param_2[1]) * param_3[1] +
          (param_2[1] * param_2[6] - param_2[2] * param_2[5]) * param_3[2];
  fVar2 = (param_2[10] * *param_2 - param_2[2] * param_2[8]) * param_3[1] +
          (param_2[4] * param_2[2] - *param_2 * param_2[6]) * param_3[2] +
          (param_2[8] * param_2[6] - param_2[10] * param_2[4]) * *param_3;
  fVar3 = (param_2[1] * param_2[8] - *param_2 * param_2[9]) * param_3[1] +
          (param_2[5] * *param_2 - param_2[1] * param_2[4]) * param_3[2] +
          (param_2[4] * param_2[9] - param_2[8] * param_2[5]) * *param_3;
  fVar4 = DAT_006e92e8 / SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  iVar8 = FUN_0064cf30(fVar4);
  fVar5 = DAT_006e92e4;
  fVar6 = DAT_006e92e4;
  fVar7 = DAT_006e92e4;
  if (iVar8 != 0) {
    fVar5 = fVar4 * fVar1;
    fVar6 = fVar4 * fVar3;
    fVar7 = fVar4 * fVar2;
  }
  param_1[3] = -(local_5c * fVar5 + local_58 * fVar7 + local_54 * fVar6);
  *param_1 = fVar5;
  param_1[1] = fVar7;
  param_1[2] = fVar6;
  return;
}

