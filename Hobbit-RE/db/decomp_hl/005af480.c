
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __thiscall FUN_005af480(int param_1,float param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  undefined8 uVar14;
  float local_2c;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  local_2c = -1.0;
  piVar7 = (int *)FUN_005af120();
  pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
  fVar4 = param_2 - *pfVar8;
  fVar1 = pfVar8[2];
  iVar9 = FUN_004021c0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  if (iVar9 == 0) {
    return 0;
  }
  param_2 = 0.0;
  iVar9 = FUN_0044f210();
  if (iVar9 < 1) {
    return 0;
  }
  do {
    uVar14 = FUN_0044f220(param_2);
    piVar7 = (int *)FUN_004021c0(uVar14);
    FUN_0044f220(param_2);
    if (piVar7 != (int *)0x0) {
      piVar10 = (int *)FUN_005af120();
      pfVar8 = (float *)(**(code **)(*piVar10 + 0x28))();
      pfVar11 = (float *)(**(code **)(*piVar7 + 0x28))();
      fVar5 = *pfVar11 - *pfVar8;
      fVar2 = pfVar11[1];
      fVar3 = pfVar8[1];
      fVar6 = pfVar11[2] - pfVar8[2];
      iVar9 = FUN_00452610();
      if ((iVar9 != 0) &&
         ((fVar2 = SQRT(fVar5 * fVar5 + (fVar2 - fVar3) * (fVar2 - fVar3) + fVar6 * fVar6),
          fVar2 < local_2c != (NAN(fVar2) || NAN(local_2c)) ||
          (local_2c < DAT_006e92e4 != (NAN(local_2c) || NAN(DAT_006e92e4)))))) {
        fVar12 = (float10)FUN_0064ca10(fVar4,param_4 - fVar1);
        fVar13 = (float10)FUN_0064ca10(fVar5,fVar6);
        fVar12 = ((float10)(float)fVar12 - fVar13) + (float10)_DAT_006e9368;
        if (((float10)_DAT_006e95a0 < fVar12) ||
           (fVar12 < (float10)_DAT_006e959c != (NAN(fVar12) || NAN((float10)_DAT_006e959c)))) {
          fVar12 = (float10)FUN_0064c6b0((float)fVar12,0x40c90fdb);
        }
        if ((float10)_DAT_006e9598 <= fVar12) {
          do {
            fVar12 = fVar12 - (float10)_DAT_006e9598;
          } while ((float10)_DAT_006e9598 <= fVar12);
        }
        if (fVar12 < (float10)DAT_006e92e4 != (NAN(fVar12) || NAN((float10)DAT_006e92e4))) {
          do {
            fVar12 = fVar12 + (float10)_DAT_006e9598;
          } while (fVar12 < (float10)DAT_006e92e4 != (NAN(fVar12) || NAN((float10)DAT_006e92e4)));
        }
        fVar12 = fVar12 - (float10)_DAT_006e9368;
        if (fVar12 < (float10)DAT_006e92e4 != (NAN(fVar12) || NAN((float10)DAT_006e92e4))) {
          fVar12 = -fVar12;
        }
        if (fVar12 < (float10)_DAT_006ebffc != (NAN(fVar12) || NAN((float10)_DAT_006ebffc))) {
          local_20 = piVar7[2];
          local_1c = piVar7[3];
          local_2c = fVar2;
        }
      }
    }
    param_2 = (float)((int)param_2 + 1);
    iVar9 = FUN_0044f210();
  } while ((int)param_2 < iVar9);
  return CONCAT44(local_1c,local_20);
}

