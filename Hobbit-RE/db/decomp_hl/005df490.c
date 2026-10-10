
undefined4 __thiscall FUN_005df490(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e10e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00649d10();
  FUN_00649920(&local_10,s_AIManager_Actions_Action__d_Ques_00747618,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  uVar3 = param_2;
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if ((*param_3 == 0xd) || (*param_3 == 4)) {
      FUN_0064a2e0(param_3 + 2);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Requ_007475f0,*(undefined4 *)(param_1 + 4));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(uVar3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      if (*param_3 == 3) {
        *(int *)(param_1 + 0x20) = param_3[0x95];
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = FUN_005ccb60(uVar3,param_3);
    }
  }
  ExceptionList = local_c;
  return uVar3;
}

