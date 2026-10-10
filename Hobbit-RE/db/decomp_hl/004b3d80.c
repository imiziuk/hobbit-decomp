
undefined4 * __fastcall FUN_004b3d80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d41a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d0800();
  local_4 = 0;
  *param_1 = &PTR_FUN_006ee3f0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  FUN_004ab450(1);
  FUN_004ab480(0);
  param_1[0x2a] = 0;
  ExceptionList = local_c;
  return param_1;
}

