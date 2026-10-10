
undefined4 * __thiscall
FUN_00663d00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e6aa6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = DAT_007f0fc4;
  if (0x10000 < DAT_007f0fc4) {
    uVar1 = 0x10000;
  }
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = param_5;
  *(undefined1 *)(param_1 + 0xd4) = (undefined1)param_2;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined1 *)(param_1 + 0xd8) = (undefined1)param_2;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  local_4 = 1;
  *param_1 = &PTR_FUN_006f95d4;
  FUN_00663de0();
  FUN_00664b60();
  ExceptionList = local_c;
  return param_1;
}

