
void __thiscall FUN_00649960(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + 0x10U & 0xfffffff0;
  if (param_1[10] < (int)uVar2) {
    if ((int *)*param_1 == param_1 + 1) {
      iVar1 = thunk_FUN_0064ff70(uVar2,s_C__projects_meridian_xCore_x_fil_0074c9b0,0xaf);
      *param_1 = iVar1;
      FUN_00648480(iVar1,param_1 + 1,param_1[9] + 1);
      param_1[10] = uVar2;
      return;
    }
    iVar1 = thunk_FUN_0064ffa0((int *)*param_1,uVar2,s_C__projects_meridian_xCore_x_fil_0074c9f0,
                               0xb5);
    *param_1 = iVar1;
    param_1[10] = uVar2;
  }
  return;
}

