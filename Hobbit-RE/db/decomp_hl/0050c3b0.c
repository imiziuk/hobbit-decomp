
void __thiscall FUN_0050c3b0(int param_1,int param_2)

{
  int iVar1;
  CRect aCStack_28 [16];
  undefined4 uStack_18;
  int *piStack_14;
  int *piStack_10;
  int iStack_8;
  int iStack_4;
  
  piStack_10 = (int *)0x50c3c0;
  iVar1 = FUN_0052f690();
  if (iVar1 == 0) {
    piStack_10 = &iStack_8;
    piStack_14 = &iStack_4;
    uStack_18 = 0x50c3d7;
    FUN_0065f8a0();
    if (param_2 == *(int *)(param_1 + 0x164)) {
      piStack_10 = (int *)0x1;
      piStack_14 = (int *)s_OptionSelect_00723150;
      uStack_18 = 0x50c3fd;
      FUN_00659600();
      piStack_10 = (int *)0x1;
      piStack_14 = (int *)DAT_00813038;
      uStack_18 = 0x50c411;
      FUN_006a16c0();
      piStack_10 = (int *)0x50c41b;
      iVar1 = FUN_0052d730();
      if (iVar1 != 0) {
        piStack_10 = (int *)0x0;
        piStack_14 = (int *)0x5;
        uStack_18 = 0;
        CRect::CRect(aCStack_28,0x10,0x10,iStack_4 + -0x10,iStack_8 + -0x10);
        FUN_006a1430(DAT_00813038,s_pause_options_00732bbc);
        return;
      }
      piStack_10 = (int *)0x5;
      piStack_14 = (int *)0x50c46c;
      FUN_0052a630();
      return;
    }
    if (param_2 == *(int *)(param_1 + 0x15c)) {
      piStack_10 = (int *)0x1;
      piStack_14 = (int *)s_OptionSelect_00723150;
      uStack_18 = 0x50c48c;
      FUN_00659600();
      piStack_10 = (int *)0x50c497;
      piStack_10 = (int *)FUN_006a4c80();
      if (piStack_10 != (int *)0xffffffff) {
        piStack_14 = (int *)0x50c4a7;
        FUN_0052e200();
      }
      piStack_10 = (int *)0x1;
      piStack_14 = (int *)0x100;
      uStack_18 = 0x50c4b9;
      FUN_006a3240();
      if (*(int *)(param_1 + 0x160) != 0) {
        piStack_10 = (int *)0x1;
        piStack_14 = (int *)0x100;
        uStack_18 = 0x50c4cf;
        FUN_006a3240();
      }
      if (*(int *)(param_1 + 0x164) != 0) {
        piStack_10 = (int *)0x1;
        piStack_14 = (int *)0x100;
        uStack_18 = 0x50c4e5;
        FUN_006a3240();
        return;
      }
    }
    else if (param_2 == *(int *)(param_1 + 0x160)) {
      piStack_10 = (int *)0x1;
      piStack_14 = (int *)s_OptionSelect_00723150;
      uStack_18 = 0x50c505;
      FUN_00659600();
      piStack_10 = (int *)0x50c510;
      piStack_10 = (int *)FUN_006a4c80();
      if (piStack_10 != (int *)0xffffffff) {
        piStack_14 = (int *)0x50c520;
        FUN_0052e250();
        return;
      }
    }
    else if (param_2 == *(int *)(param_1 + 0x168)) {
      piStack_10 = (int *)0x1;
      piStack_14 = (int *)s_OptionSelect_00723150;
      uStack_18 = 0x50c540;
      FUN_00659600();
    }
  }
  return;
}

