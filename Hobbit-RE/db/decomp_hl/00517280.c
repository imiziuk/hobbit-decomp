
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00517280(int param_1)

{
  CRect aCStack_28 [16];
  undefined4 uStack_18;
  int *piStack_14;
  undefined1 *puStack_10;
  int local_8;
  int local_4;
  
  puStack_10 = (undefined1 *)&local_8;
  piStack_14 = &local_4;
  uStack_18 = 0x517295;
  FUN_0065f8a0();
  puStack_10 = (undefined1 *)0x1;
  piStack_14 = (int *)s_OptionCancel_00723140;
  uStack_18 = 0x5172a9;
  FUN_00659600();
  _DAT_00763ed4 = 0;
  puStack_10 = (undefined1 *)0x1;
  if (*(int *)(param_1 + 0x1a8) == 0) {
    piStack_14 = (int *)DAT_00813038;
    uStack_18 = 0x5172d1;
    FUN_006a16c0();
    puStack_10 = (undefined1 *)0x0;
    piStack_14 = (int *)0x5;
    uStack_18 = 0;
    CRect::CRect(aCStack_28,0x10,0x10,local_4 + -0x10,local_8 + -0x10);
    FUN_006a1430(DAT_00813038,s_pause_options_00732bbc);
    return;
  }
  piStack_14 = (int *)DAT_00813038;
  uStack_18 = 0x517324;
  FUN_006a16c0();
  return;
}

