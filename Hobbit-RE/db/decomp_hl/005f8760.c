
undefined4 __thiscall FUN_005f8760(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00649920(&local_10,s_AIManager_Triggers_Trigger__d_Co_0074817c,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 != 0) {
    uVar1 = FUN_005f17e0(param_2,param_3);
    ExceptionList = local_c;
    return uVar1;
  }
  if ((*param_3 != 0xd) && (*param_3 != 4)) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_0064a2e0(param_3 + 2);
  ExceptionList = local_c;
  return 1;
}

