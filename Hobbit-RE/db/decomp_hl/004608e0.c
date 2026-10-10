
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004608e0(int param_1,float *param_2,int param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  float *pfVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
  if (*(int *)(param_1 + 0x130) != 0 || *(int *)(param_1 + 0x134) != 0) {
    FUN_004606e0(&local_3c);
    pfVar3 = (float *)FUN_004607c0(&local_30,param_3,0);
    local_3c = local_3c - *pfVar3;
    local_38 = local_38 - pfVar3[1];
    local_34 = local_34 - pfVar3[2];
    local_20 = 0.0;
    local_1c = 0.0;
    local_18 = 0.0;
    local_14 = 1.0;
    fVar5 = (float10)FUN_0064ca10(local_38,SQRT(local_3c * local_3c + local_34 * local_34));
    FUN_0064c8e0((float)(-fVar5 * (float10)_DAT_006e936c),&param_3,&param_4);
    local_30 = param_3;
    local_24 = param_4;
    local_2c = 0;
    local_28 = 0;
    uVar4 = FUN_00463b80(local_10,&local_30,&local_20);
    FUN_0042fda0(uVar4);
    fVar5 = (float10)FUN_0064ca10(local_3c,local_34);
    FUN_0064c8e0((float)(fVar5 * (float10)_DAT_006e936c),&param_3,&param_4);
    local_2c = param_3;
    local_24 = param_4;
    local_30 = 0;
    local_28 = 0;
    uVar4 = FUN_00463b80(local_10,&local_30,&local_20);
    FUN_0042fda0(uVar4);
    *param_2 = local_20;
    param_2[1] = local_1c;
    param_2[2] = local_18;
    param_2[3] = local_14;
    return;
  }
  psVar1 = (short *)(param_3 + 8);
  psVar2 = (short *)(param_3 + 10);
  local_20 = (float)(int)*(short *)(param_3 + 6) * (float)_PTR_DAT_006ecc78;
  param_3 = (int)*(short *)(param_3 + 0xc);
  local_1c = (float)(int)*psVar1 * (float)_PTR_DAT_006ecc78;
  local_18 = (float)(int)*psVar2 * (float)_PTR_DAT_006ecc78;
  local_14 = (float)param_3 * (float)_PTR_DAT_006ecc78;
  if (param_4 == 0) {
    FUN_0064c8e0(*(float *)(param_1 + 0x124) * _DAT_006e936c,&param_3,&param_4);
    local_30 = param_3;
    local_24 = param_4;
    local_2c = 0;
    local_28 = 0;
    uVar4 = FUN_00463b80(local_10,&local_30,&local_20);
    FUN_0042fda0(uVar4);
    FUN_0064c8e0(*(float *)(param_1 + 0x128) * _DAT_006e936c,&param_3,&param_4);
    local_2c = param_3;
    local_24 = param_4;
    local_30 = 0;
    local_28 = 0;
    uVar4 = FUN_00463b80(local_10,&local_30,&local_20);
    FUN_0042fda0(uVar4);
    FUN_0064c8e0(*(float *)(param_1 + 300) * _DAT_006e936c,&param_4,&param_3);
    CRect::CRect((CRect *)&local_30,0,0,param_4,param_3);
    uVar4 = FUN_00463b80(local_10,&local_30,&local_20);
    FUN_0042fda0(uVar4);
  }
  *param_2 = local_20;
  param_2[1] = local_1c;
  param_2[2] = local_18;
  param_2[3] = local_14;
  return;
}

