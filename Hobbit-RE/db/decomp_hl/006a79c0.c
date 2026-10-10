
void __thiscall FUN_006a79c0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7ca8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_button__Render_00755eb8);
  local_4 = 0;
  if ((*(uint *)(param_1 + 0x2c) & 1) != 0) {
    local_10 = *(int *)(param_1 + 0x50) + param_3;
    local_18 = *(int *)(param_1 + 0x48) + param_3;
    local_14 = *(int *)(param_1 + 0x4c) + param_2;
    local_1c = *(int *)(param_1 + 0x44) + param_2;
    if ((*(uint *)(param_1 + 0x2c) & 0x100) == 0) {
      local_29 = 0xff;
      local_28 = 0xff;
      local_27 = 0xff;
      local_26 = 0xff;
    }
    else {
      local_26 = 0x80;
      local_27 = 0x80;
      local_28 = 0x80;
      local_29 = 0;
    }
    local_25 = 0xff;
    local_2a = 0;
    local_2b = 0;
    local_2c = 0;
    if ((*(uint *)(param_1 + 0x2c) & 0x4000) == 0) {
      iVar3 = (-(uint)((*(uint *)(param_1 + 0x2c) & 0x8000) != 0) & 2) + 0x12;
    }
    else {
      iVar3 = 0x11;
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x400) == 0) {
      local_1c = local_1c + 1;
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
      local_10 = local_10 + -1;
      uVar6 = *(undefined4 *)(param_1 + 0x54);
      puVar2 = &local_2c;
      piVar4 = &local_1c;
      iVar5 = iVar3;
      uVar1 = FUN_0069fa60(*(undefined4 *)(param_1 + 0xac));
      FUN_0069fb40(uVar1,piVar4,iVar5,puVar2,uVar6);
      local_1c = local_1c + -1;
      local_14 = local_14 + -1;
      uVar6 = *(undefined4 *)(param_1 + 0x54);
      local_18 = local_18 + -1;
      local_10 = local_10 + -1;
      local_21 = 0xff;
      local_22 = 0x96;
      local_23 = 0x96;
      local_24 = 0x96;
      puVar2 = &local_24;
    }
    else {
      local_10 = local_10 + -2;
      uVar6 = *(undefined4 *)(param_1 + 0x54);
      local_1c = local_1c + 2;
      puVar2 = &local_2c;
      local_14 = local_14 + 2;
      piVar4 = &local_1c;
      local_18 = local_18 + -2;
      iVar5 = iVar3;
      uVar1 = FUN_0069fa60(*(undefined4 *)(param_1 + 0xac));
      FUN_0069fb40(uVar1,piVar4,iVar5,puVar2,uVar6);
      local_1c = local_1c + -2;
      local_14 = local_14 + -2;
      local_18 = local_18 + -2;
      local_10 = local_10 + -2;
      uVar6 = *(undefined4 *)(param_1 + 0x54);
      puVar2 = &local_28;
    }
    piVar4 = &local_1c;
    uVar1 = FUN_0069fa60(*(undefined4 *)(param_1 + 0xac));
    FUN_0069fb40(uVar1,piVar4,iVar3,puVar2,uVar6);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar3 * 4) + 8))
                  (*(int *)(param_1 + 0x44) + param_2,*(int *)(param_1 + 0x48) + param_3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x18));
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

