
int __thiscall FUN_00643820(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[0x58] = 0;
  param_1[0x162] = param_2;
  if (param_2 == 0) {
    return param_2;
  }
  iVar1 = FUN_0064f970(param_2);
  *param_1 = iVar1;
  iVar1 = FUN_0064f6f0(param_1[0x162]);
  param_1[0x161] = iVar1;
  iVar1 = FUN_0064f6f0(param_1[0x162]);
  iVar1 = *param_1 - iVar1;
  *param_1 = iVar1;
  if (param_3 != 0) {
    param_1[0x15d] = 1;
    param_1[0x15e] = -1;
    param_1[0x15f] = -1;
    if (0x100000 < iVar1) {
      iVar1 = 0x100000;
    }
    iVar1 = thunk_FUN_0064ff70(iVar1,s_C__projects_meridian_xCore_Auxil_0074b6f8,0x91);
    param_1[0x160] = iVar1;
    FUN_00643b40();
    return 1;
  }
  param_1[0x15d] = 0;
  iVar1 = thunk_FUN_0064ff70(iVar1,s_C__projects_meridian_xCore_Auxil_0074b734,0x97);
  param_1[1] = iVar1;
  FUN_0064f350(iVar1,*param_1,1,param_1[0x162]);
  FUN_00643b40();
  return 1;
}

