
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006389f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 400);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x198);
  piVar4 = (int *)FUN_005af120();
  iVar5 = (**(code **)(*piVar4 + 0x154))();
  fVar3 = *(float *)(iVar5 + 0x20);
  fVar6 = (float10)FUN_0064ca10(uVar1,uVar2);
  fVar6 = (fVar6 - (float10)fVar3) + (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar6) ||
     (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
    fVar6 = (float10)FUN_0064c6b0((float)fVar6,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar6) {
    do {
      fVar6 = fVar6 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar6);
  }
  if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar6 = fVar6 + (float10)_DAT_006e9598;
    } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
  }
  fVar6 = fVar6 - (float10)_DAT_006e9368;
  if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
    fVar6 = -fVar6;
  }
  if (fVar6 <= (float10)_DAT_006f6ac4) {
    return 0;
  }
  *param_2 = 6;
  return 1;
}

