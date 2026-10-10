
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00461cb0(int param_1,undefined4 *param_2)

{
  float10 fVar1;
  
  FUN_004aaa80(param_2);
  *(undefined4 *)(param_1 + 0x124) = *param_2;
  *(undefined4 *)(param_1 + 0x128) = param_2[1];
  *(undefined4 *)(param_1 + 300) = param_2[2];
  fVar1 = (float10)*(float *)(param_1 + 0x124) + (float10)_DAT_006e9368;
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
  *(float *)(param_1 + 0x124) = (float)(fVar1 - (float10)_DAT_006e9368);
  fVar1 = (float10)*(float *)(param_1 + 0x128) + (float10)_DAT_006e9368;
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
  *(float *)(param_1 + 0x128) = (float)(fVar1 - (float10)_DAT_006e9368);
  fVar1 = (float10)*(float *)(param_1 + 300) + (float10)_DAT_006e9368;
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
  *(float *)(param_1 + 300) = (float)(fVar1 - (float10)_DAT_006e9368);
  FUN_00461a70();
  return;
}

