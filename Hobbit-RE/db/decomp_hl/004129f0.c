
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004129f0(void)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  float local_1c;
  undefined1 auStack_c [12];
  
  local_1c = 0.0;
  piVar1 = (int *)FUN_004131a0();
  if (piVar1 != (int *)0x0) {
    pfVar2 = (float *)(**(code **)(*piVar1 + 0x28))();
    pfVar3 = (float *)FUN_00412ae0(auStack_c);
    fVar4 = (float10)FUN_0064ca10(*pfVar3 - *pfVar2,pfVar3[2] - pfVar2[2]);
    fVar4 = fVar4 + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar4) ||
       (fVar4 < (float10)_DAT_006e959c != (NAN(fVar4) || NAN((float10)_DAT_006e959c)))) {
      fVar4 = (float10)FUN_0064c6b0((float)fVar4,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar4) {
      do {
        fVar4 = fVar4 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar4);
    }
    if (fVar4 < (float10)DAT_006e92e4 != (NAN(fVar4) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar4 = fVar4 + (float10)_DAT_006e9598;
      } while (fVar4 < (float10)DAT_006e92e4 != (NAN(fVar4) || NAN((float10)DAT_006e92e4)));
    }
    local_1c = (float)(fVar4 - (float10)_DAT_006e9368);
  }
  FUN_00429100();
  return (float10)local_1c;
}

