
void FUN_0064e870(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e62f2;
  local_c = ExceptionList;
  if (DAT_007cd418 == 0) {
    ExceptionList = &local_c;
    FUN_00649860(param_2,&stack0x0000000c);
    local_4 = 0;
    uVar1 = FUN_006498c0();
    FUN_00649920(local_10,&DAT_0074cdc8,uVar1);
    FUN_00649950();
    local_4 = 0xffffffff;
    FUN_006498d0();
  }
  ExceptionList = local_c;
  return;
}

