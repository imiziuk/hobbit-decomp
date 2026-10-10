
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e2dc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float10 fVar7;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [16];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  local_124 = *(undefined4 *)(param_1 + 0xac);
  local_120 = *(undefined4 *)(param_1 + 0xb0);
  local_130 = -*(float *)(param_1 + 0xac);
  local_11c = *(undefined4 *)(param_1 + 0xb4);
  local_d8 = 0x3f800000;
  local_12c = -*(float *)(param_1 + 0xb0);
  local_d4 = 0;
  local_d0 = 0;
  local_128 = -*(float *)(param_1 + 0xb4);
  local_cc = 0;
  local_c8 = 0x3f800000;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0x3f800000;
  local_b4 = 0xbf800000;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0xbf800000;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0xbf800000;
  puVar3 = &local_d0;
  iVar4 = 3;
  puVar5 = param_2;
  do {
    uVar2 = puVar3[-2];
    uVar1 = *puVar3;
    puVar5[1] = puVar3[-1];
    *puVar5 = uVar2;
    puVar5[2] = uVar1;
    fVar7 = (float10)FUN_00402000();
    if (((float10)_DAT_006e92f0 < fVar7 == ((float10)_DAT_006e92f0 == fVar7)) ||
       (fVar7 < (float10)_DAT_006e92ec == (fVar7 == (float10)_DAT_006e92ec))) {
      FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar7)));
    }
    fVar7 = (float10)FUN_00402020(&local_130);
    puVar5[3] = (float)-fVar7;
    puVar3 = puVar3 + 3;
    puVar5 = puVar5 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = &local_b4;
  pfVar6 = (float *)(param_2 + 0xc);
  iVar4 = 3;
  do {
    FUN_004357e0(puVar3);
    fVar7 = (float10)FUN_00402000();
    if (((float10)_DAT_006e92f0 < fVar7 == ((float10)_DAT_006e92f0 == fVar7)) ||
       (fVar7 < (float10)_DAT_006e92ec == (fVar7 == (float10)_DAT_006e92ec))) {
      fVar7 = (float10)DAT_006e92e8 / SQRT(fVar7);
      *pfVar6 = (float)(fVar7 * (float10)*pfVar6);
      pfVar6[1] = (float)(fVar7 * (float10)pfVar6[1]);
      pfVar6[2] = (float)(fVar7 * (float10)pfVar6[2]);
    }
    fVar7 = (float10)FUN_00402020(&local_124);
    pfVar6[3] = (float)-fVar7;
    pfVar6 = pfVar6 + 4;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_e8 = 0;
  local_f8 = 0;
  local_108 = 0;
  local_e4 = 0;
  local_f4 = 0;
  local_114 = 0;
  local_e0 = 0;
  local_100 = 0;
  local_110 = 0;
  local_ec = 0;
  local_fc = 0;
  local_10c = 0;
  local_118 = 0x3f800000;
  local_104 = 0x3f800000;
  local_f0 = 0x3f800000;
  local_dc = 0x3f800000;
  FUN_00463c20(param_1 + 0x68);
  uVar2 = FUN_0064e040(local_40,local_80,&local_118);
  FUN_00406570(uVar2);
  FUN_00420470(param_1 + 0x14);
  iVar4 = 6;
  do {
    uVar2 = FUN_004e3b20(local_90,&local_118,param_2);
    FUN_0042fda0(uVar2);
    param_2 = param_2 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

