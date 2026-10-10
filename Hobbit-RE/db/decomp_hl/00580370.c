
undefined4 * __fastcall FUN_00580370(undefined4 *param_1)

{
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbfd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005a3250();
  param_1[5] = 0x7fffffff;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  param_1[8] = 0;
  param_1[0x1d] = 0;
  FUN_005822d0();
  param_1[0x1e] = 0x7f7fffff;
  param_1[0x1f] = 0x7f7fffff;
  param_1[0x20] = 0x7f7fffff;
  param_1[0x21] = 0xff7fffff;
  param_1[0x22] = 0xff7fffff;
  param_1[0x23] = 0xff7fffff;
  *(undefined1 *)(param_1 + 0x42) = local_11;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0x46) = local_11;
  *(undefined1 *)((int)param_1 + 0x119) = local_11;
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_00581c30();
  *(undefined1 *)(param_1 + 0x4f) = local_11;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  *param_1 = &PTR_FUN_006f3eec;
  param_1[0x39] = 0;
  FUN_00580740();
  ExceptionList = local_c;
  return param_1;
}

