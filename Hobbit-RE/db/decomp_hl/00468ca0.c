
undefined4 __thiscall FUN_00468ca0(float *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = DAT_006e92e8 /
          SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  iVar2 = FUN_0064cf30(fVar1);
  if (iVar2 != 0) {
    fVar1 = fVar1 * param_2;
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
    return 1;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return 0;
}

