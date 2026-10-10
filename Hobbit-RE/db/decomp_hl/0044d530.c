
void __thiscall FUN_0044d530(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfb78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Treasure_CheckForTreasure_00724984);
  local_4 = 0;
  FUN_0044cc90(param_2,0x24,DAT_006ec108,DAT_006ec10c,param_1 + 0x58f8,0);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

