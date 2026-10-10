
void __thiscall FUN_0044d2f0(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfaf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Triggers_CheckForTriggers_007248f0);
  local_4 = 0;
  FUN_0044cc90(param_2,0x35,DAT_006ec108,DAT_006ec10c,param_1 + 0x4ed0,0);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

