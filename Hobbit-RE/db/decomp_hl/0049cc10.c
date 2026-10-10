
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0049cc10(int param_1,float param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    fVar7 = (float10)param_2 + (float10)*(float *)(param_1 + 0x94);
    *(float *)(param_1 + 0x94) = (float)fVar7;
    return -(float10)_DAT_0072a4bc * fVar7 * fVar7 +
           (float10)*(float *)(param_1 + 0x98) * (float10)*(float *)(param_1 + 0x4c) * fVar7 +
           (float10)*(float *)(param_1 + 0x90);
  }
  fVar4 = *(float *)(param_1 + 0x54) / *(float *)(param_1 + 0x84);
  fVar1 = *(float *)(param_1 + 0x7c);
  fVar2 = *(float *)(param_1 + 0x70);
  fVar3 = *(float *)(param_1 + 0x70);
  if ((_DAT_006e99b4 < fVar4) &&
     ((NAN(*(float *)(param_1 + 0x54)) || NAN(param_2)) == (*(float *)(param_1 + 0x54) == param_2)))
  {
    *(undefined4 *)(param_1 + 0x10) = 1;
    fVar7 = (float10)*(float *)(param_1 + 0x54) - (float10)*(float *)(param_1 + 0xbc);
    return fVar7 * (float10)*(float *)(param_1 + 0xb8) + -(float10)_DAT_0072a4bc * fVar7 * fVar7 +
           (float10)*(float *)(param_1 + 0xb4);
  }
  fVar5 = *(float *)(param_1 + 0x88) * _DAT_006edc08;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fVar7 = (float10)FUN_0064c800(fVar4 * _DAT_006e9578 + _DAT_006ec080);
  fVar1 = (float)((fVar7 * (float10)*(float *)(param_1 + 0x88) - (float10)fVar5) +
                 (float10)((fVar1 - fVar2) * fVar4 + fVar3));
  iVar6 = (**(code **)(*param_3 + 0x28))();
  fVar2 = *(float *)(iVar6 + 4);
  *(float *)(param_1 + 0xb4) = fVar1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(float *)(param_1 + 0xb8) = (fVar1 - fVar2) / param_2;
  return (float10)fVar1;
}

