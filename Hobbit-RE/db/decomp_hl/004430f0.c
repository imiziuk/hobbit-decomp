
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004430f0(int *param_1)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  float10 fVar9;
  char *pcVar10;
  float fVar11;
  float fVar12;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  int *local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  int *local_cc;
  float fStack_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 local_88 [4];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_74 [4];
  float fStack_70;
  undefined1 auStack_68 [4];
  int local_64;
  int local_60;
  int local_5c;
  float fStack_58;
  undefined1 auStack_50 [4];
  undefined1 local_4c [44];
  float fStack_20;
  float fStack_18;
  
  local_60 = param_1[6];
  local_5c = param_1[7];
  local_64 = param_1[5];
  local_9c = (float)param_1[0x11a];
  local_98 = (float)param_1[0x11b];
  local_a0 = (float)param_1[0x119];
  local_84 = (float)param_1[0x11d];
  piVar8 = param_1 + 0x115;
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  local_cc = piVar8;
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],&local_80,local_88);
  local_80 = local_80 * (float)param_1[0x1e6];
  local_7c = 0.0;
  local_78 = local_78 * (float)param_1[0x1e6];
  fVar1 = (float)param_1[0x248];
  local_e0 = fVar1 * (float)param_1[0x1de];
  local_dc = (int *)(fVar1 * (float)param_1[0x1df]);
  fVar11 = (float)param_1[0x248];
  local_c4 = fVar11 * (float)param_1[0x1e9];
  local_c0 = fVar11 * (float)param_1[0x1ea];
  local_a8 = local_c0 + local_78;
  local_d8 = fVar11 * (float)param_1[0x1e8] + local_80 + fVar1 * (float)param_1[0x1dd];
  local_d4 = local_c4 + local_e0;
  local_d0 = local_a8 + (float)local_dc;
  local_ac = local_c4;
  (**(code **)(*param_1 + 0x140))(&local_64,0,local_4c,local_74);
  uVar3 = FUN_0042eea0(&fStack_a4,local_80 * fStack_e4 + local_7c * local_e0 + local_84 * fStack_e8,
                       &local_84);
  FUN_004357e0(uVar3);
  uVar3 = FUN_00405080(&fStack_a4,&fStack_e8,auStack_68);
  FUN_004357e0(uVar3);
  if (_DAT_006ebfe4 <
      local_c4 * local_c4 + fStack_c8 * fStack_c8 + (float)local_cc * (float)local_cc) {
    fVar1 = DAT_006e92e8 /
            SQRT(local_c4 * local_c4 + fStack_c8 * fStack_c8 + (float)local_cc * (float)local_cc);
    iVar4 = FUN_0064cf30(fVar1);
    if (iVar4 == 0) {
      local_cc = (int *)0x0;
      fStack_c8 = 0.0;
      local_c4 = 0.0;
    }
    else {
      local_cc = (int *)(fVar1 * (float)local_cc);
      fStack_c8 = fStack_c8 * fVar1;
      local_c4 = local_c4 * fVar1;
    }
    local_e0 = SQRT(fStack_e4 * fStack_e4 + local_e0 * local_e0 + fStack_e8 * fStack_e8);
    fStack_e8 = (float)local_cc * local_e0;
    fStack_e4 = fStack_c8 * local_e0;
    local_e0 = local_c4 * local_e0;
    local_9c = local_e0;
  }
  iVar4 = param_1[0x1d8];
  if (iVar4 == 0) {
    fStack_e4 = fStack_e4 -
                *(float *)(param_1[0x114] + 0x68) * (float)param_1[0x248] * (float)param_1[0x248];
  }
  if (iVar4 == 1) {
    fStack_70 = fStack_70 - fStack_58;
    if (fStack_70 <= *(float *)(param_1[0x114] + 0x50)) {
      if (fStack_70 < _DAT_00724338 != (NAN(fStack_70) || NAN(_DAT_00724338))) {
        fStack_e4 = _DAT_00724338 - fStack_70;
      }
    }
    else {
      fStack_e4 = (*(float *)(param_1[0x114] + 0x50) - fStack_70) + fStack_e4;
    }
  }
  if (((iVar4 == 0) ||
      (fVar1 = *(float *)(param_1[0x114] + 0x58), local_80 < fVar1 == (NAN(local_80) || NAN(fVar1)))
      ) || ((*(byte *)((int)param_1 + 0xb1) & 0x20) != 0)) {
    param_1[0x1dc] = 0;
    param_1[0x1da] = 0;
  }
  else {
    fVar1 = *(float *)(param_1[0x114] + 0x68);
    param_1[0x1da] = 1;
    param_1[0x1db] = (int)local_80;
    fVar1 = (float)param_1[0x1dc] - fVar1 * (float)param_1[0x248] * (float)param_1[0x248];
    param_1[0x1dc] = (int)fVar1;
    fStack_e4 = fVar1 + fStack_e4;
  }
  if ((float)param_1[0x1dc] < _DAT_006ec0b0 != (NAN((float)param_1[0x1dc]) || NAN(_DAT_006ec0b0))) {
    param_1[0x1dc] = -0x3a63c000;
  }
  if (fStack_e4 * fStack_e4 + local_e0 * local_e0 + fStack_e8 * fStack_e8 <= _DAT_006e9360) {
    FUN_00425d30();
  }
  else if ((DAT_006e92e4 < (float)param_1[0x184]) || (param_1[0x1da] != 0)) {
LAB_0044352a:
    local_c0 = fStack_b0;
    fStack_b8 = local_a8;
    fStack_bc = local_ac;
    FUN_00469060(&local_c0,&fStack_e8,0,*(undefined4 *)(param_1[0x114] + 0x58),0,1,1);
    fVar1 = fStack_bc;
    piVar6 = (int *)FUN_004021c0(param_1[0x32],param_1[0x33]);
    if (piVar6 == (int *)0x0) {
      FUN_00425d30();
      fVar11 = fStack_bc;
    }
    else {
      fVar11 = fStack_bc;
      if ((*(byte *)(param_1 + 0x164c) & 1) != 0) {
        fStack_a4 = local_c0 - fStack_b0;
        local_9c = fStack_b8 - local_a8;
        local_a0 = 0.0;
        fVar12 = 0.0;
        fVar11 = 0.0;
        FUN_004bbcc0(&stack0xffffff0c,&fStack_a4);
        if (0.0 <= _DAT_006e95a8) {
          fStack_b8 = local_a8;
          local_c0 = fStack_b0;
          fStack_bc = local_ac;
          FUN_00425d30();
        }
        else {
          pfVar7 = (float *)(**(code **)(*piVar6 + 0x28))();
          local_d0 = pfVar7[2] + 0.0;
          bVar2 = false;
          local_d4 = pfVar7[1] + 0.0;
          local_d8 = *pfVar7 + 0.0;
          iVar4 = FUN_004bea50(&local_d8);
          if (iVar4 == 0) {
            bVar2 = true;
            local_98 = DAT_006e92e8 / 0.0;
            iVar4 = FUN_0064cf30(local_98);
            if (iVar4 == 0) {
              fVar11 = 0.0;
              fVar12 = 0.0;
            }
            else {
              fVar11 = local_98 * _DAT_006e9988 * 0.0;
              fVar12 = local_98 * _DAT_006e9988 * 0.0;
            }
            iVar4 = FUN_004bf9d0(&local_d8,&stack0xffffff0c,1);
            piVar8 = local_dc;
            if (iVar4 == 0) goto LAB_0044372f;
          }
          (**(code **)(*piVar6 + 300))(&local_d8);
          local_c0 = fStack_b0 + fVar11;
          fStack_b8 = local_a8 + fVar12;
          fStack_bc = fVar1;
          if (bVar2) {
            FUN_004bd4c0(2);
            FUN_00448560();
            piVar8 = local_dc;
          }
          else {
            FUN_00425ca0();
            piVar8 = local_dc;
          }
        }
LAB_0044372f:
        FUN_00540e90(s_WEAPON_00720f68,auStack_50,0);
        local_d8 = fStack_20;
        local_d0 = fStack_18;
        pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
        FUN_00449810(&local_c0,
                     SQRT((local_d8 - *pfVar7) * (local_d8 - *pfVar7) +
                          (local_d0 - pfVar7[2]) * (local_d0 - pfVar7[2])));
        fVar12 = fStack_bc - fVar1;
        if (fVar12 < DAT_006e92e4 != (NAN(fVar12) || NAN(DAT_006e92e4))) {
          fVar12 = -fVar12;
        }
        fVar11 = fVar1;
        if (_DAT_006ec0ac < fVar12) {
          FUN_00448560();
        }
      }
    }
    fStack_bc = fVar11;
    (**(code **)(*param_1 + 0x14))(&local_c0,0);
    local_a0 = fStack_bc - local_ac;
    local_dc = (int *)(DAT_006e92e8 / (float)param_1[0x248]);
    local_9c = (fStack_b8 - local_a8) * (float)local_dc;
    param_1[0x1d5] = (int)((local_c0 - fStack_b0) * (float)local_dc);
    param_1[0x1d7] = (int)local_9c;
    param_1[0x1d6] = (int)(local_a0 * (float)local_dc);
    FUN_00434d10(0xa4,SQRT((float)param_1[0x1d7] * (float)param_1[0x1d7] +
                           (float)param_1[0x1d6] * (float)param_1[0x1d6] +
                           (float)param_1[0x1d5] * (float)param_1[0x1d5]) * _DAT_006e9360 *
                      (float)param_1[0x248]);
  }
  else {
    iVar4 = param_1[0x158];
    if (*(int *)(iVar4 + 8) != -1) {
      pcVar10 = s_PUSH_BLOCK_FLIP_00720334;
      FUN_004258a0(s_PUSH_BLOCK_FLIP_00720334);
      iVar5 = FUN_0053cc70(pcVar10);
      if (*(int *)(iVar4 + 8) == iVar5) goto LAB_0044352a;
    }
  }
  (**(code **)(*param_1 + 0x140))(param_1 + 5,0,&fStack_b0,&local_c0);
  fVar1 = (float)param_1[6] - fStack_bc;
  if (fVar1 < _DAT_0072433c == (NAN(fVar1) || NAN(_DAT_0072433c))) {
    param_1[0x1d8] = 0;
  }
  else {
    param_1[0x1d8] = 1;
    fStack_e8 = (float)param_1[5];
    fStack_e4 = (float)param_1[6];
    local_e0 = (float)param_1[7];
    fStack_b0 = -fVar1 + DAT_006e92e8;
    uStack_b4 = 0;
    local_ac = 0.0;
    FUN_00469060(&fStack_e8,&uStack_b4,0,*(undefined4 *)(param_1[0x114] + 0x58),0,1,1);
    (**(code **)(*param_1 + 0x14))(&fStack_e8,0);
  }
  fVar9 = ((float10)(float)param_1[0x1eb] - (float10)fStack_a4) + (float10)_DAT_006e9368;
  local_a8 = (float)fVar9;
  if (((float10)_DAT_006e95a0 < fVar9) ||
     (fVar9 < (float10)_DAT_006e959c != (NAN(fVar9) || NAN((float10)_DAT_006e959c)))) {
    fVar9 = (float10)FUN_0064c6b0(local_a8,0x40c90fdb);
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
  fVar11 = (float)param_1[0x1ec] * (float)param_1[0x248];
  if (fVar1 < DAT_006e92e4) {
    fVar11 = -fVar11;
    if (fVar1 <= fVar11) goto LAB_00443a2e;
  }
  else if (fVar1 < fVar11 == (NAN(fVar1) || NAN(fVar11))) goto LAB_00443a2e;
  fVar11 = fVar1;
LAB_00443a2e:
  piVar8[0x4b] = 1;
  piVar8[0x4f] = 1;
  piVar8[8] = (int)(fVar11 + fStack_a4);
  piVar8[0x4e] = piVar8[0x4e] + 1;
  piVar8[0x52] = piVar8[0x52] + 1;
  return;
}

