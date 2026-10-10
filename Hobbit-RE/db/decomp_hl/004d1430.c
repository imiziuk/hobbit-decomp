
undefined4 __thiscall FUN_004d1430(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_3c;
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4de0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00647e40(param_2,s_Is_Gold_Pile_0072d774);
  if (iVar3 == 0) {
    if (*param_3 == 3) {
      FUN_004ac4e0(param_3[0x95]);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    iVar3 = FUN_00647e40(param_2,s_Is_Hidden_0072d768);
    if (iVar3 == 0) {
      if (*param_3 == 3) {
        FUN_004d22c0(param_3[0x95]);
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      iVar3 = FUN_00647e40(param_2,s_Accepts_Decals_0072d748);
      if (iVar3 == 0) {
        if (*param_3 == 3) {
          FUN_004d0b40(param_3[0x95]);
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        iVar3 = FUN_00647e40(param_2,s_IsSqueakyChickenBoard_0072d6b0);
        if (iVar3 == 0) {
          if (*param_3 == 3) {
            *(byte *)(param_1 + 0x127) =
                 ((char)param_3[0x95] << 3 ^ *(byte *)(param_1 + 0x127)) & 8 ^
                 *(byte *)(param_1 + 0x127);
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          iVar3 = FUN_00647e40(param_2,s_Self_Illuminated_0072d734);
          if (iVar3 == 0) {
            if (*param_3 == 3) {
              *(byte *)(param_1 + 0x127) =
                   ((char)param_3[0x95] << 1 ^ *(byte *)(param_1 + 0x127)) & 2 ^
                   *(byte *)(param_1 + 0x127);
              uVar4 = 1;
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            iVar3 = FUN_00647e40(param_2,s_Technical_Copy_R_to_A_in_lightin_0072d704);
            piVar2 = param_3;
            if (iVar3 == 0) {
              if (*param_3 == 3) {
                *(byte *)(param_1 + 0x127) =
                     ((char)param_3[0x95] << 2 ^ *(byte *)(param_1 + 0x127)) & 4 ^
                     *(byte *)(param_1 + 0x127);
                uVar4 = 1;
              }
              else {
                uVar4 = 0;
              }
            }
            else {
              iVar3 = 0;
              local_3c = 0;
              do {
                FUN_00649920(&param_3,s_Submesh_dHidden_0072d758,iVar3);
                local_4 = 0;
                uVar4 = FUN_00649940();
                iVar5 = FUN_00647e40(param_2,uVar4);
                if ((iVar5 == 0) && (*piVar2 == 3)) {
                  local_3c = piVar2[0x95];
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                local_4 = 0xffffffff;
                FUN_00649950();
                if (bVar1) {
                  FUN_004d0a70(iVar3,local_3c);
                  ExceptionList = local_c;
                  return 1;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < 0x40);
              FUN_006499d0();
              local_4 = 1;
              iVar3 = FUN_00647e40(param_2,s_Surface_Type_0072d6a0);
              if ((iVar3 == 0) &&
                 (((iVar3 = *piVar2, iVar3 == 0xd || (iVar3 == 4)) || (iVar3 == 0xe)))) {
                FUN_0064a2e0(piVar2 + 2);
                iVar3 = FUN_004d1140(local_38);
                if ((iVar3 < 0) || (9 < iVar3)) {
                  *(byte *)(param_1 + 0x126) = *(byte *)(param_1 + 0x126) & 7 | 0x10;
                }
                else {
                  *(byte *)(param_1 + 0x126) = *(byte *)(param_1 + 0x126) & 7 ^ (char)iVar3 << 3;
                }
              }
              uVar4 = FUN_004ab750(param_2,piVar2);
              local_4 = 0xffffffff;
              FUN_00649ba0();
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

