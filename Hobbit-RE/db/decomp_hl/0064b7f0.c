
undefined4 * __thiscall FUN_0064b7f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_2[0x11];
    FUN_0064af30(iVar1);
    FUN_00648480(*param_1,*param_2,iVar1 * 2 + 2);
    param_1[0x11] = iVar1;
  }
  return param_1;
}

