
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c9810(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int local_cc;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064cc00();
  FUN_00649600();
  iVar14 = 0;
  local_4 = 0;
  FUN_0065fd00(0);
  FUN_00672260();
  iVar10 = FUN_00549470();
  if (iVar10 != 0) {
    fVar2 = local_84 - *(float *)(param_1 + 0x1c);
    fVar6 = local_8c - *(float *)(param_1 + 0x14);
    fVar3 = (local_88 - *(float *)(param_1 + 0x18)) * DAT_006e92e4;
    fVar5 = fVar3 - _DAT_006e9370 * fVar6;
    fVar6 = fVar6 * DAT_006e92e4 - fVar2 * DAT_006e92e4;
    fVar3 = fVar2 * _DAT_006e9370 - fVar3;
    fVar2 = DAT_006e92e8 / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar3 * fVar3);
    iVar11 = FUN_0064cf30();
    fVar7 = DAT_006e92e4;
    fVar8 = DAT_006e92e4;
    fVar9 = DAT_006e92e4;
    if (iVar11 != 0) {
      fVar7 = fVar3 * fVar2;
      fVar8 = fVar6 * fVar2;
      fVar9 = fVar5 * fVar2;
    }
    fVar2 = *(float *)(param_1 + 0xd4);
    fVar3 = *(float *)(param_1 + 0xd4);
    local_78 = fVar9 * fVar2 * _DAT_006e92f4 + *(float *)(param_1 + 0x1c);
    local_64 = fVar8 * fVar2 * _DAT_006e92f4 + *(float *)(param_1 + 0x18);
    local_80 = fVar7 * fVar2 * _DAT_006e92f4 + *(float *)(param_1 + 0x14);
    local_6c = *(float *)(param_1 + 0x1c) - fVar9 * fVar3 * _DAT_006e92f4;
    local_58 = *(float *)(param_1 + 0x18) - fVar8 * fVar3 * _DAT_006e92f4;
    local_74 = *(float *)(param_1 + 0x14) - fVar3 * fVar7 * _DAT_006e92f4;
    local_7c = *(float *)(param_1 + 0xe8) + local_64;
    local_70 = *(float *)(param_1 + 0xe8) + local_58;
    fVar2 = *(float *)(param_1 + 0xe8) / *(float *)(param_1 + 0xd8);
    local_68 = local_80;
    local_60 = local_78;
    local_5c = local_74;
    local_54 = local_6c;
    FUN_0066c3a0(3);
    FUN_0066dac0();
    FUN_0066ddd0();
    FUN_0066db80(iVar10,0);
    FUN_0066dd10(0,fVar2);
    FUN_0066de80(&local_80);
    FUN_0066dd10(0,0);
    FUN_0066de80(&local_68);
    FUN_0066dd10(0x3f800000,0);
    FUN_0066de80(&local_5c);
    FUN_0066dd10(0,fVar2);
    FUN_0066de80(&local_80);
    FUN_0066dd10(0x3f800000,0);
    FUN_0066de80();
    FUN_0066dd10(0x3f800000,fVar2);
    FUN_0066de80(&local_74);
    FUN_0066d9a0();
    FUN_00549580();
  }
  if ((NAN(*(float *)(param_1 + 0x154)) || NAN(DAT_006e92e4)) !=
      (*(float *)(param_1 + 0x154) == DAT_006e92e4)) goto LAB_004ca3f7;
  if (*(float *)(param_1 + 0x138) <= *(float *)(param_1 + 0xe4)) {
    *(int *)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
    DAT_007f23d4 = DAT_007f23d4 + 1;
    iVar10 = DAT_007f23cc - (*(int *)(param_1 + 0x120) * 0x28 + 0xfU & 0xfffffff0);
    iVar11 = *(int *)(param_1 + 0x120);
    iVar13 = 0;
    local_9c = 0.0;
    local_a0 = 0.0;
    local_a4 = 0.0;
    DAT_007f23cc = iVar10;
    if (0 < iVar11) {
      puVar15 = (undefined4 *)(iVar10 + 0x1c);
      do {
        fVar6 = local_9c;
        fVar2 = local_a0;
        local_a8 = 0.0;
        local_ac = 0.0;
        fVar3 = DAT_006e92e4;
        if (iVar13 < iVar11 + -1) {
          iVar11 = *(int *)(param_1 + 0x124) + iVar14;
          fVar3 = *(float *)(*(int *)(param_1 + 0x124) + 0x40 + iVar14) - *(float *)(iVar11 + 0x14);
          fVar5 = local_84 - *(float *)(iVar11 + 0x14);
          FUN_00401f00(fVar5 * (*(float *)(iVar11 + 0x3c) - *(float *)(iVar11 + 0x10)) -
                       (local_88 - *(float *)(iVar11 + 0x10)) * fVar3,
                       (local_8c - *(float *)(iVar11 + 0xc)) * fVar3 -
                       fVar5 * (*(float *)(iVar11 + 0x38) - *(float *)(iVar11 + 0xc)));
          fVar3 = DAT_006e92e8 /
                  SQRT(local_98 * local_98 + local_94 * local_94 + local_90 * local_90);
          iVar11 = FUN_0064cf30();
          if (iVar11 == 0) {
            local_ac = 0.0;
            local_a8 = 0.0;
            fVar3 = DAT_006e92e4;
          }
          else {
            local_ac = local_94 * fVar3;
            local_a8 = local_90 * fVar3;
            fVar3 = fVar3 * local_98;
          }
        }
        local_44 = local_a0;
        fVar5 = local_a4 + fVar3;
        local_40 = local_9c;
        local_a0 = local_ac;
        local_9c = local_a8;
        fVar2 = fVar2 + local_ac;
        fVar6 = DAT_006e92e8 /
                SQRT(fVar5 * fVar5 + fVar2 * fVar2 + (fVar6 + local_a8) * (fVar6 + local_a8));
        iVar11 = FUN_0064cf30();
        fVar7 = DAT_006e92e4;
        fVar8 = DAT_006e92e4;
        if (iVar11 != 0) {
          fVar7 = fVar6 * fVar5;
          fVar8 = fVar2 * fVar6;
        }
        fVar8 = fVar8 * *(float *)(param_1 + 0xd4);
        fVar7 = fVar7 * *(float *)(param_1 + 0xd4);
        FUN_00401f00(fVar7,fVar8);
        pfVar1 = (float *)(*(int *)(param_1 + 0x124) + 0xc + iVar14);
        FUN_00401f00(local_18 + *pfVar1,local_14 + pfVar1[1]);
        puVar15[-7] = local_24;
        puVar15[-6] = local_20;
        puVar15[-5] = local_1c;
        FUN_00401f00(fVar7,fVar8);
        pfVar1 = (float *)(*(int *)(param_1 + 0x124) + 0xc + iVar14);
        FUN_00401f00(*pfVar1 - local_3c,pfVar1[1] - local_38);
        *puVar15 = local_28;
        puVar15[-2] = local_30;
        puVar15[-1] = local_2c;
        puVar15[-4] = 0;
        uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x28 + iVar14);
        puVar15[-3] = uVar12;
        puVar15[1] = 0x3f800000;
        puVar15[2] = uVar12;
        iVar11 = *(int *)(param_1 + 0x120);
        puVar15 = puVar15 + 10;
        iVar13 = iVar13 + 1;
        iVar14 = iVar14 + 0x2c;
        local_a4 = fVar3;
      } while (iVar13 < iVar11);
    }
    iVar14 = FUN_00549470();
    if (iVar14 == 0) {
      DAT_007f23cc = *(int *)(&DAT_007f23dc + DAT_007f23d4 * 4);
      DAT_007f23d4 = DAT_007f23d4 + -1;
      goto LAB_004ca3f7;
    }
    FUN_0066c3a0(3);
    FUN_0066dac0();
    iVar11 = *(int *)(param_1 + 0x188);
    if (-1 < iVar11) {
      if (iVar11 < 2) {
        if (*(int *)(param_1 + 0xf0) == 0) {
          if (*(int *)(param_1 + 0xf4) == 0) {
            uVar12 = __ftol();
            FUN_00413480(0xff,0xff,0xff,uVar12);
          }
          else {
            __ftol();
          }
        }
        else {
          __ftol();
        }
      }
      else {
        if (iVar11 != 2) goto LAB_004ca31e;
        FUN_00406b70(0xffffffff);
      }
      FUN_0066ddd0();
    }
