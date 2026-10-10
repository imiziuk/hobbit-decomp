
undefined4 __thiscall FUN_00643740(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[0x58] = 0;
  iVar1 = FUN_00647cf0(param_2);
  if (iVar1 < 0x40) {
    FUN_00647d10(param_1 + 4,param_2);
  }
  else {
    iVar1 = FUN_00647cf0();
    FUN_00647d10(param_1 + 4,iVar1 + -0x3f + param_2);
  }
  iVar1 = FUN_0064f210(param_2,&DAT_0074b6b8);
  param_1[0x162] = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0064f970(iVar1);
  *param_1 = iVar1;
  param_1[0x15d] = 1;
  param_1[0x15e] = -1;
  param_1[0x15f] = -1;
  if (0x100000 < iVar1) {
    iVar1 = 0x100000;
  }
  iVar1 = thunk_FUN_0064ff70(iVar1,s_C__projects_meridian_xCore_Auxil_0074b6bc,99);
  param_1[0x160] = iVar1;
  FUN_00643b40();
  param_1[0x161] = 0;
  return 1;
}

