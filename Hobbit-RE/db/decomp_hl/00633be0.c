
undefined4 * __thiscall FUN_00633be0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005be0e0(param_2,9,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_006f6810;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x41f00000;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x40800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x40400000;
  param_1[0x1a] = 0x40a00000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x40a00000;
  param_1[0x1d] = 0x40800000;
  param_1[0x1e] = 0x40c00000;
  param_1[0x1f] = 0;
  if (param_3 != 0) {
    iVar1 = FUN_005af120();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1cc) != 0)) {
      param_1[0x1f] = 1;
    }
  }
  param_1[0x25] = param_1[0x15];
  param_1[0x26] = param_1[0x19];
  param_1[0x27] = param_1[0x1a];
  param_1[0x24] = 0x40000000;
  param_1[0x2b] = 0x40000000;
  param_1[0x28] = param_1[0x1d];
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x2c] = param_1[0x1f];
  param_1[0x23] = 0x3f000000;
  param_1[0x2a] = 0x3f000000;
  param_1[0x21] = 0x3f800000;
  param_1[0x29] = param_1[0x1e];
  ExceptionList = local_c;
  return param_1;
}

