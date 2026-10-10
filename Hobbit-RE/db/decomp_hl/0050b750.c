
void __thiscall FUN_0050b750(int param_1,int param_2)

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
  uStack_18 = 0x50b765;
  FUN_0065f8a0();
  if (param_2 == *(int *)(param_1 + 0x158)) {
    puStack_10 = (undefined1 *)0x1;
    piStack_14 = (int *)s_OptionSelect_00723150;
    uStack_18 = 0x50b787;
    FUN_00659600();
    puStack_10 = (undefined1 *)0x0;
    piStack_14 = (int *)0x15;
    uStack_18 = 0;
    CRect::CRect(aCStack_28,0x10,0x10,iStack_4 + -0x10,iStack_8 + -0x10);
    pcVar1 = s_frontend_keyboard_controls_00732a24;
  }
  else {
    if (param_2 != *(int *)(param_1 + 0x15c)) {
      if (param_2 == *(int *)(param_1 + 0x160)) {
        puStack_10 = (undefined1 *)0x1;
        piStack_14 = (int *)s_OptionSelect_00723150;
        uStack_18 = 0x50b826;
        FUN_00659600();
        puStack_10 = (undefined1 *)0x1;
        piStack_14 = (int *)DAT_00813038;
        uStack_18 = 0x50b83a;
        FUN_006a16c0();
      }
      return;
    }
    puStack_10 = (undefined1 *)0x1;
    piStack_14 = (int *)s_OptionSelect_00723150;
    uStack_18 = 0x50b7e2;
    FUN_00659600();
    puStack_10 = (undefined1 *)0x0;
    piStack_14 = (int *)0x15;
    uStack_18 = 0;
    CRect::CRect(aCStack_28,0x10,0x10,iStack_4 + -0x10,iStack_8 + -0x10);
    pcVar1 = s_frontend_gamepad_controls_00732a08;
  }
  FUN_006a1430(DAT_00813038,pcVar1);
  return;
}

