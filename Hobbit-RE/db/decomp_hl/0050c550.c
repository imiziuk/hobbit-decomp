
void FUN_0050c550(void)

{
  int iVar1;
  CRect aCStack_24 [16];
  undefined4 uStack_14;
  int *piStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  int iStack_4;
  
  puStack_c = (undefined1 *)0x1;
  piStack_10 = (int *)s_OptionSelect_00723150;
  uStack_14 = 0x50c564;
  FUN_00659600();
  puStack_c = (undefined1 *)0x1;
  piStack_10 = (int *)DAT_00813038;
  uStack_14 = 0x50c577;
  FUN_006a16c0();
  puStack_c = (undefined1 *)0x50c581;
  iVar1 = FUN_0052d730();
  if (iVar1 != 0) {
    piStack_10 = &iStack_4;
    uStack_14 = 0x50c594;
    puStack_c = (undefined1 *)&iStack_8;
    FUN_0065f8a0();
    puStack_c = (undefined1 *)0x0;
    piStack_10 = (int *)0x5;
    uStack_14 = 0;
    CRect::CRect(aCStack_24,0x10,0x10,iStack_4 + -0x10,iStack_8 + -0x10);
    FUN_006a1430(DAT_00813038,s_pause_options_00732bbc);
    return;
  }
  puStack_c = (undefined1 *)0x5;
  piStack_10 = (int *)0x50c5e3;
  FUN_0052a630();
  return;
}

