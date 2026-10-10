
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004963e0(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_cc [8];
  float local_c4;
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
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  local_90 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_8c = 0;
  local_9c = 0;
  local_bc = 0;
  local_88 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_94 = 0;
  local_a4 = 0;
  local_b4 = 0;
  local_c0 = 0x3f800000;
  local_ac = 0x3f800000;
  local_98 = 0x3f800000;
  local_84 = 0x3f800000;
  FUN_00463c20(param_1 + 0x1a);
  uVar2 = FUN_0064e040(local_40,local_80,&local_c0);
  FUN_00406570(uVar2);
  pfVar3 = (float *)(param_1 + 0x2a);
  pfVar1 = (float *)(param_1 + 0xb);
  local_c4 = (float)param_1[0x2f] + (float)param_1[0x2c];
  local_d8 = ((float)param_1[0x2d] + (float)param_1[0x2a]) * _DAT_006e936c;
  *pfVar1 = 3.4028235e+38;
  param_1[0xc] = 0x7f7fffff;
  param_1[0xd] = 0x7f7fffff;
  local_d4 = ((float)param_1[0x2e] + (float)param_1[0x2b]) * _DAT_006e936c;
  local_d0 = local_c4 * _DAT_006e936c;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  iVar4 = 2;
  do {
    if (*pfVar3 < *pfVar1 != (NAN(*pfVar3) || NAN(*pfVar1))) {
      *pfVar1 = *pfVar3;
    }
    if (pfVar3[1] < (float)param_1[0xc] != (NAN(pfVar3[1]) || NAN((float)param_1[0xc]))) {
      param_1[0xc] = (int)pfVar3[1];
    }
    if (pfVar3[2] < (float)param_1[0xd] != (NAN(pfVar3[2]) || NAN((float)param_1[0xd]))) {
      param_1[0xd] = (int)pfVar3[2];
    }
    if ((float)param_1[0xe] < *pfVar3) {
      param_1[0xe] = (int)*pfVar3;
    }
    if ((float)param_1[0xf] < pfVar3[1]) {
      param_1[0xf] = (int)pfVar3[1];
    }
    if ((float)param_1[0x10] < pfVar3[2]) {
      param_1[0x10] = (int)pfVar3[2];
    }
    pfVar3 = pfVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00401f00(-local_d8,-local_d4,-local_d0);
  FUN_0042faf0(local_cc);
  FUN_0042faf0(local_cc);
  FUN_004936f0(&local_c0);
  iVar4 = (**(code **)(*param_1 + 0x38))();
  FUN_004357e0(iVar4);
  FUN_004357e0(iVar4 + 0xc);
  param_1[5] = (int)local_d8;
  param_1[6] = (int)local_d4;
  param_1[7] = (int)local_d0;
  FUN_004357e0(&local_d8);
  FUN_004937a0(param_1 + 5);
  (**(code **)(*param_1 + 0x14))(&local_d8,0);
  return;
}

