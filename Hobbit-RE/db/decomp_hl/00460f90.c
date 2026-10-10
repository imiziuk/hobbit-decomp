
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00460f90(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_20 = param_3[1];
  local_24 = *param_3;
  local_1c = param_3[2];
  FUN_00401f00(*(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c),
               *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30),
               *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x34));
  FUN_00401f00(local_18 * _DAT_006e936c,local_14 * _DAT_006e936c,local_10 * _DAT_006e936c);
  local_24 = local_24 - local_c;
  local_20 = local_20 - local_8;
  local_1c = local_1c - local_4;
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x70),&local_28,&param_3);
  fVar1 = local_20 * local_28;
  local_20 = local_24 * local_28 + local_20 * (float)param_3;
  local_24 = (float)param_3 * local_24 - fVar1;
  FUN_004286f0(*(undefined4 *)(param_1 + 0x68));
  FUN_00428740(*(undefined4 *)(param_1 + 0x6c));
  FUN_00401f00(*(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c),
               *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30),
               *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x34));
  FUN_00401f00(local_c * _DAT_006e936c,local_8 * _DAT_006e936c,local_4 * _DAT_006e936c);
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x1c);
  *param_2 = local_18 + local_24 + *(float *)(param_1 + 0x14);
  param_2[1] = local_20 + local_14 + fVar1;
  param_2[2] = local_1c + local_10 + fVar2;
  return;
}

