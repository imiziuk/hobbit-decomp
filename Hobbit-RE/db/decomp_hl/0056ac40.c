
void __fastcall FUN_0056ac40(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_006db538;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006f3e8c;
  iVar1 = param_1[1];
  local_4 = 0;
  while (iVar1 != 0) {
    FUN_005c9070();
    iVar1 = param_1[1];
  }
  local_4 = 0xffffffff;
  FUN_005c8fe0();
  ExceptionList = pvStack_c;
  return;
}

