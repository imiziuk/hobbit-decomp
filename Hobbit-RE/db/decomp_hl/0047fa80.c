
undefined4 __thiscall FUN_0047fa80(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar5 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d26b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649920(&param_2,s__s_RigidInstance_007287dc,param_2);
  bVar1 = false;
  uStack_4 = 0;
  uVar3 = FUN_00649940();
  uVar2 = param_3;
  iVar4 = FUN_00647e40(param_3,uVar3);
  if ((iVar4 == 0) && ((*param_4 == 0xf || (*param_4 == 0x10)))) {
    *(int *)(param_1 + 0x20) = param_4[0x90];
    *(int *)(param_1 + 0x24) = param_4[0x91];
    bVar1 = true;
  }
  uStack_4 = 0xffffffff;
  FUN_00649950();
  if (!bVar1) {
    FUN_00649920(&param_2,s__s_AnimationName_007287c8,uVar5);
    bVar1 = true;
    uStack_4 = 1;
    uVar3 = FUN_00649940();
    iVar4 = FUN_00647e40(uVar2,uVar3);
    if ((iVar4 == 0) &&
       ((((iVar4 = *param_4, iVar4 == 4 || (iVar4 == 7)) || (iVar4 == 6)) || (iVar4 == 0xd)))) {
      FUN_0064a2e0(param_4 + 2);
    }
    else {
      bVar1 = false;
    }
    uStack_4 = 0xffffffff;
    FUN_00649950();
    if (bVar1) {
      uVar5 = 1;
    }
    else {
      FUN_00649920(&param_2,s__s_Start_Animating_007287b4,uVar5);
      uStack_4 = 2;
      uVar3 = FUN_00649940();
      iVar4 = FUN_00647e40(uVar2,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      if (iVar4 == 0) {
        if (*param_4 == 3) {
          *(uint *)(param_1 + 0x54) =
               (param_4[0x95] ^ *(uint *)(param_1 + 0x54)) & 1 ^ *(uint *)(param_1 + 0x54);
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        FUN_00649920(&param_2,s__s_Looping_00727ed8,uVar5);
        uStack_4 = 3;
        uVar3 = FUN_00649940();
        iVar4 = FUN_00647e40(uVar2,uVar3);
        uStack_4 = 0xffffffff;
        FUN_00649950();
        if (iVar4 == 0) {
          if (*param_4 == 3) {
            *(uint *)(param_1 + 0x54) =
                 (param_4[0x95] << 1 ^ *(uint *)(param_1 + 0x54)) & 2 ^ *(uint *)(param_1 + 0x54);
            uVar5 = 1;
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          FUN_00649920(&param_2,s__s_HideAtShotEnd_007287a0,uVar5);
          uStack_4 = 4;
          uVar3 = FUN_00649940();
          iVar4 = FUN_00647e40(uVar2,uVar3);
          uStack_4 = 0xffffffff;
          FUN_00649950();
          if (iVar4 == 0) {
            if (*param_4 == 3) {
              *(uint *)(param_1 + 0x54) =
                   (param_4[0x95] << 2 ^ *(uint *)(param_1 + 0x54)) & 4 ^ *(uint *)(param_1 + 0x54);
              uVar5 = 1;
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            FUN_00649920(&param_3,s__s_SetToEndOnSkip_0072878c,uVar5);
            uStack_4 = 5;
            uVar3 = FUN_00649940();
            iVar4 = FUN_00647e40(uVar2,uVar3);
            uStack_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if (*param_4 == 3) {
                *(uint *)(param_1 + 0x54) =
                     (param_4[0x95] << 3 ^ *(uint *)(param_1 + 0x54)) & 8 ^
                     *(uint *)(param_1 + 0x54);
                uVar5 = 1;
              }
              else {
                uVar5 = 0;
              }
            }
            else {
              uVar5 = FUN_00474b30(uVar5,uVar2,param_4);
            }
          }
        }
      }
    }
    ExceptionList = pvStack_c;
    return uVar5;
  }
  ExceptionList = pvStack_c;
  return 1;
}

