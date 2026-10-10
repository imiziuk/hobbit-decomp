
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00688c8c(float *param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = _DAT_006ed3a4;
  *param_1 = (float)(param_2 >> 0x10 & 0xff) * _DAT_006ed3a4;
  param_1[1] = (float)(param_2 >> 8 & 0xff) * fVar1;
  param_1[2] = (float)(param_2 & 0xff) * fVar1;
  param_1[3] = (float)(param_2 >> 0x18) * fVar1;
  return;
}

