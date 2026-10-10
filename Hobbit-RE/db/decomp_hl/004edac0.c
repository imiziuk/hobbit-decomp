
undefined4 * __fastcall FUN_004edac0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5e74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c0370();
  param_1[0x9c] = 0x7fffffff;
  param_1[0x9d] = 0x7fffffff;
  local_4 = 2;
  *param_1 = &PTR_FUN_006ef808;
  param_1[0x8e] = 0;
  param_1[0x58] = 0;
  uVar1 = FUN_005496c0(s_WebLine_xbmp_0072f038,&DAT_0071ef4c);
  FUN_00549430(param_1 + 0x9c,uVar1);
  uVar1 = FUN_005496c0(s_WebSplat_xbmp_0072f028,&DAT_0071ef4c);
  FUN_00549430(param_1 + 0x9d,uVar1);
  ExceptionList = local_c;
  return param_1;
}