LAB_004ca31e:
    FUN_0066db80(iVar14);
    local_cc = 0;
    if (*(int *)(param_1 + 0x120) != 1 && -1 < *(int *)(param_1 + 0x120) + -1) {
      iVar10 = iVar10 + 0xc;
      do {
        FUN_0066dce0();
        FUN_0066de80(iVar10 + -0xc);
        FUN_0066dce0(iVar10 + 0x28);
        FUN_0066de80(iVar10 + 0x1c);
        FUN_0066dce0(iVar10 + 0x3c);
        FUN_0066de80(iVar10 + 0x30);
        FUN_0066dce0(iVar10);
        FUN_0066de80(iVar10 + -0xc);
        FUN_0066dce0(iVar10 + 0x3c);
        FUN_0066de80(iVar10 + 0x30);
        FUN_0066dce0(iVar10 + 0x14);
        FUN_0066de80(iVar10 + 8);
        local_cc = local_cc + 1;
        iVar10 = iVar10 + 0x28;
      } while (local_cc < *(int *)(param_1 + 0x120) + -1);
    }
    FUN_0066d9a0();
    FUN_00549580();
    DAT_007f23cc = *(int *)(&DAT_007f23dc + DAT_007f23d4 * 4);
    DAT_007f23d4 = DAT_007f23d4 + -1;
  }
  else {
    iVar10 = FUN_00549470();
    if (iVar10 != 0) {
      fVar2 = local_84 - *(float *)(param_1 + 0x1c);
      fVar6 = local_8c - *(float *)(param_1 + 0x14);
      fVar3 = (local_88 - *(float *)(param_1 + 0x18)) * DAT_006e92e4;
      fVar5 = fVar3 - _DAT_006e9370 * fVar6;
      fVar6 = fVar6 * DAT_006e92e4 - fVar2 * DAT_006e92e4;
      fVar3 = fVar2 * _DAT_006e9370 - fVar3;
      fVar2 = DAT_006e92e8 / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar3 * fVar3);
      iVar14 = FUN_0064cf30();
      fVar7 = DAT_006e92e4;
      fVar8 = DAT_006e92e4;
      fVar9 = DAT_006e92e4;
      if (iVar14 != 0) {
        fVar7 = fVar3 * fVar2;
        fVar8 = fVar6 * fVar2;
        fVar9 = fVar5 * fVar2;
      }
      fVar2 = *(float *)(param_1 + 0xd4);
      fVar3 = *(float *)(param_1 + 0x1c) - fVar9 * fVar2;
      local_7c = *(float *)(param_1 + 0x18) - fVar8 * fVar2;
      fVar2 = *(float *)(param_1 + 0x14) - fVar7 * fVar2;
      local_80 = fVar2;
      local_78 = fVar3;
      FUN_00401f00(*(float *)(param_1 + 0xd4) * fVar7,fVar8 * *(float *)(param_1 + 0xd4));
      FUN_00401f00(local_a4 + *(float *)(param_1 + 0x14),local_a0 + *(float *)(param_1 + 0x18));
      local_74 = local_a4;
      local_68 = local_a4;
      local_70 = local_a0;
      local_6c = local_9c;
      local_60 = local_9c;
      pfVar1 = (float *)(*(int *)(param_1 + 0x120) * 0x2c + -0x1c + *(int *)(param_1 + 0x124));
      local_64 = *pfVar1;
      local_58 = *pfVar1;
      local_5c = fVar2;
      local_54 = fVar3;
      FUN_0066c3a0(3);
      FUN_0066dac0();
      iVar14 = *(int *)(param_1 + 0x188);
      if (-1 < iVar14) {
        if (iVar14 < 2) {
          if (*(int *)(param_1 + 0xf0) == 0) {
            if (*(int *)(param_1 + 0xf4) == 0) {
              __ftol();
            }
            else {
              __ftol();
            }
          }
          else {
            __ftol();
          }
        }
        else if (iVar14 != 2) goto LAB_004c9df5;
        FUN_0066ddd0();
      }
LAB_004c9df5:
      FUN_0066db80(iVar10);
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x28);
      uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x120) * 0x2c + -4 + *(int *)(param_1 + 0x124));
      FUN_0066dd10(0,uVar4);
      FUN_0066de80(&local_74);
      FUN_0066dd10(0,uVar12);
      FUN_0066de80(&local_68);
      FUN_0066dd10(0x3f800000,uVar12);
      FUN_0066de80(&local_5c);
      FUN_0066dd10(0,uVar4);
      FUN_0066de80(&local_74);
      FUN_0066dd10(0x3f800000,uVar12);
      FUN_0066de80();
      FUN_0066dd10(0x3f800000,uVar4);
      FUN_0066de80(&local_80);
      FUN_0066d9a0();
      FUN_00549580();
    }
  }
  FUN_0064cc50();
LAB_004ca3f7:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

