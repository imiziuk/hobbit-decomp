
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00646760(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*param_1 + (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar1) ||
     (fVar1 < (float10)_DAT_006e959c != (NAN(fVar1) || NAN((float10)_DAT_006e959c)))) {
    fVar1 = (float10)FUN_0064c6b0((float)fVar1,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar1) {
    do {
      fVar1 = fVar1 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar1);
  }
  if (fVar1 < (float10)DAT_006e92e4 != (NAN(fVar1) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar1 = fVar1 + (float10)_DAT_006e9598;
    } while (fVar1 < (float10)DAT_006e92e4 != (NAN(fVar1) || NAN((float10)DAT_006e92e4)));
  }
  *param_1 = (float)(fVar1 - (float10)_DAT_006e9368);
  return;
}

