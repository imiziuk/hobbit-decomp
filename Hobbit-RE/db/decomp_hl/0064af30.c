
void __thiscall FUN_0064af30(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 * 2 + 0x10U & 0xfffffff0;
  if (param_1[0x12] < (int)uVar2) {
    if ((int *)*param_1 == param_1 + 1) {
      iVar1 = thunk_FUN_0064ff70(uVar2,s_C__projects_meridian_xCore_x_fil_0074cb20,0x5af);
      *param_1 = iVar1;
      FUN_00648480(iVar1,param_1 + 1,param_1[0x11] * 2 + 2);
      param_1[0x12] = uVar2;
      return;
    }
    iVar1 = thunk_FUN_0064ffa0((int *)*param_1,uVar2,s_C__projects_meridian_xCore_x_fil_0074cb60,
                               0x5b6);
    *param_1 = iVar1;
    param_1[0x12] = uVar2;
  }
  return;
}

