
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004978e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108 [7];
  undefined1 local_ec [24];
  float local_d4;
  float local_c4;
  undefined1 local_b0 [36];
  undefined1 local_8c [12];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  if (*(int *)(param_1 + 0x138) == 0) {
    local_118 = 0.0;
    local_128 = 0.0;
    local_138 = 0.0;
    local_114 = 0.0;
    local_124 = 0.0;
    local_144 = 0.0;
    local_110 = 0.0;
    local_130 = 0.0;
    local_140 = 0.0;
    local_11c = 0.0;
    local_12c = 0.0;
    local_13c = 0.0;
    local_148 = 1.0;
    local_134 = 1.0;
    local_120 = 1.0;
    local_10c = 1.0;
    FUN_00463c20(param_1 + 0x68);
    uVar5 = FUN_0064e040(local_40,local_80,&local_148);
    FUN_00406570(uVar5);
    if (((((NAN(local_13c) || NAN(DAT_006e92e4)) == (local_13c == DAT_006e92e4)) ||
         ((NAN(local_12c) || NAN(DAT_006e92e4)) == (local_12c == DAT_006e92e4))) ||
        ((NAN(local_11c) || NAN(DAT_006e92e4)) == (local_11c == DAT_006e92e4))) ||
       ((NAN(local_10c) || NAN(DAT_006e92e8)) == (local_10c == DAT_006e92e8))) {
      local_148 = local_13c * *(float *)(param_1 + 0x14) + local_148;
      local_138 = local_12c * *(float *)(param_1 + 0x14) + local_138;
      local_128 = local_11c * *(float *)(param_1 + 0x14) + local_128;
      fVar1 = local_10c * *(float *)(param_1 + 0x14);
      local_144 = local_13c * *(float *)(param_1 + 0x18) + local_144;
      local_134 = local_12c * *(float *)(param_1 + 0x18) + local_134;
      local_124 = local_11c * *(float *)(param_1 + 0x18) + local_124;
      fVar2 = local_10c * *(float *)(param_1 + 0x18);
      local_140 = local_13c * *(float *)(param_1 + 0x1c) + local_140;
      local_130 = local_12c * *(float *)(param_1 + 0x1c) + local_130;
      local_120 = local_11c * *(float *)(param_1 + 0x1c) + local_120;
      fVar3 = local_10c * *(float *)(param_1 + 0x1c);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x14);
      fVar2 = *(float *)(param_1 + 0x18);
      fVar3 = *(float *)(param_1 + 0x1c);
    }
    local_114 = local_114 + fVar2;
    local_118 = local_118 + fVar1;
    local_110 = local_110 + fVar3;
    FUN_0064d6d0();
    FUN_0041b9f0(local_ec,&stack0x00000004);
    FUN_0041b9f0(local_b0,&stack0x00000010);
    bVar4 = false;
    local_108[4] = 1.0;
    local_108[5] = 0.0;
    local_108[6] = 0.0;
    local_108[1] = 0.0;
    local_108[2] = 0.0;
    local_108[3] = 0.0;
    FUN_004357e0(local_108 + 4);
    fVar9 = (float10)FUN_00402000();
    if (((float10)_DAT_006e92f0 < fVar9 == ((float10)_DAT_006e92f0 == fVar9)) ||
       (fVar9 < (float10)_DAT_006e92ec == (fVar9 == (float10)_DAT_006e92ec))) {
      FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar9)));
    }
    fVar9 = (float10)FUN_00402020(local_108 + 1);
    local_d4 = (float)-fVar9;
    local_108[1] = 0.0;
    local_108[2] = 1.0;
    local_108[3] = 0.0;
    local_108[4] = 0.0;
    local_108[5] = 0.0;
    local_108[6] = 0.0;
    FUN_004357e0(local_108 + 1);
    fVar9 = (float10)FUN_00402000();
    if (((float10)_DAT_006e92f0 < fVar9 == ((float10)_DAT_006e92f0 == fVar9)) ||
       (fVar9 < (float10)_DAT_006e92ec == (fVar9 == (float10)_DAT_006e92ec))) {
      FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar9)));
    }
    fVar9 = (float10)FUN_00402020(local_108 + 4);
    local_c4 = (float)-fVar9;
    uVar5 = FUN_00401f00(0,0,0x3f800000);
    uVar6 = FUN_00401f00(0,0,0);
    FUN_00499d00(uVar6,uVar5);
    FUN_00406a80();
    uVar5 = FUN_0042ebd0(local_108 + 1);
    FUN_004357e0(uVar5);
    FUN_004357e0(param_1 + 0xac);
    iVar8 = 3;
    do {
      iVar7 = FUN_00499d90(local_108,local_ec,local_b0);
      if (((iVar7 != 0) && (DAT_006e92e4 <= local_108[0])) &&
         (local_108[0] < DAT_006e92e8 != (local_108[0] == DAT_006e92e8))) {
        uVar5 = FUN_00405080(local_108 + 4,local_b0,local_ec);
        uVar5 = FUN_0042eea0(local_8c,local_108[0],uVar5);
        FUN_00402130(local_108 + 1,local_ec,uVar5);
        iVar7 = FUN_00499e00(local_108 + 1);
        if (iVar7 != 0) {
          bVar4 = true;
        }
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (bVar4) {
      FUN_00497d60();
    }
  }
  return;
}

