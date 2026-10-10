
void __fastcall FUN_0064b1d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[0x11] * 2 + 0x10U & 0xfffffff0;
  if (((int *)*param_1 != param_1 + 1) && ((int)uVar2 < param_1[0x12])) {
    iVar1 = thunk_FUN_0064ffa0((int *)*param_1,uVar2,s_C__projects_meridian_xCore_x_fil_0074cc20,
                               0x640);
    *param_1 = iVar1;
    param_1[0x12] = uVar2;
  }
  return;
}

