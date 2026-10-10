
undefined4 __thiscall FUN_005f17e0(int param_1,undefined4 param_2,int *param_3)

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
  puStack_8 = &LAB_006e23c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s_AIManager_Triggers_Trigger__d_Is_00748078,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar2 = FUN_00649940();
  uVar1 = param_2;
  iVar3 = FUN_00647e40(param_2,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    if (*param_3 == 3) {
      *(uint *)(param_1 + 8) = (param_3[0x95] ^ *(uint *)(param_1 + 8)) & 1 ^ *(uint *)(param_1 + 8)
      ;
      ExceptionList = local_c;
      return 1;
    }
  }
  else {
    FUN_00649920(&param_2,s_AIManager_Triggers_Trigger__d_St_007480d4,*(undefined4 *)(param_1 + 4));
    local_4 = 1;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(uVar1,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      if (*param_3 == 3) {
        *(uint *)(param_1 + 8) =
             (param_3[0x95] << 1 ^ *(uint *)(param_1 + 8)) & 2 ^ *(uint *)(param_1 + 8);
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      FUN_00649920(local_10,s_AIManager_Triggers_Trigger__d_Tr_007480a4,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 2;
      uVar2 = FUN_00649940();
      iVar3 = FUN_00647e40(uVar1,uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
      if ((iVar3 == 0) && (*param_3 == 3)) {
        *(uint *)(param_1 + 8) =
             (param_3[0x95] << 2 ^ *(uint *)(param_1 + 8)) & 4 ^ *(uint *)(param_1 + 8);
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

