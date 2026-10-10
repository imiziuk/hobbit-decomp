
void __thiscall FUN_006424d0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 1;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x30c20) = iVar1;
  *(undefined4 *)(param_1 + 0x30c24) = 0;
  *(undefined4 *)(param_1 + 0x30c18) = 0;
  *(undefined4 *)(param_1 + 0x30c14) = 0x200;
  *(undefined4 *)(param_1 + 0x30c28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0x50000;
  uVar2 = thunk_FUN_0064ff70(0x50000,s_C__projects_meridian_xCore_Auxil_0074b464,0x47);
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar2 = thunk_FUN_0064ff70(*(int *)(param_1 + 8) << 4,s_C__projects_meridian_xCore_Auxil_0074b4a0,
                             0x48);
  *(undefined4 *)(param_1 + 0x30c1c) = uVar2;
  if (param_3 < 0) {
    FUN_0064f190(param_1 + 0x30c2c,s____s___0074b4dc,param_2);
  }
  else {
    FUN_0064f190(param_1 + 0x30c2c,s____s____d___0074b4e4,param_2,param_3);
  }
  if (param_3 == 0) {
    FUN_00642c70();
  }
  return;
}

