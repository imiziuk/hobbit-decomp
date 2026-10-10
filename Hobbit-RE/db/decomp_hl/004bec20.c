
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004bec20(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int local_fc;
  byte local_f5;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  int local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98 [6];
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_58 [8];
  float afStack_38 [13];
  
  local_a8 = param_1;
  iVar5 = FUN_004bebf0();
  if (iVar5 == 0) {
    return 0;
  }
  local_ac = *(float *)(param_1 + 0x6c);
  local_f5 = 0;
  FUN_004b9df0(param_1 + 0x14,local_58,DAT_0075d8e8);
  local_d8 = 0.0;
  local_d4 = 0.0;
  local_d0 = 0.0;
  local_f4 = 0.0;
  local_f0 = 0.0;
  local_ec = 0.0;
  local_fc = 0;
  local_cc = 0;
  local_b0 = 0;
  do {
    iVar5 = local_b0;
    pfVar1 = (float *)((int)afStack_38 + local_b0);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *pfVar1 = local_58[local_cc * 2];
    *(float *)((int)afStack_38 + local_b0 + 4) = *(float *)(param_1 + 0x18) + _DAT_006e9364;
    *(float *)((int)afStack_38 + local_b0 + 8) = local_58[local_cc * 2 + 1];
    local_a4 = *pfVar1;
    local_a0 = *(float *)((int)afStack_38 + local_b0 + 4) - _DAT_006e99c4;
    local_b4 = *(float *)((int)afStack_38 + local_b0 + 8);
    local_9c = local_b4;
    FUN_00579720(*(undefined4 *)(param_1 + 8),uVar2,pfVar1,&local_a4,0x400001);
    FUN_005798f0(4);
    iVar6 = FUN_00577e70();
    if (iVar6 != 0) {
      iVar6 = 0;
      local_e8 = (float)(1 << ((byte)local_cc & 0x1f));
      pfVar8 = (float *)&DAT_007734fc;
      do {
        if ((_DAT_006e936c < pfVar8[2]) &&
           (fVar3 = *(float *)(local_a8 + 0x18) + _DAT_006e9448,
           fVar3 < pfVar8[-1] == (NAN(fVar3) || NAN(pfVar8[-1])))) {
          local_d8 = local_d8 + pfVar8[-2];
          local_d4 = local_d4 + pfVar8[-1];
          local_f5 = local_f5 | '\x01' << ((byte)local_cc & 0x1f);
          fVar3 = pfVar8[-1];
          local_d0 = local_d0 + *pfVar8;
          local_f4 = local_f4 + pfVar8[1];
          *pfVar1 = pfVar8[-2];
          fVar4 = *pfVar8;
          *(float *)((int)afStack_38 + iVar5 + 4) = fVar3;
          local_f0 = local_f0 + pfVar8[2];
          local_ec = local_ec + pfVar8[3];
          *(float *)((int)afStack_38 + iVar5 + 8) = fVar4;
          *(float *)((int)local_98 + local_b0) = pfVar8[1];
          *(float *)((int)local_98 + local_b0 + 4) = pfVar8[2];
          *(float *)((int)local_98 + local_b0 + 8) = pfVar8[3];
          local_fc = local_fc + 1;
        }
        param_1 = local_a8;
        if ((local_f5 & local_e8._0_1_) != 0) break;
        iVar6 = iVar6 + 1;
        pfVar8 = pfVar8 + 0x12;
      } while (iVar6 < DAT_00773970);
    }
    local_b0 = local_b0 + 0xc;
    local_cc = local_cc + 1;
  } while (local_b0 < 0x30);
  if (local_fc == 4) {
    local_d8 = local_d8 * _DAT_006e9550;
    local_d0 = local_d0 * _DAT_006e9550;
    local_d4 = local_d4 * _DAT_006e9550;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x18);
    if (local_fc != 0) {
      fVar3 = local_d4 / (float)local_fc;
    }
    local_d8 = *(float *)(param_1 + 0x14);
    local_d0 = *(float *)(param_1 + 0x1c);
    local_d4 = fVar3;
    if (local_fc < 1) goto LAB_004bf15c;
  }
  fVar3 = DAT_006e92e8 / SQRT(local_f4 * local_f4 + local_f0 * local_f0 + local_ec * local_ec);
  iVar5 = FUN_0064cf30(fVar3);
  if (iVar5 == 0) {
    local_f4 = 0.0;
    local_f0 = 0.0;
    local_ec = 0.0;
  }
  else {
    local_f4 = fVar3 * local_f4;
    local_f0 = local_f0 * fVar3;
    local_ec = local_ec * fVar3;
  }
  local_b8 = *(float *)(param_1 + 0x6c);
  local_c8 = 0.0;
  local_c4 = 0.0;
  local_c0 = 1.0;
  FUN_00428790(0);
  FUN_004286f0(0);
  FUN_00428740(local_b8);
  FUN_00401f00(local_c0 * local_f0 - local_c4 * local_ec,local_ec * local_c8 - local_c0 * local_f4,
               local_c4 * local_f4 - local_f0 * local_c8);
  fVar3 = DAT_006e92e8 / SQRT(local_e8 * local_e8 + local_e4 * local_e4 + local_e0 * local_e0);
  iVar5 = FUN_0064cf30(fVar3);
  if (iVar5 == 0) {
    local_e8 = 0.0;
    local_e4 = 0.0;
    local_e0 = 0.0;
  }
  else {
    local_e8 = local_e8 * fVar3;
    local_e4 = local_e4 * fVar3;
    local_e0 = local_e0 * fVar3;
  }
  FUN_00401f00(local_e4 * local_ec - local_e0 * local_f0,local_e0 * local_f4 - local_ec * local_e8,
               local_f0 * local_e8 - local_e4 * local_f4);
  fVar3 = DAT_006e92e8 / SQRT(local_bc * local_bc + local_b8 * local_b8 + local_b4 * local_b4);
  iVar5 = FUN_0064cf30(fVar3);
  if (iVar5 == 0) {
    local_c0 = 0.0;
    local_78 = DAT_006e92e4;
    local_74 = DAT_006e92e4;
  }
  else {
    local_78 = fVar3 * local_bc;
    local_74 = local_b8 * fVar3;
    local_c0 = local_b4 * fVar3;
  }
  local_98[0] = local_e8;
  local_98[4] = local_f4;
  local_98[5] = local_f0;
  local_98[2] = local_e0;
  local_98[1] = local_e4;
  local_70 = local_c0;
  local_80 = local_ec;
  puVar7 = (undefined4 *)FUN_004065c0(&local_bc);
  *(undefined4 *)(param_1 + 0x68) = *puVar7;
  *(undefined4 *)(param_1 + 0x6c) = puVar7[1];
  *(undefined4 *)(param_1 + 0x70) = puVar7[2];
LAB_004bf15c:
  if ((NAN(*(float *)(param_1 + 0x6c)) || NAN(local_ac)) == (*(float *)(param_1 + 0x6c) == local_ac)
     ) {
    *(float *)(param_1 + 0x6c) = local_ac;
  }
  FUN_004bb370(&local_d8,&local_c8,&local_bc,&local_e8,0x42480000,0x42960000,1);
  iVar5 = FUN_004021c0(local_e8,local_e4);
  if ((iVar5 == 0) || (*(char *)(iVar5 + 0x7c) != '%')) {
    FUN_004bea00();
  }
  else {
    FUN_004bea00();
    FUN_004c0130(&local_e8);
    *(undefined4 *)(iVar5 + 0x250) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar5 + 0x254) = *(undefined4 *)(param_1 + 0xc);
  }
  FUN_004357e0(&local_d8);
  return 1;
}

