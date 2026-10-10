
void FUN_0064e7d0(undefined4 param_1)

{
  undefined4 uVar1;
  LPCSTR lpOutputString;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e62e0;
  local_c = ExceptionList;
  if (DAT_007cd418 == 0) {
    ExceptionList = &local_c;
    FUN_00649860(param_1,&stack0x00000008);
    local_4 = 0;
    uVar1 = FUN_006498c0();
    FUN_00649920(local_14,&DAT_0074cdc4,uVar1);
    local_4._0_1_ = 1;
    lpOutputString = (LPCSTR)FUN_00649940();
    OutputDebugStringA(lpOutputString);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649950();
    local_4 = 0xffffffff;
    FUN_006498d0();
  }
  ExceptionList = local_c;
  return;
}

