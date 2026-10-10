
void __thiscall FUN_00511550(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  CRect aCStack_24 [16];
  undefined4 uStack_14;
  int *piStack_10;
  undefined4 *puStack_c;
  int iStack_4;
  
  iStack_4 = param_1;
  if (param_2 == *(int *)(param_1 + 0x4b4)) {
    puStack_c = &param_2;
    piStack_10 = &iStack_4;
    uStack_14 = 0x51156f;
    FUN_0065f8a0();
    puStack_c = (undefined4 *)0x1;
    piStack_10 = (int *)s_PageLeft_00733370;
    uStack_14 = 0x511583;
    FUN_00659600();
    puStack_c = (undefined4 *)0x1;
    piStack_10 = (int *)DAT_00813038;
    uStack_14 = 0x511597;
    FUN_006a16c0();
    puStack_c = (undefined4 *)0x0;
    piStack_10 = (int *)0x5;
    uStack_14 = 0;
    CRect::CRect(aCStack_24,0x10,0x10,iStack_4 + -0x10,param_2 + -0x10);
    FUN_006a1430(DAT_00813038,s_pause_questlog_00733360);
    return;
  }
  if (param_2 == *(int *)(param_1 + 0x4b8)) {
    puStack_c = &param_2;
    piStack_10 = &iStack_4;
    uStack_14 = 0x5115ed;
    FUN_0065f8a0();
    puStack_c = (undefined4 *)0x1;
    piStack_10 = (int *)s_PageRight_00733354;
    uStack_14 = 0x511601;
    FUN_00659600();
    puStack_c = (undefined4 *)0x1;
    piStack_10 = (int *)DAT_00813038;
    uStack_14 = 0x511614;
    FUN_006a16c0();
    puStack_c = (undefined4 *)0x0;
    piStack_10 = (int *)0x5;
    uStack_14 = 0;
    CRect::CRect(aCStack_24,0x10,0x10,iStack_4 + -0x10,param_2 + -0x10);
    FUN_006a1430(DAT_00813038,s_pause_summary_00733344);
    return;
  }
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x4bc);
  do {
    if (param_2 == *piVar2) {
      puStack_c = (undefined4 *)0x511677;
      FUN_00511cf0();
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x28);
  return;
}

