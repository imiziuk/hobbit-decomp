
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412910(float param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_004131a0();
  if (piVar2 != (int *)0x0) {
    fVar4 = (float10)param_1 + (float10)_DAT_006e9368;
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
    local_8 = (float)(fVar4 - (float10)_DAT_006e9368);
    local_c = 0;
    local_4 = 0;
    (**(code **)(*piVar2 + 0x1c))(&local_c);
    iVar1 = *piVar2;
    uVar3 = (**(code **)(iVar1 + 0x28))(0);
    (**(code **)(iVar1 + 0x14))(uVar3);
  }
  FUN_00429100();
  return;
}

