
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004d0800(undefined4 *param_1)

{
  undefined1 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4d34;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  param_1[0x2f] = 0x7fffffff;
  param_1[0x40] = 0x7f7fffff;
  param_1[0x41] = 0x7f7fffff;
  param_1[0x42] = 0x7f7fffff;
  param_1[0x43] = 0xff7fffff;
  param_1[0x44] = 0xff7fffff;
  param_1[0x45] = 0xff7fffff;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  param_1[0x33] = 0;
  param_1[0x48] = 0;
  FUN_005822d0();
  *param_1 = &PTR_FUN_006eef98;
  _DAT_0075db28 = _DAT_0075db28 + 1;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0x126) = 0x10;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  uVar1 = FUN_00647b10(0xfffffff6,0);
  *(undefined1 *)(param_1 + 0x4a) = uVar1;
  *(byte *)((int)param_1 + 0x127) = *(byte *)((int)param_1 + 0x127) & 0xf0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  *(undefined1 *)((int)param_1 + 0x85) = 0xff;
  ExceptionList = local_c;
  return param_1;
}

