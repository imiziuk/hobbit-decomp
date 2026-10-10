
void __thiscall FUN_00641370(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5d94;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_2,s__s_dddd_0074b39c,param_2);
  local_4 = 0;
  uVar1 = FUN_00649940(param_3 >> 0x10 & 0xff,param_3 >> 8 & 0xff,param_3 & 0xff,param_3 >> 0x18);
  FUN_00640b90(param_1,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

