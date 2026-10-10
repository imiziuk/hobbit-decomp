
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00673b40(float *param_1,float *param_2,float param_3,int param_4)

{
  float10 fVar1;
  
  if (((uint)param_1[0x22] & 0x800) != 0) {
    FUN_006746a0();
  }
  fVar1 = (float10)param_2[2];
  if (param_4 == 0) {
    fVar1 = ((float10)*param_2 - (float10)*param_1) * (float10)param_1[0xb] +
            ((float10)param_2[1] - (float10)param_1[1]) * (float10)param_1[0xc] +
            (fVar1 - (float10)param_1[2]) * (float10)param_1[0xd];
  }
  if (fVar1 < -(float10)param_3 != (NAN(fVar1) || NAN(-(float10)param_3))) {
    return (float10)DAT_006e92e4;
  }
  if (fVar1 < (float10)param_3 != (NAN(fVar1) || NAN((float10)param_3))) {
    fVar1 = (float10)param_3;
  }
  if (param_1[0x1c] != 0.0) {
    return ((float10)_DAT_006e999c / (float10)param_1[0x1d]) * (float10)(int)param_1[0x17] *
           (float10)param_3;
  }
  return ((float10)param_3 * (float10)param_1[0x93] + (float10)param_3 * (float10)param_1[0x93]) /
         fVar1;
}

