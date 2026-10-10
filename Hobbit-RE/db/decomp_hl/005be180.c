
void __fastcall FUN_005be180(undefined4 *param_1)

{
  undefined *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006df14b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f43e8;
  puVar1 = (undefined *)param_1[1];
  local_4 = 0;
  if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_007ba744)) {
    if (puVar1 != (undefined *)0x0) {
      FUN_00649ba0();
      FUN_006bf840(puVar1);
    }
    param_1[1] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

