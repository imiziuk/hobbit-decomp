
undefined4 __thiscall FUN_0061caa0(int param_1,undefined4 param_2,int *param_3)

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
  puStack_8 = &LAB_006e47b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s__s_Arena_Center_00749c9c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  uVar3 = param_2;
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
      *(int *)(param_1 + 0xa0) = param_3[0x90];
      *(int *)(param_1 + 0xa4) = param_3[0x91];
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    FUN_00649920(&param_2,s__s_Pillar1_00749c90,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(uVar3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
        *(int *)(param_1 + 0xa8) = param_3[0x90];
        *(int *)(param_1 + 0xac) = param_3[0x91];
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s__s_Pillar2_00749c84,*(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(uVar3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
          *(int *)(param_1 + 0xb0) = param_3[0x90];
          *(int *)(param_1 + 0xb4) = param_3[0x91];
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        FUN_00649920(&param_2,s__s_Pillar3_00749c78,*(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(uVar3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
            *(int *)(param_1 + 0xb8) = param_3[0x90];
            *(int *)(param_1 + 0xbc) = param_3[0x91];
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          FUN_00649920(&param_2,s__s_Pillar_Lockon_Fudge_Degrees_00749c58,
                       *(undefined4 *)(param_1 + 0x10));
          local_4 = 4;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(uVar3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            if (*param_3 == 1) {
              *(int *)(param_1 + 0xc0) = param_3[0x93];
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            FUN_00649920(local_10,s__s_Stalactite_Falling_Volume_00749c38,
                         *(undefined4 *)(param_1 + 0x10));
            local_4 = 5;
            uVar1 = FUN_00649940();
            iVar2 = FUN_00647e40(uVar3,uVar1);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar2 == 0) {
              if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
                *(int *)(param_1 + 200) = param_3[0x90];
                *(int *)(param_1 + 0xcc) = param_3[0x91];
                uVar3 = 1;
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = FUN_00637fd0(uVar3,param_3);
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar3;
}

