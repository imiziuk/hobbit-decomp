
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0061b3f0(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  undefined8 uVar13;
  char *pcVar14;
  float fStack_20;
  
  piVar4 = (int *)FUN_005af120();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  piVar4 = (int *)FUN_0041bcc0();
  pfVar6 = (float *)(**(code **)(*piVar4 + 0x28))();
  fVar1 = *pfVar6 - *pfVar5;
  fVar3 = pfVar6[2] - pfVar5[2];
  switch(param_2) {
  case 5:
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005be240();
    pcVar14 = s_LookAround_00749abc;
    break;
  case 6:
    piVar4 = (int *)FUN_005af120();
    iVar10 = (**(code **)(*piVar4 + 0x154))();
    fVar1 = *(float *)(iVar10 + 0x20);
    fVar11 = (float10)FUN_0064ca10(*(undefined4 *)(*(int *)(param_1 + 8) + 400),
                                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x198));
    fVar11 = (fVar11 - (float10)fVar1) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar11) ||
       (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
      fVar11 = (float10)FUN_0064c6b0((float)fVar11,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar11) {
      do {
        fVar11 = fVar11 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar11);
    }
    if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar11 = fVar11 + (float10)_DAT_006e9598;
      } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
    }
    fStack_20 = (float)(fVar11 - (float10)_DAT_006e9368);
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005af0f0();
    fVar1 = _DAT_006f5c78;
    *(undefined8 *)(iVar10 + 0x40) = uVar13;
    if (fVar1 < fStack_20) goto LAB_0061b935;
    goto LAB_0061b5af;
  case 7:
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005be240();
    pcVar14 = s_CombatWalkForward_00749ac8;
    break;
  case 8:
    iVar10 = FUN_00567b20(1);
    uVar13 = FUN_005be240();
    *(undefined8 *)(iVar10 + 0x10) = uVar13;
    FUN_0064a2e0(&DAT_00749adc);
    *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)(param_1 + 100);
    goto LAB_0061bf6e;
  case 9:
    iVar10 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar10 + 0x48) = 0;
    *(undefined4 *)(iVar10 + 0x4c) = 0;
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005be240();
    pcVar14 = s_SlapLow_00749aa4;
    break;
  case 10:
    iVar10 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar10 + 0x48) = 0;
    *(undefined4 *)(iVar10 + 0x4c) = 0;
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x98) * 2 + 1;
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005be240();
    pcVar14 = s_GroundSmash_00749a98;
    break;
  case 0xb:
    iVar10 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar10 + 0x48) = 0;
    *(undefined4 *)(iVar10 + 0x4c) = 0;
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005be240();
    pcVar14 = s_VerticalSmash_00749a7c;
    break;
  case 0xc:
    iVar10 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar10 + 0x48) = 0;
    *(undefined4 *)(iVar10 + 0x4c) = 0;
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005be240();
    pcVar14 = s_JumpSmash_00749a70;
    break;
  case 0xd:
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005be240();
    pcVar14 = s_PoundToIdle_00749a8c;
    break;
  case 0xe:
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005af0f0();
    pcVar14 = &DAT_00749a68;
    break;
  case 0xf:
    piVar4 = (int *)FUN_005af120();
    iVar10 = (**(code **)(*piVar4 + 0x154))();
    fVar1 = *(float *)(iVar10 + 0x20);
    fVar11 = (float10)FUN_0064ca10(*(undefined4 *)(*(int *)(param_1 + 8) + 400),
                                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x198));
    fVar11 = (fVar11 - (float10)fVar1) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar11) ||
       (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
      fVar11 = (float10)FUN_0064c6b0((float)fVar11,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar11) {
      do {
        fVar11 = fVar11 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar11);
    }
    if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar11 = fVar11 + (float10)_DAT_006e9598;
      } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
    }
    fVar11 = fVar11 - (float10)_DAT_006e9368;
    iVar10 = FUN_00567b20(2);
    *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(iVar10 + 0x44) = *(undefined4 *)(param_1 + 0xa4);
    goto LAB_0061b920;
  case 0x10:
    iVar10 = FUN_005af120();
    *(undefined4 *)(iVar10 + 0x25c) = 0;
    iVar10 = FUN_00567b20(1);
    *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(param_1 + 0xa4);
    FUN_0064a2e0(s_RunToCenter_00749a5c);
    *(uint *)(iVar10 + 0x5c) = *(uint *)(iVar10 + 0x5c) & 0xfffffffb;
    goto LAB_0061bf6e;
  case 0x11:
    piVar4 = (int *)FUN_005af120();
    iVar10 = (**(code **)(*piVar4 + 0x154))();
    fVar1 = *(float *)(iVar10 + 0x20);
    fVar11 = (float10)FUN_0064ca10(*(undefined4 *)(*(int *)(param_1 + 8) + 400),
                                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x198));
    fVar11 = (fVar11 - (float10)fVar1) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar11) ||
       (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
      fVar11 = (float10)FUN_0064c6b0((float)fVar11,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar11) {
      do {
        fVar11 = fVar11 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar11);
    }
    if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar11 = fVar11 + (float10)_DAT_006e9598;
      } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
    }
    fVar11 = fVar11 - (float10)_DAT_006e9368;
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005af0f0();
    *(undefined8 *)(iVar10 + 0x40) = uVar13;
