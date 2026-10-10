
undefined4 * __fastcall FUN_005a9c10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_006ddecf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0x7fffffff;
  param_1[1] = 0x7fffffff;
  local_4 = 1;
  uStack_3 = 0;
  FUN_00608960();
  local_4 = 2;
  FUN_00608960();
  _local_4 = CONCAT31(uStack_3,3);
  FUN_00608960();
  *(byte *)(param_1 + 0x1a0) = *(byte *)(param_1 + 0x1a0) & 0xfe;
  param_1[0x19f] = 0;
  param_1[0x1a3] = 1;
  param_1[0x1a4] = 1;
  ExceptionList = local_c;
  return param_1;
}

