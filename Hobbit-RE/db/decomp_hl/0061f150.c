
undefined4 __thiscall FUN_0061f150(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 uVar13;
  
  piVar7 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  piVar8 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x90),
                               *(undefined4 *)(*(int *)(param_1 + 8) + 0x94));
  uVar13 = FUN_005af0f0();
  piVar9 = (int *)FUN_004021c0(uVar13);
  uVar13 = FUN_005af0f0();
  FUN_004021c0(uVar13);
  if (((piVar7 != (int *)0x0) && (piVar8 != (int *)0x0)) && (piVar9 != (int *)0x0)) {
    puVar10 = (undefined4 *)(**(code **)(*piVar7 + 0x28))();
    uVar13 = FUN_005af480(*puVar10,puVar10[1],puVar10[2]);
    piVar7 = (int *)FUN_004021c0(uVar13);
    if (piVar7 != (int *)0x0) {
      pfVar11 = (float *)(**(code **)(*piVar9 + 0x28))();
      pfVar12 = (float *)(**(code **)(*piVar8 + 0x28))();
      fVar1 = *pfVar12;
      fVar2 = *pfVar11;
      fVar3 = pfVar12[1];
      fVar4 = pfVar11[1];
      fVar5 = pfVar12[2];
      fVar6 = pfVar11[2];
      pfVar11 = (float *)(**(code **)(*piVar9 + 0x28))();
      pfVar12 = (float *)(**(code **)(*piVar7 + 0x28))();
      if (SQRT((*pfVar12 - *pfVar11) * (*pfVar12 - *pfVar11) +
               (pfVar12[1] - pfVar11[1]) * (pfVar12[1] - pfVar11[1]) +
               (pfVar12[2] - pfVar11[2]) * (pfVar12[2] - pfVar11[2])) <
          SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
               (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar5 - fVar6) * (fVar5 - fVar6))) {
        *param_2 = 0xc;
        return 1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return 0;
}

