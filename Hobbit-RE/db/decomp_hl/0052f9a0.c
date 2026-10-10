
void __thiscall FUN_0052f9a0(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  iVar9 = param_2;
  iVar6 = *(int *)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - iVar6) / 0xa8)) {
    if ((uint)((int)(iVar6 - param_2) / 0xa8) < param_3) {
      if (param_2 != iVar6) {
        do {
          FUN_0052fd20(param_3 * 0xa8 + iVar9,iVar9);
          iVar9 = iVar9 + 0xa8;
        } while (iVar9 != iVar6);
      }
      iVar6 = *(int *)(param_1 + 8);
      for (iVar9 = param_3 - (int)(iVar6 - param_2) / 0xa8; iVar9 != 0; iVar9 = iVar9 + -1) {
        FUN_0052fd20(iVar6,param_4);
        iVar6 = iVar6 + 0xa8;
      }
      iVar6 = *(int *)(param_1 + 8);
      if (param_2 != iVar6) {
        do {
          FUN_00530b80(param_4);
          puVar13 = (undefined4 *)(param_2 + 0x78);
          param_2 = param_2 + 0xa8;
          puVar11 = (undefined4 *)(param_4 + 0x78);
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
        } while (param_2 != iVar6);
      }
    }
    else {
      if (param_3 == 0) {
        return;
      }
      iVar9 = iVar6;
      for (iVar3 = iVar6 + param_3 * -0xa8; iVar3 != iVar6; iVar3 = iVar3 + 0xa8) {
        FUN_0052fd20(iVar9,iVar3);
        iVar9 = iVar9 + 0xa8;
      }
      iVar6 = *(int *)(param_1 + 8) + param_3 * -0xa8;
      if (param_2 != iVar6) {
        puVar13 = (undefined4 *)(*(int *)(param_1 + 8) + 0x78);
        puVar11 = (undefined4 *)(iVar6 + 0x78);
        do {
          iVar6 = iVar6 + -0xa8;
          puVar13 = puVar13 + -0x2a;
          FUN_0064a320(iVar6);
          FUN_0064b7f0(puVar11 + -0x3d);
          puVar10 = puVar11 + -0x2a;
          puVar12 = puVar13;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          puVar11 = puVar11 + -0x2a;
        } while (iVar6 != param_2);
      }
      iVar6 = param_3 * 0xa8 + param_2;
      if (param_2 != iVar6) {
        do {
          FUN_0064a320(param_4);
          puVar13 = (undefined4 *)(param_2 + 0x78);
          FUN_0064b7f0(param_4 + 0x2c);
          param_2 = param_2 + 0xa8;
          puVar11 = (undefined4 *)(param_4 + 0x78);
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
        } while (param_2 != iVar6);
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0xa8;
    return;
  }
  iVar3 = *(int *)(param_1 + 4);
  uVar5 = param_3;
  if (iVar3 != 0) {
    uVar1 = (iVar6 - iVar3) / 0xa8;
    if (param_3 < uVar1) {
      uVar5 = uVar1;
    }
    if (iVar3 != 0) {
      iVar6 = (iVar6 - iVar3) / 0xa8;
      goto LAB_0052fa0f;
    }
  }
  iVar6 = 0;
LAB_0052fa0f:
  iVar6 = iVar6 + uVar5;
  iVar3 = iVar6;
  if (iVar6 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 * 0xa8);
  pvVar7 = pvVar4;
  for (iVar3 = *(int *)(param_1 + 4); iVar3 != param_2; iVar3 = iVar3 + 0xa8) {
    FUN_0052fd20(pvVar7,iVar3);
    pvVar7 = (void *)((int)pvVar7 + 0xa8);
  }
  if (param_3 != 0) {
    param_2 = param_3;
    pvVar8 = pvVar7;
    do {
      FUN_0052fd20(pvVar8,param_4);
      pvVar8 = (void *)((int)pvVar8 + 0xa8);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar9 != iVar3) {
    iVar2 = param_3 * 0xa8 - iVar9;
    do {
      FUN_0052fd20((int)pvVar7 + iVar9 + iVar2,iVar9);
      iVar9 = iVar9 + 0xa8;
    } while (iVar9 != iVar3);
  }
  iVar9 = *(int *)(param_1 + 8);
  for (iVar3 = *(int *)(param_1 + 4); iVar3 != iVar9; iVar3 = iVar3 + 0xa8) {
    FUN_0050c8f0();
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)(iVar6 * 0xa8 + (int)pvVar4);
  if (*(int *)(param_1 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xa8;
  }
  *(void **)(param_1 + 4) = pvVar4;
  *(void **)(param_1 + 8) = (void *)((iVar6 + param_3) * 0xa8 + (int)pvVar4);
  return;
}

