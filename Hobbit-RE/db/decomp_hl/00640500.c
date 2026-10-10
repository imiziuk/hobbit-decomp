
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00640500(int param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = FUN_006400f0(param_2);
  if (iVar3 == 0) {
    return 0;
  }
  pfVar1 = *(float **)(param_1 + 0x2c);
  *param_3 = *pfVar1;
  fVar2 = *param_3 * _DAT_006e9368;
  param_3[1] = pfVar1[1];
  fVar2 = fVar2 * _DAT_006e957c;
  param_3[2] = pfVar1[2];
  *param_3 = fVar2;
  param_3[1] = param_3[1] * _DAT_006e9368 * _DAT_006e957c;
  param_3[2] = param_3[2] * _DAT_006e9368 * _DAT_006e957c;
  return 1;
}

