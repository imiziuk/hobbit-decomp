
void __thiscall FUN_0064afc0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_2 * 2 + 0x10U & 0xfffffff0;
  if ((int)uVar2 < 0x41) {
    *param_1 = param_1 + 1;
    uVar2 = 0x40;
  }
  else {
    uVar1 = thunk_FUN_0064ff70(uVar2,s_C__projects_meridian_xCore_x_fil_0074cba0,0x5d5);
    *param_1 = uVar1;
  }
  param_1[0x12] = uVar2;
  param_1[0x11] = 0;
  *(undefined2 *)*param_1 = 0;
  return;
}