LAB_0061b920:
    fStack_20 = (float)fVar11;
    if (fStack_20 <= _DAT_006f5c78) {
LAB_0061b5af:
      if (fStack_20 <= DAT_006e92e4) {
        if (fStack_20 < _DAT_006f5c74 == (NAN(fStack_20) || NAN(_DAT_006f5c74))) {
          pcVar14 = s_CombatTurnRight_00749a24;
        }
        else {
          pcVar14 = s_CombatTurnRight90_00749a34;
        }
      }
      else {
        pcVar14 = s_CombatTurnLeft_00749aac;
      }
    }
    else {
LAB_0061b935:
      pcVar14 = s_CombatTurnLeft90_00749a48;
    }
    goto LAB_0061bf68;
  case 0x12:
    iVar10 = FUN_00567b20(2);
    FUN_0064a2e0(s_ChargePrep_00749a18);
    piVar4 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    if (piVar4 == (int *)0x0) {
      uVar13 = FUN_0054bad0(0x2f,0,0);
      *(undefined8 *)(param_1 + 0x90) = uVar13;
      piVar4 = (int *)FUN_004021c0(uVar13);
    }
    piVar7 = (int *)FUN_0041bcc0();
    iVar2 = *piVar4;
    uVar8 = (**(code **)(*piVar7 + 0x28))(0);
    (**(code **)(iVar2 + 0x14))(uVar8);
    *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(iVar10 + 0x44) = *(undefined4 *)(param_1 + 0x94);
    goto LAB_0061bf6e;
  case 0x13:
    piVar4 = (int *)FUN_005af120();
    iVar10 = (**(code **)(*piVar4 + 0x154))();
    fVar1 = *(float *)(iVar10 + 0x20);
    fVar11 = (float10)FUN_0064ca10(*(undefined4 *)(*(int *)(param_1 + 8) + 400),
                                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x198));
    fVar11 = (fVar11 - (float10)fVar1) + (float10)_DAT_006e9368;
    fStack_20 = (float)fVar11;
    if (((float10)_DAT_006e95a0 < fVar11) ||
       (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
      fVar11 = (float10)FUN_0064c6b0(fStack_20,0x40c90fdb);
      fStack_20 = (float)fVar11;
    }
    if ((float10)_DAT_006e9598 <= fVar11) {
      do {
        fVar11 = fVar11 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar11);
      fStack_20 = (float)fVar11;
    }
    if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar11 = fVar11 + (float10)_DAT_006e9598;
      } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
      fStack_20 = (float)fVar11;
    }
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005af0f0();
    fStack_20 = fStack_20 - _DAT_006e9368;
    *(undefined8 *)(iVar10 + 0x40) = uVar13;
    if (fStack_20 <= DAT_006e92e4) {
      pcVar14 = s_ChargeTurnRight_007499f8;
    }
    else {
      pcVar14 = s_ChargeTurnLeft_00749a08;
    }
    goto LAB_0061bf68;
  case 0x14:
    iVar10 = FUN_00567b20(1);
    FUN_0064a2e0(s_ChargeAttack_007499e8);
    if (*(int *)(param_1 + 0x90) == 0 && *(int *)(param_1 + 0x94) == 0) {
      uVar13 = FUN_0054bad0(0x2f,0,0);
      *(undefined8 *)(param_1 + 0x90) = uVar13;
    }
    piVar4 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    piVar7 = (int *)FUN_0041bcc0();
    iVar2 = *piVar4;
    uVar8 = (**(code **)(*piVar7 + 0x28))(0);
    (**(code **)(iVar2 + 0x14))(uVar8);
    piVar7 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
    if (piVar7 != (int *)0x0) {
      piVar9 = (int *)FUN_005af120();
      pfVar5 = (float *)(**(code **)(*piVar9 + 0x28))();
      pfVar6 = (float *)(**(code **)(*piVar7 + 0x28))();
      fVar11 = (float10)FUN_0064ca10(*pfVar6 - *pfVar5,pfVar6[2] - pfVar5[2]);
      fVar12 = (float10)FUN_0064ca10(fVar1,fVar3);
      fVar11 = ((float10)(float)fVar11 - fVar12) + (float10)_DAT_006e9368;
      if (((float10)_DAT_006e95a0 < fVar11) ||
         (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
        fVar11 = (float10)FUN_0064c6b0((float)fVar11,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar11) {
        do {
          fVar11 = fVar11 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar11);
      }
      if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar11 = fVar11 + (float10)_DAT_006e9598;
        } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
      }
      fVar11 = fVar11 - (float10)_DAT_006e9368;
      fVar12 = (float10)*(int *)(param_1 + 0xc0) * (float10)_DAT_006e9368 * (float10)_DAT_006e957c;
      if ((fVar11 < fVar12 != (fVar11 == fVar12)) && (-fVar12 <= fVar11)) {
        iVar2 = *piVar4;
        uVar8 = (**(code **)(*piVar7 + 0x28))(0);
        (**(code **)(iVar2 + 0x14))(uVar8);
      }
    }
    piVar7 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
    if (piVar7 != (int *)0x0) {
      piVar9 = (int *)FUN_005af120();
      pfVar5 = (float *)(**(code **)(*piVar9 + 0x28))();
      pfVar6 = (float *)(**(code **)(*piVar7 + 0x28))();
      fVar11 = (float10)FUN_0064ca10(*pfVar6 - *pfVar5,pfVar6[2] - pfVar5[2]);
      fVar12 = (float10)FUN_0064ca10(fVar1,fVar3);
      fVar11 = ((float10)(float)fVar11 - fVar12) + (float10)_DAT_006e9368;
      if (((float10)_DAT_006e95a0 < fVar11) ||
         (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
        fVar11 = (float10)FUN_0064c6b0((float)fVar11,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar11) {
        do {
          fVar11 = fVar11 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar11);
      }
      if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar11 = fVar11 + (float10)_DAT_006e9598;
        } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
      }
      fVar11 = fVar11 - (float10)_DAT_006e9368;
      fVar12 = (float10)*(int *)(param_1 + 0xc0) * (float10)_DAT_006e9368 * (float10)_DAT_006e957c;
      if ((fVar11 < fVar12 != (fVar11 == fVar12)) && (-fVar12 <= fVar11)) {
        iVar2 = *piVar4;
        uVar8 = (**(code **)(*piVar7 + 0x28))(0);
        (**(code **)(iVar2 + 0x14))(uVar8);
      }
    }
    piVar7 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
    if (piVar7 != (int *)0x0) {
      piVar9 = (int *)FUN_005af120();
      pfVar5 = (float *)(**(code **)(*piVar9 + 0x28))();
      pfVar6 = (float *)(**(code **)(*piVar7 + 0x28))();
      fVar11 = (float10)FUN_0064ca10(*pfVar6 - *pfVar5,pfVar6[2] - pfVar5[2]);
      fVar12 = (float10)FUN_0064ca10(fVar1,fVar3);
      fVar11 = ((float10)(float)fVar11 - fVar12) + (float10)_DAT_006e9368;
      if (((float10)_DAT_006e95a0 < fVar11) ||
         (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
        fVar11 = (float10)FUN_0064c6b0((float)fVar11,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar11) {
        do {
          fVar11 = fVar11 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar11);
      }
      if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar11 = fVar11 + (float10)_DAT_006e9598;
        } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
      }
      fVar11 = fVar11 - (float10)_DAT_006e9368;
      fVar12 = (float10)*(int *)(param_1 + 0xc0) * (float10)_DAT_006e9368 * (float10)_DAT_006e957c;
      if ((fVar11 < fVar12 != (fVar11 == fVar12)) && (-fVar12 <= fVar11)) {
        iVar2 = *piVar4;
        uVar8 = (**(code **)(*piVar7 + 0x28))(0);
        (**(code **)(iVar2 + 0x14))(uVar8);
      }
    }
    *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(param_1 + 0x94);
    goto LAB_0061bf6e;
  case 0x15:
    iVar10 = FUN_00567b20(2);
    uVar13 = FUN_005af0f0();
    pcVar14 = s_ChargeRecover_007499d8;
    break;
  default:
    goto switchD_0061b438_default;
  }
  *(undefined8 *)(iVar10 + 0x40) = uVar13;
LAB_0061bf68:
  FUN_0064a2e0(pcVar14);
LAB_0061bf6e:
  FUN_005af9f0(iVar10);
switchD_0061b438_default:
  FUN_005be710(param_2);
  return;
}

