
void __thiscall FUN_00429030(float *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  float *local_4;
  
  puVar2 = param_2;
  local_4 = param_1;
  FUN_0064c8e0(param_2[2],&param_2,&local_4);
  fVar1 = *param_1;
  *param_1 = fVar1 * (float)local_4 - param_1[1] * (float)param_2;
  param_1[1] = param_1[1] * (float)local_4 + fVar1 * (float)param_2;
  FUN_0064c8e0(*puVar2,&param_2,&local_4);
  fVar1 = param_1[1];
  param_1[1] = fVar1 * (float)local_4 - param_1[2] * (float)param_2;
  param_1[2] = param_1[2] * (float)local_4 + fVar1 * (float)param_2;
  FUN_0064c8e0(puVar2[1],&local_4,&param_2);
  fVar1 = *param_1;
  *param_1 = fVar1 * (float)param_2 + (float)local_4 * param_1[2];
  param_1[2] = param_1[2] * (float)param_2 - fVar1 * (float)local_4;
  return;
}

