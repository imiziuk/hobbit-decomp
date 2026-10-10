
undefined4 __thiscall FUN_005d1b90(int param_1,undefined4 param_2,int *param_3)

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
  puStack_8 = &LAB_006e0170;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s_AIManager_Actions_Action__d_Dial_00746bb4,*(undefined4 *)(param_1 + 4));
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
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Spea_00746b90,*(undefined4 *)(param_1 + 4));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(uVar3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
        *(int *)(param_1 + 0x48) = param_3[0x90];
        *(int *)(param_1 + 0x4c) = param_3[0x91];
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s_AIManager_Actions_Action__d_At_S_00746b60,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(uVar3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        if (*param_3 == 3) {
          *(uint *)(param_1 + 0x6c) =
               (param_3[0x95] ^ *(uint *)(param_1 + 0x6c)) & 1 ^ *(uint *)(param_1 + 0x6c);
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        FUN_00649920(local_10,s_AIManager_Actions_Action__d_Bilb_00746b34,
                     *(undefined4 *)(param_1 + 4));
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(uVar3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          if (*param_3 == 3) {
            *(uint *)(param_1 + 0x6c) =
                 (param_3[0x95] << 1 ^ *(uint *)(param_1 + 0x6c)) & 2 ^ *(uint *)(param_1 + 0x6c);
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
    }
  }
  ExceptionList = local_c;
  return uVar3;
}

