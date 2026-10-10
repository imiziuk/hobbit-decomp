
void __thiscall FUN_00650290(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar2 = thunk_FUN_0064ff70(param_2[2],s_C__projects_meridian_xCore_x_fil_0074d01c,0xee);
  *param_1 = uVar2;
  FUN_00648480(uVar2,*param_2,param_2[2]);
  if (param_2[3] == 0) {
    param_1[1] = 0;
  }
  else {
    uVar2 = thunk_FUN_0064ff70(param_2[3],s_C__projects_meridian_xCore_x_fil_0074d05c,0xf4);
    param_1[1] = uVar2;
    FUN_00648480(uVar2,param_2[1],param_2[3]);
  }
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)((int)param_2 + 0x1d);
  uVar1 = *(ushort *)((int)param_2 + 0x1a);
  *(ushort *)((int)param_1 + 0x1a) = uVar1 | 2;
  if (param_1[1] != 0) {
    *(ushort *)((int)param_1 + 0x1a) = uVar1 | 6;
  }
  return;
}

