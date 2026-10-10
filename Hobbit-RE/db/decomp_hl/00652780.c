
undefined4 __thiscall FUN_00652780(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_c;
  undefined1 local_8;
  undefined1 local_4;
  
  FUN_00650380();
  iVar1 = FUN_0064f350(&local_20,1,0x20,param_2);
  if (iVar1 == 0x20) {
    param_1[3] = local_1c;
    *(undefined2 *)(param_1 + 5) = local_18;
    *(undefined2 *)((int)param_1 + 0x16) = local_14;
    *(undefined2 *)(param_1 + 6) = local_10;
    *(undefined2 *)((int)param_1 + 0x1a) = local_c;
    param_1[2] = local_20;
    *(undefined1 *)(param_1 + 7) = local_8;
    *(undefined1 *)((int)param_1 + 0x1d) = local_4;
    uVar2 = thunk_FUN_0064ff70(local_20,s_C__projects_meridian_xCore_x_fil_0074d3e0,0xcb);
    *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) | 2;
    *param_1 = uVar2;
    iVar1 = FUN_0064f350(uVar2,1,param_1[2],param_2);
    if (iVar1 == param_1[2]) {
      if (param_1[3] == 0) {
        return 1;
      }
      uVar2 = thunk_FUN_0064ff70(param_1[3],s_C__projects_meridian_xCore_x_fil_0074d428,0xd6);
      *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) | 4;
      param_1[1] = uVar2;
      iVar1 = FUN_0064f350(uVar2,1,param_1[3],param_2);
      if (iVar1 == param_1[3]) {
        return 1;
      }
    }
    FUN_00650380();
  }
  return 0;
}

