
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061c1f0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)FUN_005af120();
  iVar2 = (**(code **)(*piVar1 + 0x154))();
  fVar4 = *(float *)(iVar2 + 0x20);
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 8) + 400);
  fVar3 = (float10)FUN_0064ca10(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) + 0x198));
  fVar3 = (fVar3 - (float10)fVar4) + (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar3) ||
     (fVar3 < (float10)_DAT_006e959c != (NAN(fVar3) || NAN((float10)_DAT_006e959c)))) {
    fVar3 = (float10)FUN_0064c6b0((float)fVar3,0x40c90fdb,(float)fVar3,uVar5);
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
  fVar3 = fVar3 - (float10)_DAT_006e9368;
  if (fVar3 < (float10)DAT_006e92e4 != (NAN(fVar3) || NAN((float10)DAT_006e92e4))) {
    fVar3 = -fVar3;
  }
  if ((float10)_DAT_006f5bd8 < fVar3) {
    *param_2 = 6;
    return 1;
  }
  return 0;
}

