
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00517d90(int param_1,int param_2)

{
  CRect aCStack_28 [16];
  undefined4 uStack_18;
  int *piStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  int iStack_4;
  
  puStack_10 = (undefined1 *)&iStack_8;
  piStack_14 = &iStack_4;
  uStack_18 = 0x517da5;
  FUN_0065f8a0();
  if (param_2 == *(int *)(param_1 + 0x158)) {
    puStack_10 = (undefined1 *)0x1;
    piStack_14 = (int *)s_OptionSelect_00723150;
    uStack_18 = 0x517dcb;
    FUN_00659600();
    if (*(int *)(param_1 + 0x160) != 0) {
      puStack_10 = (undefined1 *)0x517dda;
      DAT_00762b04 = FUN_006a5900();
    }
    puStack_10 = (undefined1 *)0x517dea;
    DAT_00762b08 = FUN_006a5900();
    puStack_10 = (undefined1 *)0x517dfa;
    DAT_00762b0c = FUN_006a5900();
    if (*(int *)(param_1 + 0x16c) != 0) {
      puStack_10 = (undefined1 *)0x517e0e;
      DAT_00762b00 = FUN_006a5900();
      puStack_10 = (undefined1 *)0x0;
      uStack_18 = 0x517e1b;
      piStack_14 = (int *)DAT_00762b00;
      FUN_00671220();
    }
    _DAT_00763ed4 = 0;
    puStack_10 = (undefined1 *)0x1;
    if (*(int *)(param_1 + 0x178) == 0) {
      piStack_14 = (int *)DAT_00813038;
      uStack_18 = 0x517e45;
      FUN_006a16c0();
      puStack_10 = (undefined1 *)0x0;
      piStack_14 = (int *)0x5;
      uStack_18 = 0;
      CRect::CRect(aCStack_28,0x10,0x10,iStack_4 + -0x10,iStack_8 + -0x10);
      FUN_006a1430(DAT_00813038,s_pause_options_00732bbc);
      return;
    }
    piStack_14 = (int *)DAT_00813038;
    uStack_18 = 0x517e93;
    FUN_006a16c0();
  }
  return;
}

