
undefined4 * __fastcall FUN_005c1340(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df3e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bfd20();
  local_4 = 0;
  FUN_005a4050();
  *param_1 = &PTR_FUN_006f447c;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  ExceptionList = local_c;
  return param_1;
}

