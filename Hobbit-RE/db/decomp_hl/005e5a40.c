
undefined4 __thiscall FUN_005e5a40(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e17f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00649920(&local_10,s_AIManager_Actions_Action__d_Fade_00747880,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar4 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 0x18) = param_3[0x95];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&local_10,s_AIManager_Actions_Action__d_Colo_0074785c,*(undefined4 *)(param_1 + 4));
  local_4 = 1;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647cf0(uVar3);
  iVar5 = FUN_00647e80(param_2,uVar3,iVar4);
  piVar2 = param_3;
  if (iVar5 == 0) {
    iVar5 = FUN_00647cf0(param_2);
    if (iVar4 == iVar5) {
      if (*piVar2 == 0x11) {
        *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)((int)piVar2 + 0x223);
        *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)((int)piVar2 + 0x222);
        *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)((int)piVar2 + 0x221);
        *(char *)(param_1 + 0x1c) = (char)piVar2[0x88];
        bVar1 = true;
        goto LAB_005e5c06;
      }
    }
    else {
      iVar4 = iVar4 + param_2;
      iVar5 = FUN_00647e40(&DAT_00728244,iVar4);
      if (iVar5 == 0) {
        if (*piVar2 == 1) {
          *(char *)(param_1 + 0x1e) = (char)piVar2[0x93];
          bVar1 = true;
          goto LAB_005e5c06;
        }
      }
      else {
        iVar5 = FUN_00647e40(&DAT_00728240,iVar4);
        if (iVar5 == 0) {
          if (*piVar2 == 1) {
            *(char *)(param_1 + 0x1d) = (char)piVar2[0x93];
            bVar1 = true;
            goto LAB_005e5c06;
          }
        }
        else {
          iVar5 = FUN_00647e40(&DAT_0072823c,iVar4);
          if (iVar5 == 0) {
            if (*piVar2 == 1) {
              *(char *)(param_1 + 0x1c) = (char)piVar2[0x93];
              bVar1 = true;
              goto LAB_005e5c06;
            }
          }
          else {
            iVar4 = FUN_00647e40(&DAT_00728238,iVar4);
            if ((iVar4 == 0) && (*piVar2 == 1)) {
              *(char *)(param_1 + 0x1f) = (char)piVar2[0x93];
              bVar1 = true;
              goto LAB_005e5c06;
            }
          }
        }
      }
    }
  }
  bVar1 = false;
LAB_005e5c06:
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar1) {
    uVar3 = 1;
  }
  else {
    FUN_00649920(&param_3,s_AIManager_Actions_Action__d_Dura_00747834,*(undefined4 *)(param_1 + 4));
    local_4 = 2;
    uVar3 = FUN_00649940();
    iVar4 = FUN_00647e40(param_2,uVar3);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar4 == 0) {
      if (*piVar2 == 2) {
        *(int *)(param_1 + 0x20) = piVar2[0x94];
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = FUN_005ccb60(param_2,piVar2);
    }
  }
  ExceptionList = local_c;
  return uVar3;
}

