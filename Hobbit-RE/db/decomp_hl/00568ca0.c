
undefined4 __thiscall
FUN_00568ca0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_5;
  uVar4 = param_4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db310;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_5,s_AI_Tweaks_Goal_List__d_Goal__d_T_0073f5b0,param_4,param_5);
  local_4 = 0;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_2,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
      *(int *)(param_1 + 0x10) = param_3[0x90];
      *(int *)(param_1 + 0x14) = param_3[0x91];
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    FUN_00649920(&param_5,s_AI_Tweaks_Goal_List__d_Goal__d_S_0073f76c,uVar4,uVar1);
    local_4 = 1;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(param_2,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      if ((*param_3 == 1) || (*param_3 == 0xc)) {
        iVar3 = param_3[0x93];
        if (iVar3 == 1) {
          *(undefined4 *)(param_1 + 0x2c) = 6;
          uVar4 = 1;
        }
        else if (iVar3 == 2) {
          *(undefined4 *)(param_1 + 0x2c) = 7;
          uVar4 = 1;
        }
        else if (iVar3 == 3) {
          *(undefined4 *)(param_1 + 0x2c) = 8;
          uVar4 = 1;
        }
        else {
          if (iVar3 == 4) {
            *(undefined4 *)(param_1 + 0x2c) = 0x36;
          }
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      FUN_00649920(&param_5,s_AI_Tweaks_Goal_List__d_Goal__d_A_0073f720,uVar4,uVar1);
      local_4 = 2;
      uVar2 = FUN_00649940();
      iVar3 = FUN_00647e40(param_2,uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar3 == 0) {
        if ((*param_3 == 1) || (*param_3 == 0xc)) {
          *(int *)(param_1 + 0x2c) = param_3[0x93];
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        FUN_00649920(&param_5,s_AI_Tweaks_Goal_List__d_Goal__d_L_0073f6f0,uVar4,uVar1);
        local_4 = 3;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_2,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          if (*param_3 == 3) {
            *(uint *)(param_1 + 0x5c) =
                 (param_3[0x95] ^ *(uint *)(param_1 + 0x5c)) & 1 ^ *(uint *)(param_1 + 0x5c);
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          FUN_00649920(&param_5,s_AI_Tweaks_Goal_List__d_Goal__d_L_0073f6c4,uVar4,uVar1);
          local_4 = 4;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_2,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            if (*param_3 == 3) {
              *(uint *)(param_1 + 0x5c) =
                   (param_3[0x95] << 1 ^ *(uint *)(param_1 + 0x5c)) & 2 ^ *(uint *)(param_1 + 0x5c);
              uVar4 = 1;
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            FUN_00649920(&param_4,s_AI_Tweaks_Goal_List__d_Goal__d_A_0073f698,uVar4,uVar1);
            local_4 = 5;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_2,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              if ((*param_3 == 0xd) || (*param_3 == 4)) {
                FUN_0064a2e0(param_3 + 2);
                uVar4 = 1;
              }
              else {
                uVar4 = 0;
              }
            }
            else {
              uVar4 = FUN_00567310(param_2,param_3,uVar4,uVar1);
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

