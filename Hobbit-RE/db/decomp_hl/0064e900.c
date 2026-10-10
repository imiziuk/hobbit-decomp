
void FUN_0064e900(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6304;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649860(param_1,&stack0x00000008);
  local_4 = 0;
  if (PTR_LAB_0074ccb0 == (undefined *)0x0) {
    uVar1 = FUN_006498c0(extraout_var);
    FUN_0064ea70(uVar1);
  }
  else {
    uVar1 = FUN_006498c0(extraout_var);
    (*(code *)PTR_FUN_0074ccb4)(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_006498d0();
  ExceptionList = pvStack_c;
  return;
}

