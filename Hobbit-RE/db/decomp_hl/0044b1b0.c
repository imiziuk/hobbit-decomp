
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044b1b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float local_2c;
  float fStack_28;
  undefined1 local_1c [12];
  undefined4 local_10 [2];
  int local_8;
  int local_4;
  
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1ec] = 0x47c35000;
  FUN_00549470(param_1 + 0x115);
  FUN_00549580(param_1 + 0x115);
  uVar6 = 0x3e000000;
  uVar5 = 1;
  uVar4 = 1;
  uVar1 = FUN_0053cc70(s_EDGE_IDLE_00720e6c);
  FUN_00540840(uVar1,uVar4,uVar5,uVar6);
  iVar2 = param_1[0x114];
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  param_1[0x167] = param_1[0x167] + 1;
  param_1[0x121] = *(int *)(iVar2 + 0xfc);
  param_1[0x122] = *(int *)(iVar2 + 0x100);
  param_1[0x123] = *(int *)(iVar2 + 0x104);
  FUN_004430e0(9);
  local_8 = param_1[0xe94];
  local_4 = param_1[0xe95];
  local_10[0] = 0x1a;
  if (DAT_0075cf1c != 0) {
    FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),local_10);
  }
  FUN_0044a3a0(local_1c,&local_2c);
  (**(code **)(*param_1 + 0x14))(local_1c,0);
  param_1[0x119a] = 1;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x167] = param_1[0x167] + 1;
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  param_1[0x11d] = unaff_EBP;
  param_1[0x1eb] = unaff_EBP;
  local_2c = (float)param_1[0x1d6] * _DAT_006e9448;
  fStack_28 = (float)param_1[0x1d7] * _DAT_006e9448;
  FUN_0044aba0(param_1[0x1197],&stack0xffffffd0);
  iVar2 = FUN_004021c0(param_1[0xe94],param_1[0xe95]);
  iVar2 = *(int *)(iVar2 + 0x188);
  if (iVar2 == 0) {
    pcVar3 = s_VineSway_00724640;
  }
  else if (iVar2 == 1) {
    pcVar3 = s_RopeSway_0072464c;
  }
  else {
    if (iVar2 != 2) goto LAB_0044b384;
    pcVar3 = s_ChainSway_00724658;
  }
  FUN_00659600(pcVar3,1);
LAB_0044b384:
  FUN_00421f80();
  param_1[0x119e] = 0;
  param_1[0x119f] = 0;
  (**(code **)(param_1[0x17bd] + 8))();
  return;
}

