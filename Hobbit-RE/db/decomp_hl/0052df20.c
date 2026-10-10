
void __fastcall FUN_0052df20(int param_1)

{
  undefined4 uVar1;
  undefined4 local_11c;
  undefined1 local_f0 [76];
  undefined1 local_a4 [152];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8359;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_MAIN_MENU_00733cb0);
  FUN_0064b0f0(uVar1);
  local_4 = 0;
  uVar1 = FUN_0064b130(s_CSIDL_PERSONAL__00736df0);
  local_4._0_1_ = 1;
  uVar1 = FUN_0064bb70(local_a4,uVar1,local_f0);
  local_4._0_1_ = 2;
  FUN_0064b7f0(uVar1);
  local_4._0_1_ = 1;
  FUN_0064b190();
  local_4._0_1_ = 0;
  FUN_0064b190();
  FUN_00649b80(local_f0);
  local_4._0_1_ = 3;
  uVar1 = FUN_005496c0(&DAT_0075b6e0,local_11c);
  FUN_0064a2e0(uVar1);
  FUN_0052e090();
  FUN_0052ed30();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

