
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00646590(float *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = param_1[1];
  fVar2 = *param_1 / fVar1;
  if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
    fVar3 = (float10)FUN_0064c3d0(fVar2 - _DAT_006e936c);
    *param_1 = (float)(fVar3 * (float10)fVar1);
    return;
  }
  fVar3 = (float10)FUN_0064c330(fVar2 + _DAT_006e936c);
  *param_1 = (float)(fVar3 * (float10)fVar1);
  return;
}

