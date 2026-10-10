
undefined4 * __fastcall FUN_00680970(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6f4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006554f0(1);
  local_4 = 0;
  FUN_00680660();
  *param_1 = &PTR_FUN_006f9d20;
  param_1[0x53] = 0;
  ExceptionList = local_c;
  return param_1;
}

