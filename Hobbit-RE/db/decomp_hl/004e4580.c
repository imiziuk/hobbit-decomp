
void __thiscall FUN_004e4580(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d59f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004aa650(param_2);
  iVar1 = param_1[0x30];
  uVar2 = (**(code **)(*param_1 + 0x4c))();
  FUN_006414f0(&DAT_00725c94,uVar2);
  FUN_006412e0(&DAT_0072ea50,param_1 + 0x35);
  FUN_006412e0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 5);
  FUN_00641600(&PTR_s_on__d_Spawn__d_Animation_0072ea4c,param_1 + 0x1a);
  FUN_00641760(s_ApplyToBilbo_0072ea3c,*(byte *)(param_1 + 0x55) & 1);
  FUN_00641760(s_ApplyToNPC_0072ea30,(*(byte *)(param_1 + 0x55) & 4) >> 2);
  FUN_00641760(s_ApplyToPushBox_0072ea20,*(byte *)(param_1 + 0x55) >> 1 & 1);
  FUN_00641760(s_ApplyToHoisting_0072ea10,(*(byte *)(param_1 + 0x55) & 0x40) >> 6);
  FUN_00641760(s_BlocksSight_0072ea04,(*(byte *)(param_1 + 0x55) & 0x10) >> 4);
  FUN_00641760(s_Occluder_0072e9f8,(*(byte *)(param_1 + 0x55) & 0x20) >> 5);
  FUN_00641760(s_CanClimb_0072e9ec,*(byte *)((int)param_1 + 0x155) & 1);
  FUN_00641760(s_DeathFall_0072e9e0,*(byte *)(param_1 + 0x55) >> 7);
  FUN_006412e0(s_PlaneNormal_0072e9d4,param_1 + 0x2a);
  FUN_00641400(s_PlaneD_0072e9cc,param_1[0x2d]);
  FUN_00641760(s_ApplyToCamera_0072e9bc,(*(byte *)(param_1 + 0x55) & 8) >> 3);
  FUN_00641480(s_ApplyToGuidsCount_0072e9a8,iVar1);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = *(undefined4 *)(param_1[0x31] + iVar4 * 8);
      uVar5 = *(undefined4 *)(param_1[0x31] + 4 + iVar4 * 8);
      FUN_00649920(&param_2,s_ApplyToGuid_02d_0072e998,iVar4);
      uStack_4 = 0;
      uVar3 = FUN_00649940(uVar2,uVar5);
      FUN_006417e0(uVar3,uVar2,uVar5);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_006412c0();
  ExceptionList = pvStack_c;
  return;
}

