
void __fastcall FUN_00516580(int param_1)

{
  if (*(int *)(param_1 + 0x1b8) != 0) {
    FUN_006a16c0(*(undefined4 *)(param_1 + 8),1);
    if (*(undefined4 **)(param_1 + 0x1b0) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x1b0) = 2;
    }
    FUN_00659600(s_OptionCancel_00723140,1);
  }
  return;
}

