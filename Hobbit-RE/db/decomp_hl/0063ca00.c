
void __fastcall FUN_0063ca00(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)param_1[1] / 2 + 0x10;
  if ((int)param_1[5] <= iVar1) {
    iVar1 = param_1[5];
  }
  iVar1 = param_1[1] + iVar1;
  param_1[1] = iVar1;
  param_1[2] = iVar1 * 8;
  uVar2 = thunk_FUN_0064ffa0(*param_1,iVar1,s_C__projects_meridian_xCore_Auxil_0074a888,0x66);
  *param_1 = uVar2;
  return;
}

