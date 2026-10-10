
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004bb370(float *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,float param_5,
            float param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int local_e4;
  byte local_dd;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  int local_ac;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  int local_94;
  float local_90 [6];
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_50 [8];
  float local_30 [12];
  
  local_a4 = (float)param_3[1];
  local_dd = 0;
  FUN_004b9df0(param_1,local_50,DAT_0075d8e8);
  iVar10 = 0;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  local_e4 = 0;
  local_dc = 0.0;
  local_d8 = 0.0;
  local_d4 = 0.0;
  iVar11 = 0;
  do {
    pfVar1 = (float *)((int)local_30 + iVar10);
    *pfVar1 = local_50[iVar11 * 2];
    uVar8 = *(undefined4 *)(local_ac + 8);
    *(float *)((int)local_30 + iVar10 + 4) = param_5 + *(float *)(local_ac + 0x18);
    *(float *)((int)local_30 + iVar10 + 8) = local_50[iVar11 * 2 + 1];
    local_a0 = *pfVar1;
    local_9c = *(float *)((int)local_30 + iVar10 + 4) - param_6;
    local_b0 = *(float *)((int)local_30 + iVar10 + 8);
    local_98 = local_b0;
    FUN_00579720(uVar8,*(undefined4 *)(local_ac + 0xc),pfVar1,&local_a0,0x400001);
    FUN_005798f0(4);
    iVar6 = FUN_00577e70();
    if (iVar6 != 0) {
      local_94 = 1 << ((byte)iVar11 & 0x1f);
      local_a8 = 0;
      pfVar9 = (float *)&DAT_007734fc;
      do {
        if ((_DAT_006e936c < pfVar9[2]) &&
           (fVar2 = *(float *)(local_ac + 0x18) + _DAT_006e9988,
           fVar2 < pfVar9[-1] == (NAN(fVar2) || NAN(pfVar9[-1])))) {
          fVar2 = *param_2;
          fVar3 = pfVar9[-2];
          local_dd = local_dd | '\x01' << ((byte)iVar11 & 0x1f);
          fVar4 = pfVar9[-2];
          *(float *)((int)local_30 + iVar10 + 4) = pfVar9[-1];
          fVar5 = pfVar9[1];
          *pfVar1 = fVar4;
          fVar4 = *pfVar9;
          *(float *)((int)local_90 + iVar10) = fVar5;
          fVar5 = pfVar9[3];
          *(float *)((int)local_30 + iVar10 + 8) = fVar4;
          fVar4 = pfVar9[2];
          *param_2 = fVar2 + fVar3;
          fVar2 = param_2[1];
          *(float *)((int)local_90 + iVar10 + 8) = fVar5;
          fVar3 = pfVar9[-1];
          local_e4 = local_e4 + 1;
          *(float *)((int)local_90 + iVar10 + 4) = fVar4;
          param_2[1] = fVar2 + fVar3;
          param_2[2] = *pfVar9 + param_2[2];
          local_dc = local_dc + pfVar9[1];
          local_d8 = local_d8 + pfVar9[2];
          local_d4 = local_d4 + pfVar9[3];
        }
        if ((local_dd & (byte)local_94) != 0) break;
        local_a8 = local_a8 + 1;
        pfVar9 = pfVar9 + 0x12;
      } while (local_a8 < DAT_00773970);
    }
    iVar10 = iVar10 + 0xc;
    iVar11 = iVar11 + 1;
  } while (iVar10 < 0x30);
  if (local_e4 == 4) {
    *param_2 = *param_2 * _DAT_006e9550;
    param_2[1] = param_2[1] * _DAT_006e9550;
    param_2[2] = param_2[2] * _DAT_006e9550;
  }
  else {
    fVar2 = param_1[1];
    if (local_e4 != 0) {
      fVar2 = param_2[1] / (float)local_e4;
    }
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    fVar3 = param_1[2];
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    if (local_e4 < 1) goto LAB_004bb89c;
  }
  fVar2 = DAT_006e92e8 / SQRT(local_dc * local_dc + local_d8 * local_d8 + local_d4 * local_d4);
  iVar10 = FUN_0064cf30(fVar2);
  if (iVar10 == 0) {
    local_dc = 0.0;
    local_d8 = 0.0;
    local_d4 = 0.0;
  }
  else {
    local_dc = fVar2 * local_dc;
    local_d8 = local_d8 * fVar2;
    local_d4 = local_d4 * fVar2;
  }
  local_b4 = *(float *)(local_ac + 0x6c);
  local_d0 = 0.0;
  local_cc = 0.0;
  local_c8 = 1.0;
  FUN_00428790(0);
  FUN_004286f0(0);
  FUN_00428740(local_b4);
  FUN_00401f00(local_c8 * local_d8 - local_cc * local_d4,local_d4 * local_d0 - local_c8 * local_dc,
               local_cc * local_dc - local_d8 * local_d0);
  fVar2 = DAT_006e92e8 / SQRT(local_c4 * local_c4 + local_c0 * local_c0 + local_bc * local_bc);
  iVar10 = FUN_0064cf30(fVar2);
  if (iVar10 == 0) {
    local_c4 = 0.0;
    local_c0 = 0.0;
    local_bc = 0.0;
  }
  else {
    local_c4 = local_c4 * fVar2;
    local_c0 = local_c0 * fVar2;
    local_bc = local_bc * fVar2;
  }
  FUN_00401f00(local_c0 * local_d4 - local_bc * local_d8,local_bc * local_dc - local_d4 * local_c4,
               local_d8 * local_c4 - local_c0 * local_dc);
  local_d0 = local_b8;
  local_cc = local_b4;
  local_c8 = local_b0;
  fVar2 = DAT_006e92e8 / SQRT(local_b8 * local_b8 + local_b4 * local_b4 + local_b0 * local_b0);
  iVar10 = FUN_0064cf30(fVar2);
  if (iVar10 == 0) {
    local_c8 = 0.0;
    local_d0 = DAT_006e92e4;
    local_cc = DAT_006e92e4;
  }
  else {
    local_d0 = fVar2 * local_d0;
    local_cc = local_cc * fVar2;
    local_c8 = local_c8 * fVar2;
  }
  local_90[0] = local_c4;
  local_90[4] = local_dc;
  local_90[5] = local_d8;
  local_90[2] = local_bc;
  local_90[1] = local_c0;
  local_68 = local_c8;
  local_78 = local_d4;
  local_70 = local_d0;
  local_6c = local_cc;
  puVar7 = (undefined4 *)FUN_004065c0(&local_b8);
  *param_3 = *puVar7;
  param_3[1] = puVar7[1];
  param_3[2] = puVar7[2];
LAB_004bb89c:
  if ((NAN((float)param_3[1]) || NAN(local_a4)) == ((float)param_3[1] == local_a4)) {
    param_3[1] = local_a4;
  }
  uVar8 = FUN_00401f00(0,param_5,0);
  uVar8 = FUN_00402130(&local_d0,param_1,uVar8);
  FUN_004357e0(uVar8);
  uVar8 = FUN_00401f00(0,param_6,0);
  uVar8 = FUN_00405080(&local_d0,local_30,uVar8);
  FUN_004357e0(uVar8);
  FUN_00579720(*(undefined4 *)(local_ac + 8),*(undefined4 *)(local_ac + 0xc),local_30,&local_a0,
               0x400001);
  FUN_005798f0(1);
  iVar10 = FUN_00577e70();
  if (iVar10 == 0) {
    return 0;
  }
  *param_4 = DAT_00773520;
  param_4[1] = DAT_00773524;
  if (param_7 != 0) {
    FUN_004357e0(&DAT_007734f4);
  }
  return 1;
}

