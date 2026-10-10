
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004fd1c0(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  if ((DAT_0075f964 & 1) == 0) {
    DAT_0075f964 = DAT_0075f964 | 1;
    FUN_0064cbe0(param_1);
    FUN_006bfe55(&DAT_004fd2a0);
  }
  fVar3 = (float10)FUN_0064cd30();
  fVar4 = (float)fVar3;
  FUN_0064cc30();
  FUN_0064cc00();
  iVar2 = __ftol();
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (8 < iVar2) {
    iVar2 = 8;
  }
  fVar4 = _DAT_00760340 + fVar4;
  (&DAT_00760318)[iVar2] = (&DAT_00760318)[iVar2] + 1;
  _DAT_00760340 = fVar4;
  if (_DAT_006e99c0 <= fVar4) {
    fVar1 = (float)_DAT_00760344;
    _DAT_00760340 = 0.0;
    _DAT_00760344 = 1;
    _DAT_0076033c = (fVar1 * _DAT_006e99c0) / fVar4;
    return;
  }
  _DAT_00760344 = _DAT_00760344 + 1;
  return;
}

