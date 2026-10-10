
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0062f2c0(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  *(float *)(param_1 + 0x50) = param_2 + *(float *)(param_1 + 0x50);
  uVar15 = FUN_005be240();
  piVar9 = (int *)FUN_004021c0(uVar15);
  FUN_005be240();
  if (piVar9 == (int *)0x0) {
    return 0;
  }
  FUN_0041bcc0();
  fVar4 = param_2 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x58) = fVar4;
  if ((*(uint *)(*(int *)(param_1 + 8) + 0x130) & 0x1000) != 0) {
    *(float *)(param_1 + 0x58) = fVar4 + param_2;
  }
  if ((*(uint *)(*(int *)(param_1 + 8) + 0x130) & 0x400) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar10 = FUN_005afc20();
  if (iVar10 == 0) {
    return 0;
  }
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 8:
    iVar10 = *(int *)(param_1 + 8);
    fVar4 = *(float *)(iVar10 + 400);
    fVar5 = *(float *)(iVar10 + 0x194);
    fVar6 = *(float *)(iVar10 + 0x198);
    fStack_24 = *(float *)(iVar10 + 200);
    fStack_1c = *(float *)(iVar10 + 0xd0);
    fVar7 = *(float *)(param_1 + 0x68);
    fVar1 = DAT_006e92e8 / SQRT(fStack_24 * fStack_24 + fStack_1c * fStack_1c);
    iVar10 = FUN_0064cf30(fVar1);
    if (iVar10 == 0) {
      fStack_24 = 0.0;
      fStack_20 = 0.0;
      fStack_1c = 0.0;
    }
    else {
      fVar1 = fVar1 * fVar7;
      fStack_24 = fStack_24 * fVar1;
      fStack_20 = DAT_006e92e4 * fVar1;
      fStack_1c = fStack_1c * fVar1;
    }
    pfVar12 = (float *)(**(code **)(*piVar9 + 0x28))();
    fVar7 = *pfVar12;
    fVar1 = pfVar12[1];
    fVar2 = pfVar12[2];
    piVar9 = (int *)FUN_005af120();
    pfVar12 = (float *)(**(code **)(*piVar9 + 0x28))();
    fVar7 = (fStack_24 + fVar7) - *pfVar12;
    fVar1 = (fStack_20 + fVar1) - pfVar12[1];
    fVar2 = (fStack_1c + fVar2) - pfVar12[2];
    fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
    fVar5 = *(float *)(param_1 + 0x68) + _DAT_006e9358;
    if (fVar5 < fVar4 == (NAN(fVar5) || NAN(fVar4))) {
      fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar7 * fVar7);
      if (fVar4 < _DAT_006e9984 == (fVar4 == _DAT_006e9984)) {
        if (*(float *)(param_1 + 0x5c) <= *(float *)(param_1 + 0x58)) {
          param_3 = 10;
        }
        else {
          uVar3 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
          if ((uVar3 & 1) != 0) {
            param_3 = 10 - (uint)((uVar3 & 4) != 0);
          }
        }
      }
      else {
        param_3 = 9;
      }
    }
    else {
      param_3 = 7;
    }
    break;
  case 9:
    iVar10 = *(int *)(param_1 + 8);
    fVar4 = *(float *)(iVar10 + 0x194);
    fVar5 = *(float *)(iVar10 + 400);
    fStack_24 = *(float *)(iVar10 + 200);
    fVar6 = *(float *)(iVar10 + 0x198);
    fStack_1c = *(float *)(iVar10 + 0xd0);
    fVar7 = *(float *)(param_1 + 0x68);
    fVar1 = DAT_006e92e8 / SQRT(fStack_1c * fStack_1c + fStack_24 * fStack_24);
    iVar10 = FUN_0064cf30(fVar1);
    if (iVar10 == 0) {
      fStack_24 = 0.0;
      fStack_20 = 0.0;
      fStack_1c = 0.0;
    }
    else {
      fVar1 = fVar1 * fVar7;
      fStack_24 = fStack_24 * fVar1;
      fStack_20 = DAT_006e92e4 * fVar1;
      fStack_1c = fStack_1c * fVar1;
    }
    pfVar12 = (float *)(**(code **)(*piVar9 + 0x28))();
    fVar7 = *pfVar12;
    fVar1 = pfVar12[1];
    fVar2 = pfVar12[2];
    piVar9 = (int *)FUN_005af120();
    pfVar12 = (float *)(**(code **)(*piVar9 + 0x28))();
    fVar7 = (fStack_24 + fVar7) - *pfVar12;
    fVar1 = (fStack_20 + fVar1) - pfVar12[1];
    fVar2 = (fStack_1c + fVar2) - pfVar12[2];
    iVar10 = FUN_005befc0(10);
    bVar8 = *(float *)(param_1 + 0x5c) <= *(float *)(param_1 + 0x58);
    if (iVar10 == 0) {
      if ((!bVar8) ||
         (iVar10 = *(int *)(param_1 + 8),
         fVar4 = SQRT(*(float *)(iVar10 + 0x194) * *(float *)(iVar10 + 0x194) +
                      *(float *)(iVar10 + 0x198) * *(float *)(iVar10 + 0x198) +
                      *(float *)(iVar10 + 400) * *(float *)(iVar10 + 400)),
         fVar4 < *(float *)(param_1 + 100) == (fVar4 == *(float *)(param_1 + 100)))) {
        if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
          param_3 = 9;
        }
        break;
      }
