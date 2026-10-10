
undefined4 __thiscall FUN_0045ac70(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar5 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d04b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_00647e40(param_2,s_Is_Running_00725b20);
  if (iVar4 == 0) {
    if (*param_3 == 3) {
      *(int *)(param_1 + 0x160) = param_3[0x95];
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    iVar4 = FUN_00647e40(uVar5,s_Continuous_00725a80);
    if (iVar4 == 0) {
      if (*param_3 == 3) {
        *(int *)(param_1 + 0x164) = param_3[0x95];
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      iVar4 = FUN_00647e40(uVar5,s_Pain_Radius_00725af0);
      if (iVar4 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x194) = param_3[0x94];
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        iVar4 = FUN_00647e40(uVar5,s_Pain_Damage_00725ae4);
        if (iVar4 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 0x198) = param_3[0x94];
            uVar5 = 1;
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          iVar4 = FUN_00647e40(uVar5,s_Time_of_Animations_00725b0c);
          if (iVar4 == 0) {
            if (*param_3 == 2) {
              *(int *)(param_1 + 0x184) = param_3[0x94];
              uVar5 = 1;
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            iVar4 = FUN_00647ed0(uVar5,s_Timer_Offset_00725afc);
            if (iVar4 == 0) {
              if (*param_3 == 2) {
                fVar3 = (*(float *)(param_1 + 0x188) - (float)param_3[0x94]) +
                        *(float *)(param_1 + 0x18c);
                bVar1 = NAN(DAT_006e92e4);
                bVar2 = fVar3 < DAT_006e92e4;
                *(float *)(param_1 + 0x18c) = fVar3;
                if (bVar2 != (NAN(fVar3) || bVar1)) {
                  *(float *)(param_1 + 0x18c) = fVar3 + *(float *)(param_1 + 0x184);
                }
                *(int *)(param_1 + 0x188) = param_3[0x94];
                uVar5 = 1;
              }
              else {
                uVar5 = 0;
              }
            }
            else {
              iVar4 = FUN_00647ed0(uVar5,s_Number_of_Animations_00725acc);
              if (iVar4 == 0) {
                if (*param_3 == 1) {
                  param_2 = param_3[0x93];
                  iVar4 = *(int *)(param_1 + 0x178);
                  iVar9 = iVar4;
                  if (iVar4 < param_2) {
                    iVar9 = param_2;
                  }
                  if (iVar9 != iVar4) {
                    param_3 = (int *)iVar9;
                    piVar6 = (int *)operator_new(iVar9 * 0x2c + 4);
                    piVar8 = (int *)0x0;
                    local_4 = 0;
                    if (piVar6 != (int *)0x0) {
                      piVar8 = piVar6 + 1;
                      *piVar6 = iVar9;
                      FUN_006c043b(piVar8,0x2c,iVar9,FUN_006499d0,FUN_00649ba0);
                    }
                    iVar4 = 0;
                    local_4 = 0xffffffff;
                    if (0 < *(int *)(param_1 + 0x170)) {
                      iVar9 = 0;
                      do {
                        FUN_0064a320(*(int *)(param_1 + 0x174) + iVar9);
                        iVar4 = iVar4 + 1;
                        iVar9 = iVar9 + 0x2c;
                      } while (iVar4 < *(int *)(param_1 + 0x170));
                    }
                    iVar4 = *(int *)(param_1 + 0x174);
                    if (iVar4 != 0) {
                      FUN_006c026a(iVar4,0x2c,*(undefined4 *)(iVar4 + -4),FUN_00649ba0);
                      FUN_006bf840(iVar4 + -4);
                    }
                    *(int **)(param_1 + 0x178) = param_3;
                    *(int **)(param_1 + 0x174) = piVar8;
                  }
                  *(int *)(param_1 + 0x170) = param_2;
                  uVar5 = 1;
                }
                else {
                  uVar5 = 0;
                }
              }
              else {
                iVar4 = 0;
                if (0 < *(int *)(param_1 + 0x170)) {
                  do {
                    FUN_00649920(&param_2,s_Animation__d_00725abc,iVar4);
                    local_4 = 1;
                    uVar7 = FUN_00649940();
                    iVar9 = FUN_00647e40(uVar5,uVar7);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar9 == 0) {
                      iVar4 = *param_3;
                      if ((((iVar4 != 4) && (iVar4 != 7)) && (iVar4 != 6)) && (iVar4 != 0xd)) {
                        ExceptionList = local_c;
                        return 0;
                      }
                      FUN_0064a2e0(param_3 + 2);
                      ExceptionList = local_c;
                      return 1;
                    }
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < *(int *)(param_1 + 0x170));
                }
                uVar5 = FUN_004c49a0(uVar5,param_3);
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar5;
}

