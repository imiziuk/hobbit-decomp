
undefined4 __fastcall FUN_00677060(undefined4 *param_1)

{
  void *pvVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e6cab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = &DAT_00808f30;
  (**(code **)(DAT_00808f30 + 4))();
  DAT_007f8790 = 1;
  pvVar1 = operator_new(0x84);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_00653780(FUN_00676f60,s_io_mgr_dispatcher_00750810,0x2000,2,0);
  }
  uStack_4 = 0xffffffff;
  *param_1 = pvVar1;
  FUN_006755f0();
  FUN_00675910(s_Files_00750824,1);
  ExceptionList = pvStack_c;
  return 1;
}

