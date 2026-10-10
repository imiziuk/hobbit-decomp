
undefined4 __thiscall FUN_005ebf00(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s_AIManager_Actions_Action__d_NPC_007470b8,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  uVar3 = param_2;
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 0x20) = param_3[0x90];
    *(int *)(param_1 + 0x24) = param_3[0x91];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Do_R_00747cec,*(undefined4 *)(param_1 + 4));
  local_4 = 1;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(uVar3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 0x18) = param_3[0x95];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(local_10,s_AIManager_Actions_Action__d_Set_R_00747cb0,*(undefined4 *)(param_1 + 4));
  local_4 = 2;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(uVar3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 != 0) {
    uVar3 = FUN_005ccb60(uVar3,param_3);
    ExceptionList = local_c;
    return uVar3;
  }
  if (*param_3 != 3) {
    ExceptionList = local_c;
    return 0;
  }
  *(int *)(param_1 + 0x1c) = param_3[0x95];
  ExceptionList = local_c;
  return 1;
}

