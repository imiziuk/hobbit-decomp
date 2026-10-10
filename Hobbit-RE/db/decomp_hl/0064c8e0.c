
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0064c8e0(undefined4 param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  uVar3 = __ftol(param_1);
  fVar1 = (param_2 - _DAT_006f6cb8 * (float)(int)uVar3) - (float)(int)uVar3 * _DAT_006f6cb4;
  fVar2 = fVar1 * fVar1;
  param_2 = DAT_006e92e8 -
            (_DAT_006e936c -
            (_DAT_006f6ca8 - (_DAT_006f6cac - _DAT_006f6cb0 * fVar2) * fVar2) * fVar2) * fVar2;
  fVar1 = ((((_DAT_006f6ca4 * fVar2 - _DAT_006f6ca0) * fVar2 + _DAT_006f6c9c) * fVar2 -
           _DAT_006edc00) * fVar2 + DAT_006e92e8) * fVar1;
  if ((_DAT_006f6cc4 < param_2) && (param_2 < _DAT_006f6cc0 != (NAN(param_2) || NAN(_DAT_006f6cc0)))
     ) {
    param_2 = 0.0;
  }
  if ((_DAT_006f6cc4 < fVar1) && (fVar1 < _DAT_006f6cc0 != (NAN(fVar1) || NAN(_DAT_006f6cc0)))) {
    fVar1 = DAT_006e92e4;
  }
  if ((uVar3 & 1) == 0) {
    if ((uVar3 + 1 & 2) != 0) {
      fVar1 = -fVar1;
    }
    *param_3 = fVar1;
  }
  else {
    if ((uVar3 & 2) != 0) {
      param_2 = -param_2;
    }
    *param_3 = param_2;
    uVar3 = uVar3 + 1;
    param_2 = fVar1;
  }
  if ((uVar3 & 2) != 0) {
    param_2 = -param_2;
  }
  *param_4 = param_2;
  return;
}

