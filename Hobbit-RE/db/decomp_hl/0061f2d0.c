
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061f2d0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 uVar14;
  
  piVar8 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  piVar9 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x90),
                               *(undefined4 *)(*(int *)(param_1 + 8) + 0x94));
  uVar14 = FUN_005af0f0();
  piVar10 = (int *)FUN_004021c0(uVar14);
  uVar14 = FUN_005af0f0();
  FUN_004021c0(uVar14);
  if (((piVar8 != (int *)0x0) && (piVar9 != (int *)0x0)) && (piVar10 != (int *)0x0)) {
    puVar11 = (undefined4 *)(**(code **)(*piVar8 + 0x28))();
    uVar14 = FUN_005af480(*puVar11,puVar11[1],puVar11[2]);
    piVar8 = (int *)FUN_004021c0(uVar14);
    if (piVar8 != (int *)0x0) {
      pfVar12 = (float *)(**(code **)(*piVar10 + 0x28))();
      pfVar13 = (float *)(**(code **)(*piVar9 + 0x28))();
      fVar1 = *pfVar13;
      fVar2 = *pfVar12;
      fVar3 = pfVar13[1];
      fVar4 = pfVar12[1];
      fVar5 = pfVar13[2];
      fVar6 = pfVar12[2];
      pfVar12 = (float *)(**(code **)(*piVar10 + 0x28))();
      pfVar13 = (float *)(**(code **)(*piVar8 + 0x28))();
      fVar7 = SQRT((*pfVar13 - *pfVar12) * (*pfVar13 - *pfVar12) +
                   (pfVar13[1] - pfVar12[1]) * (pfVar13[1] - pfVar12[1]) +
                   (pfVar13[2] - pfVar12[2]) * (pfVar13[2] - pfVar12[2]));
      fVar1 = SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                   (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar5 - fVar6) * (fVar5 - fVar6));
      if (fVar7 < fVar1 != (NAN(fVar7) || NAN(fVar1))) {
        *(float *)(param_1 + 100) = fVar7 / _DAT_006f5e20;
        *param_2 = 7;
        FUN_005af3a0();
        FUN_005af3e0(uVar14);
        return 1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return 0;
}

