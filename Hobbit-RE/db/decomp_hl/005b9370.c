
undefined4 * __thiscall FUN_005b9370(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ded26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00638650(param_2,param_3);
  local_4 = 0;
  FUN_006cddd0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00543280();
  *param_1 = &PTR_FUN_006f42c8;
  DAT_007ba73c = param_1;
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x24] = 0x3f800000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  ExceptionList = local_c;
  return param_1;
}

