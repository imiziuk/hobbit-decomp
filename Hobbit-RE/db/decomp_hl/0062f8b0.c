
void __thiscall FUN_0062f8b0(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  switch(param_2) {
  case 7:
    iVar6 = FUN_00567b20(1);
    uVar7 = FUN_005be240();
    *(undefined8 *)(iVar6 + 0x10) = uVar7;
    *(undefined4 *)(iVar6 + 0x2c) = 8;
    *(uint *)(iVar6 + 0x5c) = *(uint *)(iVar6 + 0x5c) & 0xfffffffb;
    *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_1 + 0x68);
    break;
  case 8:
    fStack_4 = *(float *)(*(int *)(param_1 + 8) + 0xd0);
    fStack_c = *(float *)(*(int *)(param_1 + 8) + 200);
    fVar1 = *(float *)(param_1 + 0x68);
    fStack_10 = DAT_006e92e8 / SQRT(fStack_c * fStack_c + fStack_4 * fStack_4);
    iVar6 = FUN_0064cf30(fStack_10);
    if (iVar6 == 0) {
      fStack_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
    }
    else {
      fStack_10 = fStack_10 * fVar1;
      fStack_18 = fStack_c * fStack_10;
      fStack_14 = DAT_006e92e4 * fStack_10;
      fStack_10 = fStack_4 * fStack_10;
    }
    iVar6 = FUN_005befc0(7);
    if (iVar6 != 0) {
      fStack_14 = *(float *)(param_1 + 0x6c);
    }
    iVar6 = FUN_00567b20(1);
    uVar7 = FUN_005be240();
    *(undefined8 *)(iVar6 + 0x10) = uVar7;
    *(uint *)(iVar6 + 0x5c) = *(uint *)(iVar6 + 0x5c) | 4;
    *(float *)(iVar6 + 0x18) = fStack_18;
    *(float *)(iVar6 + 0x1c) = fStack_14;
    *(float *)(iVar6 + 0x20) = fStack_10;
    break;
  case 9:
    iVar6 = FUN_00567b20(2);
    *(undefined4 *)(iVar6 + 0xc) = 3;
    uVar7 = FUN_005be240();
    goto LAB_0062fc59;
  case 10:
    iVar6 = *(int *)(param_1 + 8);
    fVar1 = *(float *)(iVar6 + 400);
    fVar2 = *(float *)(iVar6 + 0x194);
    fVar3 = *(float *)(iVar6 + 0x198);
    iVar6 = FUN_00647b10(0,100);
    if (((*(int *)(param_1 + 0x70) < iVar6) ||
        (SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) < *(float *)(param_1 + 0x78))) ||
       (iVar6 = FUN_005befc0(0x11), iVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar6 = FUN_00567b20(1);
      uVar7 = FUN_005be240();
      *(undefined8 *)(iVar6 + 0x10) = uVar7;
      *(undefined4 *)(iVar6 + 0x2c) = 7;
      *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_1 + 100);
    }
    else {
      iVar6 = FUN_00567b20(1);
      uVar7 = FUN_005be240();
      *(undefined8 *)(iVar6 + 0x10) = uVar7;
      *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_1 + 0x74);
      *(undefined4 *)(iVar6 + 0x2c) = 7;
    }
    FUN_005af9f0(iVar6);
    uVar9 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x174);
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x170);
    uVar10 = 1;
    FUN_005afc20(uVar8,uVar9,1);
    FUN_005c7dd0(uVar8,uVar9,uVar10);
    FUN_005be710(param_2);
    return;
  case 0xb:
    iVar6 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar6 + 0x48) = 0;
    *(undefined4 *)(iVar6 + 0x4c) = 0;
    if (*(int *)(param_1 + 0x7c) == 0) {
      if (*(int *)(param_1 + 0x48) == 0) {
        iVar6 = FUN_00567b20(2);
        uVar7 = FUN_005be240();
        *(undefined4 *)(iVar6 + 0xc) = 0x1a;
      }
      else {
        iVar6 = FUN_00567b20(2);
        uVar7 = FUN_005be240();
        *(undefined4 *)(iVar6 + 0xc) = 0x1b;
      }
      goto LAB_0062fc59;
    }
    iVar6 = FUN_00567b20(2);
    uVar7 = FUN_005be240();
    *(undefined8 *)(iVar6 + 0x40) = uVar7;
    *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(param_1 + 0x7c);
    break;
  default:
    goto switchD_0062f8d2_caseD_c;
  case 0xd:
    iVar6 = FUN_00567b20(2);
    *(undefined4 *)(iVar6 + 0xc) = 5;
    uVar7 = FUN_005be240();
LAB_0062fc59:
    *(undefined8 *)(iVar6 + 0x40) = uVar7;
    break;
  case 0xe:
    piVar4 = (int *)FUN_005af120();
    (**(code **)(*piVar4 + 0x28))();
    piVar4 = (int *)FUN_005af120();
    pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
    fStack_c = *pfVar5;
    fStack_8 = pfVar5[1];
    fStack_4 = pfVar5[2];
    FUN_004357e0(&fStack_c);
    FUN_005b3350();
    iVar6 = FUN_00567b20(1);
    *(undefined4 *)(iVar6 + 0x10) = 0;
    *(undefined4 *)(iVar6 + 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x24) = 0x42c80000;
    *(undefined4 *)(iVar6 + 0x2c) = 8;
    break;
  case 0xf:
    iVar6 = FUN_00647b10(0,1);
    if (iVar6 == 0) {
      iVar6 = FUN_00567b20(2);
      *(undefined4 *)(iVar6 + 0xc) = 0x14;
    }
    else {
      iVar6 = FUN_00567b20(2);
      *(undefined4 *)(iVar6 + 0xc) = 0x13;
    }
  }
  FUN_005af9f0(iVar6);
switchD_0062f8d2_caseD_c:
  FUN_005be710(param_2);
  return;
}

