
undefined4 __thiscall FUN_0060fd40(int *param_1,undefined4 param_2,int *param_3)

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
  puStack_8 = &LAB_006e40e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s__s_Activation_Volume_00749268,param_1[4]);
  local_4 = 0;
  uVar1 = FUN_00649940();
  uVar3 = param_2;
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
      param_1[0x18] = param_3[0x90];
      param_1[0x19] = param_3[0x91];
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    FUN_00649920(&param_2,s__s_Death_Cinema_00749258,param_1[4]);
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(uVar3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
        param_1[0x1c] = param_3[0x90];
        param_1[0x1d] = param_3[0x91];
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s__s_Shaman1_0074924c,param_1[4]);
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(uVar3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
          param_1[0x24] = param_3[0x90];
          param_1[0x25] = param_3[0x91];
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        FUN_00649920(&param_2,s__s_Shaman2_00749240,param_1[4]);
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(uVar3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
            param_1[0x26] = param_3[0x90];
            param_1[0x27] = param_3[0x91];
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          FUN_00649920(&param_2,s__s_Shaman3_00749234,param_1[4]);
          local_4 = 4;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(uVar3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
              param_1[0x28] = param_3[0x90];
              param_1[0x29] = param_3[0x91];
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            FUN_00649920(&param_2,s__s_Shaman4_00749228,param_1[4]);
            local_4 = 5;
            uVar1 = FUN_00649940();
            iVar2 = FUN_00647e40(uVar3,uVar1);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar2 == 0) {
              if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
                param_1[0x2a] = param_3[0x90];
                param_1[0x2b] = param_3[0x91];
                uVar3 = 1;
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              FUN_00649920(&param_2,s__s_LevelReset_00749218,param_1[4]);
              local_4 = 6;
              uVar1 = FUN_00649940();
              iVar2 = FUN_00647e40(uVar3,uVar1);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar2 == 0) {
                (**(code **)(*param_1 + 0x50))();
                uVar3 = 1;
              }
              else {
                FUN_00649920(local_10,s__s_IsActive_0074920c,param_1[4]);
                local_4 = 7;
                uVar1 = FUN_00649940();
                iVar2 = FUN_00647e40(uVar3,uVar1);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar2 == 0) {
                  if (*param_3 == 3) {
                    param_1[0x1a] = param_3[0x95];
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
  ExceptionList = local_c;
  return uVar3;
}

