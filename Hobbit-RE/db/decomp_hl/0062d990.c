
void __thiscall FUN_0062d990(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  switch(param_2) {
  case 5:
    uVar10 = 1;
    FUN_005af120(1);
    FUN_004a28c0(uVar10);
    iVar4 = FUN_00567b20(2);
    *(undefined4 *)(iVar4 + 0xc) = 0x24;
    uVar9 = FUN_005be240();
    *(undefined8 *)(iVar4 + 0x40) = uVar9;
    break;
  case 6:
    iVar4 = FUN_00567b20(1);
    uVar9 = FUN_005be240();
    *(undefined8 *)(iVar4 + 0x10) = uVar9;
    *(undefined4 *)(iVar4 + 0x2c) = 8;
    *(uint *)(iVar4 + 0x5c) = *(uint *)(iVar4 + 0x5c) | 4;
    iVar7 = FUN_005befc0(7);
    if (iVar7 == 0) {
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(param_1 + 0x78);
    }
    else {
      iVar7 = *(int *)(param_1 + 8);
      fStack_4 = *(float *)(iVar7 + 0xd0);
      fStack_c = *(float *)(iVar7 + 200);
      fVar1 = DAT_006e92e8 /
              SQRT(fStack_c * fStack_c +
                   *(float *)(iVar7 + 0xcc) * *(float *)(iVar7 + 0xcc) + fStack_4 * fStack_4);
      iVar7 = FUN_0064cf30(fVar1);
      fVar2 = DAT_006e92e4;
      fVar3 = DAT_006e92e4;
      if (iVar7 != 0) {
        fVar2 = fStack_c * fVar1;
        fVar3 = fStack_4 * fVar1;
      }
      fVar1 = *(float *)(param_1 + 0x78);
      fStack_c = fVar1 * fVar2;
      uVar10 = *(undefined4 *)(param_1 + 0x7c);
      *(float *)(iVar4 + 0x18) = fStack_c;
      *(undefined4 *)(iVar4 + 0x1c) = uVar10;
      *(float *)(iVar4 + 0x20) = fVar3 * fVar1;
    }
    break;
  case 7:
    fStack_c = *(float *)(*(int *)(param_1 + 8) + 200);
    fStack_4 = *(float *)(*(int *)(param_1 + 8) + 0xd0);
    fVar8 = (float10)FUN_0064ca10(fStack_c,fStack_4);
    *(float *)(param_1 + 0x98) = (float)fVar8;
    fVar1 = DAT_006e92e8 / SQRT(fStack_c * fStack_c + fStack_4 * fStack_4);
    iVar4 = FUN_0064cf30(fVar1);
    if (iVar4 == 0) {
      fStack_4 = 0.0;
      fStack_c = DAT_006e92e4;
      fStack_8 = DAT_006e92e4;
    }
    else {
      fStack_4 = fStack_4 * fVar1;
      fStack_c = fStack_c * fVar1;
      fStack_8 = fVar1 * DAT_006e92e4;
    }
    fVar1 = *(float *)(param_1 + 0x78);
    fStack_c = fVar1 * fStack_c;
    fStack_8 = fVar1 * fStack_8;
    fStack_4 = fStack_4 * fVar1;
    iVar4 = FUN_005befc0(7);
    if (iVar4 != 0) {
      fStack_8 = *(float *)(param_1 + 0x7c);
    }
    iVar4 = FUN_00567b20(1);
    uVar9 = FUN_005be240();
    *(undefined8 *)(iVar4 + 0x10) = uVar9;
    *(uint *)(iVar4 + 0x5c) = *(uint *)(iVar4 + 0x5c) | 4;
    *(float *)(iVar4 + 0x18) = fStack_c;
    *(float *)(iVar4 + 0x1c) = fStack_8;
    *(float *)(iVar4 + 0x20) = fStack_4;
    *(undefined4 *)(iVar4 + 0x2c) = 0xb;
    break;
  case 8:
    iVar4 = FUN_00567b20(2);
    *(undefined4 *)(iVar4 + 0xc) = 3;
    uVar9 = FUN_005be240();
    *(undefined8 *)(iVar4 + 0x40) = uVar9;
    break;
  case 9:
    iVar4 = *(int *)(param_1 + 8);
    fStack_c = *(float *)(iVar4 + 400);
    fStack_8 = *(float *)(iVar4 + 0x194);
    fStack_4 = *(float *)(iVar4 + 0x198);
    iVar4 = FUN_00647b10(0,100);
    if (((*(int *)(param_1 + 0x80) < iVar4) ||
        (SQRT(fStack_c * fStack_c + fStack_8 * fStack_8 + fStack_4 * fStack_4) <
         *(float *)(param_1 + 0x88))) || (iVar4 = FUN_005befc0(0x11), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar4 = FUN_00567b20(1);
      uVar9 = FUN_005be240();
      *(undefined8 *)(iVar4 + 0x10) = uVar9;
      *(undefined4 *)(iVar4 + 0x2c) = 7;
      iVar7 = FUN_005befc0(7);
      if (iVar7 == 0) {
        *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(param_1 + 0x74);
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
          fVar2 = DAT_006e92e4;
          fVar3 = DAT_006e92e4;
          if (iVar7 != 0) {
            fVar2 = fStack_c * fVar1;
            fVar3 = fStack_4 * fVar1;
          }
          fVar1 = *(float *)(param_1 + 0x74);
          fStack_c = fVar1 * fVar2;
          uVar10 = *(undefined4 *)(param_1 + 0x7c);
          *(float *)(iVar4 + 0x18) = fStack_c;
          *(undefined4 *)(iVar4 + 0x1c) = uVar10;
          *(float *)(iVar4 + 0x20) = fVar3 * fVar1;
        }
      }
    }
    else {
      iVar4 = FUN_00567b20(1);
      uVar9 = FUN_005be240();
      *(undefined8 *)(iVar4 + 0x10) = uVar9;
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(param_1 + 0x84);
      *(undefined4 *)(iVar4 + 0x2c) = 7;
    }
    break;
  case 10:
    iVar4 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x4c) = 0;
    if (*(int *)(param_1 + 0x8c) == 0) {
      if (*(int *)(param_1 + 0x48) == 0) {
        iVar4 = FUN_00567b20(2);
        uVar9 = FUN_005be240();
        *(undefined8 *)(iVar4 + 0x40) = uVar9;
        *(undefined4 *)(iVar4 + 0xc) = 0x1a;
      }
      else {
        iVar4 = FUN_00567b20(2);
        uVar9 = FUN_005be240();
        *(undefined8 *)(iVar4 + 0x40) = uVar9;
        *(undefined4 *)(iVar4 + 0xc) = 0x1b;
      }
    }
    else {
      iVar4 = FUN_00567b20(2);
      uVar9 = FUN_005be240();
      *(undefined8 *)(iVar4 + 0x40) = uVar9;
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0x8c);
    }
    break;
  case 0xb:
    iVar4 = FUN_00567b20(2);
    *(undefined4 *)(iVar4 + 0xc) = 5;
    uVar9 = FUN_005be240();
    *(undefined8 *)(iVar4 + 0x40) = uVar9;
    break;
  case 0xc:
    piVar5 = (int *)FUN_005af120();
    (**(code **)(*piVar5 + 0x28))();
    piVar5 = (int *)FUN_005af120();
    pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
    fStack_c = *pfVar6;
    fStack_8 = pfVar6[1];
    fStack_4 = pfVar6[2];
    FUN_004357e0(&fStack_c);
    FUN_005b3350();
    iVar4 = FUN_00567b20(1);
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x14) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 8;
    *(uint *)(iVar4 + 0x5c) = *(uint *)(iVar4 + 0x5c) & 0xfffffffb;
    break;
  case 0xd:
    iVar4 = FUN_00647b10(0,1);
    if (iVar4 == 0) {
      iVar4 = FUN_00567b20(2);
      *(undefined4 *)(iVar4 + 0xc) = 0x14;
    }
    else {
      iVar4 = FUN_00567b20(2);
      *(undefined4 *)(iVar4 + 0xc) = 0x13;
    }
    break;
  case 0xe:
    iVar4 = FUN_00567b20(2);
    *(undefined4 *)(iVar4 + 0xc) = 0x2e;
    break;
  case 0xf:
    iVar4 = FUN_00567b20(3);
    *(undefined4 *)(iVar4 + 0xc) = 1;
    break;
  default:
    goto switchD_0062d9b2_caseD_10;
  case 0x11:
    iVar4 = FUN_00567b20(2);
    FUN_0064a2e0(s_CutWeb_0074a2f0);
  }
  FUN_005af9f0(iVar4);
switchD_0062d9b2_caseD_10:
  FUN_005be710(param_2);
  return;
}

