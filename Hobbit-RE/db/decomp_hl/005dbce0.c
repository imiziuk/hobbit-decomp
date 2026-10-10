
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005dbce0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0cee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc290(param_2);
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_006499d0();
  *param_1 = &PTR_FUN_006f4850;
  _DAT_007cc53c = 0x2f;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_0064a2e0(s_Select_Info_ID_00747358);
  param_1[0x1c] = 0;
  param_1[6] = 0x40a00000;
  ExceptionList = local_c;
  return param_1;
}

