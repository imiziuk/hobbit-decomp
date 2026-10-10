
void __thiscall FUN_00523bd0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0052f690();
  if (iVar1 == 0) {
    if (param_2 == *(int *)(param_1 + 0x160)) {
      FUN_00659600(s_OptionSelect_00723150,1);
      FUN_0052e170(0,1);
      FUN_004cdf40();
      FUN_006a3240(0x100,1);
      if (*(int *)(param_1 + 0x168) != 0) {
        FUN_006a3240(0x100,1);
      }
      if (*(int *)(param_1 + 0x15c) != 0) {
        FUN_006a3240(0x100,1);
      }
      if (*(int *)(param_1 + 0x164) != 0) {
        FUN_006a3240(0x100,1);
        return;
      }
    }
    else if (param_2 == *(int *)(param_1 + 0x15c)) {
      FUN_00659600(s_OptionSelect_00723150,1);
      iVar1 = FUN_006a4c80();
      if (iVar1 != -1) {
        if (iVar1 == 0) {
          iVar1 = FUN_0052e130();
        }
        else {
          iVar1 = iVar1 + -1;
        }
        FUN_0052e170(iVar1,0);
        FUN_004cdf40();
        FUN_006a3240(0x100,1);
        if (*(int *)(param_1 + 0x168) != 0) {
          FUN_006a3240(0x100,1);
        }
        if (*(int *)(param_1 + 0x160) != 0) {
          FUN_006a3240(0x100,1);
        }
        if (*(int *)(param_1 + 0x164) != 0) {
          FUN_006a3240(0x100,1);
          return;
        }
      }
    }
    else if (param_2 == *(int *)(param_1 + 0x164)) {
      FUN_00659600(s_OptionSelect_00723150,1);
      iVar1 = FUN_006a4c80();
      if ((iVar1 != 0) && (iVar1 != -1)) {
        FUN_0052e250();
        return;
      }
    }
    else {
      if (param_2 == *(int *)(param_1 + 0x168)) {
        FUN_00659600(s_OptionSelect_00723150,1);
        FUN_006a16c0(DAT_00813038,1);
        FUN_0052d740(0,6);
        return;
      }
      if (param_2 == *(int *)(param_1 + 0x16c)) {
        FUN_00659600(s_OptionSelect_00723150,1);
      }
    }
  }
  return;
}

