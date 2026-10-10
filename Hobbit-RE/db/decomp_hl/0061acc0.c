
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061acc0(int param_1,float param_2,undefined4 param_3)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  bool bVar9;
  float10 fVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_005af0f0();
  iVar3 = FUN_004021c0(uVar11);
  FUN_005af0f0();
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0041bcc0();
  if (*(float *)(param_1 + 0x9c) < _DAT_006e9364 ==
      (NAN(*(float *)(param_1 + 0x9c)) || NAN(_DAT_006e9364))) {
    *(undefined4 *)(param_1 + 0x9c) = 0x42c80000;
  }
  else {
    *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) - _DAT_006f5be4 * param_2;
  }
  if (*(float *)(param_1 + 0x9c) < DAT_006e92e4 !=
      (NAN(*(float *)(param_1 + 0x9c)) || NAN(DAT_006e92e4))) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  FUN_0061ac80();
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 0:
    goto switchD_0061ad5e_caseD_0;
  default:
    iVar3 = FUN_0061c300(&param_3);
    if (iVar3 != 0) goto LAB_0061b377;
switchD_0061ad5e_caseD_0:
    iVar3 = FUN_0061c1f0(&param_3);
    if (iVar3 != 0) goto LAB_0061b377;
    iVar3 = FUN_0061bfd0(&param_3);
    goto joined_r0x0061b1f3;
  case 3:
    if (*(float *)(param_1 + 0x9c) < _DAT_006e9364) break;
    piVar4 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    if (piVar4 == (int *)0x0) goto LAB_0061b377;
    piVar5 = (int *)FUN_005af120();
    iVar3 = (**(code **)(*piVar5 + 0x154))();
    fVar2 = *(float *)(iVar3 + 0x20);
    piVar5 = (int *)FUN_005af120();
    pfVar6 = (float *)(**(code **)(*piVar4 + 0x28))();
    pfVar7 = (float *)(**(code **)(*piVar5 + 0x28))();
    fVar10 = (float10)FUN_0064ca10(*pfVar6 - *pfVar7,pfVar6[2] - pfVar7[2]);
    fVar10 = (fVar10 - (float10)fVar2) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar10) ||
       (fVar10 < (float10)_DAT_006e959c != (NAN(fVar10) || NAN((float10)_DAT_006e959c)))) {
      fVar10 = (float10)FUN_0064c6b0((float)fVar10,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar10) {
      do {
        fVar10 = fVar10 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar10);
    }
    if (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar10 = fVar10 + (float10)_DAT_006e9598;
      } while (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4)));
    }
    fVar10 = fVar10 - (float10)_DAT_006e9368;
    if (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4))) {
      fVar10 = -fVar10;
    }
    if ((float10)_DAT_006f5bd8 < fVar10) {
      param_3 = 0xf;
      goto LAB_0061b377;
    }
    goto LAB_0061af3d;
  case 5:
    FUN_005af120();
    iVar3 = FUN_00595200();
    if ((iVar3 == 0) && ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0)) goto LAB_0061b377;
    goto LAB_0061b1d1;
  case 6:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_0061b377;
    goto LAB_0061ae8f;
  case 7:
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x130);
    goto joined_r0x0061ad6f;
  case 8:
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x130);
joined_r0x0061ad6f:
    if ((bVar1 & 1) == 0) goto LAB_0061b377;
    goto LAB_0061b370;
  case 9:
  case 0xb:
    FUN_005af120();
    iVar3 = FUN_00595200();
    if (iVar3 == 0) goto switchD_0061ad5e_caseD_15;
    goto LAB_0061ae67;
  case 10:
    FUN_005af120();
    iVar3 = FUN_00595200();
    if (iVar3 == 0) {
      if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
        param_3 = 0xd;
      }
      goto LAB_0061b377;
    }
    break;
  case 0xc:
    FUN_005af120();
    iVar3 = FUN_00595200();
    if ((iVar3 == 0) && ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0)) goto LAB_0061b377;
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      FUN_0061c410();
    }
    iVar3 = FUN_0061c300(&param_3);
    if ((iVar3 != 0) || (iVar3 = FUN_0061c1f0(&param_3), iVar3 != 0)) goto LAB_0061b377;
    iVar3 = FUN_0061bfd0(&param_3);
    goto joined_r0x0061af1d;
  case 0xd:
    FUN_005af120();
    iVar3 = FUN_00595200();
    if (iVar3 == 0) {
      bVar9 = (*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0;
LAB_0061b1b7:
      if (bVar9) goto LAB_0061b377;
    }
    break;
  case 0xe:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) {
      FUN_005af120();
      iVar3 = FUN_00595200();
      bVar9 = iVar3 == 0;
      goto LAB_0061b1b7;
    }
    break;
  case 0xf:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_0061b377;
