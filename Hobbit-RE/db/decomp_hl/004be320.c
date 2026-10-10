
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004be320(int *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 uVar7;
  char *pcVar8;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_40 = (((float)param_1[0x5a] * (float)param_1[0xac] -
              (float)param_1[0xac] * (float)param_1[0xac] * _DAT_0072c4f8 * _DAT_006e936c) +
             (float)param_1[0x71]) - (float)param_1[0x71];
  fVar2 = local_40;
  if (local_40 < DAT_006e92e4 != (NAN(local_40) || NAN(DAT_006e92e4))) {
    fVar2 = -local_40;
  }
  if (fVar2 < _DAT_006e95a8 != (NAN(fVar2) || NAN(_DAT_006e95a8))) {
    return;
  }
  local_44 = (float)param_1[5];
  local_5c = (float)param_1[0x99] - _DAT_006e958c;
  local_28 = (float)param_1[6];
  local_3c = (float)param_1[7];
  local_1c = local_28 + local_5c;
  local_40 = local_1c + local_40;
  local_50 = local_44 - local_44;
  local_4c = local_40 - local_1c;
  local_48 = local_3c - local_3c;
  local_2c = local_44;
  local_24 = local_3c;
  local_20 = local_44;
  local_18 = local_3c;
  FUN_00579460(param_1[2],param_1[3],&local_20,&local_44,local_5c,0x400001);
  iVar4 = FUN_00577e70();
  if (iVar4 != 0) {
    local_3c = DAT_007734fc;
    bVar1 = true;
    local_44 = DAT_007734f4;
    local_40 = DAT_007734f8;
    if (DAT_00773504 < _DAT_006e936c != (NAN(DAT_00773504) || NAN(_DAT_006e936c))) {
      FUN_0064e7d0(s_PB_Bounced__Normal_Y____f_0072c634,(double)DAT_00773504);
      local_58 = DAT_006e92e8 - DAT_007734f0;
      local_30 = DAT_00773508;
      local_34 = DAT_00773504;
      local_38 = DAT_00773500;
      local_5c = DAT_006e92e8 /
                 SQRT(DAT_00773500 * DAT_00773500 +
                      DAT_00773504 * DAT_00773504 + DAT_00773508 * DAT_00773508);
      iVar4 = FUN_0064cf30(local_5c);
      if (iVar4 == 0) {
        local_30 = 0.0;
        fVar2 = DAT_006e92e4;
        fVar3 = DAT_006e92e4;
      }
      else {
        local_5c = local_5c * local_58;
        local_30 = local_30 * local_5c;
        fVar2 = local_5c * local_38;
        fVar3 = local_34 * local_5c;
      }
      bVar1 = false;
      local_44 = local_44 + fVar2;
      local_40 = fVar3 + local_40;
      local_3c = local_30 + local_3c;
    }
    local_50 = local_50 * DAT_007734f0;
    local_4c = local_4c * DAT_007734f0;
    local_48 = local_48 * DAT_007734f0;
    local_38 = local_50 + local_2c;
    local_34 = local_4c + local_28;
    local_30 = local_48 + local_24;
    (**(code **)(*param_1 + 300))();
    if (bVar1) {
      FUN_004bd4c0(0);
      piVar5 = (int *)FUN_004021c0(DAT_00773520,DAT_00773524);
      if ((piVar5 != (int *)0x0) && ((char)piVar5[0x1f] == '%')) {
        param_1[0x96] = DAT_00773520;
        param_1[0x97] = DAT_00773524;
        param_1[0x72] = param_1[5];
        param_1[0x73] = param_1[6];
        param_1[0x74] = param_1[7];
        piVar5[0x94] = param_1[2];
        piVar5[0x95] = param_1[3];
        pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
        local_30 = *pfVar6;
        local_28 = pfVar6[2];
        local_2c = (float)piVar5[0x99] + (float)piVar5[0x99] + pfVar6[1];
        (**(code **)(*param_1 + 300))(&local_30);
      }
      FUN_004bb370(param_1 + 5,&local_48,param_1 + 0x1a,&local_5c,0x42c80000,0x42fa0000,0);
      FUN_004be800(&fStack_54,param_1 + 0x1a,1);
      if (param_1[0x5f] == 1) {
        uVar7 = (**(code **)(*param_1 + 0x28))(1);
        pcVar8 = s_BilboLandHardWood_0072c5f8;
      }
      else if (param_1[0x5f] == 2) {
        uVar7 = (**(code **)(*param_1 + 0x28))();
        pcVar8 = s_BilboLandHardGrass_0072c60c;
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0x28))();
        pcVar8 = s_BliboLandStone_007209c0;
      }
      FUN_00659630(pcVar8,uVar7);
      param_1[0x98] = param_1[0x98] | 0x10;
      FUN_004bf630();
    }
    fVar2 = DAT_006e92e8 / (float)param_1[0xac];
    param_1[0x71] = param_1[6];
    local_28 = local_4c * fVar2;
    param_1[0x59] = (int)(fStack_54 * fVar2);
    param_1[0x5b] = (int)local_28;
    param_1[0x5a] = (int)(local_50 * fVar2);
    FUN_004be800(&fStack_54,param_1 + 0x1a,0);
    return;
  }
  local_14 = local_50 + local_2c;
  local_10 = local_4c + local_28;
  local_c = local_48 + local_24;
  if (local_10 < _DAT_006ede84 != (NAN(local_10) || NAN(_DAT_006ede84))) {
    FUN_004bd4c0();
    return;
  }
  (**(code **)(*param_1 + 300))();
  fVar2 = DAT_006e92e8 / (float)param_1[0xac];
  param_1[0x71] = param_1[6];
  local_28 = local_4c * fVar2;
  param_1[0x59] = (int)(fStack_54 * fVar2);
  param_1[0x5b] = (int)local_28;
  param_1[0x5a] = (int)(local_50 * fVar2);
  FUN_004be800(&fStack_54,param_1 + 0x1a,0);
  return;
}

