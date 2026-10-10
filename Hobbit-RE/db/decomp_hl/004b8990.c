
void __fastcall FUN_004b8990(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d44f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ee610;
  local_4 = 0;
  if (-1 < (int)param_1[0x59]) {
    FUN_005c1ed0(param_1[0x59]);
  }
  local_4 = 0xffffffff;
  FUN_004c0460();
  ExceptionList = local_c;
  return;
}

