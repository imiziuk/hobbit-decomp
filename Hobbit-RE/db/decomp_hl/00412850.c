
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00412850(void)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_4;
  
  local_4 = 0.0;
  piVar1 = (int *)FUN_004131a0();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x30))();
    fVar3 = (float10)*(float *)(iVar2 + 4) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar3) ||
       (fVar3 < (float10)_DAT_006e959c != (NAN(fVar3) || NAN((float10)_DAT_006e959c)))) {
      fVar3 = (float10)FUN_0064c6b0((float)fVar3,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar3) {
      do {
        fVar3 = fVar3 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar3);
    }
    if (fVar3 < (float10)DAT_006e92e4 != (NAN(fVar3) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar3 = fVar3 + (float10)_DAT_006e9598;
      } while (fVar3 < (float10)DAT_006e92e4 != (NAN(fVar3) || NAN((float10)DAT_006e92e4)));
    }
    local_4 = (float)(fVar3 - (float10)_DAT_006e9368);
    FUN_00429100();
  }
  return (float10)local_4;
}

