
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bd710(int *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  float10 fVar11;
  char *pcVar12;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c [17];
  float local_e8 [2];
  float local_e0;
  undefined1 local_dc [8];
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [16];
  undefined1 local_4c [12];
  undefined1 local_40 [64];
  
  fVar5 = DAT_006e92e8;
  uVar4 = param_1[0x98];
  if ((uVar4 & 4) != 0) {
    fVar2 = param_2 + (float)param_1[0x8d];
    param_1[0x8d] = (int)fVar2;
    fVar3 = _DAT_006e9594;
    if (fVar5 < fVar2) {
      param_1[0x98] = uVar4 & 0xfffffffb;
      param_1[0x8d] = 0;
      piVar7 = (int *)FUN_0064d8e0(local_5c);
      param_1[0x88] = *piVar7;
      param_1[0x89] = piVar7[1];
      param_1[0x8a] = piVar7[2];
      param_1[0x8b] = piVar7[3];
      return;
    }
    fVar2 = fVar2 - _DAT_006e936c;
    fVar5 = (float)param_1[0x8c];
    fVar2 = fVar2 * fVar2 * fVar2 * _DAT_006e95a0 + _DAT_006ec080;
    if (((fVar2 < _DAT_006e9578 == (NAN(fVar2) || NAN(_DAT_006e9578))) ||
        (fVar6 = DAT_006e92e4, DAT_006e92e4 <= fVar2)) &&
       (fVar6 = fVar2, fVar2 < _DAT_006e9578 == (NAN(fVar2) || NAN(_DAT_006e9578)))) {
      fVar6 = _DAT_006e9578;
    }
    param_1[0x8c] = (int)fVar6;
    if ((fVar3 < fVar6) && (fVar6 < _DAT_006ee880 != (NAN(fVar6) || NAN(_DAT_006ee880)))) {
      if (((uVar4 & 8) == 0) && (_DAT_006ec070 < fVar6)) {
        FUN_00659600(s_BilboAttackVox_0072094c,1);
        param_1[0x98] = param_1[0x98] | 8;
      }
      fVar2 = ((float)param_1[0x8c] - fVar5) / param_2;
      if (fVar2 < _DAT_006ec080 != (NAN(fVar2) || NAN(_DAT_006ec080))) {
        param_1[0x8c] = (int)(param_2 * _DAT_006ec080 + fVar5);
      }
    }
    local_12c[0xd] = -(float)param_1[0x99];
    local_12c[8] = 0.0;
    local_12c[4] = 0.0;
    local_12c[9] = 0.0;
    local_12c[1] = 0.0;
    local_12c[6] = 0.0;
    local_12c[2] = 0.0;
    local_12c[0xb] = 0.0;
    local_12c[7] = 0.0;
    local_12c[3] = 0.0;
    local_12c[0] = 1.0;
    local_12c[5] = 1.0;
    local_12c[10] = 1.0;
    local_12c[0xf] = 1.0;
    local_12c[0xc] = 0.0;
    local_12c[0xe] = 0.0;
    FUN_004935d0(param_1 + 0x88);
    uVar8 = FUN_0064e040(local_40,local_dc,local_12c);
    FUN_00406570(uVar8);
    local_13c = (float)param_1[0x99];
    if ((((NAN(local_12c[3]) || NAN(DAT_006e92e4)) == (local_12c[3] == DAT_006e92e4)) ||
        ((NAN(local_12c[7]) || NAN(DAT_006e92e4)) == (local_12c[7] == DAT_006e92e4))) ||
       (((NAN(local_12c[0xb]) || NAN(DAT_006e92e4)) == (local_12c[0xb] == DAT_006e92e4) ||
        (fVar5 = local_13c,
        (NAN(local_12c[0xf]) || NAN(DAT_006e92e8)) == (local_12c[0xf] == DAT_006e92e8))))) {
      local_12c[0] = local_12c[3] * DAT_006e92e4 + local_12c[0];
      local_134 = local_12c[7] * DAT_006e92e4;
      local_12c[4] = local_134 + local_12c[4];
      local_130 = local_12c[0xb] * DAT_006e92e4;
      local_12c[8] = local_130 + local_12c[8];
      local_12c[0xc] = local_12c[0xf] * DAT_006e92e4 + local_12c[0xc];
      local_12c[1] = local_12c[3] * local_13c + local_12c[1];
      local_12c[5] = local_12c[7] * local_13c + local_12c[5];
      local_12c[9] = local_12c[0xb] * local_13c + local_12c[9];
      local_12c[2] = local_12c[3] * DAT_006e92e4 + local_12c[2];
      local_12c[6] = local_134 + local_12c[6];
      local_12c[10] = local_130 + local_12c[10];
      local_12c[0xe] = local_12c[0xf] * DAT_006e92e4 + local_12c[0xe];
      fVar5 = local_12c[0xf] * local_13c;
    }
    local_12c[0xd] = local_12c[0xd] + fVar5;
    if (((((NAN(local_12c[3]) || NAN(DAT_006e92e4)) == (local_12c[3] == DAT_006e92e4)) ||
         ((NAN(local_12c[7]) || NAN(DAT_006e92e4)) == (local_12c[7] == DAT_006e92e4))) ||
        ((NAN(local_12c[0xb]) || NAN(DAT_006e92e4)) == (local_12c[0xb] == DAT_006e92e4))) ||
       ((NAN(local_12c[0xf]) || NAN(DAT_006e92e8)) == (local_12c[0xf] == DAT_006e92e8))) {
      local_12c[0] = local_12c[3] * (float)param_1[0x91] + local_12c[0];
      local_12c[4] = local_12c[7] * (float)param_1[0x91] + local_12c[4];
      local_12c[8] = local_12c[0xb] * (float)param_1[0x91] + local_12c[8];
      fVar5 = local_12c[0xf] * (float)param_1[0x91];
      local_12c[1] = local_12c[3] * (float)param_1[0x92] + local_12c[1];
      local_12c[5] = local_12c[7] * (float)param_1[0x92] + local_12c[5];
      local_12c[9] = local_12c[0xb] * (float)param_1[0x92] + local_12c[9];
      fVar2 = local_12c[0xf] * (float)param_1[0x92];
      local_12c[2] = local_12c[3] * (float)param_1[0x93] + local_12c[2];
      local_12c[6] = local_12c[7] * (float)param_1[0x93] + local_12c[6];
      local_12c[10] = local_12c[0xb] * (float)param_1[0x93] + local_12c[10];
      fVar3 = local_12c[0xf] * (float)param_1[0x93];
    }
    else {
      fVar5 = (float)param_1[0x91];
      fVar2 = (float)param_1[0x92];
      fVar3 = (float)param_1[0x93];
    }
    local_12c[0xd] = local_12c[0xd] + fVar2;
    local_12c[0xc] = local_12c[0xc] + fVar5;
    local_12c[0xe] = local_12c[0xe] + fVar3;
    local_e8[0] = (float)param_1[0x8c];
    fVar11 = (float10)FUN_0064c8d0(local_e8[0]);
    fVar5 = (float)fVar11;
    local_e8[0] = (float)param_1[0x8c];
    fVar11 = (float10)FUN_0064c800(local_e8[0]);
    fVar2 = (float)fVar11;
    fVar3 = (float)param_1[0x90];
    local_140 = (float)param_1[0x8e];
    local_13c = (float)param_1[0x8f];
    local_130 = DAT_006e92e8 - fVar5;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_70 = 0;
    local_80 = 0;
    local_90 = 0;
    local_60 = 0x3f800000;
    local_9c = local_130 * local_140 * local_140 + fVar5;
    local_134 = local_130 * local_13c;
    local_8c = local_134 * local_140 - fVar3 * fVar2;
    local_c4 = local_140 * local_130 * fVar3;
    local_d4 = local_13c * fVar2 + local_c4;
    local_d0 = fVar3 * fVar2 + local_134 * local_140;
    local_cc = local_134 * local_13c + fVar5;
    local_12c[0x10] = local_134 * fVar3;
    local_e8[0] = local_140 * fVar2;
    local_c8 = local_12c[0x10] - local_e8[0];
    local_c4 = local_c4 - local_13c * fVar2;
    local_c0 = local_e8[0] + local_12c[0x10];
    local_bc = local_130 * fVar3 * fVar3 + fVar5;
    local_98 = local_d0;
    local_94 = local_c4;
    local_88 = local_cc;
    local_84 = local_c0;
    local_7c = local_d4;
    local_78 = local_c8;
    local_74 = local_bc;
    FUN_004065c0(local_4c);
    FUN_00463c20(local_4c);
    uVar8 = FUN_0064e040(local_40,local_dc,local_12c);
    FUN_00406570(uVar8);
    FUN_00401f00(-(float)param_1[0x91],-(float)param_1[0x92],-(float)param_1[0x93]);
    FUN_00420470(&local_140);
    FUN_00420470(param_1 + 0x85);
    pfVar1 = (float *)(param_1 + 0x75);
    if (pfVar1 != local_12c) {
      pfVar10 = local_12c;
      piVar7 = param_1 + 0x77;
      do {
        piVar7[-2] = (int)*pfVar10;
        piVar7[-1] = (int)pfVar10[1];
        *piVar7 = *(int *)(((int)local_12c - (int)pfVar1) + (int)piVar7);
        piVar7[1] = *(int *)((int)local_12c + (4 - (int)pfVar1) + (int)piVar7);
        pfVar10 = pfVar10 + 4;
        piVar7 = piVar7 + 4;
      } while (pfVar10 != local_12c + 0x10);
    }
    FUN_004bc800(param_1[0x8d],local_5c);
    FUN_004bb370(local_5c,&local_140,param_1 + 0x1a,local_e8,0x42c80000,0x42fa0000,0);
    local_e0 = local_138 - (float)param_1[7];
    param_1[0x5c] = (int)(local_140 - (float)param_1[5]);
    param_1[0x5e] = (int)local_e0;
    param_1[0x5d] = (int)(local_13c - (float)param_1[6]);
    (**(code **)(*param_1 + 300))(&local_140);
    uVar4 = param_1[0x98];
    if (((uVar4 & 0x10) == 0) && (_DAT_006ee87c <= (float)param_1[0x8d])) {
      if (-1 < (char)uVar4) {
        uVar8 = 1;
        if (param_1[0x5f] == 1) {
          uVar9 = (**(code **)(*param_1 + 0x28))(1);
          pcVar12 = s_BilboLandHardWood_0072c5f8;
        }
        else if (param_1[0x5f] == 2) {
          uVar9 = (**(code **)(*param_1 + 0x28))();
          pcVar12 = s_BilboLandHardGrass_0072c60c;
        }
        else {
          uVar9 = (**(code **)(*param_1 + 0x28))();
          pcVar12 = s_BilboLandHardStone_0072c620;
        }
        FUN_00659630(pcVar12,uVar9,uVar8);
        param_1[0x98] = param_1[0x98] | 0x10;
        FUN_004bf630();
        return;
      }
      param_1[0x98] = uVar4 & 0xfffffffb;
      param_1[0x8d] = 0;
      uVar8 = FUN_0064d8e0(&local_60);
      FUN_0042fda0(uVar8);
      (**(code **)(*param_1 + 300))(param_1 + 0x66);
      FUN_004ba6c0(0);
      FUN_004bd4c0(2);
    }
  }
  return;
}

