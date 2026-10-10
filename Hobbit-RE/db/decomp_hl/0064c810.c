
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0064c810(undefined4 param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = __ftol(param_1);
  fVar1 = (param_2 - _DAT_006f6cb8 * (float)iVar2) - (float)iVar2 * _DAT_006f6cb4;
  fVar3 = (float10)fVar1 * (float10)fVar1;
  if ((iVar2 + param_3 & 1U) == 0) {
    fVar3 = (((((float10)_DAT_006f6ca4 * fVar3 - (float10)_DAT_006f6ca0) * fVar3 +
              (float10)_DAT_006f6c9c) * fVar3 - (float10)_DAT_006edc00) * fVar3 +
            (float10)DAT_006e92e8) * (float10)fVar1;
  }
  else {
    fVar3 = (float10)DAT_006e92e8 -
            ((float10)_DAT_006e936c -
            ((float10)_DAT_006f6ca8 -
            ((float10)_DAT_006f6cac - (float10)_DAT_006f6cb0 * fVar3) * fVar3) * fVar3) * fVar3;
  }
  if ((iVar2 + param_3 & 2U) != 0) {
    fVar3 = -fVar3;
  }
  return fVar3;
}

