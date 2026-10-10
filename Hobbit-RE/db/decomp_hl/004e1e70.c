
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e1e70(int *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  param_1[0x2b] = (int)(param_3 * _DAT_006e936c);
  param_1[0x2c] = (int)(param_4 * _DAT_006e936c);
  param_1[0x2d] = (int)(param_5 * _DAT_006e936c);
  fVar3 = -(float)param_1[0x2b];
  fVar2 = -(float)param_1[0x2c];
  fVar1 = -(float)param_1[0x2d];
  fVar4 = fVar1;
  if ((float)param_1[0x2d] <= fVar1) {
    fVar4 = (float)param_1[0x2d];
  }
  fVar5 = fVar2;
  if ((float)param_1[0x2c] <= fVar2) {
    fVar5 = (float)param_1[0x2c];
  }
  fVar6 = fVar3;
  if (fVar3 < (float)param_1[0x2b] == (NAN(fVar3) || NAN((float)param_1[0x2b]))) {
    fVar6 = (float)param_1[0x2b];
  }
  param_1[0xb] = (int)fVar6;
  param_1[0xc] = (int)fVar5;
  param_1[0xd] = (int)fVar4;
  if ((float)param_1[0x2d] < fVar1 == (NAN((float)param_1[0x2d]) || NAN(fVar1))) {
    fVar1 = (float)param_1[0x2d];
  }
  if ((float)param_1[0x2c] < fVar2 == (NAN((float)param_1[0x2c]) || NAN(fVar2))) {
    fVar2 = (float)param_1[0x2c];
  }
  if (fVar3 <= (float)param_1[0x2b]) {
    fVar3 = (float)param_1[0x2b];
  }
  param_1[0xe] = (int)fVar3;
  param_1[0xf] = (int)fVar2;
  param_1[0x10] = (int)fVar1;
  param_1[0x11] = param_1[0xb];
  param_1[0x12] = param_1[0xc];
  param_1[0x13] = param_1[0xd];
  param_1[0x14] = param_1[0xe];
  param_1[0x15] = param_1[0xf];
  param_1[0x16] = param_1[0x10];
  param_1[0x11] = (int)(*param_2 + (float)param_1[0x11]);
  param_1[0x12] = (int)((float)param_1[0x12] + param_2[1]);
  param_1[0x13] = (int)(param_2[2] + (float)param_1[0x13]);
  param_1[0x14] = (int)((float)param_1[0x14] + *param_2);
  param_1[0x15] = (int)((float)param_1[0x15] + param_2[1]);
  param_1[0x16] = (int)(param_2[2] + (float)param_1[0x16]);
  (**(code **)(*param_1 + 0x14))(param_2,0);
  FUN_004e2630();
  return;
}

