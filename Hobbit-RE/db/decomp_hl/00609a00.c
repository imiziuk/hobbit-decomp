
void __thiscall FUN_00609a00(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  switch(param_2) {
  case 5:
    uVar11 = 1;
    FUN_005af120(1);
    FUN_004a28c0(uVar11);
    iVar6 = FUN_00567b20(2);
    *(undefined4 *)(iVar6 + 0xc) = 0x24;
    uVar9 = FUN_005be240();
    break;
  case 6:
    iVar6 = FUN_00567b20(1);
    uVar9 = FUN_005be240();
    *(undefined8 *)(iVar6 + 0x10) = uVar9;
    *(undefined4 *)(iVar6 + 0x2c) = 8;
    *(uint *)(iVar6 + 0x5c) = *(uint *)(iVar6 + 0x5c) | 4;
    *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_1 + 0xc4);
    goto LAB_00609e5b;
  case 7:
    fStack_c = *(float *)(*(int *)(param_1 + 8) + 200);
    fStack_4 = *(float *)(*(int *)(param_1 + 8) + 0xd0);
    fVar8 = (float10)FUN_0064ca10(fStack_c,fStack_4);
    *(float *)(param_1 + 0xe0) = (float)fVar8;
    fVar1 = DAT_006e92e8 / SQRT(fStack_c * fStack_c + fStack_4 * fStack_4);
    iVar6 = FUN_0064cf30(fVar1);
    if (iVar6 == 0) {
      fStack_4 = 0.0;
      fStack_c = DAT_006e92e4;
      fStack_8 = DAT_006e92e4;
    }
    else {
      fStack_4 = fStack_4 * fVar1;
      fStack_c = fStack_c * fVar1;
      fStack_8 = fVar1 * DAT_006e92e4;
    }
    fVar1 = *(float *)(param_1 + 0xc4);
    fStack_c = fVar1 * fStack_c;
    fStack_8 = fVar1 * fStack_8;
    fStack_4 = fStack_4 * fVar1;
    iVar6 = FUN_00567b20(1);
    uVar9 = FUN_005be240();
    *(undefined8 *)(iVar6 + 0x10) = uVar9;
    *(uint *)(iVar6 + 0x5c) = *(uint *)(iVar6 + 0x5c) | 4;
    *(float *)(iVar6 + 0x18) = fStack_c;
    *(float *)(iVar6 + 0x1c) = fStack_8;
    *(float *)(iVar6 + 0x20) = fStack_4;
    *(undefined4 *)(iVar6 + 0x2c) = 0xb;
    goto LAB_00609e5b;
  case 8:
    iVar6 = FUN_00567b20(2);
    *(undefined4 *)(iVar6 + 0xc) = 3;
    uVar9 = FUN_005be240();
    break;
  case 9:
  case 10:
    iVar6 = FUN_00567b20(2);
    *(undefined4 *)(iVar6 + 0xc) = 0x23;
    uVar9 = FUN_005be240();
    break;
  case 0xb:
    iVar6 = FUN_00567b20(1);
    uVar9 = FUN_005be240();
    *(undefined8 *)(iVar6 + 0x10) = uVar9;
    *(undefined4 *)(iVar6 + 0x2c) = 7;
    iVar7 = FUN_005befc0(7);
    if (iVar7 == 0) {
      *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_1 + 0xc0);
    }
    else {
      uVar9 = FUN_005be240();
      iVar7 = FUN_004021c0(uVar9);
      if (iVar7 != 0) {
        iVar7 = *(int *)(param_1 + 8);
        fStack_4 = *(float *)(iVar7 + 0xd0);
        fStack_c = *(float *)(iVar7 + 200);
        fVar1 = DAT_006e92e8 /
                SQRT(fStack_c * fStack_c +
                     *(float *)(iVar7 + 0xcc) * *(float *)(iVar7 + 0xcc) + fStack_4 * fStack_4);
        iVar7 = FUN_0064cf30(fVar1);
        fStack_8 = DAT_006e92e4;
        fVar2 = DAT_006e92e4;
        fVar3 = DAT_006e92e4;
        if (iVar7 != 0) {
          fVar2 = fStack_c * fVar1;
          fVar3 = fStack_4 * fVar1;
        }
        fVar1 = *(float *)(param_1 + 0xc0);
        fStack_c = fVar1 * fVar2;
        *(float *)(iVar6 + 0x18) = fStack_c;
        fStack_8 = fStack_8 * fVar1;
        *(float *)(iVar6 + 0x1c) = fStack_8;
        *(float *)(iVar6 + 0x20) = fVar3 * fVar1;
      }
    }
    FUN_005af9f0(iVar6);
    uVar11 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x174);
    uVar10 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x170);
    uVar12 = 1;
    FUN_005afc20(uVar10,uVar11,1);
    FUN_005c7dd0(uVar10,uVar11,uVar12);
    FUN_005be710(param_2);
    return;
  case 0xc:
    iVar6 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar6 + 0x48) = 0;
    *(undefined4 *)(iVar6 + 0x4c) = 0;
    iVar6 = FUN_00567b20(2);
    uVar9 = FUN_005be240();
    *(undefined4 *)(iVar6 + 0xc) = 0x1a;
    break;
  case 0xd:
    iVar6 = FUN_00567b20(2);
    *(undefined4 *)(iVar6 + 0xc) = 5;
    uVar9 = FUN_005be240();
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
    *(undefined4 *)(iVar6 + 0x2c) = 8;
    *(uint *)(iVar6 + 0x5c) = *(uint *)(iVar6 + 0x5c) & 0xfffffffb;
    goto LAB_00609e5b;
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
    goto LAB_00609e5b;
  case 0x10:
    iVar6 = FUN_00567b20(3);
    *(undefined4 *)(iVar6 + 0xc) = 1;
    goto LAB_00609e5b;
  case 0x11:
    iVar6 = FUN_00567b20(2);
    *(undefined4 *)(iVar6 + 0xc) = 9;
    uVar9 = FUN_005be240();
    break;
  default:
    goto switchD_00609a22_default;
  }
  *(undefined8 *)(iVar6 + 0x40) = uVar9;
LAB_00609e5b:
  FUN_005af9f0(iVar6);
switchD_00609a22_default:
  FUN_005be710(param_2);
  return;
}

