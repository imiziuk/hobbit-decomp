
undefined4 __fastcall FUN_0044d8d0(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfc18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Hoistables_CheckForActiva_00724a44);
  local_4 = 0;
  uVar1 = FUN_0044cf70(param_1 + 0x5948);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar1;
}

