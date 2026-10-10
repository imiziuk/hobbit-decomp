
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f4940(int param_1,float *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  
  *param_2 = *(float *)(param_1 + 0x560) * _DAT_006e936c - (float)(*param_3 / 2);
  fVar2 = *(float *)(param_1 + 0x564) * _DAT_006e9340;
  fVar1 = *(float *)(param_1 + 0x564);
  param_2[2] = 0.0;
  param_2[1] = fVar1 - fVar2;
  return;
}

