
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0060b770(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float10 fVar11;
  
  piVar6 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)FUN_005af120();
    pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
    pfVar9 = (float *)(**(code **)(*piVar6 + 0x28))();
    fVar1 = *pfVar9;
    fVar2 = *pfVar8;
    fVar3 = pfVar9[2];
    fVar4 = pfVar8[2];
    piVar6 = (int *)FUN_005af120();
    iVar10 = (**(code **)(*piVar6 + 0x154))();
    fVar5 = *(float *)(iVar10 + 0x20);
    fVar11 = (float10)FUN_0064ca10(fVar1 - fVar2,fVar3 - fVar4);
    fVar11 = (fVar11 - (float10)fVar5) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar11) ||
       (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
      fVar11 = (float10)FUN_0064c6b0((float)fVar11,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar11) {
      do {
        fVar11 = fVar11 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar11);
    }
    if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar11 = fVar11 + (float10)_DAT_006e9598;
      } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
    }
    fVar11 = fVar11 - (float10)_DAT_006e9368;
    if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
      fVar11 = -fVar11;
    }
    if ((float10)_DAT_006f55b4 < fVar11) {
      *param_2 = 0xb;
      return 1;
    }
  }
  return 0;
}

