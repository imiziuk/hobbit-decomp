
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e93f0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar11;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar12;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc [18];
  float local_84;
  undefined1 local_80 [12];
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  param_1[0x6e] = param_1[(char)param_1[0xc5] + 100];
  fVar2 = (float)param_1[0x2b];
  fVar3 = DAT_006e92e8 / (float)param_1[0x58];
  iVar7 = __ftol();
  if (fVar3 * (fVar2 + fVar2) - (float)iVar7 < _DAT_006e936c) {
    sVar5 = __ftol();
    sVar5 = sVar5 + 1;
  }
  else {
    sVar5 = __ftol();
    sVar5 = sVar5 + 2;
  }
  *(short *)(param_1 + 0x73) = sVar5;
  iVar7 = __ftol();
  if (extraout_ST0 - (float10)iVar7 < (float10)_DAT_006e936c) {
    sVar5 = __ftol();
    sVar5 = sVar5 + 1;
    fVar11 = extraout_ST0_01;
    fVar12 = extraout_ST1_00;
  }
  else {
    sVar5 = __ftol();
    sVar5 = sVar5 + 2;
    fVar11 = extraout_ST0_00;
    fVar12 = extraout_ST1;
  }
  *(short *)((int)param_1 + 0x1ce) = sVar5;
  sVar5 = (short)param_1[0x73];
  if (sVar5 < 3) {
    sVar5 = 2;
  }
  sVar6 = *(short *)((int)param_1 + 0x1ce);
  *(short *)(param_1 + 0x73) = sVar5;
  if (sVar6 < 3) {
    sVar6 = 2;
  }
  *(short *)((int)param_1 + 0x1ce) = sVar6;
  param_1[0x59] = (int)(float)(fVar12 / (float10)(sVar5 + -1));
  param_1[0x5a] = (int)(float)(fVar11 / (float10)(sVar6 + -1));
  FUN_004ea400(0);
  FUN_004ea4e0();
  fVar2 = (float)param_1[0x2b] * _DAT_006e9370;
  pfVar10 = (float *)(param_1 + 0x40);
  local_cc[0xc] = 0.0;
  fVar3 = (float)param_1[0x2c] * _DAT_006e9370;
  local_84 = (float)param_1[0x2d] * _DAT_006e9370;
  local_d8 = (float)param_1[0x2b];
  local_d4 = (float)param_1[0x2c];
  local_d0 = (float)param_1[0x2d];
  param_1[0x52] = (int)local_d8;
  param_1[0x51] = (int)local_d0;
  *pfVar10 = fVar2;
  param_1[0x54] = (int)local_84;
  param_1[0x41] = (int)fVar3;
  param_1[0x53] = (int)local_d4;
  param_1[0x42] = (int)local_84;
  param_1[0x55] = (int)local_d8;
  param_1[0x56] = (int)local_d4;
  param_1[0x43] = (int)fVar2;
  param_1[0x57] = (int)local_d0;
  param_1[0x44] = (int)fVar3;
  param_1[0x45] = (int)local_d0;
  param_1[0x46] = (int)fVar2;
  param_1[0x47] = (int)local_d4;
  param_1[0x48] = (int)local_84;
  param_1[0x49] = (int)fVar2;
  param_1[0x4a] = (int)local_d4;
  param_1[0x4b] = (int)local_d0;
  param_1[0x4c] = (int)local_d8;
  param_1[0x4d] = (int)fVar3;
  param_1[0x4e] = (int)local_84;
  param_1[0x4f] = (int)local_d8;
  param_1[0x50] = (int)fVar3;
  local_cc[8] = 0.0;
  local_cc[4] = 0.0;
  local_cc[0xd] = 0.0;
  local_cc[9] = 0.0;
  local_cc[1] = 0.0;
  local_cc[0xe] = 0.0;
  local_cc[6] = 0.0;
  local_cc[2] = 0.0;
  local_cc[0xb] = 0.0;
  local_cc[7] = 0.0;
  local_cc[3] = 0.0;
  local_cc[0] = 1.0;
  local_cc[5] = 1.0;
  local_cc[10] = 1.0;
  local_cc[0xf] = 1.0;
  FUN_00425720(param_1 + 0x1a);
  local_74 = 0;
  local_64 = 0;
  local_54 = 0;
  local_44 = 0x3f800000;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  pfVar8 = (float *)FUN_0064e040(local_40,local_80,local_cc);
  if ((local_cc != pfVar8) && (pfVar1 = pfVar8 + 0x10, pfVar8 != pfVar1)) {
    pfVar9 = local_cc + 2;
    iVar7 = (int)pfVar8 - (int)local_cc;
    do {
      pfVar9[-2] = *pfVar8;
      pfVar9[-1] = pfVar8[1];
      *pfVar9 = *(float *)(iVar7 + (int)pfVar9);
      pfVar9[1] = pfVar8[3];
      pfVar8 = pfVar8 + 4;
      pfVar9 = pfVar9 + 4;
    } while (pfVar8 != pfVar1);
  }
  if (((((NAN(local_cc[3]) || NAN(DAT_006e92e4)) == (local_cc[3] == DAT_006e92e4)) ||
       ((NAN(local_cc[7]) || NAN(DAT_006e92e4)) == (local_cc[7] == DAT_006e92e4))) ||
      ((NAN(local_cc[0xb]) || NAN(DAT_006e92e4)) == (local_cc[0xb] == DAT_006e92e4))) ||
     ((NAN(local_cc[0xf]) || NAN(DAT_006e92e8)) == (local_cc[0xf] == DAT_006e92e8))) {
    local_cc[0] = local_cc[3] * (float)param_1[5] + local_cc[0];
    local_cc[4] = local_cc[7] * (float)param_1[5] + local_cc[4];
    local_cc[8] = local_cc[0xb] * (float)param_1[5] + local_cc[8];
    fVar2 = local_cc[0xf] * (float)param_1[5];
    local_cc[1] = local_cc[3] * (float)param_1[6] + local_cc[1];
    local_cc[5] = local_cc[7] * (float)param_1[6] + local_cc[5];
    local_cc[9] = local_cc[0xb] * (float)param_1[6] + local_cc[9];
    fVar3 = local_cc[0xf] * (float)param_1[6];
    local_cc[2] = local_cc[3] * (float)param_1[7] + local_cc[2];
    local_cc[6] = local_cc[7] * (float)param_1[7] + local_cc[6];
    local_cc[10] = local_cc[0xb] * (float)param_1[7] + local_cc[10];
    fVar4 = local_cc[0xf] * (float)param_1[7];
  }
  else {
    fVar2 = (float)param_1[5];
    fVar3 = (float)param_1[6];
    fVar4 = (float)param_1[7];
  }
  local_cc[0xd] = local_cc[0xd] + fVar3;
  local_cc[0xc] = local_cc[0xc] + fVar2;
  local_cc[0xe] = local_cc[0xe] + fVar4;
  iVar7 = 8;
  pfVar8 = pfVar10;
  do {
    FUN_0041b9f0(&local_d8,pfVar10);
    *pfVar8 = local_d8;
    pfVar8[1] = local_d4;
    pfVar8[2] = local_d0;
    pfVar8 = pfVar8 + 3;
    pfVar10 = pfVar10 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  param_1[199] = 1;
  (**(code **)(*param_1 + 0x10))(0);
  return;
}

