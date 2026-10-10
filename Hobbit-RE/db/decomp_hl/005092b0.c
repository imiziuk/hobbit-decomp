
void __thiscall FUN_005092b0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == param_1[0x58]) {
    FUN_00659600(s_OptionSelect_00723150,1);
    if (param_1[0x7d6] < param_1[0x7d7] + -1) {
      (**(code **)(*param_1 + 0x98))(param_1[0x7d6] + 1);
      return;
    }
  }
  else if (param_2 == param_1[0x59]) {
    FUN_00659600(s_OptionSelect_00723150,1);
    if (0 < param_1[0x7d6]) {
      (**(code **)(*param_1 + 0x98))(param_1[0x7d6] + -1);
      return;
    }
  }
  else {
    if (param_2 == param_1[0x56]) {
      FUN_00659600(s_OptionSelect_00723150,1);
      FUN_0042aba0();
      (**(code **)(*param_1 + 0x90))();
      param_1[0x5f] = 1;
      (**(code **)(*param_1 + 0x98))(param_1[0x7d6]);
      return;
    }
    FUN_00659600(s_OptionSelect_00723150,1);
    iVar2 = 0;
    piVar1 = param_1 + 0x67;
    while( true ) {
      if (param_2 == piVar1[-1]) {
        if ((param_1[0x5d] != 0) && (param_1[0x5d] != param_1[iVar2 * 3 + 0x66])) {
          FUN_006a3240(0x200,0);
        }
        param_1[0x5d] = param_1[iVar2 * 3 + 0x66];
        return;
      }
      if (param_2 == *piVar1) break;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
      if (4 < iVar2) {
        return;
      }
    }
    if ((param_1[0x5d] != 0) && (param_1[0x5d] != param_1[iVar2 * 3 + 0x67])) {
      FUN_006a3240(0x200,0);
    }
    param_1[0x5d] = param_1[iVar2 * 3 + 0x67];
  }
  return;
}

