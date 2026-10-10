
void __thiscall FUN_0044d770(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfbf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Hoistables_CheckForHoista_00724a1c);
  local_4 = 0;
  FUN_0044cc90(param_2,5,DAT_006ec110,DAT_006ec114,param_1 + 0x5948,0x2000000);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

