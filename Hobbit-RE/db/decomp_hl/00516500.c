
void __thiscall FUN_00516500(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x158)) {
    if (*(undefined4 **)(param_1 + 0x1b0) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x1b0) = 1;
    }
    FUN_006a16c0(*(undefined4 *)(param_1 + 8),1);
    FUN_00659600(s_OptionSelect_00723150,1);
    return;
  }
  if (param_2 == *(int *)(param_1 + 0x15c)) {
    if (*(undefined4 **)(param_1 + 0x1b0) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x1b0) = 2;
    }
    FUN_006a16c0(*(undefined4 *)(param_1 + 8),1);
    FUN_00659600(s_OptionCancel_00723140,1);
  }
  return;
}

