
undefined4 * __fastcall FUN_0051ed60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d785b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006c043b(param_1 + 0x26,400,3,FUN_004f9160,FUN_004f9240);
  local_4 = 0;
  FUN_00671410();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[0x273] = 0;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  ExceptionList = local_c;
  return param_1;
}

