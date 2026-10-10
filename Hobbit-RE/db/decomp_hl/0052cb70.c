
void __fastcall FUN_0052cb70(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_6c8 [1724];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d82b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063ddb0();
  local_4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00649600(s_Pause_Mgr__UpdateSummaryStats_00736a90);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_005496c0(s_summary_txt_00736a84,0);
  iVar2 = FUN_0063df60(uVar1);
  if (iVar2 != 0) {
    iVar2 = FUN_0063e510();
    while (iVar2 == 1) {
      FUN_0063e6a0();
      iVar2 = FUN_00647ed0(local_6c8,s_ItemCounts_00736a78);
      if (iVar2 == 0) {
        FUN_0063f560(s_TreasureChestsCount_00736a64,param_1);
        FUN_0063f560(s_CouragePtsCount_00736a54,param_1 + 1);
        FUN_0063f560(s_MainQuestCount_00736a44,param_1 + 2);
        FUN_0063f560(s_TotalSPThisLevel_00736a30,param_1 + 3);
      }
      iVar2 = FUN_0063e510();
    }
    FUN_0063df00();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649720();
  local_4 = 0xffffffff;
  FUN_0063de30();
  ExceptionList = local_c;
  return;
}

