
void __thiscall FUN_00535ec0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int local_140;
  undefined1 local_13c [48];
  undefined1 local_10c;
  undefined4 local_10b [63];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8d76;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  iVar3 = 0;
  local_4 = 0;
  FUN_00641400(s_MinSilenceTime_00725094,*(undefined4 *)(param_1 + 0x278));
  FUN_00641400(s_MaxSilenceTime_00725084,*(undefined4 *)(param_1 + 0x27c));
  FUN_00641400(s_VolumeFadeTime_00725074,*(undefined4 *)(param_1 + 0x280));
  FUN_006414f0(s_MusicLevelFile_00737480,*(undefined4 *)(param_1 + 200));
  FUN_006414f0(s_MusicLevelName_00737470,*(undefined4 *)(param_1 + 0xf4));
  FUN_006414f0(s_DefaultSuite_00737460,*(undefined4 *)(param_1 + 0x164));
  FUN_006414f0(s_DefaultTrack_00737450,*(undefined4 *)(param_1 + 400));
  FUN_006414f0(s_DefaultStateName_0073743c,*(undefined4 *)(param_1 + 0x29c));
  FUN_00641480(s_DefaultState_0073742c,*(undefined4 *)(param_1 + 0x298));
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 300);
  FUN_00641480(s_AudioPackageCount_00737418,*(undefined4 *)(param_1 + 300));
  if (0 < *(int *)(param_1 + 0x120)) {
    local_140 = 0;
    do {
      local_10c = 0;
      puVar4 = local_10b;
      for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      iVar2 = *(int *)(param_1 + 0x130);
      *(undefined2 *)puVar4 = 0;
      FUN_00648a10(*(undefined4 *)(local_140 + iVar2),&local_10c);
      FUN_00649920(local_13c,s_AudioPackage_02d_00737404,iVar3);
      puVar5 = &local_10c;
      local_4._0_1_ = 1;
      uVar1 = FUN_00649940(puVar5);
      FUN_006414f0(uVar1,puVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
      iVar3 = iVar3 + 1;
      local_140 = local_140 + 0x2c;
    } while (iVar3 < *(int *)(param_1 + 0x120));
  }
  FUN_00641400(s_m_MinCombatThreshold_007373ec,*(undefined4 *)(param_1 + 0x2f4));
  FUN_00641400(s_m_MaxCombatThreshold_007373d4,*(undefined4 *)(param_1 + 0x2f8));
  FUN_00641400(s_m_MinCombatTimeForStinger_007373b8,*(undefined4 *)(param_1 + 0x2fc));
  FUN_00535ae0(param_2);
  FUN_004aa650(param_2);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

