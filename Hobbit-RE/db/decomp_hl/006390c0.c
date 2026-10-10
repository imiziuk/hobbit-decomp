
undefined4 __thiscall FUN_006390c0(int param_1,undefined4 param_2,int *param_3)

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
  puStack_8 = &LAB_006e5948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s__s_Alert1_Duration_0074a6c4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  uVar3 = param_2;
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 0x54) = param_3[0x94];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_2,s__s_Alert2_Duration_0074a6b0,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(uVar3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 0x58) = param_3[0x94];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(local_10,s__s_Goto_Sound_0074a6a0,*(undefined4 *)(param_1 + 0x10));
  local_4 = 2;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(uVar3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 != 0) {
    uVar3 = FUN_005bf900(uVar3,param_3);
    ExceptionList = local_c;
    return uVar3;
  }
  if (*param_3 != 3) {
    ExceptionList = local_c;
    return 0;
  }
  *(int *)(param_1 + 0x5c) = param_3[0x95];
  ExceptionList = local_c;
  return 1;
}

