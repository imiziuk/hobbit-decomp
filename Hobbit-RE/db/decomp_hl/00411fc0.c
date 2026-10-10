
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00411fc0(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = FUN_004131a0();
  if (iVar4 == 0) {
    return;
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    piVar5 = (int *)FUN_00413260();
    if ((piVar5 == (int *)0x0) || (iVar4 = (**(code **)(*piVar5 + 0x108))(0), iVar4 == 0)) {
      iVar4 = FUN_00413240();
      if ((iVar4 != 0) && (iVar4 = FUN_004de640(), iVar4 != 0)) {
        FUN_00412510(1);
        iVar4 = FUN_00413280();
        if (iVar4 != 0) {
          FUN_0046a550();
          FUN_00429100();
          FUN_004125d0(0,0);
        }
        iVar4 = FUN_00413220();
        FUN_004c6f40(s_launch_0071ef60);
        FUN_004c75f0(0);
        FUN_004c74d0(0x3f800000);
        FUN_004c77d0(0);
        *(ushort *)(iVar4 + 0x15a) = *(ushort *)(iVar4 + 0x15a) & 0xbfff ^ 0x4000;
        FUN_00429100();
        *param_1 = 1;
      }
      FUN_00429100();
      FUN_00429100();
    }
    else {
      FUN_00412510(0);
      *param_1 = 1;
      FUN_00429100();
    }
    goto LAB_0041240e;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      iVar4 = FUN_00412b80(&local_c);
      if (iVar4 != 0) {
        param_1[0x19] = local_8;
        param_1[0x18] = local_c;
        param_1[0x1a] = local_4;
        param_1[0x1e] = 0;
        piVar5 = (int *)FUN_00413200();
        if (piVar5 != (int *)0x0) {
          FUN_004d22c0(0);
          (**(code **)(*piVar5 + 0x14))(param_1 + 0x18,0);
          FUN_004c7660(0);
          FUN_004c74d0(0x3f800000);
          FUN_004c75f0(0);
          FUN_004c77d0(1);
          *(ushort *)((int)piVar5 + 0x15a) = *(ushort *)((int)piVar5 + 0x15a) & 0xbfff ^ 0x4000;
          FUN_004ab3e0(0);
          uVar11 = 1;
          uVar6 = FUN_004d0b20(s_barrel_launch_0071ef50);
          FUN_004d0a70(uVar6,uVar11);
        }
        FUN_00429100();
      }
      iVar4 = FUN_004c7410();
      if (iVar4 != 0) {
        *param_1 = 3;
      }
    }
    else if ((iVar2 == 3) && (iVar4 = FUN_00412bb0(), iVar4 == 0)) {
      iVar4 = FUN_00413240();
      if (iVar4 != 0) {
        FUN_004de610(0);
      }
      FUN_00429100();
      uVar11 = 0;
      uVar6 = FUN_004d0b20(s_barrel_launch_0071ef50);
      FUN_004d0a70(uVar6,uVar11);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = 0;
    }
    goto LAB_0041240e;
  }
  param_1[9] = param_1[8];
  if (param_1[0x14] == 0 && param_1[0x15] == 0) {
    uVar10 = FUN_00412720(param_1[8]);
    *(undefined8 *)(param_1 + 0x14) = uVar10;
  }
  fVar7 = (float10)FUN_00412850();
  fVar8 = (float10)FUN_004129f0();
  fVar9 = (fVar8 - (float10)(float)fVar7) + (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar9) ||
     (fVar9 < (float10)_DAT_006e959c != (NAN(fVar9) || NAN((float10)_DAT_006e959c)))) {
    fVar9 = (float10)FUN_0064c6b0((float)fVar9,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar9) {
    do {
      fVar9 = fVar9 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar9);
  }
  if (fVar9 < (float10)DAT_006e92e4 != (NAN(fVar9) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar9 = fVar9 + (float10)_DAT_006e9598;
    } while (fVar9 < (float10)DAT_006e92e4 != (NAN(fVar9) || NAN((float10)DAT_006e92e4)));
  }
  fVar1 = (float)(fVar9 - (float10)_DAT_006e9368);
  fVar3 = param_2 * _DAT_006e9578;
  if (fVar1 < DAT_006e92e4 == (NAN(fVar1) || NAN(DAT_006e92e4))) {
    if (fVar3 < fVar1 == (NAN(fVar3) || NAN(fVar1))) goto LAB_004121c3;
  }
  else {
    fVar3 = -fVar3;
    if (fVar3 <= fVar1) {
LAB_004121c3:
      fVar3 = fVar1;
    }
  }
  fVar3 = fVar3 + (float)fVar7;
  FUN_00412910(fVar3);
  fVar7 = ((float10)fVar3 - (float10)(float)fVar8) + (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar7) ||
     (fVar7 < (float10)_DAT_006e959c != (NAN(fVar7) || NAN((float10)_DAT_006e959c)))) {
    fVar7 = (float10)FUN_0064c6b0((float)fVar7,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar7) {
    do {
      fVar7 = fVar7 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar7);
  }
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar7 = fVar7 + (float10)_DAT_006e9598;
    } while (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4)));
  }
  fVar7 = fVar7 - (float10)_DAT_006e9368;
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    fVar7 = -fVar7;
  }
  if (fVar7 < (float10)_DAT_006e9594 != (NAN(fVar7) || NAN((float10)_DAT_006e9594))) {
    piVar5 = (int *)FUN_00412ae0(&local_c);
    param_1[0x1b] = *piVar5;
    param_1[0x1c] = piVar5[1];
    param_1[0x1d] = piVar5[2];
    FUN_004c7660(0);
    FUN_004c75f0(0);
    FUN_004c74d0(0x3f800000);
    FUN_004c77d0(0);
    *(ushort *)(iVar4 + 0x15a) = *(ushort *)(iVar4 + 0x15a) & 0xbfff ^ 0x4000;
    *param_1 = 2;
  }
LAB_0041240e:
  FUN_00429100();
  iVar4 = FUN_00412bb0();
  if (iVar4 != 0) {
    FUN_00412bf0(param_2);
  }
  return;
}

