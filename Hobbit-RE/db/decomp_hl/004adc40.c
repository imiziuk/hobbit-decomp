
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004adc40(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float10 extraout_ST0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  iVar7 = *(int *)(param_1 + 0xc0);
  iVar4 = __ftol();
  iVar8 = iVar4 * 0xe + *(int *)(param_1 + 0xc4);
  fVar2 = (float)(extraout_ST0 - (float10)iVar4);
  iVar7 = ((iVar4 + 1) % iVar7) * 0xe + *(int *)(param_1 + 0xc4);
  FUN_004adbd0(local_90,iVar8);
  FUN_004adbd0(local_b0,iVar7);
  FUN_0064d250(local_a0,local_90,local_b0,fVar2);
  FUN_004adb90(&local_d4,iVar8);
  FUN_004adb90(&local_c8,iVar7);
  FUN_004adfa0(&local_ec,local_d4,local_d0,local_cc);
  FUN_004adfa0(&local_e0,local_c8,local_c4,local_c0);
  *param_3 = 0x3f800000;
  param_3[5] = 0x3f800000;
  local_bc = (local_e0 - local_ec) * fVar2;
  param_3[10] = 0x3f800000;
  param_3[0xf] = 0x3f800000;
  puVar6 = param_3 + 2;
  fVar3 = local_bc + local_ec;
  param_3[0xc] = 0;
  param_3[8] = 0;
  param_3[4] = 0;
  param_3[0xd] = 0;
  param_3[9] = 0;
  param_3[1] = 0;
  param_3[0xe] = 0;
  param_3[6] = 0;
  *puVar6 = 0;
  param_3[0xb] = 0;
  param_3[7] = 0;
  param_3[3] = 0;
  FUN_004069b0(local_a0);
  param_3[3] = 0;
  param_3[7] = 0;
  param_3[0xb] = 0;
  param_3[0xf] = 0x3f800000;
  param_3[0xe] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  FUN_00463c20(param_1 + 0xa8);
  puVar5 = (undefined4 *)FUN_0064e040(local_40,local_80,param_3);
  if ((param_3 != puVar5) && (puVar1 = puVar5 + 0x10, puVar5 != puVar1)) {
    iVar7 = (int)puVar5 - (int)param_3;
    do {
      puVar6[-2] = *puVar5;
      puVar6[-1] = puVar5[1];
      *puVar6 = *(undefined4 *)(iVar7 + (int)puVar6);
      puVar6[1] = puVar5[3];
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar5 != puVar1);
  }
  param_3[0xc] = fVar3;
  param_3[0xd] = (local_dc - local_e8) * fVar2 + local_e8;
  param_3[0xe] = (local_d8 - local_e4) * fVar2 + local_e4;
  return;
}

