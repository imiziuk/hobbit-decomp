
void __fastcall FUN_004ee720(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  undefined1 *puVar8;
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
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  local_dc = (float)param_1[0x35];
  local_d8 = (float)param_1[0x36] * DAT_006e92e4;
  local_c8 = (float)param_1[0x36];
  local_b4 = (float)param_1[0x37];
  local_d4 = (float)param_1[0x37] * DAT_006e92e4;
  local_b0 = 0.0;
  local_c0 = 0.0;
  local_cc = (float)param_1[0x35] * DAT_006e92e4;
  local_d0 = 0.0;
  local_a0 = 1.0;
  local_c4 = local_d4;
  local_bc = local_cc;
  local_b8 = local_d8;
  local_ac = local_cc;
  local_a8 = local_d8;
  local_a4 = local_d4;
  FUN_00463c20(param_1 + 0x1a);
  uVar4 = FUN_0064e040(local_40,local_80,&local_dc);
  FUN_00406570(uVar4);
  if (((((NAN(local_d0) || NAN(DAT_006e92e4)) == (local_d0 == DAT_006e92e4)) ||
       ((NAN(local_c0) || NAN(DAT_006e92e4)) == (local_c0 == DAT_006e92e4))) ||
      ((NAN(local_b0) || NAN(DAT_006e92e4)) == (local_b0 == DAT_006e92e4))) ||
     ((NAN(local_a0) || NAN(DAT_006e92e8)) == (local_a0 == DAT_006e92e8))) {
    local_dc = local_d0 * (float)param_1[5] + local_dc;
    local_cc = local_c0 * (float)param_1[5] + local_cc;
    local_bc = local_b0 * (float)param_1[5] + local_bc;
    fVar1 = local_a0 * (float)param_1[5];
    local_d8 = local_d0 * (float)param_1[6] + local_d8;
    local_c8 = local_c0 * (float)param_1[6] + local_c8;
    local_b8 = local_b0 * (float)param_1[6] + local_b8;
    fVar2 = local_a0 * (float)param_1[6];
    local_d4 = local_d0 * (float)param_1[7] + local_d4;
    local_c4 = local_c0 * (float)param_1[7] + local_c4;
    local_b4 = local_b0 * (float)param_1[7] + local_b4;
    fVar3 = local_a0 * (float)param_1[7];
  }
  else {
    fVar1 = (float)param_1[5];
    fVar2 = (float)param_1[6];
    fVar3 = (float)param_1[7];
  }
  local_a8 = local_a8 + fVar2;
  local_ac = local_ac + fVar1;
  local_a4 = local_a4 + fVar3;
  pfVar5 = (float *)(param_1 + 0x38);
  *pfVar5 = -1.0;
  param_1[0x39] = -0x40800000;
  param_1[0x3a] = -0x40800000;
  param_1[0x3b] = -0x40800000;
  param_1[0x3c] = -0x40800000;
  param_1[0x3d] = 0x3f800000;
  param_1[0x3e] = -0x40800000;
  param_1[0x3f] = 0x3f800000;
  param_1[0x40] = -0x40800000;
  param_1[0x41] = -0x40800000;
  param_1[0x42] = 0x3f800000;
  param_1[0x43] = 0x3f800000;
  param_1[0x44] = 0x3f800000;
  param_1[0x45] = -0x40800000;
  param_1[0x46] = -0x40800000;
  param_1[0x47] = 0x3f800000;
  param_1[0x48] = -0x40800000;
  param_1[0x49] = 0x3f800000;
  param_1[0x4a] = 0x3f800000;
  param_1[0x4b] = 0x3f800000;
  param_1[0x4c] = -0x40800000;
  param_1[0x4d] = 0x3f800000;
  param_1[0x4e] = 0x3f800000;
  param_1[0x4f] = 0x3f800000;
  local_9c = 8;
  pfVar7 = pfVar5;
  do {
    FUN_0041b9f0(local_98,pfVar7);
    FUN_004357e0(local_98);
    pfVar7 = pfVar7 + 3;
    local_9c = local_9c + -1;
  } while (local_9c != 0);
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  iVar6 = 8;
  do {
    fVar1 = (float)param_1[0xb];
    if (*pfVar5 < fVar1 != (NAN(*pfVar5) || NAN(fVar1))) {
      param_1[0xb] = (int)*pfVar5;
    }
    if (pfVar5[1] < (float)param_1[0xc] != (NAN(pfVar5[1]) || NAN((float)param_1[0xc]))) {
      param_1[0xc] = (int)pfVar5[1];
    }
    if (pfVar5[2] < (float)param_1[0xd] != (NAN(pfVar5[2]) || NAN((float)param_1[0xd]))) {
      param_1[0xd] = (int)pfVar5[2];
    }
    if ((float)param_1[0xe] < *pfVar5) {
      param_1[0xe] = (int)*pfVar5;
    }
    if ((float)param_1[0xf] < pfVar5[1]) {
      param_1[0xf] = (int)pfVar5[1];
    }
    if ((float)param_1[0x10] < pfVar5[2]) {
      param_1[0x10] = (int)pfVar5[2];
    }
    pfVar5 = pfVar5 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar4 = FUN_0042ebd0(local_98);
  FUN_004937a0(uVar4);
  FUN_00401f00(0,0,0x3f800000);
  uVar4 = (**(code **)(*param_1 + 0x30))();
  FUN_00429030(uVar4);
  puVar8 = local_8c;
  uVar4 = (**(code **)(*param_1 + 0x28))(puVar8);
  FUN_00499d00(uVar4,puVar8);
  (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
  return;
}

