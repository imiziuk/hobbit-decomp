
void __fastcall FUN_005082c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if (*(int *)(param_1 + 0x158) != 0) {
    iVar1 = FUN_006a3270(0x400);
    if (iVar1 != 0) {
      iVar2 = 0;
      goto LAB_0050831f;
    }
  }
  if (*(int *)(param_1 + 0x15c) != 0) {
    iVar1 = FUN_006a3270(0x400);
    if (iVar1 != 0) {
      iVar2 = 1;
      goto LAB_0050831f;
    }
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    iVar1 = FUN_006a3270(0x400);
    if (iVar1 != 0) {
      iVar2 = 2;
    }
  }
LAB_0050831f:
  if (iVar2 != *(int *)(param_1 + 0x164)) {
    FUN_00659600(s_CursorMove_00731fe0,1);
    *(int *)(param_1 + 0x164) = iVar2;
  }
  return;
}

