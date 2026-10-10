
void __fastcall FUN_0050bf70(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d6df8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006f00b0;
  local_4 = 0;
  FUN_0050c0d0();
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = pvStack_c;
  return;
}

