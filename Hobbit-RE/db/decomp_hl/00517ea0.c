
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00517ea0(int param_1)

{
  CRect aCStack_20 [16];
  undefined4 uStack_10;
  char *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 1;
  pcStack_c = s_OptionCancel_00723140;
  uStack_10 = 0x517eb4;
  FUN_00659600();
  _DAT_00763ed4 = 0;
  uStack_8 = 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    pcStack_c = (char *)DAT_00813038;
    uStack_10 = 0x517edb;
    FUN_006a16c0();
    uStack_8 = 0;
    pcStack_c = (char *)0x5;
    uStack_10 = 0;
    CRect::CRect(aCStack_20,0x10,0x10,0x310,0x248);
    FUN_006a1430(DAT_00813038,s_pause_options_00732bbc);
    return;
  }
  pcStack_c = (char *)DAT_00813038;
  uStack_10 = 0x517f20;
  FUN_006a16c0();
  return;
}

