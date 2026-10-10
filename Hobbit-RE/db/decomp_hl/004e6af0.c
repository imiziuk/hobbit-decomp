
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004e6af0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float local_234 [8];
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  undefined1 *local_1d8;
  int local_1d4;
  undefined1 local_1d0 [12];
  undefined1 local_1c4 [24];
  float local_1ac;
  float local_19c;
  float local_18c;
  undefined1 local_170 [12];
  undefined1 local_164 [12];
  undefined1 local_158 [12];
  undefined1 local_14c [12];
  undefined1 local_140 [64];
  undefined1 local_100 [96];
  undefined1 local_a0 [96];
  undefined1 local_40 [64];
  
  local_234[7] = *(float *)(param_1 + 0xd4);
  local_214 = *(float *)(param_1 + 0xd8) * DAT_006e92e4;
  local_204 = *(float *)(param_1 + 0xd8);
  local_1f0 = *(float *)(param_1 + 0xdc);
  local_210 = *(float *)(param_1 + 0xdc) * DAT_006e92e4;
  local_1ec = 0.0;
  local_1fc = 0.0;
  local_208 = *(float *)(param_1 + 0xd4) * DAT_006e92e4;
  local_20c = 0.0;
  local_1dc = 1.0;
  local_200 = local_210;
  local_1f8 = local_208;
  local_1f4 = local_214;
  local_1e8 = local_208;
  local_1e4 = local_214;
  local_1e0 = local_210;
  FUN_00463c20(param_1 + 0x68);
  uVar4 = FUN_0064e040(local_40,local_140,local_234 + 7);
  FUN_00406570(uVar4);
  if (((((NAN(local_20c) || NAN(DAT_006e92e4)) == (local_20c == DAT_006e92e4)) ||
       ((NAN(local_1fc) || NAN(DAT_006e92e4)) == (local_1fc == DAT_006e92e4))) ||
      ((NAN(local_1ec) || NAN(DAT_006e92e4)) == (local_1ec == DAT_006e92e4))) ||
     ((NAN(local_1dc) || NAN(DAT_006e92e8)) == (local_1dc == DAT_006e92e8))) {
    local_234[7] = local_20c * *(float *)(param_1 + 0x14) + local_234[7];
    local_208 = local_1fc * *(float *)(param_1 + 0x14) + local_208;
    local_1f8 = local_1ec * *(float *)(param_1 + 0x14) + local_1f8;
    fVar1 = local_1dc * *(float *)(param_1 + 0x14);
    local_214 = local_20c * *(float *)(param_1 + 0x18) + local_214;
    local_204 = local_1fc * *(float *)(param_1 + 0x18) + local_204;
    local_1f4 = local_1ec * *(float *)(param_1 + 0x18) + local_1f4;
    fVar2 = local_1dc * *(float *)(param_1 + 0x18);
    local_210 = local_20c * *(float *)(param_1 + 0x1c) + local_210;
    local_200 = local_1fc * *(float *)(param_1 + 0x1c) + local_200;
    local_1f0 = local_1ec * *(float *)(param_1 + 0x1c) + local_1f0;
    fVar3 = local_1dc * *(float *)(param_1 + 0x1c);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x18);
    fVar3 = *(float *)(param_1 + 0x1c);
  }
  local_1e4 = local_1e4 + fVar2;
  local_1e8 = local_1e8 + fVar1;
  local_1e0 = local_1e0 + fVar3;
  FUN_0064d6d0();
  local_234[4] = 1.0;
  local_234[5] = 0.0;
  local_234[6] = 0.0;
  local_234[1] = 0.0;
  local_234[2] = 0.0;
  local_234[3] = 0.0;
  FUN_004357e0(local_234 + 4);
  fVar9 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar9 == ((float10)_DAT_006e92f0 == fVar9)) ||
     (fVar9 < (float10)_DAT_006e92ec == (fVar9 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar9)));
  }
  fVar9 = (float10)FUN_00402020(local_234 + 1);
  local_1ac = (float)-fVar9;
  local_234[4] = 0.0;
  local_234[5] = 1.0;
  local_234[6] = 0.0;
  local_234[1] = 0.0;
  local_234[2] = 0.0;
  local_234[3] = 0.0;
  FUN_004357e0(local_234 + 4);
  fVar9 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar9 == ((float10)_DAT_006e92f0 == fVar9)) ||
     (fVar9 < (float10)_DAT_006e92ec == (fVar9 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar9)));
  }
  fVar9 = (float10)FUN_00402020(local_234 + 1);
  local_19c = (float)-fVar9;
  local_234[4] = 0.0;
  local_234[5] = 0.0;
  local_234[6] = 1.0;
  local_234[1] = 0.0;
  local_234[2] = 0.0;
  local_234[3] = 0.0;
  FUN_004357e0(local_234 + 4);
  fVar9 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar9 == ((float10)_DAT_006e92f0 == fVar9)) ||
     (fVar9 < (float10)_DAT_006e92ec == (fVar9 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar9)));
  }
  fVar9 = (float10)FUN_00402020(local_234 + 1);
  local_18c = (float)-fVar9;
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  uVar4 = FUN_00401f00(0xbf800000,0xbf800000,0xbf800000);
  FUN_004357e0(uVar4);
  uVar4 = FUN_00401f00(0x3f800000,0x3f800000,0x3f800000);
  FUN_004357e0(uVar4);
  FUN_00401080(local_100,0xc,8,FUN_0041def0);
  FUN_00401080(local_a0,0xc,8,FUN_0041def0);
  iVar7 = 0;
  local_234[0] = 0.0;
  do {
    FUN_00401f00(0,0,param_4);
    FUN_00428740((float)(int)local_234[0] * _DAT_006e9598 * _DAT_006ec118);
    uVar4 = FUN_00402130(local_1d0,param_2,local_234 + 4);
    FUN_0041b9f0(local_234 + 1,uVar4);
    FUN_004357e0(local_234 + 1);
    uVar4 = FUN_00402130(local_170,param_3,local_234 + 4);
    FUN_0041b9f0(local_1c4,uVar4);
    FUN_004357e0(local_1c4);
    local_234[0] = (float)((int)local_234[0] + 1);
    iVar7 = iVar7 + 0xc;
  } while (iVar7 < 0x60);
  local_1d8 = local_100;
  local_1d4 = 0;
  do {
    iVar7 = 0;
    puVar6 = local_a0;
    do {
      iVar8 = 0;
      do {
        FUN_004357e0(local_1d8);
        FUN_004357e0(puVar6);
        iVar5 = FUN_00499d90(local_234,local_234 + 1,local_234 + 4);
        if (((iVar5 != 0) && (DAT_006e92e4 <= local_234[0])) &&
           (local_234[0] < DAT_006e92e8 != (local_234[0] == DAT_006e92e8))) {
          uVar4 = FUN_00405080(local_170,local_234 + 4,local_234 + 1);
          uVar4 = FUN_0042eea0(local_164,local_234[0],uVar4);
          FUN_00402130(local_1c4,local_234 + 1,uVar4);
          iVar5 = FUN_00499e00(local_1c4);
          if (iVar5 != 0) {
            return 1;
          }
        }
        iVar5 = FUN_00499d90(local_234,local_234 + 4,local_234 + 1);
        if (((iVar5 != 0) && (DAT_006e92e4 <= local_234[0])) &&
           (local_234[0] < DAT_006e92e8 != (local_234[0] == DAT_006e92e8))) {
          uVar4 = FUN_00405080(local_14c,local_234 + 4,local_234 + 1);
          uVar4 = FUN_0042eea0(local_158,local_234[0],uVar4);
          FUN_00402130(local_1d0,local_234 + 1,uVar4);
          iVar5 = FUN_00499e00(local_1d0);
          if (iVar5 != 0) {
            return 1;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0xc;
    } while (iVar7 < 8);
    local_1d4 = local_1d4 + 1;
    local_1d8 = local_1d8 + 0xc;
  } while (local_1d4 < 8);
  return 0;
}

