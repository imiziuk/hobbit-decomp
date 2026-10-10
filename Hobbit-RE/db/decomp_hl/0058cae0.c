
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058cae0(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)param_1 * _DAT_006e9994;
  *param_4 = fVar1;
  fVar2 = (float)param_2 * _DAT_006e9994;
  param_4[1] = fVar2;
  fVar3 = (float)param_3 * _DAT_006e9994;
  param_4[2] = fVar3;
  param_4[3] = fVar1 + _DAT_006e9994;
  param_4[4] = fVar2 + _DAT_006e9994;
  param_4[5] = fVar3 + _DAT_006e9994;
  return;
}

