
void __thiscall FUN_0051d1f0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == *(int *)(param_1 + 0x178)) {
    FUN_00659600(s_OptionSelect_00723150,1);
    iVar1 = FUN_006a4c80();
    if (iVar1 != -1) {
      FUN_0051d740(iVar1);
      return;
    }
  }
  else {
    if (param_2 == *(int *)(param_1 + 0x198)) {
      FUN_00659600(s_OptionSelect_00723150,1);
      FUN_0051d280();
      return;
    }
    if (param_2 == *(int *)(param_1 + 0x19c)) {
      FUN_00659600(s_OptionSelect_00723150,1);
      FUN_0051d4e0();
    }
  }
  return;
}

