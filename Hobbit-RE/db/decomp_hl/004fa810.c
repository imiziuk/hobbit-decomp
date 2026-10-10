
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fa810(float *param_1,float param_2)

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
  float fVar15;
  float fVar16;
  float local_40 [16];
  
  fVar15 = (float)(int)param_1[0x12] * _DAT_006e936c;
  param_1[0xc] = fVar15;
  fVar16 = (float)(int)param_1[0x13] * _DAT_006e936c;
  param_1[0xd] = fVar16;
  fVar15 = fVar15 + param_1[0xe];
  fVar16 = fVar16 + param_1[0xf];
  *param_1 = *param_1 - fVar15;
  param_1[1] = param_1[1] - fVar16;
  param_1[3] = param_1[3] - fVar15;
  param_1[4] = param_1[4] - fVar16;
  param_1[6] = param_1[6] - fVar15;
  param_1[7] = param_1[7] - fVar16;
  param_1[9] = param_1[9] - fVar15;
  param_1[10] = param_1[10] - fVar16;
  fVar2 = (float)(int)param_2 * _DAT_006e9368 * _DAT_006e957c;
  param_2 = fVar2;
  FUN_0064c8e0(fVar2,&param_2,local_40);
  fVar1 = *param_1;
  *param_1 = fVar1 * local_40[0] - param_1[1] * param_2;
  param_1[1] = param_1[1] * local_40[0] + fVar1 * param_2;
  FUN_0064c8e0(fVar2,&param_2,local_40);
  fVar1 = param_1[3];
  param_1[3] = fVar1 * local_40[0] - param_1[4] * param_2;
  param_1[4] = param_1[4] * local_40[0] + fVar1 * param_2;
  FUN_0064c8e0(fVar2,&param_2,local_40);
  fVar1 = param_1[6];
  param_1[6] = fVar1 * local_40[0] - param_1[7] * param_2;
  param_1[7] = param_1[7] * local_40[0] + fVar1 * param_2;
  FUN_0064c8e0(fVar2,local_40,&param_2);
  fVar1 = param_1[9];
  param_1[9] = fVar1 * param_2 - param_1[10] * local_40[0];
  param_1[10] = fVar1 * local_40[0] + param_1[10] * param_2;
  fVar13 = fVar15 + *param_1;
  *param_1 = fVar13;
  fVar14 = fVar16 + param_1[1];
  param_1[1] = fVar14;
  fVar1 = param_1[3];
  param_1[3] = fVar15 + fVar1;
  fVar2 = param_1[4];
  param_1[4] = fVar16 + fVar2;
  fVar3 = param_1[6];
  param_1[6] = fVar15 + fVar3;
  fVar4 = param_1[7];
  param_1[7] = fVar16 + fVar4;
  fVar5 = param_1[9];
  param_1[9] = fVar15 + fVar5;
  fVar6 = param_1[10];
  param_1[10] = fVar16 + fVar6;
  if (param_1[0x15] != 0.0) {
    fVar7 = param_1[3];
    fVar8 = param_1[4];
    fVar9 = param_1[6];
    fVar10 = param_1[7];
    fVar11 = param_1[9];
    fVar12 = param_1[10];
    *param_1 = fVar13;
    param_1[1] = fVar14;
    param_1[3] = fVar15 + fVar1;
    param_1[4] = fVar16 + fVar2;
    param_1[6] = fVar15 + fVar3;
    param_1[7] = fVar16 + fVar4;
    param_1[9] = fVar15 + fVar5;
    param_1[10] = fVar16 + fVar6;
    *param_1 = fVar13;
    param_1[1] = fVar14;
    param_1[2] = param_1[2];
    param_1[3] = fVar7;
    param_1[4] = fVar8;
    param_1[5] = param_1[5];
    param_1[6] = fVar9;
    param_1[7] = fVar10;
    param_1[8] = param_1[8];
    param_1[9] = fVar11;
    param_1[10] = fVar12;
    param_1[0xb] = param_1[0xb];
  }
  return;
}

