
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0064ca10(float param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = 0;
  if ((_DAT_006f6cc4 < param_2) && (param_2 < _DAT_006f6cc0 != (NAN(param_2) || NAN(_DAT_006f6cc0)))
     ) {
    param_2 = 0.0;
    iVar1 = 1;
  }
  if ((_DAT_006f6cc4 < param_1) && (param_1 < _DAT_006f6cc0 != (NAN(param_1) || NAN(_DAT_006f6cc0)))
     ) {
    param_1 = 0.0;
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 2) {
    return (float10)DAT_006e92e4;
  }
  if ((NAN(param_2) || NAN(DAT_006e92e4)) != (param_2 == DAT_006e92e4)) {
    if (DAT_006e92e4 <= param_1) {
      return (float10)_DAT_006e9578;
    }
    return (float10)_DAT_006e9570;
  }
  if ((NAN(param_1) || NAN(DAT_006e92e4)) != (param_1 == DAT_006e92e4)) {
    if (param_2 >= DAT_006e92e4) {
      return (float10)DAT_006e92e4;
    }
    return (float10)_DAT_006e9368;
  }
  uVar2 = (uint)(param_2 < DAT_006e92e4 != (NAN(param_2) || NAN(DAT_006e92e4)));
  if (param_1 < DAT_006e92e4 != (NAN(param_1) || NAN(DAT_006e92e4))) {
    uVar2 = uVar2 | 2;
  }
  fVar3 = (float10)param_1 / (float10)param_2;
  fVar4 = fVar3;
  if ((uVar2 != 0) && (uVar2 != 3)) {
    fVar4 = -fVar3;
  }
  if (fVar4 < (float10)_DAT_006f6cc0 != (NAN(fVar4) || NAN((float10)_DAT_006f6cc0))) {
    return (float10)*(float *)(uVar2 * 4 + 0x74cc84);
  }
  fVar4 = (float10)fpatan(fVar3,(float10)1);
  return fVar4 + (float10)*(float *)(uVar2 * 4 + 0x74cc84);
}

