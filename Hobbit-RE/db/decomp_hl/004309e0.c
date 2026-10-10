
float10 __thiscall FUN_004309e0(int *param_1,float param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float fStack_8;
  
  local_18 = param_2 - (float)param_1[5];
  local_10 = param_4 - (float)param_1[7];
  param_2 = DAT_006e92e8 / SQRT(local_18 * local_18 + local_10 * local_10);
  iVar2 = FUN_0064cf30(param_2);
  if (iVar2 == 0) {
    local_18 = 0.0;
    local_14 = 0.0;
    local_10 = 0.0;
  }
  else {
    local_18 = local_18 * param_2;
    local_14 = param_2 * DAT_006e92e4;
    local_10 = local_10 * param_2;
  }
  fVar3 = (float10)(**(code **)(*param_1 + 0x10c))();
  fStack_8 = (float)fVar3;
  fStack_24 = 0.0;
  fStack_20 = 0.0;
  fStack_1c = 1.0;
  FUN_0064c8e0(0,&fStack_28,&param_2);
  fVar1 = fStack_20 * fStack_28;
  fStack_20 = fStack_24 * fStack_28 + fStack_20 * param_2;
  fStack_24 = param_2 * fStack_24 - fVar1;
  FUN_0064c8e0(0,&fStack_28,&param_2);
  fVar1 = fStack_1c * fStack_28;
  fStack_1c = fStack_20 * fStack_28 + fStack_1c * param_2;
  fStack_20 = fStack_20 * param_2 - fVar1;
  FUN_00428740(fStack_8);
  return (float10)fStack_24 * (float10)local_18 +
         (float10)fStack_20 * (float10)local_14 + (float10)fStack_1c * (float10)local_10;
}

