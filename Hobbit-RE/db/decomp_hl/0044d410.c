
void __thiscall FUN_0044d410(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfb38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Switches_CheckForSwitches_00724938);
  local_4 = 0;
  FUN_0044cc90(param_2,0x33,DAT_006ec108,DAT_006ec10c,param_1 + 0x4ec8,0);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

