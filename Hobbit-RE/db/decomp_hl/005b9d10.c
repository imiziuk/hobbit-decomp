
undefined4 __thiscall FUN_005b9d10(int param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dee10;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s__s_Head_Volume_007458b4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar2 = FUN_00649940();
  uVar4 = param_2;
  iVar3 = FUN_00647e40(param_2,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
      *(int *)(param_1 + 0x80) = param_3[0x90];
      *(int *)(param_1 + 0x84) = param_3[0x91];
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    FUN_00649920(&param_2,s__s_Activation_Activate_Volume_00745884,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(uVar4,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
        *(int *)(param_1 + 0x68) = param_3[0x90];
        *(int *)(param_1 + 0x6c) = param_3[0x91];
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s__s_Activation_Deactivate_Volume_00745864,
                   *(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar2 = FUN_00649940();
      iVar3 = FUN_00647e40(uVar4,uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar3 == 0) {
        if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
          *(int *)(param_1 + 0x70) = param_3[0x90];
          *(int *)(param_1 + 0x74) = param_3[0x91];
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        FUN_00649920(&param_2,s__s_Activation_Is_Active_0074584c,*(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(uVar4,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          if (*param_3 == 3) {
            *(int *)(param_1 + 0x78) = param_3[0x95];
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          FUN_00649920(&param_2,s__s_Tail_Twitch_Tweaks_Tail_Volum_00745810,
                       *(undefined4 *)(param_1 + 0x10));
          local_4 = 4;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(uVar4,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
              *(int *)(param_1 + 0x88) = param_3[0x90];
              *(int *)(param_1 + 0x8c) = param_3[0x91];
              uVar4 = 1;
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            FUN_00649920(&param_2,s__s_Tail_Twitch_Tweaks_Tail_Speed_007457e4,
                         *(undefined4 *)(param_1 + 0x10));
            local_4 = 5;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647ed0(uVar4,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              if (*param_3 == 2) {
                fVar1 = (float)param_3[0x94];
                *(float *)(param_1 + 0x90) = fVar1;
                if (DAT_006e92e8 < fVar1 != (NAN(DAT_006e92e8) || NAN(fVar1))) {
                  fVar1 = DAT_006e92e8;
                }
                *(float *)(param_1 + 0x90) = fVar1;
                if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
                  fVar1 = DAT_006e92e4;
                }
                *(float *)(param_1 + 0x90) = fVar1;
                *(float *)(param_1 + 0x104) = fVar1;
                uVar4 = 1;
              }
              else {
                uVar4 = 0;
              }
            }
            else {
              FUN_00649920(&param_2,s__s_Tail_Active_007457d4,*(undefined4 *)(param_1 + 0x10));
              local_4 = 6;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(uVar4,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                if (*param_3 == 3) {
                  *(int *)(param_1 + 0x94) = param_3[0x95];
                  uVar4 = 1;
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                FUN_00649920(local_10,s__s_Cinematics_Death_Cinema_007457a8,
                             *(undefined4 *)(param_1 + 0x10));
                local_4 = 7;
                uVar2 = FUN_00649940();
                iVar3 = FUN_00647e40(uVar4,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
                    *(int *)(param_1 + 0xa8) = param_3[0x90];
                    *(int *)(param_1 + 0xac) = param_3[0x91];
                    uVar4 = 1;
                  }
                  else {
                    uVar4 = 0;
                  }
                }
                else {
                  uVar4 = FUN_005bf900(uVar4,param_3);
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

