
undefined4 * __fastcall FUN_004b51b0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d4228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0x7fffffff;
  local_4 = 0;
  uVar1 = FUN_0054f5b0(2,0xbf800000);
  param_1[1] = uVar1;
  uVar1 = FUN_005496c0(s_ShadowDisc_xbmp_0071ef3c,&DAT_0071ef4c);
  FUN_00549430(param_1,uVar1);
  ExceptionList = local_c;
  return param_1;
}

