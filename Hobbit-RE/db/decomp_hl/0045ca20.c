
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045ca20(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float10 fVar6;
  
  pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
  fVar1 = (float)param_1[0x35] - *pfVar5;
  fVar2 = (float)param_1[0x36] - pfVar5[1];
  fVar3 = (float)param_1[0x37] - pfVar5[2];
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  if (fVar4 < (float)param_1[0x41] != (fVar4 == (float)param_1[0x41])) {
    *param_2 = fVar1;
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    return;
  }
  fVar6 = (float10)FUN_006c05f0();
  fVar6 = (float10)_DAT_006ec030 - fVar6;
  *param_2 = (float)((float10)fVar1 * fVar6);
  param_2[1] = (float)((float10)fVar2 * fVar6);
  param_2[2] = (float)((float10)fVar3 * fVar6);
  return;
}

