
void __thiscall FUN_00518120(int param_1,int param_2)

{
  char *pcVar1;
  CRect aCStack_28 [16];
  undefined4 uStack_18;
  int *piStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  int iStack_4;
  
  puStack_10 = (undefined1 *)&iStack_8;
  piStack_14 = &iStack_4;
  uStack_18 = 0x518135;
  FUN_0065f8a0();
  if (param_2 == *(int *)(param_1 + 0x158)) {
    puStack_10 = (undefined1 *)0x1;
    piStack_14 = (int *)s_OptionSelect_00723150;
    uStack_18 = 0x518157;
    FUN_00659600();
    puStack_10 = (undefined1 *)0x1;
    piStack_14 = (int *)DAT_00813038;
    uStack_18 = 0x51816b;
    FUN_006a16c0();
    puStack_10 = (undefined1 *)0x0;
    piStack_14 = (int *)0x15;
    uStack_18 = 0;
    CRect::CRect(aCStack_28,0x10,0x10,iStack_4 + -0x10,iStack_8 + -0x10);
    pcVar1 = s_options_keyboard_controls_00730e88;
  }
  else {
    if (param_2 == *(int *)(param_1 + 0x15c)) {
      puStack_10 = (undefined1 *)0x1;
      piStack_14 = (int *)s_OptionSelect_00723150;
      uStack_18 = 0x5181b2;
      FUN_00659600();
      puStack_10 = (undefined1 *)0x1;
      piStack_14 = (int *)DAT_00813038;
      uStack_18 = 0x5181c6;
      FUN_006a16c0();
      puStack_10 = (undefined1 *)0x0;
      piStack_14 = (int *)0x15;
      uStack_18 = 0;
      CRect::CRect(aCStack_28,0x10,0x10,iStack_4 + -0x10,iStack_8 + -0x10);
      FUN_006a1430(DAT_00813038,s_options_gamepad_controls_00734360);
      return;
    }
    if (param_2 != *(int *)(param_1 + 0x160)) {
      return;
    }
    puStack_10 = (undefined1 *)0x1;
    piStack_14 = (int *)s_OptionSelect_00723150;
    uStack_18 = 0x518221;
    FUN_00659600();
    puStack_10 = (undefined1 *)0x1;
    piStack_14 = (int *)DAT_00813038;
    uStack_18 = 0x518235;
    FUN_006a16c0();
    puStack_10 = (undefined1 *)0x0;
    piStack_14 = (int *)0x5;
    uStack_18 = 0;
    CRect::CRect(aCStack_28,0x10,0x10,iStack_4 + -0x10,iStack_8 + -0x10);
    pcVar1 = s_pause_options_00732bbc;
  }
  FUN_006a1430(DAT_00813038,pcVar1);
  return;
}

