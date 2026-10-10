
undefined4 __fastcall FUN_00535990(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x264) + -1;
  *(int *)(param_1 + 0x264) = iVar1;
  if (*(int *)(param_1 + 0x24c) == 1) {
    *(int *)(param_1 + 0x248) = iVar1;
    FUN_0064a2e0(s_AMBIENTOUTDOOR_00737278);
    FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x264),1);
  }
  return *(undefined4 *)(param_1 + 0x264);
}

