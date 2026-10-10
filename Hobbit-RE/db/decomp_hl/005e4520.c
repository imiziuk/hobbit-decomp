
undefined4 __fastcall FUN_005e4520(int param_1)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_006e15f8;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_0064a860(param_1 + 0x18,&stack0x00000004);
  uStack_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = pvStack_c;
  return uVar1;
}

