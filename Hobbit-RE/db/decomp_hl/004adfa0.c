
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004adfa0(int param_1,float *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00401f00(*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x38),
               *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30),
               *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x34));
  FUN_00401f00(local_18 * _DAT_006e936c,local_14 * _DAT_006e936c,local_10 * _DAT_006e936c);
  param_3 = param_3 - local_c;
  param_4 = param_4 - local_8;
  param_5 = param_5 - local_4;
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0xb0),&local_1c,&local_20);
  FUN_004286f0(*(undefined4 *)(param_1 + 0xa8));
  FUN_00428740(*(undefined4 *)(param_1 + 0xac));
  FUN_00401f00(*(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c),
               *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30),
               *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x34));
  FUN_00401f00(local_c * _DAT_006e936c,local_8 * _DAT_006e936c,local_4 * _DAT_006e936c);
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x1c);
  *param_2 = local_18 + (local_20 * param_3 - param_4 * local_1c) + *(float *)(param_1 + 0x14);
  param_2[1] = param_3 * local_1c + param_4 * local_20 + local_14 + fVar1;
  param_2[2] = param_5 + local_10 + fVar2;
  return;
}

