
void __thiscall FUN_00637240(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  float10 fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  switch(param_2) {
  case 5:
    uVar12 = 1;
    FUN_005af120(1);
    FUN_004a28c0(uVar12);
    iVar5 = FUN_00567b20(2);
    *(undefined4 *)(iVar5 + 0xc) = 0x24;
    uVar10 = FUN_005be240();
    goto LAB_006378a0;
  case 6:
    goto switchD_00637263_caseD_6;
  case 7:
    iVar5 = FUN_00567b20(1);
    uVar10 = FUN_005be240();
    *(undefined8 *)(iVar5 + 0x10) = uVar10;
    *(undefined4 *)(iVar5 + 0x2c) = 8;
    *(uint *)(iVar5 + 0x5c) = *(uint *)(iVar5 + 0x5c) & 0xfffffffb;
    iVar8 = FUN_005befc0(7);
    if (iVar8 == 0) {
      *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(param_1 + 0x68);
    }
    else {
      iVar8 = *(int *)(param_1 + 8);
      fStack_c = *(float *)(iVar8 + 200);
      fStack_4 = *(float *)(iVar8 + 0xd0);
      fVar1 = DAT_006e92e8 /
              SQRT(fStack_4 * fStack_4 +
                   fStack_c * fStack_c + *(float *)(iVar8 + 0xcc) * *(float *)(iVar8 + 0xcc));
      iVar8 = FUN_0064cf30(fVar1);
      fVar2 = DAT_006e92e4;
      fVar3 = DAT_006e92e4;
      if (iVar8 != 0) {
        fVar2 = fStack_c * fVar1;
        fVar3 = fStack_4 * fVar1;
      }
      fVar1 = *(float *)(param_1 + 0x68);
      fStack_c = fVar1 * fVar2;
      uVar12 = *(undefined4 *)(param_1 + 0x6c);
      *(float *)(iVar5 + 0x18) = fStack_c;
      *(undefined4 *)(iVar5 + 0x1c) = uVar12;
      *(float *)(iVar5 + 0x20) = fVar3 * fVar1;
    }
    break;
  case 8:
    fStack_c = *(float *)(*(int *)(param_1 + 8) + 200);
    fStack_4 = *(float *)(*(int *)(param_1 + 8) + 0xd0);
    fVar9 = (float10)FUN_0064ca10(fStack_c,fStack_4);
    *(float *)(param_1 + 0x88) = (float)fVar9;
    fVar1 = DAT_006e92e8 / SQRT(fStack_4 * fStack_4 + fStack_c * fStack_c);
    iVar5 = FUN_0064cf30(fVar1);
    if (iVar5 == 0) {
      fStack_4 = 0.0;
      fStack_c = DAT_006e92e4;
      fStack_8 = DAT_006e92e4;
    }
    else {
      fStack_4 = fStack_4 * fVar1;
      fStack_c = fStack_c * fVar1;
      fStack_8 = fVar1 * DAT_006e92e4;
    }
    fVar1 = *(float *)(param_1 + 0x68);
    fStack_c = fVar1 * fStack_c;
    fStack_8 = fVar1 * fStack_8;
    fStack_4 = fStack_4 * fVar1;
    iVar5 = FUN_005befc0(7);
    if (iVar5 != 0) {
      fStack_8 = *(float *)(param_1 + 0x6c);
    }
    iVar5 = FUN_00567b20(1);
    uVar10 = FUN_005be240();
    *(undefined8 *)(iVar5 + 0x10) = uVar10;
    *(uint *)(iVar5 + 0x5c) = *(uint *)(iVar5 + 0x5c) | 4;
    *(float *)(iVar5 + 0x18) = fStack_c;
    *(float *)(iVar5 + 0x1c) = fStack_8;
    *(float *)(iVar5 + 0x20) = fStack_4;
    *(undefined4 *)(iVar5 + 0x2c) = 0xb;
    break;
  case 9:
  case 0x13:
    iVar5 = FUN_00567b20(2);
    *(undefined4 *)(iVar5 + 0xc) = 3;
    uVar10 = FUN_005be240();
    goto LAB_006378a0;
  case 10:
    iVar5 = *(int *)(param_1 + 8);
    fStack_c = *(float *)(iVar5 + 400);
    fStack_8 = *(float *)(iVar5 + 0x194);
    fStack_4 = *(float *)(iVar5 + 0x198);
    iVar5 = FUN_00647b10(0,100);
    if (((*(int *)(param_1 + 0x70) < iVar5) ||
        (SQRT(fStack_8 * fStack_8 + fStack_4 * fStack_4 + fStack_c * fStack_c) <
         *(float *)(param_1 + 0x78))) || (iVar5 = FUN_005befc0(0x11), iVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar5 = FUN_00567b20(1);
      uVar10 = FUN_005be240();
      *(undefined8 *)(iVar5 + 0x10) = uVar10;
      *(undefined4 *)(iVar5 + 0x2c) = 7;
      iVar8 = FUN_005befc0(7);
      if (iVar8 == 0) {
        *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(param_1 + 100);
      }
      else {
        uVar10 = FUN_005be240();
        iVar8 = FUN_004021c0(uVar10);
        if (iVar8 != 0) {
          iVar8 = *(int *)(param_1 + 8);
          fStack_c = *(float *)(iVar8 + 200);
          fStack_4 = *(float *)(iVar8 + 0xd0);
          fVar1 = DAT_006e92e8 /
                  SQRT(*(float *)(iVar8 + 0xcc) * *(float *)(iVar8 + 0xcc) +
                       fStack_4 * fStack_4 + fStack_c * fStack_c);
          iVar8 = FUN_0064cf30(fVar1);
          fVar2 = DAT_006e92e4;
          fVar3 = DAT_006e92e4;
          if (iVar8 != 0) {
            fVar2 = fStack_c * fVar1;
            fVar3 = fStack_4 * fVar1;
          }
          fVar1 = *(float *)(param_1 + 100);
          fStack_c = fVar1 * fVar2;
          uVar12 = *(undefined4 *)(param_1 + 0x6c);
          *(float *)(iVar5 + 0x18) = fStack_c;
          *(undefined4 *)(iVar5 + 0x1c) = uVar12;
          *(float *)(iVar5 + 0x20) = fVar3 * fVar1;
          *(uint *)(iVar5 + 0x5c) = *(uint *)(iVar5 + 0x5c) & 0xfffffffb;
          goto LAB_006376c8;
        }
      }
      *(uint *)(iVar5 + 0x5c) = *(uint *)(iVar5 + 0x5c) & 0xfffffffb;
    }
    else {
      iVar5 = FUN_00567b20(1);
      uVar10 = FUN_005be240();
      *(undefined8 *)(iVar5 + 0x10) = uVar10;
      *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(param_1 + 0x74);
      *(undefined4 *)(iVar5 + 0x2c) = 7;
    }
LAB_006376c8:
    FUN_005af9f0(iVar5);
    uVar12 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x174);
    uVar11 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x170);
    uVar13 = 1;
    FUN_005afc20(uVar11,uVar12,1);
    FUN_005c7dd0(uVar11,uVar12,uVar13);
    FUN_005be710(param_2);
    return;
  case 0xb:
    iVar5 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar5 + 0x48) = 0;
    *(undefined4 *)(iVar5 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 0x7c) == 0) {
      if (*(int *)(param_1 + 0x48) == 0) {
        iVar5 = FUN_00567b20(2);
        uVar10 = FUN_005be240();
        *(undefined4 *)(iVar5 + 0xc) = 0x1a;
      }
      else {
        iVar5 = FUN_00567b20(2);
        uVar10 = FUN_005be240();
        *(undefined4 *)(iVar5 + 0xc) = 0x1b;
      }
      goto LAB_006378a0;
    }
    iVar5 = FUN_00567b20(2);
    uVar10 = FUN_005be240();
    *(undefined8 *)(iVar5 + 0x40) = uVar10;
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0x7c);
    break;
  case 0xc:
    iVar5 = FUN_00567b20(2);
    *(undefined4 *)(iVar5 + 0xc) = 10;
    uVar10 = FUN_005be240();
    goto LAB_006378a0;
  case 0xd:
    iVar5 = FUN_00567b20(2);
    *(undefined4 *)(iVar5 + 0xc) = 5;
    uVar10 = FUN_005be240();
    goto LAB_006378a0;
  case 0xe:
    piVar6 = (int *)FUN_005af120();
    (**(code **)(*piVar6 + 0x28))();
    piVar6 = (int *)FUN_005af120();
    pfVar4 = (float *)(**(code **)(*piVar6 + 0x28))();
    fStack_c = *pfVar4;
    fStack_8 = pfVar4[1];
    fStack_4 = pfVar4[2];
    FUN_004357e0(&fStack_c);
    FUN_005b3350();
    iVar5 = FUN_00567b20(1);
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x2c) = 8;
    *(uint *)(iVar5 + 0x5c) = *(uint *)(iVar5 + 0x5c) & 0xfffffffb;
    break;
  case 0xf:
    iVar5 = FUN_00647b10(0,1);
    if (iVar5 == 0) {
      iVar5 = FUN_00567b20(2);
      *(undefined4 *)(iVar5 + 0xc) = 0x14;
    }
    else {
      iVar5 = FUN_00567b20(2);
      *(undefined4 *)(iVar5 + 0xc) = 0x13;
    }
    break;
  case 0x10:
    iVar5 = FUN_00567b20(3);
    *(undefined4 *)(iVar5 + 0xc) = 1;
    break;
  case 0x11:
    iVar5 = FUN_00567b20(2);
    *(undefined4 *)(iVar5 + 0xc) = 9;
    uVar10 = FUN_005be240();
LAB_006378a0:
    *(undefined8 *)(iVar5 + 0x40) = uVar10;
    break;
  case 0x12:
    iVar5 = FUN_00567b20(1);
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x2c) = 8;
    piVar6 = (int *)FUN_005af120();
    puVar7 = (undefined4 *)(**(code **)(*piVar6 + 0x2c))();
    *(undefined4 *)(iVar5 + 0x18) = *puVar7;
    *(undefined4 *)(iVar5 + 0x1c) = puVar7[1];
    *(undefined4 *)(iVar5 + 0x20) = puVar7[2];
    *(uint *)(iVar5 + 0x5c) = *(uint *)(iVar5 + 0x5c) & 0xfffffffb;
    FUN_005af9f0(iVar5);
    goto switchD_00637263_caseD_6;
  default:
    goto switchD_00637263_default;
  }
LAB_006378a7:
  FUN_005af9f0(iVar5);
switchD_00637263_default:
  FUN_005be710(param_2);
  return;
switchD_00637263_caseD_6:
  iVar5 = FUN_00567b20(0);
  uVar10 = FUN_005be240();
  *(undefined8 *)(iVar5 + 0x10) = uVar10;
  goto LAB_006378a7;
}

