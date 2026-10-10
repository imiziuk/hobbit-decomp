
void __thiscall FUN_0050b130(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == *(int *)(param_1 + 0x15c)) {
    FUN_006a3240(0x100,1);
    FUN_00659600(s_OptionSelect_00723150,1);
    iVar1 = FUN_0052a650();
    if (iVar1 != 0xc) {
      FUN_0052a630();
      return;
    }
    *(undefined4 *)(param_1 + 0x188) = 1;
  }
  return;
}

