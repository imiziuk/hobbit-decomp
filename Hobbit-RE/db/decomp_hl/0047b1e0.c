
undefined4 __thiscall FUN_0047b1e0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_10,s__s_Fx_Type_0072828c,param_2);
  iVar2 = param_3;
  local_4 = 0;
  uVar4 = FUN_00649940(param_3);
  iVar5 = FUN_00647e40(uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar5 == 0) {
    *(int *)(param_1 + 0x1c) = param_4[0x93];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_3,s__s_Magnitude_0072827c,param_2);
  local_4 = 1;
  uVar4 = FUN_00649940();
  iVar5 = FUN_00647e40(iVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar5 == 0) {
    if (*param_4 != 2) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 0x20) = param_4[0x94];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_3,s__s_Frequency_0072826c,param_2);
  local_4 = 2;
  uVar4 = FUN_00649940();
  iVar5 = FUN_00647e40(iVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar5 == 0) {
    if (*param_4 != 2) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 0x24) = param_4[0x94];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_3,s__s_Rolling_00728260,param_2);
  local_4 = 3;
  uVar4 = FUN_00649940();
  iVar5 = FUN_00647e40(iVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar5 == 0) {
    if (*param_4 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 0x28) = param_4[0x95];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_3,s__s_Fadeout_00728254,param_2);
  local_4 = 4;
  uVar4 = FUN_00649940();
  iVar5 = FUN_00647e40(iVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar5 == 0) {
    if (*param_4 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 0x2c) = param_4[0x95];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_3,s__s_Color_00728248,param_2);
  local_4 = 5;
  uVar4 = FUN_00649940();
  iVar5 = FUN_00647cf0(uVar4);
  iVar6 = FUN_00647e80(iVar2,uVar4,iVar5);
  piVar3 = param_4;
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(iVar2);
    if (iVar5 == iVar6) {
      if (*piVar3 == 0x11) {
        *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)((int)piVar3 + 0x223);
        *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)((int)piVar3 + 0x222);
        *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)((int)piVar3 + 0x221);
        *(char *)(param_1 + 0x34) = (char)piVar3[0x88];
        bVar1 = true;
        goto LAB_0047b545;
      }
    }
    else {
      iVar5 = iVar5 + iVar2;
      iVar6 = FUN_00647e40(&DAT_00728244,iVar5);
      if (iVar6 == 0) {
        if (*piVar3 == 1) {
          *(char *)(param_1 + 0x36) = (char)piVar3[0x93];
          bVar1 = true;
          goto LAB_0047b545;
        }
      }
      else {
        iVar6 = FUN_00647e40(&DAT_00728240,iVar5);
        if (iVar6 == 0) {
          if (*piVar3 == 1) {
            *(char *)(param_1 + 0x35) = (char)piVar3[0x93];
            bVar1 = true;
            goto LAB_0047b545;
          }
        }
        else {
          iVar6 = FUN_00647e40(&DAT_0072823c,iVar5);
          if (iVar6 == 0) {
            if (*piVar3 == 1) {
              *(char *)(param_1 + 0x34) = (char)piVar3[0x93];
              bVar1 = true;
              goto LAB_0047b545;
            }
          }
          else {
            iVar5 = FUN_00647e40(&DAT_00728238,iVar5);
            if ((iVar5 == 0) && (*piVar3 == 1)) {
              *(char *)(param_1 + 0x37) = (char)piVar3[0x93];
              bVar1 = true;
              goto LAB_0047b545;
            }
          }
        }
      }
    }
  }
  bVar1 = false;
LAB_0047b545:
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar1) {
    uVar4 = 1;
  }
  else {
    FUN_00649920(&param_4,s__s_Target__1_closed__0_open__00728218,param_2);
    local_4 = 6;
    uVar4 = FUN_00649940();
    iVar5 = FUN_00647e40(iVar2,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar5 == 0) {
      if (*piVar3 == 2) {
        *(int *)(param_1 + 0x30) = piVar3[0x94];
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = FUN_00474b30(param_2,iVar2,piVar3);
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

