
float10 FUN_0050b190(float param_1,float param_2,float param_3,float param_4,int param_5)

{
  float10 fVar1;
  float10 fVar2;
  
  param_2 = param_2 - param_1;
  fVar2 = (float10)param_3 * (float10)param_4;
  if ((param_5 != 0) && (fVar2 < (float10)DAT_006e92e8)) {
    fVar2 = (float10)DAT_006e92e8;
  }
  if (DAT_006e92e4 <= param_2) {
    if (fVar2 < (float10)param_2 == (NAN(fVar2) || NAN((float10)param_2))) {
      fVar2 = (float10)param_2;
    }
    return fVar2 + (float10)param_1;
  }
  fVar1 = (float10)-param_2;
  if (fVar2 < fVar1 == (NAN(fVar2) || NAN(fVar1))) {
    fVar2 = (float10)-param_2;
  }
  return (float10)param_1 - fVar2;
}

