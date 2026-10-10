
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00636f50(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 8) + 400);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x198);
  uVar6 = FUN_005be240();
  piVar2 = (int *)FUN_004021c0(uVar6);
  FUN_005be240();
  if ((*(byte *)(piVar2 + 4) & 0x50) != 0) {
    fVar4 = (float10)(**(code **)(*piVar2 + 0x10c))();
    fVar5 = (float10)FUN_0064ca10(uVar7,uVar1);
    fVar4 = ((float10)(float)fVar4 - fVar5) + (float10)_DAT_006e9368;
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
    fVar4 = fVar4 - (float10)_DAT_006e9368;
    if ((fVar4 < (float10)_DAT_006e9578 != (NAN(fVar4) || NAN((float10)_DAT_006e9578))) &&
       ((float10)_DAT_006e9570 < fVar4)) {
      return 0;
    }
  }
  uVar7 = 10;
  FUN_005af120(10);
  iVar3 = FUN_004a1250(uVar7);
  if ((iVar3 != 0) && ((*(uint *)(*(int *)(param_1 + 8) + 0x130) & 0x1000) == 0)) {
    *param_2 = 0xc;
    return 1;
  }
  return 0;
}