LAB_0061af3d:
    param_3 = 0x10;
    goto LAB_0061b377;
  case 0x10:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_0061b377;
    piVar4 = (int *)FUN_005af120();
    iVar3 = (**(code **)(*piVar4 + 0x154))();
    fVar2 = *(float *)(iVar3 + 0x20);
    fVar10 = (float10)FUN_0064ca10(*(undefined4 *)(*(int *)(param_1 + 8) + 400),
                                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x198));
    fVar10 = (fVar10 - (float10)fVar2) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar10) ||
       (fVar10 < (float10)_DAT_006e959c != (NAN(fVar10) || NAN((float10)_DAT_006e959c)))) {
      fVar10 = (float10)FUN_0064c6b0((float)fVar10,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar10) {
      do {
        fVar10 = fVar10 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar10);
    }
    if (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar10 = fVar10 + (float10)_DAT_006e9598;
      } while (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4)));
    }
    fVar10 = fVar10 - (float10)_DAT_006e9368;
    if (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4))) {
      fVar10 = -fVar10;
    }
    if ((float10)_DAT_006f5bd8 < fVar10) {
      param_3 = 0x11;
      goto LAB_0061b377;
    }
    goto LAB_0061b053;
  case 0x11:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_0061b377;
LAB_0061b053:
    param_3 = 0x12;
    goto LAB_0061b377;
  case 0x12:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_0061b377;
    piVar4 = (int *)FUN_005af120();
    iVar3 = (**(code **)(*piVar4 + 0x154))();
    fVar2 = *(float *)(iVar3 + 0x20);
    fVar10 = (float10)FUN_0064ca10(*(undefined4 *)(*(int *)(param_1 + 8) + 400),
                                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x198));
    fVar10 = (fVar10 - (float10)fVar2) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar10) ||
       (fVar10 < (float10)_DAT_006e959c != (NAN(fVar10) || NAN((float10)_DAT_006e959c)))) {
      fVar10 = (float10)FUN_0064c6b0((float)fVar10,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar10) {
      do {
        fVar10 = fVar10 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar10);
    }
    if (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar10 = fVar10 + (float10)_DAT_006e9598;
      } while (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4)));
    }
    fVar10 = fVar10 - (float10)_DAT_006e9368;
    if (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4))) {
      fVar10 = -fVar10;
    }
    if ((float10)_DAT_006f5bd8 < fVar10) {
      param_3 = 0x13;
      goto LAB_0061b377;
    }
    goto LAB_0061b169;
  case 0x13:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_0061b377;
LAB_0061b169:
    param_3 = 0x14;
    goto LAB_0061b377;
  case 0x14:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      param_3 = 0x15;
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    goto LAB_0061b377;
  case 0x15:
switchD_0061ad5e_caseD_15:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_0061b377;
LAB_0061ae67:
    iVar3 = FUN_0061c300(&param_3);
    if ((iVar3 != 0) || (iVar3 = FUN_0061c1f0(&param_3), iVar3 != 0)) goto LAB_0061b377;
LAB_0061ae8f:
    iVar3 = FUN_0061bfd0(&param_3);
joined_r0x0061af1d:
    if (iVar3 != 0) goto LAB_0061b377;
    goto LAB_0061b370;
  }
  iVar3 = FUN_0061c300(&param_3);
  if (iVar3 == 0) {
LAB_0061b1d1:
    iVar3 = FUN_0061c1f0(&param_3);
    if (iVar3 == 0) {
      iVar3 = FUN_0061bfd0(&param_3);
joined_r0x0061b1f3:
      if (iVar3 == 0) {
LAB_0061b370:
        FUN_0061c0c0(&param_3);
      }
    }
  }
LAB_0061b377:
  uVar8 = FUN_005be370(param_2,param_3);
  return uVar8;
}

