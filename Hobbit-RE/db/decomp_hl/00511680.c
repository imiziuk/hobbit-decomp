
void FUN_00511680(undefined4 param_1,int param_2)

{
  CRect aCStack_24 [16];
  undefined4 uStack_14;
  int *piStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  int iStack_4;
  
  puStack_c = (undefined1 *)&iStack_8;
  piStack_10 = &iStack_4;
  uStack_14 = 0x511692;
  FUN_0065f8a0();
  puStack_c = (undefined1 *)0x1;
  if (param_2 != -1) {
    piStack_10 = (int *)s_PageRight_00733354;
    uStack_14 = 0x5116af;
    FUN_00659600();
    puStack_c = (undefined1 *)0x1;
    piStack_10 = (int *)DAT_00813038;
    uStack_14 = 0x5116c3;
    FUN_006a16c0();
    puStack_c = (undefined1 *)0x0;
    piStack_10 = (int *)0x5;
    uStack_14 = 0;
    CRect::CRect(aCStack_24,0x10,0x10,iStack_4 + -0x10,iStack_8 + -0x10);
    FUN_006a1430(DAT_00813038,s_pause_summary_00733344);
    return;
  }
  piStack_10 = (int *)s_PageLeft_00733370;
  uStack_14 = 0x51170d;
  FUN_00659600();
  puStack_c = (undefined1 *)0x1;
  piStack_10 = (int *)DAT_00813038;
  uStack_14 = 0x511721;
  FUN_006a16c0();
  puStack_c = (undefined1 *)0x0;
  piStack_10 = (int *)0x5;
  uStack_14 = 0;
  CRect::CRect(aCStack_24,0x10,0x10,iStack_4 + -0x10,iStack_8 + -0x10);
  FUN_006a1430(DAT_00813038,s_pause_questlog_00733360);
  return;
}

