
bool __thiscall FUN_006634e0(int param_1,undefined4 param_2)

{
  uint *puVar1;
  void **ppvVar2;
  char cVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6a6b;
  local_c = ExceptionList;
  local_54 = 0;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (*(int *)(param_1 + 0x44) != 0) {
    do {
      local_1c = *(undefined4 *)(param_1 + 0x1c);
      local_18 = *(undefined4 *)(param_1 + 0x20);
      local_10 = *(undefined4 *)(param_1 + 0x28);
      local_50 = **(uint **)(param_1 + 0x24);
      cVar3 = FUN_00663f20(param_2);
      if (cVar3 != '\0') {
        ExceptionList = local_c;
        return true;
      }
      iVar7 = *(int *)(param_1 + 0x24) + 4;
      iVar5 = *(int *)(param_1 + 0x44) + -1;
      *(int *)(param_1 + 0x24) = iVar7;
      *(int *)(param_1 + 0x44) = iVar5;
      if ((iVar5 == 0) || (iVar7 == *(int *)(param_1 + 0x20))) {
        puVar6 = *(undefined4 **)(param_1 + 0x28);
        *(undefined4 **)(param_1 + 0x28) = puVar6 + 1;
        FUN_006bf840(*puVar6);
        if (*(int *)(param_1 + 0x44) == 0) {
          FUN_005b6940();
          *(undefined4 *)(param_1 + 0x1c) = local_4c;
          *(undefined4 *)(param_1 + 0x20) = local_48;
          *(undefined4 *)(param_1 + 0x24) = local_44;
          *(undefined4 *)(param_1 + 0x28) = local_40;
          *(undefined4 *)(param_1 + 0x2c) = local_4c;
          *(undefined4 *)(param_1 + 0x30) = local_48;
          *(undefined4 *)(param_1 + 0x34) = local_44;
          *(undefined4 *)(param_1 + 0x38) = local_40;
          FUN_006bf840(*(undefined4 *)(param_1 + 0x3c));
        }
        else {
          FUN_006691d0(**(undefined4 **)(param_1 + 0x28),*(undefined4 **)(param_1 + 0x28));
          *(undefined4 *)(param_1 + 0x1c) = local_3c;
          *(undefined4 *)(param_1 + 0x20) = local_38;
          *(undefined4 *)(param_1 + 0x24) = local_34;
          *(undefined4 *)(param_1 + 0x28) = local_30;
        }
      }
      if (*(int *)(param_1 + 0x44) == 0) {
LAB_0066363d:
        FUN_00666a50();
        iVar5 = *(int *)(param_1 + 0x34);
        *(int *)(param_1 + 0x34) = iVar5 + 4;
        FUN_00669b80(iVar5,&local_50);
      }
      else {
        puVar1 = *(uint **)(param_1 + 0x34);
        if (puVar1 == *(uint **)(param_1 + 0x30)) goto LAB_0066363d;
        *(uint **)(param_1 + 0x34) = puVar1 + 1;
        if (puVar1 + 1 == *(uint **)(param_1 + 0x30)) {
          FUN_00669b80(puVar1,&local_50);
          FUN_00666a50();
        }
        else if (puVar1 != (uint *)0x0) {
          *puVar1 = local_50;
        }
      }
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      local_54 = local_54 + 1;
      ppvVar2 = (void **)ExceptionList;
    } while (local_54 < *(uint *)(param_1 + 0x44));
  }
  ExceptionList = ppvVar2;
  local_50 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    do {
      local_1c = *(undefined4 *)(param_1 + 0x1c);
      local_18 = *(undefined4 *)(param_1 + 0x20);
      local_10 = *(undefined4 *)(param_1 + 0x28);
      local_54 = **(uint **)(param_1 + 0x24);
      cVar3 = FUN_00664230(param_2);
      if (cVar3 != '\0') {
        FUN_00664370();
        FUN_00663f20(param_2);
        ExceptionList = local_c;
        return true;
      }
      iVar7 = *(int *)(param_1 + 0x24) + 4;
      iVar5 = *(int *)(param_1 + 0x44) + -1;
      *(int *)(param_1 + 0x24) = iVar7;
      *(int *)(param_1 + 0x44) = iVar5;
      if ((iVar5 == 0) || (iVar7 == *(int *)(param_1 + 0x20))) {
        puVar6 = *(undefined4 **)(param_1 + 0x28);
        *(undefined4 **)(param_1 + 0x28) = puVar6 + 1;
        FUN_006bf840(*puVar6);
        if (*(int *)(param_1 + 0x44) == 0) {
          FUN_005b6940();
          *(undefined4 *)(param_1 + 0x1c) = local_3c;
          *(undefined4 *)(param_1 + 0x20) = local_38;
          *(undefined4 *)(param_1 + 0x24) = local_34;
          *(undefined4 *)(param_1 + 0x28) = local_30;
          *(undefined4 *)(param_1 + 0x2c) = local_3c;
          *(undefined4 *)(param_1 + 0x30) = local_38;
          *(undefined4 *)(param_1 + 0x34) = local_34;
          *(undefined4 *)(param_1 + 0x38) = local_30;
          FUN_006bf840(*(undefined4 *)(param_1 + 0x3c));
        }
        else {
          FUN_006691d0(**(undefined4 **)(param_1 + 0x28),*(undefined4 **)(param_1 + 0x28));
          *(undefined4 *)(param_1 + 0x1c) = local_2c;
          *(undefined4 *)(param_1 + 0x20) = local_28;
          *(undefined4 *)(param_1 + 0x24) = local_24;
          *(undefined4 *)(param_1 + 0x28) = local_20;
        }
      }
      if (*(int *)(param_1 + 0x44) == 0) {
LAB_006637b8:
        FUN_00666a50();
        iVar5 = *(int *)(param_1 + 0x34);
        *(int *)(param_1 + 0x34) = iVar5 + 4;
        FUN_00669b80(iVar5,&local_54);
      }
      else {
        puVar1 = *(uint **)(param_1 + 0x34);
        if (puVar1 == *(uint **)(param_1 + 0x30)) goto LAB_006637b8;
        *(uint **)(param_1 + 0x34) = puVar1 + 1;
        if (puVar1 + 1 == *(uint **)(param_1 + 0x30)) {
          FUN_00669b80(puVar1,&local_54);
          FUN_00666a50();
        }
        else if (puVar1 != (uint *)0x0) {
          *puVar1 = local_54;
        }
      }
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      local_50 = local_50 + 1;
    } while (local_50 < *(uint *)(param_1 + 0x44));
  }
  pvVar4 = operator_new(0x370);
  uVar8 = 0;
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    uVar8 = FUN_00663d00(param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(param_1 + 0x14));
  }
  local_4 = 0xffffffff;
  if ((*(int *)(param_1 + 0x44) == 0) || (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x1c))) {
    FUN_00666ba0();
  }
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x24) + -4);
  *(undefined4 **)(param_1 + 0x24) = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = uVar8;
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  cVar3 = FUN_00663f20(param_2);
  ExceptionList = local_c;
  return cVar3 != '\0';
}

