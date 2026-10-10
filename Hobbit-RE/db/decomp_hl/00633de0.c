
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00633de0(int param_1,int param_2)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  float10 fVar10;
  undefined8 uVar11;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  uVar11 = FUN_005be240();
  piVar4 = (int *)FUN_004021c0(uVar11);
  FUN_005be240();
  if (param_2 == 5) {
    piVar7 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    if (piVar7 == (int *)0x0) {
      iVar5 = FUN_005befc0(0xd);
      if (iVar5 != 0) goto LAB_00633fbf;
      iVar5 = FUN_005befc0(0xc);
      if (iVar5 != 0) goto LAB_00633fbf;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x54);
      iVar5 = FUN_00567b20(2);
      *(undefined4 *)(iVar5 + 0xc) = 3;
    }
    else {
      iVar5 = FUN_00567b20(1);
      if (piVar4 == (int *)0x0) {
        pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
        fStack_18 = *pfVar8;
        fStack_14 = pfVar8[1];
        fStack_10 = pfVar8[2];
      }
      else {
        pfVar8 = (float *)(**(code **)(*piVar4 + 0x28))();
        pfVar9 = (float *)(**(code **)(*piVar7 + 0x28))();
        fStack_18 = *pfVar9 - *pfVar8;
        fStack_14 = pfVar9[1] - pfVar8[1];
        fStack_10 = pfVar9[2] - pfVar8[2];
      }
      fVar10 = (float10)FUN_0049e280();
      fVar1 = (float10)_DAT_006f57d4;
      fVar2 = DAT_006e92e8 /
              SQRT(fStack_18 * fStack_18 + fStack_14 * fStack_14 + fStack_10 * fStack_10);
      iVar6 = FUN_0064cf30(fVar2);
      if (iVar6 == 0) {
        fStack_10 = 0.0;
        fVar3 = DAT_006e92e4;
        fVar2 = DAT_006e92e4;
      }
      else {
        fVar2 = fVar2 * (float)(fVar10 * fVar1);
        fStack_10 = fStack_10 * fVar2;
        fVar3 = fVar2 * fStack_18;
        fVar2 = fStack_14 * fVar2;
      }
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(param_1 + 0x4c);
      *(float *)(iVar5 + 0x18) = fVar3;
      *(float *)(iVar5 + 0x20) = fStack_10;
      *(float *)(iVar5 + 0x1c) = fVar2;
      *(undefined4 *)(iVar5 + 0x2c) = 8;
    }
  }
  else {
    if (param_2 != 6) goto LAB_00633fbf;
    iVar5 = FUN_00567b20(2);
    uVar11 = FUN_005be240();
    *(undefined8 *)(iVar5 + 0x40) = uVar11;
    iVar6 = FUN_005befc0(0xd);
    if (iVar6 == 0) {
      *(undefined4 *)(iVar5 + 0xc) = 3;
    }
    else {
      *(undefined4 *)(iVar5 + 0xc) = 0x17;
    }
  }
  FUN_005af9f0(iVar5);
LAB_00633fbf:
  FUN_005be710(param_2);
  return;
}

