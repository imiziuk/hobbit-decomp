
void __fastcall FUN_00663a60(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void **ppvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_44;
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6a80;
  local_c = ExceptionList;
  iVar7 = *(int *)(param_1 + 0x44);
  ExceptionList = &local_c;
  ppvVar5 = &local_c;
  if (iVar7 < *(int *)(param_1 + 0x10)) {
    do {
      ExceptionList = ppvVar5;
      local_40 = operator_new(0x370);
      local_4 = 0;
      if (local_40 == (void *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = FUN_00663d00(param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                                *(undefined4 *)(param_1 + 0x14));
      }
      local_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x44) == 0) {
LAB_00663b0b:
        FUN_00666a50();
        iVar9 = *(int *)(param_1 + 0x34);
        *(int *)(param_1 + 0x34) = iVar9 + 4;
        FUN_00669b80(iVar9,&local_44);
      }
      else {
        puVar1 = *(undefined4 **)(param_1 + 0x34);
        if (puVar1 == *(undefined4 **)(param_1 + 0x30)) goto LAB_00663b0b;
        *(undefined4 **)(param_1 + 0x34) = puVar1 + 1;
        if (puVar1 + 1 == *(undefined4 **)(param_1 + 0x30)) {
          FUN_00669b80(puVar1,&local_44);
          FUN_00666a50();
        }
        else if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = local_44;
        }
      }
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      iVar7 = iVar7 + 1;
      ppvVar5 = (void **)ExceptionList;
    } while (iVar7 < *(int *)(param_1 + 0x10));
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  if (uVar8 < *(uint *)(param_1 + 0x44)) {
    do {
      local_3c = *(undefined4 *)(param_1 + 0x1c);
      local_38 = *(undefined4 *)(param_1 + 0x20);
      local_34 = *(int **)(param_1 + 0x24);
      local_30 = *(undefined4 *)(param_1 + 0x28);
      FUN_00669200(uVar8);
      if ((undefined4 *)*local_34 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*local_34)(1);
      }
      local_2c = *(undefined4 *)(param_1 + 0x1c);
      local_28 = *(undefined4 *)(param_1 + 0x20);
      local_24 = *(undefined4 **)(param_1 + 0x24);
      local_20 = *(undefined4 *)(param_1 + 0x28);
      FUN_00669200(uVar8);
      *local_24 = 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x44));
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x44);
  local_44 = 0;
  if (uVar2 < uVar8) {
    FUN_00665c00(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),uVar8 - uVar2,
                 &local_44);
  }
  else if (uVar8 < uVar2) {
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    local_24 = *(undefined4 **)(param_1 + 0x34);
    local_20 = *(undefined4 *)(param_1 + 0x38);
    local_3c = *(undefined4 *)(param_1 + 0x1c);
    local_38 = *(undefined4 *)(param_1 + 0x20);
    local_34 = *(int **)(param_1 + 0x24);
    local_30 = *(undefined4 *)(param_1 + 0x28);
    FUN_00669200(uVar8);
    FUN_00666720(local_1c,local_3c,local_38,local_34,local_30,uVar3,uVar4,local_24,local_20);
  }
  local_1c[0] = *(undefined4 *)(param_1 + 0x1c);
  iVar7 = *(int *)(param_1 + 0x20);
  iVar9 = *(int *)(param_1 + 0x24);
  iVar6 = *(int *)(param_1 + 0x28);
  local_2c = *(undefined4 *)(param_1 + 0x2c);
  local_28 = *(undefined4 *)(param_1 + 0x30);
  local_20 = *(undefined4 *)(param_1 + 0x38);
  if (iVar9 != *(int *)(param_1 + 0x34)) {
    do {
      FUN_006641a0();
      iVar9 = iVar9 + 4;
      if (iVar9 == iVar7) {
        iVar9 = *(int *)(iVar6 + 4);
        iVar6 = iVar6 + 4;
        iVar7 = iVar9 + 0x1000;
      }
      local_2c = *(undefined4 *)(param_1 + 0x2c);
      local_28 = *(undefined4 *)(param_1 + 0x30);
      local_20 = *(undefined4 *)(param_1 + 0x38);
    } while (iVar9 != *(int *)(param_1 + 0x34));
  }
  ExceptionList = local_c;
  return;
}

