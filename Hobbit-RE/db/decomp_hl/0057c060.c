
void __thiscall
FUN_0057c060(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float *local_114;
  undefined4 *local_110;
  float *local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  int *local_fc;
  undefined4 local_f8;
  float local_f4;
  char *local_f0;
  int local_dc;
  int local_d8;
  float local_d4;
  float local_d0;
  float local_c0 [4];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98 [6];
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50 [4];
  float local_40;
  float local_3c;
  undefined1 *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbdd8;
  local_c = ExceptionList;
  local_f0 = s_Coll__HorizT2C_00740454;
  local_f4 = 8.05877e-39;
  ExceptionList = &local_c;
  FUN_00649600();
  pfVar12 = (float *)*param_2;
  local_c0[0] = *pfVar12;
  local_c0[1] = pfVar12[1];
  local_c0[2] = pfVar12[2];
  pfVar12 = (float *)param_2[1];
  local_c0[3] = *pfVar12;
  local_b0 = pfVar12[1];
  local_ac = pfVar12[2];
  pfVar12 = (float *)param_2[2];
  local_a8 = *pfVar12;
  local_a4 = pfVar12[1];
  local_a0 = pfVar12[2];
  iVar11 = 0;
  local_4 = 0;
  local_d4 = local_b0;
  if (local_b0 < local_c0[1]) {
    local_d4 = local_c0[1];
  }
  if (local_d4 < local_a4) {
    local_d4 = local_a4;
  }
  if ((*(float *)(param_1 + 0x3d90) <= local_d4) || (*(float *)(param_1 + 0x3d9c) <= local_d4)) {
    if ((*(float *)(param_1 + 0x3d90) < local_d4 ==
         (NAN(*(float *)(param_1 + 0x3d90)) || NAN(local_d4))) ||
       (*(float *)(param_1 + 0x3d9c) < local_d4 ==
        (NAN(*(float *)(param_1 + 0x3d9c)) || NAN(local_d4)))) {
      local_24 = *(float *)(param_1 + 0x3d90);
      fVar1 = *(float *)(param_1 + 0x3dc0);
      local_30 = (undefined1 *)(fVar1 * fVar1);
      local_3c = *(float *)(param_1 + 0x3da0) - *(float *)(param_1 + 0x3d94);
      local_2c = *(float *)(param_1 + 0x3d9c) - local_24;
      local_40 = *(float *)(param_1 + 0x3d98) - *(float *)(param_1 + 0x3d8c);
      local_9c = (local_d4 - local_24) / local_2c;
      local_20 = *(float *)(param_1 + 0x3d94) + local_3c * local_9c;
      local_24 = local_2c * local_9c + local_24;
      local_28 = local_40 * local_9c + *(float *)(param_1 + 0x3d8c);
      fVar2 = local_c0[2] - local_a0;
      fVar3 = local_a8 - local_c0[0];
      fVar4 = local_ac - local_c0[2];
      fVar5 = local_c0[0] - local_c0[3];
      fVar6 = local_a0 - local_ac;
      fVar7 = local_c0[3] - local_a8;
      fVar9 = DAT_006e92e8 / SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      fVar10 = DAT_006e92e8 / SQRT(fVar4 * fVar4 + fVar5 * fVar5);
      fVar8 = DAT_006e92e8 / SQRT(fVar6 * fVar6 + fVar7 * fVar7);
      local_98[0] = fVar9 * fVar2;
      local_98[1] = fVar9 * DAT_006e92e4;
      local_98[2] = fVar9 * fVar3;
      local_98[3] = fVar4 * fVar10;
      local_98[4] = DAT_006e92e4 * fVar10;
      local_98[5] = fVar10 * fVar5;
      local_80 = fVar8 * fVar6;
      local_7c = fVar8 * DAT_006e92e4;
      local_78 = fVar8 * fVar7;
      local_50[0] = fVar7 * fVar9 * fVar2 +
                    (local_ac - local_a0) * fVar9 * fVar3 +
                    (local_b0 - local_a4) * fVar9 * DAT_006e92e4;
      local_50[1] = fVar3 * fVar4 * fVar10 +
                    (local_a0 - local_c0[2]) * fVar10 * fVar5 +
                    (local_a4 - local_c0[1]) * DAT_006e92e4 * fVar10;
      iVar13 = 0;
      pfVar12 = &local_a8;
      pfVar14 = local_50;
      local_d8 = 0;
      local_dc = 0;
      local_50[2] = fVar5 * fVar8 * fVar6 +
                    (local_c0[2] - local_ac) * fVar8 * fVar7 +
                    (local_c0[1] - local_b0) * fVar8 * DAT_006e92e4;
      do {
        fVar2 = local_28 - *pfVar12;
        fVar3 = local_20 - pfVar12[2];
        pfVar12 = (float *)((int)local_c0 + iVar11);
        fVar4 = fVar2 * fVar2 + fVar3 * fVar3;
        if (fVar4 < (float)local_30 != (NAN(fVar4) || NAN((float)local_30))) goto LAB_0057c549;
        fVar2 = fVar3 * *(float *)((int)local_98 + iVar11 + 8) +
                fVar2 * *(float *)((int)local_98 + iVar11);
        if (fVar2 < DAT_006e92e4) {
          fVar3 = -fVar1;
          if (fVar2 < fVar3) {
            if ((fVar2 + fVar1 < fVar3 != (NAN(fVar2 + fVar1) || NAN(fVar3))) &&
               (fVar2 = local_3c * *(float *)((int)local_98 + iVar11 + 8) +
                        local_40 * *(float *)((int)local_98 + iVar11) +
                        local_2c * *(float *)((int)local_98 + iVar11 + 4),
               fVar2 < DAT_006e92e4 != (fVar2 == DAT_006e92e4))) goto LAB_0057c73d;
          }
          else {
            iVar13 = iVar13 + 1;
          }
        }
        else {
          if ((*pfVar14 < fVar2 - fVar1) &&
             (DAT_006e92e4 <=
              local_3c * *(float *)((int)local_98 + iVar11 + 8) +
              local_40 * *(float *)((int)local_98 + iVar11) +
              local_2c * *(float *)((int)local_98 + iVar11 + 4))) goto LAB_0057c73d;
          local_dc = local_dc + 1;
          if (fVar1 <= fVar2) {
            local_d8 = local_d8 + 1;
          }
        }
        iVar11 = iVar11 + 0xc;
        pfVar14 = pfVar14 + 1;
      } while (iVar11 < 0x24);
      if ((local_dc == 3) || ((local_d8 == 2 && (iVar13 == 1)))) {
LAB_0057c549:
        local_50[0] = 0.0;
        local_50[1] = 1.0;
        local_50[2] = 0.0;
        local_50[3] = -(local_20 * DAT_006e92e4 + local_28 * DAT_006e92e4 + local_24);
        fVar1 = local_a4;
        if (local_a4 < local_b0) {
          fVar1 = local_b0;
        }
        local_d0 = local_c0[1];
        if ((local_c0[1] <= fVar1) && (local_d0 = local_a4, local_a4 < local_b0)) {
          local_d0 = local_b0;
        }
        local_10 = -local_d4;
        local_104 = *(undefined4 *)(param_1 + 0x42dc);
        local_f0 = (char *)0x1;
        local_f4 = local_d0;
        local_108 = *(undefined4 *)(param_1 + 0x42d8);
        local_f8 = 0;
        local_fc = (int *)0x8;
        local_100 = param_5;
        local_10c = local_50;
        local_110 = &local_1c;
        local_114 = &local_28;
        local_1c = 0;
        local_18 = 0x3f800000;
        local_14 = 0;
        local_11c = 8.06084e-39;
        local_118 = local_9c;
        FUN_0057ddb0();
        local_30 = (undefined1 *)&local_134;
        local_134 = local_98[0];
        local_130 = local_98[1];
        local_12c = local_98[2];
        local_128 = local_98[3];
        local_124 = local_98[4];
        local_120 = local_98[5];
        local_11c = local_80;
        local_118 = local_7c;
        local_114 = (float *)local_78;
        local_110 = (undefined4 *)local_74;
        local_10c = (float *)local_70;
        local_108 = local_6c;
        local_104 = local_68;
        local_100 = local_64;
        local_fc = local_60;
        local_f8 = local_5c;
        local_f4 = (float)local_58;
        local_f0 = (char *)local_54;
        FUN_0057da20();
        goto LAB_0057c73d;
      }
    }
    local_f0 = (char *)param_5;
    local_f4 = (float)param_4;
    local_f8 = param_3;
    local_fc = param_2;
    local_100 = 0x57c73d;
    FUN_0057b700();
  }
LAB_0057c73d:
  local_4 = 0xffffffff;
  local_f0 = (char *)0x57c754;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

