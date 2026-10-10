
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004851f0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  float10 fVar14;
  float10 extraout_ST0;
  int local_40;
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
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x168) == 0x7fffffff) {
    FUN_00650130(s_BadFogVolumeHeapDump_txt_00728d80);
    FUN_00650150(s_C__projects_meridian_Support_Obj_00728d40,0x1b9);
  }
  fVar4 = DAT_00728cbc;
  local_30 = *param_3;
  local_2c = param_3[1];
  local_28 = param_3[2];
  fVar2 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
  fVar3 = DAT_006e92e8 / fVar2;
  iVar8 = FUN_0064cf30(fVar3);
  if (iVar8 == 0) {
    local_2c = 0.0;
    local_30 = DAT_006e92e4;
    local_28 = DAT_006e92e4;
  }
  else {
    local_2c = local_2c * fVar3;
    local_30 = fVar3 * local_30;
    local_28 = local_28 * fVar3;
  }
  fVar3 = _DAT_00728cc0;
  if (fVar2 < _DAT_00728cc0 != (NAN(fVar2) || NAN(_DAT_00728cc0))) {
    fVar3 = fVar2;
  }
  local_30 = local_30 * fVar3;
  local_2c = local_2c * fVar3;
  local_28 = local_28 * fVar3;
  FUN_0041b9f0(&local_c,param_2);
  FUN_0041b9f0(&local_18,&local_30);
  fVar2 = local_8 / fVar4;
  local_30 = local_18;
  local_2c = local_14;
  local_28 = local_10;
  if (((fVar2 < DAT_006e92e4) ||
      (fVar3 = DAT_006e92e8, DAT_006e92e8 < fVar2 == (NAN(DAT_006e92e8) || NAN(fVar2)))) &&
     (fVar3 = fVar2, fVar2 < DAT_006e92e4)) {
    fVar3 = DAT_006e92e4;
  }
  fVar14 = (float10)FUN_0064c8d0(fVar3 * _DAT_006e9578);
  fVar14 = fVar14 * (float10)fVar4;
  if (fVar14 < (float10)_DAT_006e95a8 == (fVar14 == (float10)_DAT_006e95a8)) {
    fVar2 = local_28 * local_28;
    fVar4 = local_2c * local_2c;
    fVar3 = local_30 * local_30;
    iVar8 = __ftol();
    iVar9 = __ftol();
    iVar10 = __ftol();
    uVar13 = (iVar8 - iVar10 < 0) - 1 & iVar8 - iVar10;
    local_40 = *(int *)(param_1 + 0x104) + -1;
    if (iVar8 + iVar10 <= local_40) {
      local_40 = iVar8 + iVar10;
    }
    uVar12 = (iVar9 - iVar10 < 0) - 1 & iVar9 - iVar10;
    param_2 = *(int *)(param_1 + 0x108) + -1;
    if (iVar10 + iVar9 <= param_2) {
      param_2 = iVar10 + iVar9;
    }
    local_18 = local_30;
    local_14 = local_2c;
    local_10 = local_28;
    fVar1 = (float)((float10)DAT_006e92e8 / extraout_ST0);
    iVar8 = FUN_0064cf30(fVar1);
    if (iVar8 == 0) {
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = 0.0;
    }
    else {
      local_18 = local_18 * fVar1;
      local_14 = local_14 * fVar1;
      local_10 = local_10 * fVar1;
    }
    for (; (int)uVar12 <= param_2; uVar12 = uVar12 + 1) {
      if ((int)uVar13 <= local_40) {
        iVar9 = (*(int *)(param_1 + 0x104) * uVar12 + uVar13) * 0x30;
        iVar8 = (local_40 - uVar13) + 1;
        do {
          iVar10 = iVar9 + 0xc + *(int *)(param_1 + 0x168);
          local_24 = *(float *)(iVar9 + 0xc + *(int *)(param_1 + 0x168)) - local_c;
          local_20 = *(float *)(iVar10 + 4) - local_8;
          local_1c = *(float *)(iVar10 + 8) - local_4;
          fVar1 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
          if (fVar1 <= (float)fVar14) {
            fVar5 = DAT_006e92e8 / fVar1;
            iVar10 = FUN_0064cf30(fVar5);
            if (iVar10 == 0) {
              local_20 = 0.0;
              local_1c = 0.0;
              fVar5 = DAT_006e92e4;
            }
            else {
              local_20 = local_20 * fVar5;
              local_1c = local_1c * fVar5;
              fVar5 = local_24 * fVar5;
            }
            fVar6 = fVar5 * local_18 + local_14 * local_20 + local_10 * local_1c;
            if (fVar6 <= DAT_006e92e4) {
              fVar1 = *(float *)(param_1 + 0x120);
            }
            else {
              fVar7 = (float)fVar14 * _DAT_006e936c;
              if (fVar7 < fVar1 != (NAN(fVar7) || NAN(fVar1))) goto LAB_0048563c;
              fVar1 = *(float *)(param_1 + 0x11c);
            }
            pfVar11 = (float *)(*(int *)(param_1 + 0x168) + iVar9);
            fVar1 = fVar6 * fVar1 * *(float *)(param_1 + 0x124) * SQRT(fVar3 + fVar4 + fVar2);
            *pfVar11 = fVar5 * fVar1 + *pfVar11;
            pfVar11[1] = local_20 * fVar1 + pfVar11[1];
            pfVar11[2] = local_1c * fVar1 + pfVar11[2];
          }
LAB_0048563c:
          iVar9 = iVar9 + 0x30;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  return;
}

