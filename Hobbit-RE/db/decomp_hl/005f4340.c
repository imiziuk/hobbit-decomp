
void __thiscall FUN_005f4340(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2700;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00649920(&local_10,s_CheckTime_d_00748308,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x10;
  local_4 = 0;
  uVar2 = FUN_00649940(iVar3);
  uVar1 = param_2;
  FUN_00640420(uVar2,iVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_RandomPercent_d_007482f8,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x14;
  local_4 = 1;
  uVar2 = FUN_00649940(param_1);
  FUN_00640450(uVar2,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_005f1cf0(uVar1);
  ExceptionList = local_c;
  return;
}

