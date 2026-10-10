
void __thiscall FUN_0044d650(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfbb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Save_CheckForSavePedestal_007249d4);
  local_4 = 0;
  FUN_0044cc90(param_2,0x31,DAT_006ec108,DAT_006ec10c,param_1 + 0x5900,0);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

