
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00444730(int *param_1)

{
  float *pfVar1;
  float10 fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float unaff_ESI;
  float10 fVar6;
  char *pcVar7;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_c [8];
  float local_4;
  
  FUN_004357e0(param_1 + 0x119);
  local_44 = (float)param_1[0x11d];
  pfVar1 = (float *)(param_1 + 500);
  iVar4 = FUN_00442a80(param_1 + 5,local_44,*(undefined4 *)(param_1[0x114] + 0x8c),
                       *(undefined4 *)(param_1[0x114] + 0x94),2,3,pfVar1,param_1 + 0x1f8);
  param_1[0x1d9] = iVar4;
  if (iVar4 == 0) {
    return;
  }
  fVar6 = (float10)FUN_0064ca10(*pfVar1,param_1[0x1f6]);
  fVar2 = (float10)_DAT_006e9368;
  param_1[0x167] = param_1[0x167] + 1;
  param_1[0x11d] = (int)(float)(fVar6 + fVar2);
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],&local_34,&local_44);
  local_34 = local_34 * (float)param_1[0x1e6];
  local_30 = local_30 * (float)param_1[0x1e7];
  local_40 = local_28;
  local_2c = local_2c * (float)param_1[0x1e6];
  local_3c = local_24;
  local_38 = local_20;
  FUN_00469060(&local_40,&local_34,0,0xbf800000,0,1,1);
  local_4 = -(float)param_1[0x1f6];
  local_44 = *(float *)(param_1[0x114] + 0x8c);
  local_1c = -*pfVar1 * local_44;
  local_18 = -(float)param_1[0x1f5] * local_44;
  local_14 = local_4 * local_44;
  FUN_00469060(&local_40,&local_1c,0x3f800000,0xbf800000,0,1,1);
  iVar4 = param_1[0x158];
  if (*(int *)(iVar4 + 8) != -1) {
    pcVar7 = s_CLIMB_IDLE_CLIFF_00724244;
    FUN_004258a0(s_CLIMB_IDLE_CLIFF_00724244);
    iVar5 = FUN_0053cc70(pcVar7);
    if (*(int *)(iVar4 + 8) == iVar5) goto LAB_0044494c;
  }
  local_44 = (float)param_1[0x11d];
  param_1[0x1ff] = 0;
  iVar4 = FUN_00442a80(&local_40,local_44,*(undefined4 *)(param_1[0x114] + 0x8c),
                       *(undefined4 *)(param_1[0x114] + 0x94),2,3,&local_1c,local_c);
  if (iVar4 == 0) {
    param_1[0x1ff] = 1;
    param_1[0x200] = param_1[0x14a];
    return;
  }
LAB_0044494c:
  (**(code **)(*param_1 + 0x14))(&local_40,0);
  fVar3 = DAT_006e92e8 / (float)param_1[0x248];
  param_1[0x1d5] = (int)((unaff_ESI - local_30) * fVar3);
  param_1[0x1d7] = (int)((local_40 - local_28) * fVar3);
  param_1[0x1d6] = (int)((local_44 - local_2c) * fVar3);
  return;
}

