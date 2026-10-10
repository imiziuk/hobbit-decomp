
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00670220(float *param_1)

{
  char cVar1;
  float10 fVar2;
  
  if (*param_1 < DAT_006e92e4 == (NAN(*param_1) || NAN(DAT_006e92e4))) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = -1;
  }
  fVar2 = (float10)*param_1;
  if (fVar2 < (float10)DAT_006e92e4 != (NAN(fVar2) || NAN((float10)DAT_006e92e4))) {
    fVar2 = -fVar2;
  }
  fVar2 = fVar2 - (float10)_DAT_006e9550;
  if (fVar2 < (float10)DAT_006e92e4) {
    return (float10)DAT_006e92e4;
  }
  if ((float10)DAT_006e92e4 < fVar2) {
    fVar2 = fVar2 * (float10)_DAT_006f964c;
    if ((fVar2 < (float10)DAT_006e92e8 != (NAN(fVar2) || NAN((float10)DAT_006e92e8))) &&
       (fVar2 < (float10)DAT_006e92e4)) {
      return (float10)DAT_006e92e4 * (float10)(int)cVar1;
    }
    if (fVar2 < (float10)DAT_006e92e8 == (NAN(fVar2) || NAN((float10)DAT_006e92e8))) {
      fVar2 = (float10)DAT_006e92e8;
    }
    fVar2 = fVar2 * (float10)(int)cVar1;
  }
  return fVar2;
}

