
void __thiscall FUN_006723d0(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c [11];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [64];
  
  if (param_3 != 0) {
    if (param_3 != 1) goto LAB_0067241b;
    param_2 = (float *)FUN_006727a0(local_4c,param_2);
  }
  local_98 = *param_2;
  local_90 = param_2[2];
  local_94 = param_2[1];
LAB_0067241b:
  pfVar1 = param_1 + 3;
  local_98 = local_98 - *param_1;
  local_94 = local_94 - param_1[1];
  local_90 = local_90 - param_1[2];
  param_1[0xf] = 0.0;
  param_1[0xb] = 0.0;
  param_1[7] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0xc] = 0.0;
  param_1[4] = 0.0;
  param_1[0x11] = 0.0;
  param_1[9] = 0.0;
  param_1[5] = 0.0;
  param_1[0xe] = 0.0;
  param_1[10] = 0.0;
  param_1[6] = 0.0;
  *pfVar1 = 1.0;
  param_1[8] = 1.0;
  param_1[0xd] = 1.0;
  param_1[0x12] = 1.0;
  fVar3 = (float10)FUN_0064ca10(local_94,SQRT(local_98 * local_98 + local_90 * local_90));
  fVar3 = -fVar3;
  local_a0 = (float)fVar3;
  if ((NAN(fVar3) || NAN((float10)DAT_006e92e4)) == (fVar3 == (float10)DAT_006e92e4)) {
    FUN_0064c8e0(local_a0,&local_a0,&local_9c);
    local_8c[9] = -local_a0;
    local_8c[5] = local_9c;
    local_8c[6] = local_a0;
    local_5c = 0;
    local_8c[8] = 0.0;
    local_8c[4] = 0.0;
    local_58 = 0;
    local_8c[1] = 0.0;
    local_54 = 0;
    local_8c[2] = 0.0;
    local_60 = 0;
    local_8c[7] = 0.0;
    local_8c[3] = 0.0;
    local_8c[0] = 1.0;
    local_50 = 0x3f800000;
    local_8c[10] = local_9c;
    uVar2 = FUN_0064e040(local_40,local_8c,pfVar1);
    FUN_00406570(uVar2);
  }
  fVar3 = (float10)FUN_0064ca10(local_98,local_90);
  local_9c = (float)fVar3;
  if ((NAN(fVar3) || NAN((float10)DAT_006e92e4)) == (fVar3 == (float10)DAT_006e92e4)) {
    FUN_0064c8e0(local_9c,&local_9c,&local_a0);
    local_8c[2] = -local_9c;
    local_8c[0] = local_a0;
    local_8c[8] = local_9c;
    local_5c = 0;
    local_8c[4] = 0.0;
    local_58 = 0;
    local_8c[9] = 0.0;
    local_8c[1] = 0.0;
    local_54 = 0;
    local_8c[6] = 0.0;
    local_60 = 0;
    local_8c[7] = 0.0;
    local_8c[3] = 0.0;
    local_8c[5] = 1.0;
    local_50 = 0x3f800000;
    local_8c[10] = local_a0;
    uVar2 = FUN_0064e040(local_40,local_8c,pfVar1);
    FUN_00406570(uVar2);
  }
  param_1[0x22] = -NAN;
  return;
}

