
undefined4 __thiscall FUN_005ccb60(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dfa88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s_AIManager_Actions_Action__d_Exec_007466b4,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar2 = FUN_00649940();
  uVar1 = param_2;
  iVar3 = FUN_00647e40(param_2,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    if (*param_3 == 2) {
      *(int *)(param_1 + 0x10) = param_3[0x94];
      ExceptionList = local_c;
      return 1;
    }
  }
  else {
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Exec_00746684,*(undefined4 *)(param_1 + 4));
    local_4 = 1;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(uVar1,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      if (*param_3 == 3) {
        *(uint *)(param_1 + 0x14) =
             (param_3[0x95] ^ *(uint *)(param_1 + 0x14)) & 1 ^ *(uint *)(param_1 + 0x14);
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Curr_00746650,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 2;
      uVar2 = FUN_00649940();
      iVar3 = FUN_00647e40(uVar1,uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar3 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0xc) = param_3[0x94];
          ExceptionList = local_c;
          return 1;
        }
      }
      else {
        FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Time_00746624,
                     *(undefined4 *)(param_1 + 4));
        local_4 = 3;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(uVar1,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          if (*param_3 == 1) {
            *(int *)(param_1 + 8) = param_3[0x93];
            ExceptionList = local_c;
            return 1;
          }
        }
        else {
          FUN_00649920(local_10,s_AIManager_Actions_Action__d_Tryi_007465f4,
                       *(undefined4 *)(param_1 + 4));
          local_4 = 4;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(uVar1,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if ((iVar3 == 0) && (*param_3 == 3)) {
            *(uint *)(param_1 + 0x14) =
                 (param_3[0x95] << 1 ^ *(uint *)(param_1 + 0x14)) & 2 ^ *(uint *)(param_1 + 0x14);
            ExceptionList = local_c;
            return 1;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

