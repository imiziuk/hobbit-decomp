
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051a240(int param_1,int param_2)

{
  int iVar1;
  char *pcStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int *piStack_10;
  undefined4 *puStack_c;
  int local_4;
  
  local_4 = param_1;
  if (param_2 == *(int *)(param_1 + 0x164)) {
    puStack_c = (undefined4 *)0x51a255;
    iVar1 = FUN_006772e0();
    if ((iVar1 == 0) || (DAT_007602a8 != 0)) {
      puStack_c = (undefined4 *)0x0;
      piStack_10 = (int *)0x1;
      uStack_14 = 0;
      uStack_18 = 0;
      uStack_1c = 0;
      pcStack_20 = s_IDS_EXIT_CONFIRMATION_007348dc;
      pcStack_24 = &DAT_0071ceb4;
      pcStack_20 = (char *)FUN_006ab1a0();
      pcStack_24 = s_IDS_NULL_00731f24;
      pcStack_24 = (char *)FUN_006ab1a0(&DAT_0071ceb4);
      FUN_0051aa90();
      *(undefined4 *)(param_1 + 500) = 1;
      return;
    }
  }
  else {
    if (param_2 == *(int *)(param_1 + 0x168)) {
      puStack_c = (undefined4 *)0x1;
      piStack_10 = (int *)s_OptionSelect_00723150;
      uStack_14 = 0x51a2c9;
      FUN_00659600();
      *(undefined4 *)(param_1 + 0x158) = 1;
      return;
    }
    if (param_2 == *(int *)(param_1 + 0x16c)) {
      puStack_c = (undefined4 *)0x1;
      piStack_10 = (int *)s_OptionSelect_00723150;
      uStack_14 = 0x51a2f1;
      FUN_00659600();
      *(undefined4 *)(param_1 + 0x158) = 2;
      return;
    }
    if (param_2 == *(int *)(param_1 + 0x170)) {
      puStack_c = (undefined4 *)0x1;
      piStack_10 = (int *)s_OptionSelect_00723150;
      uStack_14 = 0x51a319;
      FUN_00659600();
      *(undefined4 *)(param_1 + 0x158) = 3;
      return;
    }
    if (param_2 == *(int *)(param_1 + 0x174)) {
      puStack_c = (undefined4 *)0x1;
      piStack_10 = (int *)s_OptionSelect_00723150;
      uStack_14 = 0x51a341;
      FUN_00659600();
      *(undefined4 *)(param_1 + 0x158) = 4;
      return;
    }
    if (param_2 == *(int *)(param_1 + 0x178)) {
      puStack_c = (undefined4 *)0x1;
      piStack_10 = (int *)s_OptionSelect_00723150;
      uStack_14 = 0x51a369;
      FUN_00659600();
      *(undefined4 *)(param_1 + 0x158) = 5;
      return;
    }
    if (param_2 == *(int *)(param_1 + 0x180)) {
      puStack_c = (undefined4 *)0x1;
      piStack_10 = (int *)s_OptionSelect_00723150;
      uStack_14 = 0x51a391;
      FUN_00659600();
      *(undefined4 *)(param_1 + 0x158) = 6;
      return;
    }
    if (param_2 != *(int *)(param_1 + 0x188)) {
      if (param_2 == *(int *)(param_1 + 0x1fc)) {
        puStack_c = &param_2;
        piStack_10 = &local_4;
        uStack_14 = 0x51a3c3;
        FUN_0065f8a0();
        puStack_c = (undefined4 *)0x1;
        piStack_10 = (int *)s_PageLeft_00733370;
        uStack_14 = 0x51a3d7;
        FUN_00659600();
        puStack_c = (undefined4 *)0x1;
        piStack_10 = (int *)DAT_00813038;
        uStack_14 = 0x51a3eb;
        FUN_006a16c0();
        puStack_c = (undefined4 *)0x0;
        piStack_10 = (int *)0x5;
        uStack_14 = 0;
        CRect::CRect((CRect *)&pcStack_24,0x10,0x10,local_4 + -0x10,param_2 + -0x10);
        FUN_006a1430(DAT_00813038,s_pause_summary_00733344);
        return;
      }
      if (param_2 == *(int *)(param_1 + 0x200)) {
        puStack_c = &param_2;
        piStack_10 = &local_4;
        uStack_14 = 0x51a441;
        FUN_0065f8a0();
        puStack_c = (undefined4 *)0x1;
        piStack_10 = (int *)s_PageRight_00733354;
        uStack_14 = 0x51a455;
        FUN_00659600();
        puStack_c = (undefined4 *)0x1;
        piStack_10 = (int *)DAT_00813038;
        uStack_14 = 0x51a468;
        FUN_006a16c0();
        puStack_c = (undefined4 *)0x0;
        piStack_10 = (int *)0x5;
        uStack_14 = 0;
        CRect::CRect((CRect *)&pcStack_24,0x10,0x10,local_4 + -0x10,param_2 + -0x10);
        FUN_006a1430(DAT_00813038,s_pause_questlog_00733360);
        return;
      }
      if (param_2 == *(int *)(param_1 + 0x18c)) {
        puStack_c = (undefined4 *)0x51a4b5;
        iVar1 = FUN_006772e0();
        if (iVar1 == 0) {
          puStack_c = (undefined4 *)0x1;
          piStack_10 = (int *)s_OptionSelect_00723150;
          uStack_14 = 0x51a4ca;
          FUN_00659600();
          DAT_0075fb98 = 1;
          _DAT_0075fb9c = 0;
        }
      }
    }
  }
  return;
}

