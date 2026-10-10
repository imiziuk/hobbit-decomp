
int __thiscall FUN_0058ee10(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00647cf0(param_2);
  iVar1 = param_1[1];
  iVar3 = param_1[2];
  iVar2 = iVar2 + 1;
  if (iVar3 < iVar1 + iVar2) {
    do {
      param_1[2] = iVar3 + 0x400;
      iVar3 = thunk_FUN_0064ffa0(*param_1,iVar3 + 0x400,s_C__projects_meridian_Support_Sav_0074229c,
                                 0x79);
      *param_1 = iVar3;
      iVar3 = param_1[2];
    } while (iVar3 < param_1[1] + iVar2);
  }
  FUN_00648480(*param_1 + iVar1,param_2,iVar2);
  param_1[3] = param_1[3] + 1;
  param_1[1] = param_1[1] + iVar2;
  return iVar1;
}