LAB_0062f751:
      if (*(int *)(param_1 + 0x48) == 0) {
        *(undefined4 *)(param_1 + 0x7c) = 0x1a;
        param_3 = 0xb;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x1b;
        param_3 = 0xb;
      }
      break;
    }
    if (bVar8) {
      param_3 = 10;
      break;
    }
    fVar4 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
    fVar5 = *(float *)(param_1 + 0x68) + _DAT_006e9358;
    if (fVar5 < fVar4 != (NAN(fVar5) || NAN(fVar4))) {
      param_3 = 7;
      break;
    }
    if ((_DAT_006e99c4 < SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar7 * fVar7)) &&
       (iVar10 = FUN_005befc0(4), iVar10 != 0)) {
      param_3 = 8;
      break;
    }
  case 7:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
switchD_0062f350_caseD_c:
      param_3 = 9;
    }
    break;
  case 10:
    piVar11 = (int *)FUN_005af120();
    pfVar12 = (float *)(**(code **)(*piVar11 + 0x28))();
    pfVar13 = (float *)(**(code **)(*piVar9 + 0x28))();
    fVar4 = SQRT((pfVar13[1] - pfVar12[1]) * (pfVar13[1] - pfVar12[1]) +
                 (pfVar13[2] - pfVar12[2]) * (pfVar13[2] - pfVar12[2]) +
                 (*pfVar13 - *pfVar12) * (*pfVar13 - *pfVar12));
    fVar5 = *(float *)(param_1 + 0x68) + _DAT_006e9358;
    if (fVar5 < fVar4 == (NAN(fVar5) || NAN(fVar4))) {
      uVar3 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
      if ((uVar3 & 1) == 0) break;
      if ((uVar3 & 4) == 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      else if (*(float *)(param_1 + 0x5c) <= *(float *)(param_1 + 0x58)) goto LAB_0062f751;
      param_3 = 0xe;
      break;
    }
    goto LAB_0062f7f7;
  case 0xb:
    iVar10 = *(int *)(param_1 + 8);
    if ((*(byte *)(iVar10 + 0x130) & 1) != 0) {
      uVar14 = *(undefined4 *)(iVar10 + 0x174);
      uVar16 = *(undefined4 *)(iVar10 + 0x170);
      uVar17 = 0;
      FUN_005afc20(uVar16,uVar14,0);
      FUN_005c7dd0(uVar16,uVar14,uVar17);
      *(undefined4 *)(param_1 + 0x58) = 0;
      param_3 = 9;
    }
    break;
  default:
    goto switchD_0062f350_caseD_c;
  case 0xd:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      param_3 = 7;
    }
    break;
  case 0xe:
    uVar3 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
    if ((uVar3 & 1) == 0) break;
    if (((uVar3 & 4) != 0) && (iVar10 = FUN_00647b10(0,100), iVar10 < 10)) {
      param_3 = 0xd;
      break;
    }
LAB_0062f7f7:
    param_3 = 7;
    break;
  case 0xf:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      param_3 = 9;
    }
  }
  uVar14 = FUN_005be370(param_2,param_3);
  return uVar14;
}

