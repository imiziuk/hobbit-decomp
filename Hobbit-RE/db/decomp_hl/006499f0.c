
void __thiscall FUN_006499f0(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = param_2 + 0x10U & 0xfffffff0;
  if ((int)uVar2 < 0x21) {
    param_1[10] = 0x20;
    *param_1 = param_1 + 1;
    param_1[9] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  puVar1 = (undefined1 *)thunk_FUN_0064ff70(uVar2,s_C__projects_meridian_xCore_x_fil_0074ca30,0xd5);
  param_1[10] = uVar2;
  *param_1 = puVar1;
  param_1[9] = 0;
  *puVar1 = 0;
  return;
}

