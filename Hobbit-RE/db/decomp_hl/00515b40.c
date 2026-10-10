
void __fastcall FUN_00515b40(int param_1)

{
  if (*(int *)(param_1 + 0x1bc) != 0) {
    if (*(undefined4 **)(param_1 + 0x1b4) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x1b4) = 2;
    }
    FUN_00659600(s_OptionSelect_00723150,1);
    FUN_00659600(s_VendorScreen_PopUpOff_00733e74,1);
    FUN_006a16c0(*(undefined4 *)(param_1 + 8),1);
  }
  return;
}

