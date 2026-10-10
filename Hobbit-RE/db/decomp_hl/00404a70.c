
float10 FUN_00404a70(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = ((float10)param_2 / (float10)param_3) * (float10)param_1;
  if (fVar1 < (float10)param_2 == (NAN(fVar1) || NAN((float10)param_2))) {
    fVar1 = (float10)param_2;
  }
  return fVar1;
}

