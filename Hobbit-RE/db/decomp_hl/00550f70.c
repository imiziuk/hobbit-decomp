
void __thiscall FUN_00550f70(float *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (0 < param_4) {
    do {
      param_4 = param_4 + -1;
      fVar1 = *param_3;
      fVar2 = param_1[1];
      fVar3 = param_1[5];
      fVar4 = param_3[1];
      fVar5 = param_1[9];
      fVar6 = param_3[2];
      fVar7 = param_1[0xd];
      fVar8 = param_3[1];
      fVar9 = param_1[6];
      fVar10 = param_1[2];
      fVar11 = *param_3;
      fVar12 = param_3[2];
      fVar13 = param_1[10];
      fVar14 = param_1[0xe];
      *param_2 = param_3[1] * param_1[4] + param_3[2] * param_1[8] + *param_3 * *param_1 +
                 param_1[0xc];
      param_2[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
      param_2[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return;
}

