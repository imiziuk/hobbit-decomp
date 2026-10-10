
void __fastcall FUN_00461a70(int *param_1)

{
  float *pfVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined1 local_fc [8];
  float local_f4;
  float local_f0 [5];
  int local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  int local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 local_a4 [24];
  undefined1 local_8c [12];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  if (param_1[0x2a] != 0) {
    FUN_004607c0(&local_b0,param_1[0x2c],1);
    local_f0[0] = (float)param_1[0x2d];
    local_c8 = param_1[0x2f];
    local_dc = param_1[0x2e];
    local_f4 = -local_a8;
    local_c4 = 0;
    local_f0[1] = (float)param_1[0x2e] * DAT_006e92e4;
    local_d4 = 0;
    local_f0[3] = 0.0;
    local_b4 = 0x3f800000;
    local_f0[2] = (float)param_1[0x2f] * DAT_006e92e4;
    local_f0[4] = (float)param_1[0x2d] * DAT_006e92e4;
    local_c0 = -local_b0 * (float)param_1[0x2d];
    local_bc = -local_ac * (float)param_1[0x2e];
    local_b8 = local_f4 * (float)param_1[0x2f];
    local_d8 = local_f0[2];
    local_d0 = local_f0[4];
    local_cc = local_f0[1];
    FUN_00463c20(param_1 + 0x49);
    uVar3 = FUN_0064e040(local_40,local_80,local_f0);
    FUN_00406570(uVar3);
    FUN_00420470(&local_b0);
    FUN_00420470(param_1 + 0x46);
    pfVar1 = (float *)(param_1 + 0x53);
    if (pfVar1 != local_f0) {
      pfVar5 = local_f0;
      piVar4 = param_1 + 0x55;
      do {
        piVar4[-2] = (int)*pfVar5;
        piVar4[-1] = (int)pfVar5[1];
        *piVar4 = *(int *)(((int)local_f0 - (int)pfVar1) + (int)piVar4);
        piVar4[1] = *(int *)((int)local_f0 + (4 - (int)pfVar1) + (int)piVar4);
        pfVar5 = pfVar5 + 4;
        piVar4 = piVar4 + 4;
      } while (pfVar5 != &local_b0);
    }
    bVar2 = true;
    FUN_00406a80();
    iVar6 = 0;
    if (0 < param_1[0x2a]) {
      iVar7 = 0;
      do {
        uVar3 = FUN_004607c0(local_8c,param_1[0x2c] + iVar7,0);
        FUN_004357e0(uVar3);
        if (bVar2) {
          FUN_004357e0(local_fc);
          FUN_004357e0(local_fc);
          bVar2 = false;
        }
        else {
          FUN_00406af0(local_fc);
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0xe;
      } while (iVar6 < param_1[0x2a]);
    }
    (**(code **)(*param_1 + 0x40))();
    FUN_00480f60(local_a4);
    (**(code **)(*param_1 + 0x44))();
  }
  return;
}

