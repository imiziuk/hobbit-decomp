
void __thiscall FUN_00460c20(int param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 extraout_ST0;
  float local_fc;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 local_d4 [12];
  undefined1 local_c8 [12];
  float local_bc;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  iVar5 = *(int *)(param_1 + 0xa8);
  if (iVar5 == 0) {
    param_3[0xc] = 0;
    param_3[8] = 0;
    param_3[4] = 0;
    param_3[0xd] = 0;
    param_3[9] = 0;
    param_3[1] = 0;
    param_3[0xe] = 0;
    param_3[6] = 0;
    param_3[2] = 0;
    param_3[0xb] = 0;
    param_3[7] = 0;
    param_3[3] = 0;
    *param_3 = 0x3f800000;
    param_3[5] = 0x3f800000;
    param_3[10] = 0x3f800000;
    param_3[0xf] = 0x3f800000;
    return;
  }
  iVar2 = __ftol();
  local_fc = (float)(extraout_ST0 - (float10)iVar2);
  if (*(int *)(param_1 + 0xc4) == 0) {
    local_fc = 0.0;
  }
  iVar4 = iVar2 * 0xe + *(int *)(param_1 + 0xb0);
  iVar5 = ((iVar2 + 1) % iVar5) * 0xe + *(int *)(param_1 + 0xb0);
  FUN_004608e0(local_b0,iVar4,0);
  FUN_004608e0(local_90,iVar5,0);
  FUN_0064d250(local_a0,local_b0,local_90,local_fc);
  FUN_004607c0(local_c8,iVar4,0);
  FUN_004607c0(local_d4,iVar5,0);
  FUN_00460f90(&local_ec,local_c8);
  FUN_00460f90(&local_e0,local_d4);
  local_bc = (local_e0 - local_ec) * local_fc;
  fVar1 = local_bc + local_ec;
  param_3[0xc] = 0;
  param_3[8] = 0;
  param_3[4] = 0;
  param_3[0xd] = 0;
  param_3[9] = 0;
  param_3[1] = 0;
  param_3[0xe] = 0;
  param_3[6] = 0;
  param_3[2] = 0;
  param_3[0xb] = 0;
  param_3[7] = 0;
  param_3[3] = 0;
  *param_3 = 0x3f800000;
  param_3[5] = 0x3f800000;
  param_3[10] = 0x3f800000;
  param_3[0xf] = 0x3f800000;
  FUN_004069b0(local_a0);
  param_3[3] = 0;
  param_3[7] = 0;
  param_3[0xb] = 0;
  param_3[0xf] = 0x3f800000;
  param_3[0xe] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  FUN_00463c20(param_1 + 0x68);
  uVar3 = FUN_0064e040(local_40,local_80,param_3);
  FUN_00406570(uVar3);
  param_3[0xc] = fVar1;
  param_3[0xd] = (local_dc - local_e8) * local_fc + local_e8;
  param_3[0xe] = (local_d8 - local_e4) * local_fc + local_e4;
  return;
}

