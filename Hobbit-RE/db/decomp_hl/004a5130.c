
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a5130(int *param_1,int param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  undefined8 uVar11;
  longlong lVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar5 = (int)param_4;
  pfVar1 = (float *)((int)param_4 + 0x10);
  FUN_004a6780(*(undefined4 *)((int)param_4 + 0x28),pfVar1);
  pfVar6 = (float *)(**(code **)(*param_1 + 0x28))();
  fStack_48 = *pfVar1 - *pfVar6;
  fStack_40 = *(float *)(iVar5 + 0x18) - pfVar6[2];
  param_4 = DAT_006e92e8 / SQRT(fStack_48 * fStack_48 + fStack_40 * fStack_40);
  iVar7 = FUN_0064cf30(param_4);
  if (iVar7 == 0) {
    fStack_40 = 0.0;
    fStack_48 = DAT_006e92e4;
    fStack_44 = DAT_006e92e4;
  }
  else {
    fStack_40 = fStack_40 * param_4;
    fStack_48 = fStack_48 * param_4;
    fStack_44 = param_4 * DAT_006e92e4;
  }
  fStack_18 = (float)param_1[0x11];
  fStack_48 = fStack_48 * _DAT_006ec0ac;
  fStack_14 = (float)param_1[0x12];
  fStack_10 = (float)param_1[0x13];
  fStack_44 = fStack_44 * _DAT_006ec0ac;
  fStack_40 = fStack_40 * _DAT_006ec0ac;
  FUN_004357e0(param_1 + 0x14);
  FUN_00401f00(fStack_c + fStack_18,fStack_8 + fStack_14,fStack_4 + fStack_10);
  FUN_00402160(&fStack_3c,&fStack_24,0x3f000000);
  fStack_30 = fStack_3c + fStack_48;
  fStack_2c = fStack_38 + fStack_44;
  fStack_28 = fStack_34 + fStack_40;
  if ((*(int *)(iVar5 + 0x28) == 1) && (*(int *)(iVar5 + 0x34) == 0)) {
    pcVar13 = s_HitSting_0072b0f0;
  }
  else if (*(int *)(iVar5 + 0x34) == 2) {
    pcVar13 = s_Sparks_007205e8;
  }
  else {
    pcVar13 = s_HitStick_00720608;
  }
  fStack_48 = 0.0;
  fStack_3c = _DAT_0072a8fc;
  fStack_44 = 0.0;
  fStack_38 = _DAT_0072a8fc;
  fStack_40 = 0.0;
  fStack_34 = _DAT_0072a8fc;
  FUN_00488d30(pcVar13,&fStack_30,&fStack_48,&fStack_3c);
  iVar7 = FUN_0041bcc0();
  if ((param_2 == *(int *)(iVar7 + 8)) && (param_3 == (float)*(int *)(iVar7 + 0xc))) {
    FUN_0041bcc0();
    FUN_00422360();
  }
  uVar11 = FUN_0041bcd0();
  if ((param_2 == (int)uVar11) && (param_3 == (float)(int)((ulonglong)uVar11 >> 0x20))) {
    uVar15 = 0x3f800000;
    if (*(int *)(iVar5 + 0x34) == 0) {
      uVar14 = 5;
    }
    else {
      uVar14 = 6;
    }
    FUN_0041bcc0(uVar14,0x3f800000);
    FUN_0044c120(uVar14,uVar15);
  }
  if (*(int *)(iVar5 + 0x28) == 0x12) {
    FUN_00467710(s_Freeze_0072b0e8);
  }
  if (*(int *)(iVar5 + 0x28) == 0x13) {
    FUN_00467710(&DAT_0072b0e0);
  }
  iVar7 = 0;
  piVar8 = (int *)FUN_004021c0(param_2,param_3);
  if ((piVar8 != (int *)0x0) && (iVar9 = (**(code **)(*piVar8 + 0x24))(), iVar9 != 0)) {
    iVar7 = (**(code **)(*piVar8 + 0x130))();
  }
  iVar9 = param_1[0x6c];
  param_4 = 0.0;
  if ((((iVar9 == 0x59) || (iVar9 == 0x5a)) || (iVar9 == 0x5b)) || (iVar9 == 0x1d)) {
    param_4 = 0.75;
  }
  switch(*(undefined4 *)(iVar5 + 0x28)) {
  case 0:
  case 7:
    if (iVar7 == 0) {
      if (*(int *)(iVar5 + 0x34) != 0) goto switchD_004a53d1_caseD_3;
      iVar7 = FUN_00647b10(0,1);
      uVar14 = 1;
      if (iVar7 == 0) {
        uVar15 = (**(code **)(*param_1 + 0x28))(1);
        pcVar13 = s_BiteImpactFlesh_0072b090;
      }
      else {
        uVar15 = (**(code **)(*param_1 + 0x28))();
        pcVar13 = s_ClawImpactFlesh_0072b0a0;
      }
    }
    else {
      fVar10 = (float10)FUN_00647b30(0,0x3f800000);
      if (fVar10 < (float10)param_4 == (NAN(fVar10) || NAN((float10)param_4))) {
        switch(*(undefined4 *)(iVar5 + 0x34)) {
        case 0:
          uVar14 = 1;
          uVar15 = (**(code **)(*param_1 + 0x28))(1);
          pcVar13 = s_EnemyBladeImpactFlesh_007209f8;
          break;
        case 1:
          uVar14 = 1;
          uVar15 = (**(code **)(*param_1 + 0x28))(1);
          pcVar13 = s_EnemyBladeImapctWood_0072b0b0;
          break;
        case 2:
          goto switchD_004a5416_caseD_2;
        case 3:
          uVar14 = 1;
          uVar15 = (**(code **)(*param_1 + 0x28))(1);
          pcVar13 = s_EnemyBladeImpactStone_0072b0c8;
          break;
        default:
          goto switchD_004a53d1_caseD_3;
        }
      }
      else {
switchD_004a5416_caseD_2:
        uVar14 = 1;
        uVar15 = (**(code **)(*param_1 + 0x28))(1);
        pcVar13 = s_EnemyBladeImpactEnemyBlade_0071df98;
      }
    }
    break;
  case 1:
  case 4:
    switch(*(undefined4 *)(iVar5 + 0x34)) {
    case 0:
      uVar14 = 1;
      uVar15 = (**(code **)(*param_1 + 0x28))(1);
      pcVar13 = s_StingImpactFlesh_0072ac34;
      break;
    case 1:
      uVar14 = 1;
      uVar15 = (**(code **)(*param_1 + 0x28))(1);
      pcVar13 = s_StingImpactWood_0072b048;
      break;
    case 2:
      uVar14 = 1;
      uVar15 = (**(code **)(*param_1 + 0x28))(1);
      pcVar13 = s_StingImpactEenemyBlade_007209a8;
      break;
    case 3:
      uVar14 = 1;
      uVar15 = (**(code **)(*param_1 + 0x28))(1);
      pcVar13 = s_StingImpactStone_0072b058;
      break;
    default:
      goto switchD_004a53d1_caseD_3;
    }
    break;
  case 2:
  case 5:
    switch(*(undefined4 *)(iVar5 + 0x34)) {
    case 0:
      uVar14 = 1;
      uVar15 = (**(code **)(*param_1 + 0x28))(1);
      pcVar13 = s_StickImpactFlesh_0072ac20;
      break;
    case 1:
      uVar14 = 1;
      uVar15 = (**(code **)(*param_1 + 0x28))(1);
      pcVar13 = s_StickImpactWood_0072b06c;
      break;
    case 2:
      uVar14 = 1;
      uVar15 = (**(code **)(*param_1 + 0x28))(1);
      pcVar13 = s_StickImpactEnemyBlade_0072abdc;
      break;
    case 3:
      uVar14 = 1;
      uVar15 = (**(code **)(*param_1 + 0x28))(1);
      pcVar13 = s_StickImpactStone_0072b07c;
      break;
    default:
      goto switchD_004a53d1_caseD_3;
    }
    break;
  default:
    goto switchD_004a53d1_caseD_3;
  }
  FUN_00659630(pcVar13,uVar15,uVar14);
switchD_004a53d1_caseD_3:
  fVar2 = *(float *)(iVar5 + 0x30);
  fVar3 = *(float *)(iVar5 + 0x2c);
  fVar4 = *(float *)(iVar5 + 0x20);
  param_1[0x9a] = param_1[0x9a] & 0xf7ffffff;
  param_1[0xa4] = (int)((float)param_1[0xa4] - fVar2 * fVar3 * fVar4);
  uVar11 = FUN_0041bcd0();
  if (((int)uVar11 == param_2) && ((float)(int)((ulonglong)uVar11 >> 0x20) == param_3)) {
    param_1[0x9a] = param_1[0x9a] | 0x8000000;
  }
  iVar7 = (**(code **)(*param_1 + 0x108))(0);
  if (iVar7 == 0) {
    FUN_004a58a0();
    lVar12 = FUN_0041bcd0();
    if (lVar12 == CONCAT44(param_2,param_2)) {
      FUN_00434cf0(0xb2);
      iVar7 = FUN_0041bcc0();
      if (*(int *)(iVar7 + 0x3c0) == 0) {
        iVar7 = FUN_0041bcc0();
        if (*(int *)(iVar7 + 0x3d0) == 0) {
          uVar15 = 0xb5;
        }
        else {
          uVar15 = 0xb4;
        }
      }
      else {
        uVar15 = 0xb3;
      }
      FUN_00434cf0(uVar15);
    }
  }
  if ((DAT_006e92e4 < (float)param_1[0xa8] * *(float *)(iVar5 + 0x24)) && (param_1[0x79] != 0)) {
    fVar2 = (float)param_1[5] - *(float *)(iVar5 + 0x10);
    fVar3 = (float)param_1[6] - *(float *)(iVar5 + 0x14);
    fStack_44 = (float)param_1[7] - *(float *)(iVar5 + 0x18);
    param_3 = DAT_006e92e8 / SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fStack_44 * fStack_44);
    iVar7 = FUN_0064cf30(param_3);
    if (iVar7 == 0) {
      fStack_40 = 0.0;
      fStack_38 = 0.0;
    }
    else {
      fStack_40 = fVar2 * param_3;
      fStack_38 = fStack_44 * param_3;
    }
    fStack_3c = DAT_0072a8f8;
    iVar7 = (**(code **)(*param_1 + 0x154))();
    FUN_0064c8e0(*(undefined4 *)(iVar7 + 0x20),&stack0x00000000,&param_3);
    fStack_20 = *(float *)(iVar5 + 0x24);
    fStack_28 = fStack_40 * fStack_20;
    fStack_24 = fStack_3c * fStack_20;
    fStack_20 = fStack_38 * fStack_20;
    FUN_00598c30(&fStack_28,0x3f400000);
  }
  return;
}

