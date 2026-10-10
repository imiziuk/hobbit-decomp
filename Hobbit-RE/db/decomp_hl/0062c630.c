
undefined4 __thiscall FUN_0062c630(int param_1,undefined4 param_2,int *param_3)

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
  puStack_8 = &LAB_006e5140;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s__s_Attack_Delay_00749e1c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  uVar3 = param_2;
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if (*param_3 == 2) {
      *(int *)(param_1 + 0x70) = param_3[0x94];
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    FUN_00649920(&param_2,s__s_Attack_Radius_00749e2c,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(uVar3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      if (*param_3 == 2) {
        *(int *)(param_1 + 0x74) = param_3[0x94];
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s__s_Attack_Idle_Radius_0074a080,*(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(uVar3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x78) = param_3[0x94];
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        FUN_00649920(&param_2,s__s_Attack_Height_0074a394,*(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(uVar3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 0x7c) = param_3[0x94];
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          FUN_00649920(&param_2,s__s_Jump_Attack_Percent_0074a37c,*(undefined4 *)(param_1 + 0x10));
          local_4 = 4;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(uVar3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            if (*param_3 == 1) {
              *(int *)(param_1 + 0x80) = param_3[0x93];
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            FUN_00649920(&param_2,s__s_Jump_Attack_Radius_0074a364,*(undefined4 *)(param_1 + 0x10));
            local_4 = 5;
            uVar1 = FUN_00649940();
            iVar2 = FUN_00647e40(uVar3,uVar1);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar2 == 0) {
              if (*param_3 == 2) {
                *(int *)(param_1 + 0x84) = param_3[0x94];
                uVar3 = 1;
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              FUN_00649920(&param_2,s__s_Minimum_Jump_Attack_Radius_0074a344,
                           *(undefined4 *)(param_1 + 0x10));
              local_4 = 6;
              uVar1 = FUN_00649940();
              iVar2 = FUN_00647e40(uVar3,uVar1);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar2 == 0) {
                if (*param_3 == 2) {
                  *(int *)(param_1 + 0x88) = param_3[0x94];
                  uVar3 = 1;
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                FUN_00649920(&param_2,s__s_Timeout_Duration_00748df4,*(undefined4 *)(param_1 + 0x10)
                            );
                local_4 = 7;
                uVar1 = FUN_00649940();
                iVar2 = FUN_00647e40(uVar3,uVar1);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar2 == 0) {
                  if (*param_3 == 2) {
                    *(int *)(param_1 + 0x90) = param_3[0x94];
                    uVar3 = 1;
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  FUN_00649920(&param_2,s__s_Ranged_Attack_Percent_0074a328,
                               *(undefined4 *)(param_1 + 0x10));
                  local_4 = 8;
                  uVar1 = FUN_00649940();
                  iVar2 = FUN_00647e40(uVar3,uVar1);
                  local_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar2 == 0) {
                    if (*param_3 == 1) {
                      *(int *)(param_1 + 0x9c) = param_3[0x93];
                      uVar3 = 1;
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    FUN_00649920(local_10,s__s_Health_Retreat_Percent_0074a30c,
                                 *(undefined4 *)(param_1 + 0x10));
                    local_4 = 9;
                    uVar1 = FUN_00649940();
                    iVar2 = FUN_00647e40(uVar3,uVar1);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar2 == 0) {
                      if (*param_3 == 1) {
                        *(int *)(param_1 + 0xa0) = param_3[0x93];
                        uVar3 = 1;
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = FUN_005bf900(uVar3,param_3);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar3;
}

