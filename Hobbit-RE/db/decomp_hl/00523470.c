
void __thiscall FUN_00523470(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == *(int *)(param_1 + 0x160)) {
    FUN_00659600(s_OptionSelect_00723150,1);
    iVar1 = *(int *)(param_1 + 0x158) + 1;
    *(int *)(param_1 + 0x158) = iVar1;
    if (8 < iVar1) {
      *(undefined4 *)(param_1 + 0x158) = 0;
      return;
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x15c)) {
    FUN_00659600(s_OptionSelect_00723150,1);
    FUN_006a16c0(DAT_00813038,1);
    FUN_0052d740(0,6);
  }
  return;
}

