
undefined4 __thiscall FUN_006b6a90(int param_1,int param_2,undefined *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_20;
  int *local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e83a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_mgr__LoadEffect_char__X_FILE__00757bb4);
  iVar6 = 0;
  local_1c = (int *)(param_1 + 0x1000);
  local_4 = 0;
  iVar8 = -1;
  local_18 = 0;
  do {
    if (local_18 != 0) goto LAB_006b6b8d;
    if (*local_1c == 0) {
      if (iVar8 == -1) {
        iVar8 = iVar6;
      }
    }
    else {
      iVar2 = FUN_00647ed0(param_2,*(undefined4 *)(*local_1c + 0x20));
      if (iVar2 == 0) {
        local_18 = 1;
      }
    }
    iVar6 = iVar6 + 1;
    local_1c = local_1c + 1;
  } while (iVar6 < 0x400);
  if ((local_18 == 0) &&
     ((FUN_0064f350(&local_20,4,1,param_3), local_20 == 0x32305846 || (local_20 == 0x46583032)))) {
    FUN_0064f350(&local_20,4,1,param_3);
    iVar6 = FUN_00647cf0(param_2);
    piVar4 = (int *)FUN_006747f0(iVar6 + 1 + local_20 * 4);
    *(int **)(param_1 + 0x1000 + iVar8 * 4) = piVar4;
    *piVar4 = local_20;
    FUN_0064f350(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 4,4,local_20 + -1,param_3);
    iVar6 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
    *(int *)(iVar6 + 0x20) = iVar6 + local_20 * 4;
    FUN_00647d10(*(undefined4 *)(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 0x20),param_2);
    iVar2 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
    iVar6 = iVar2 + 0x34;
    *(int *)(iVar2 + 0x24) = iVar6;
    iVar2 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
    iVar6 = iVar6 + *(int *)(iVar2 + 0xc) * 4;
    *(int *)(iVar2 + 0x28) = iVar6;
    iVar2 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
    iVar6 = iVar6 + *(int *)(iVar2 + 0x10) * 4;
    *(int *)(iVar2 + 0x2c) = iVar6;
    iVar2 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
    iVar6 = iVar6 + *(int *)(iVar2 + 0x14) * 4;
    *(int *)(iVar2 + 0x30) = iVar6;
    iVar2 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
    piVar4 = (int *)(iVar6 + *(int *)(iVar2 + 0x14) * 4);
    iVar6 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar6 = iVar6 + 1;
        *(int **)(*(int *)(iVar2 + 0x24) + -4 + iVar6 * 4) = piVar4;
        piVar4 = piVar4 + *piVar4;
        iVar2 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
      } while (iVar6 < *(int *)(iVar2 + 0xc));
    }
    iVar6 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
    iVar2 = 0;
    if (0 < *(int *)(iVar6 + 0x10)) {
      do {
        iVar2 = iVar2 + 1;
        *(int **)(*(int *)(iVar6 + 0x28) + -4 + iVar2 * 4) = piVar4;
        piVar4 = piVar4 + *piVar4;
        iVar6 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
      } while (iVar2 < *(int *)(iVar6 + 0x10));
    }
    FUN_0064f350(&local_20,4,1,param_3);
    pcVar5 = (char *)thunk_FUN_0064ff70(local_20,s_C__projects_meridian_xCore_Auxil_00757b78,0x1d6);
    local_1c = (int *)pcVar5;
    FUN_0064f350(pcVar5,1,local_20,param_3);
    param_2 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 0xc)) {
      do {
        iVar6 = 0;
        if (0 < DAT_00815cb8) {
          param_3 = &DAT_00815800;
          do {
            iVar2 = FUN_00647ed0(param_3,pcVar5);
            if (iVar2 == 0) {
              *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 0x24) +
                               param_2 * 4) + 4) = iVar6;
              break;
            }
            iVar6 = iVar6 + 1;
            param_3 = param_3 + 0x24;
          } while (iVar6 < DAT_00815cb8);
        }
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
          pcVar7 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          cVar1 = *pcVar7;
        }
        pcVar5 = pcVar5 + 1;
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 0xc));
    }
    param_2 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 0x10)) {
LAB_006b6d8a:
      do {
        local_18 = FUN_00648010(pcVar5,0x7e);
        iVar6 = 0;
        if (0 < DAT_00815cbc) {
          param_3 = &DAT_008132e0;
          do {
            iVar2 = FUN_00647ed0(param_3,pcVar5);
            if (iVar2 == 0) {
              *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 0x28) +
                               param_2 * 4) + 4) = iVar6;
              break;
            }
            iVar6 = iVar6 + 1;
            param_3 = param_3 + 0x28;
          } while (iVar6 < DAT_00815cbc);
        }
        if ((iVar6 == DAT_00815cbc) && (local_18 != 0)) {
          pcVar5 = (char *)(local_18 + 1);
          goto LAB_006b6d8a;
        }
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
          pcVar7 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          cVar1 = *pcVar7;
        }
        pcVar5 = pcVar5 + 1;
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 0x10));
    }
    iVar6 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
    param_2 = 0;
    if (0 < *(int *)(iVar6 + 0x14)) {
      do {
        iVar2 = param_2 * 4;
        (**(code **)(param_1 + 0x2000))(pcVar5,*(int *)(iVar6 + 0x2c) + iVar2);
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
          pcVar7 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          cVar1 = *pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        if (pcVar5[1] == '\0') {
          *(undefined4 *)(iVar2 + *(int *)(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 0x30)) = 0;
        }
        else {
          (**(code **)(param_1 + 0x2000))
                    (pcVar7,*(int *)(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 0x30) + iVar2);
        }
        cVar1 = *pcVar7;
        while (cVar1 != '\0') {
          pcVar5 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar5;
        }
        iVar6 = *(int *)(param_1 + 0x1000 + iVar8 * 4);
        pcVar5 = pcVar7 + 1;
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(iVar6 + 0x14));
    }
    FUN_0064ff40(local_1c,s_C__projects_meridian_xCore_Auxil_00757b78,0x23b);
    local_4 = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0x1000 + iVar8 * 4) + 0x1c) = 0;
    FUN_00649720();
    uVar3 = 1;
  }
  else {
LAB_006b6b8d:
    local_4 = 0xffffffff;
    FUN_00649720();
    uVar3 = 0;
  }
  ExceptionList = local_c;
  return uVar3;
}

