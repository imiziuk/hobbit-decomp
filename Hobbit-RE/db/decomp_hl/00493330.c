
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00493330(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_24 [9];
  
  FUN_0064c8e0(param_2 * _DAT_006e936c,&param_2,local_24);
  fVar3 = param_1[2] * DAT_006e92e4;
  fVar4 = param_1[1] * DAT_006e92e4;
  fVar1 = param_1[3];
  fVar5 = param_1[3] * DAT_006e92e4;
  fVar6 = *param_1 * DAT_006e92e4;
  fVar2 = param_1[2];
  param_1[2] = (local_24[0] * param_1[2] + param_2 * param_1[1] + fVar5) - fVar6;
  param_1[3] = ((local_24[0] * param_1[3] - param_2 * *param_1) - fVar4) - fVar3;
  *param_1 = (param_2 * fVar1 + local_24[0] * *param_1 + fVar3) - fVar4;
  param_1[1] = (local_24[0] * param_1[1] + fVar6 + fVar5) - param_2 * fVar2;
  return;
}

