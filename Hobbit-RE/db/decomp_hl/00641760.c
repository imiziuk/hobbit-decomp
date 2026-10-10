
void __thiscall FUN_00641760(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5e12;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_2,&DAT_0074b3d8,param_2);
  local_4 = 0;
  uVar1 = FUN_00649940(param_3 != 0);
  FUN_00640b90(param_1,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

