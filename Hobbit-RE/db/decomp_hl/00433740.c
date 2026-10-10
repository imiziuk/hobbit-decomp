
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00433740(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar7 = FUN_0042a7d0(0x1d);
  if ((iVar7 == 0) || (*(int *)(param_1 + 0x658) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  *(undefined4 *)(param_1 + 0x6d4) = uVar8;
  iVar7 = FUN_006710d0(0xba,0);
  if (iVar7 == 0) {
LAB_004337a3:
    uVar8 = 0;
  }
  else {
    iVar7 = FUN_00670ef0(0xbe,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0x71c) != 0)) goto LAB_004337a3;
    uVar8 = 1;
  }
  *(undefined4 *)(param_1 + 0x720) = uVar8;
  iVar7 = FUN_006710d0(0xba,0);
  if (iVar7 == 0) {
LAB_004337d6:
    uVar8 = 0;
  }
  else {
    iVar7 = FUN_00670ef0(0xbe,0);
    if (iVar7 == 0) goto LAB_004337d6;
    uVar8 = 1;
  }
  *(undefined4 *)(param_1 + 0x71c) = uVar8;
  iVar7 = FUN_0042a6a0(0x20);
  if (((iVar7 != 0) && (*(int *)(param_1 + 0x658) != 0)) || (*(int *)(param_1 + 0x720) != 0)) {
    if (*(int *)(param_1 + 0x6e4) == 0) {
      *(undefined4 *)(param_1 + 0x6e0) = 0;
      FUN_0056b6b0(1);
      *(undefined4 *)(param_1 + 0x6e4) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x6e4) = 0;
    }
    FUN_0064e7d0(s_m_Input_Fly___TRUE__00720f88);
  }
  if (*(int *)(param_1 + 0x6e4) == 0) {
    if (*(int *)(param_1 + 0x6e0) != 0) {
      FUN_00672330(&local_24);
      pfVar9 = (float *)FUN_006722f0(&local_18);
      fVar2 = *pfVar9;
      fVar3 = pfVar9[1];
      fVar4 = pfVar9[2];
      if (DAT_00762b0c != 0) {
        *(float *)(param_1 + 0x61c) = -*(float *)(param_1 + 0x61c);
      }
      fVar5 = *(float *)(param_1 + 0x600);
      fVar6 = *(float *)(param_1 + 0x604);
      local_4 = *(float *)(param_1 + 0x920);
      local_c = (local_24 * fVar6 + -fVar2 * fVar5) * _DAT_006e99c0 * local_4;
      local_8 = (local_20 * fVar6 + -fVar3 * fVar5) * _DAT_006e99c0 * local_4;
      local_4 = (local_1c * fVar6 + -fVar4 * fVar5) * _DAT_006e99c0 * local_4;
      local_18 = *(float *)(param_1 + 0x61c) * _DAT_006e9368;
      local_14 = -*(float *)(param_1 + 0x618) * _DAT_006e9368;
      local_10 = *(float *)(param_1 + 0x920) * DAT_006e92e4;
      *(undefined4 *)(param_1 + 0x604) = 0;
      *(undefined4 *)(param_1 + 0x600) = 0;
      *(undefined4 *)(param_1 + 0x638) = 0;
      *(undefined4 *)(param_1 + 0x634) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      *(undefined4 *)(param_1 + 0x610) = 0;
      *(undefined4 *)(param_1 + 0x614) = 0;
      *(undefined4 *)(param_1 + 0x61c) = 0;
      *(undefined4 *)(param_1 + 0x618) = 0;
      FUN_004357e0(&local_c);
      FUN_0056b820();
    }
    goto LAB_00433a96;
  }
  iVar7 = FUN_0042a6a0(0x4f);
  if (iVar7 == 0) {
    iVar7 = FUN_0042a6a0(0x50);
    if (iVar7 != 0) goto LAB_00433863;
  }
  else {
LAB_00433863:
    iVar7 = 1;
  }
  *(int *)(param_1 + 0x6e8) = iVar7;
  iVar7 = FUN_0042a6a0(0x51);
  if (iVar7 == 0) {
    iVar7 = FUN_0042a6a0(0x52);
    if (iVar7 != 0) goto LAB_0043388e;
  }
  else {
LAB_0043388e:
    iVar7 = 1;
  }
  *(int *)(param_1 + 0x6ec) = iVar7;
  iVar7 = FUN_0042a6a0(0x53);
  if (iVar7 == 0) {
    iVar7 = FUN_0042a6a0(0x54);
    if (iVar7 != 0) goto LAB_004338b9;
  }
  else {
LAB_004338b9:
    iVar7 = 1;
  }
  *(int *)(param_1 + 0x6f4) = iVar7;
  *(undefined4 *)(param_1 + 0x684) = 0;
  *(undefined4 *)(param_1 + 0x648) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  *(undefined4 *)(param_1 + 0x668) = 0;
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x650) = 0;
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
LAB_00433a96:
  if (*(int *)(param_1 + 0x6d4) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x450) + 0xf8);
    *puVar1 = *puVar1 ^ 1;
  }
  return;
}

