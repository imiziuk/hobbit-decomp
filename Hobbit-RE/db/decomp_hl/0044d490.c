
undefined4 __fastcall FUN_0044d490(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfb58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Switches_CheckForActivate_0072495c);
  local_4 = 0;
  uVar1 = FUN_0044cf70(param_1 + 0x4ec8);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar1;
}

