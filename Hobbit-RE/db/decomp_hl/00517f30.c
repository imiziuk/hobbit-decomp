
void __fastcall FUN_00517f30(int param_1)

{
  byte extraout_AH;
  byte extraout_AH_00;
  byte extraout_AH_01;
  byte extraout_AH_02;
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN_006a3230();
    if ((extraout_AH & 4) != 0) {
      iVar1 = 1;
      goto LAB_00517f98;
    }
  }
  FUN_006a3230();
  if ((extraout_AH_00 & 4) == 0) {
    FUN_006a3230();
    if ((extraout_AH_01 & 4) == 0) {
      if (*(int *)(param_1 + 0x16c) != 0) {
        FUN_006a3230();
        if ((extraout_AH_02 & 4) != 0) {
          iVar1 = 4;
        }
      }
    }
    else {
      iVar1 = 3;
    }
  }
  else {
    iVar1 = 2;
  }
LAB_00517f98:
  if (iVar1 != *(int *)(param_1 + 0x174)) {
    FUN_00659600(s_CursorMove_00731fe0,1);
    *(int *)(param_1 + 0x174) = iVar1;
  }
  return;
}

