
undefined4 __thiscall FUN_00602a10(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3700;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s_AIManager_Triggers_Trigger__d_NP_00748b1c,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_2,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
      *(int *)(param_1 + 0x10) = param_3[0x90];
      *(int *)(param_1 + 0x14) = param_3[0x91];
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    FUN_00649920(local_14,s_AIManager_Triggers_Trigger__d_Ch_00748aec,*(undefined4 *)(param_1 + 4));
    local_4 = 1;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(param_2,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
        *(int *)(param_1 + 0x18) = param_3[0x90];
        *(int *)(param_1 + 0x1c) = param_3[0x91];
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      iVar3 = 0;
      FUN_00649920(local_14,s_AIManager_Triggers_Trigger__d_Sm_00748ac8,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 2;
      uVar2 = FUN_00649940();
      iVar4 = FUN_00647e40(param_2,uVar2);
      if ((iVar4 == 0) && (*param_3 == 3)) {
        iVar3 = param_3[0x95];
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      if (bVar1) {
        if (iVar3 == 0) {
          uVar5 = *(uint *)(param_1 + 0x20) & 0xfffffffe;
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x20) | 1;
        }
        *(uint *)(param_1 + 0x20) = uVar5;
      }
      FUN_00649920(local_14,s_AIManager_Triggers_Trigger__d_Si_00748aa4,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 3;
      uVar2 = FUN_00649940();
      iVar4 = FUN_00647e40(param_2,uVar2);
      if ((iVar4 == 0) && (*param_3 == 3)) {
        iVar3 = param_3[0x95];
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      if (bVar1) {
        if (iVar3 == 0) {
          uVar5 = *(uint *)(param_1 + 0x20) & 0xfffffffd;
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x20) | 2;
        }
        *(uint *)(param_1 + 0x20) = uVar5;
      }
      FUN_00649920(local_14,s_AIManager_Triggers_Trigger__d_He_00748a7c,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 4;
      uVar2 = FUN_00649940();
      iVar4 = FUN_00647e40(param_2,uVar2);
      if ((iVar4 == 0) && (*param_3 == 3)) {
        iVar3 = param_3[0x95];
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      if (bVar1) {
        if (iVar3 == 0) {
          uVar5 = *(uint *)(param_1 + 0x20) & 0xfffffffb;
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x20) | 4;
        }
        *(uint *)(param_1 + 0x20) = uVar5;
      }
      FUN_00649920(local_10,s_AIManager_Triggers_Trigger__d_Lo_00748a50,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 5;
      uVar2 = FUN_00649940();
      iVar4 = FUN_00647e40(param_2,uVar2);
      if ((iVar4 == 0) && (*param_3 == 3)) {
        iVar3 = param_3[0x95];
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      if (bVar1) {
        if (iVar3 == 0) {
          uVar5 = *(uint *)(param_1 + 0x20) & 0xfffffff7;
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x20) | 8;
        }
        *(uint *)(param_1 + 0x20) = uVar5;
      }
      uVar2 = FUN_005f17e0(param_2,param_3);
    }
  }
  ExceptionList = local_c;
  return uVar2;
}

