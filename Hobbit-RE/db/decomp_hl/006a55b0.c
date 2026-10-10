
void __thiscall FUN_006a55b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
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
  puStack_8 = &LAB_006e7a48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_check__Render_00755d4c);
  iVar1 = param_3;
  local_4 = 0;
  if ((*(uint *)(param_1 + 0x2c) & 1) != 0) {
    local_1c = *(int *)(param_1 + 0x44) + param_2;
    local_10 = *(int *)(param_1 + 0x50) + param_3;
    local_14 = *(int *)(param_1 + 0x4c) + param_2;
    local_18 = *(int *)(param_1 + 0x48) + param_3;
    uVar2 = *(uint *)(param_1 + 0x2c) & 0x600;
    if (uVar2 == 0x200) {
      uVar3 = 2;
    }
    else if (uVar2 == 0x600) {
      uVar3 = 3;
    }
    else {
      uVar3 = 0;
    }
    local_25 = 0xff;
    local_26 = 0xff;
    local_27 = 0xff;
    local_28 = 0xff;
    param_3 = -0x1000000;
    local_21 = 0xff;
    local_22 = 0xff;
    local_23 = 0xff;
    local_24 = 0xff;
    FUN_0069f570(*(undefined4 *)(param_1 + 0xe8),&local_1c,uVar3,&local_24,0);
    if (((*(uint *)(param_1 + 0x2c) & 0x400) == 0) ||
       (FUN_006a0430(*(undefined4 *)(param_1 + 8),&local_1c,1),
       (*(uint *)(param_1 + 0x2c) & 0x400) == 0)) {
      local_1c = local_1c + 5;
      local_14 = local_14 + -0x16;
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      local_18 = local_18 + 2;
      uVar8 = *(undefined4 *)(param_1 + 0xa0);
      puVar9 = &param_3;
      piVar7 = &local_1c;
      local_10 = local_10 + -4;
      uVar4 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fb40(uVar4,piVar7,uVar8,puVar9,uVar3);
      local_1c = local_1c + -1;
      local_14 = local_14 + -1;
      local_18 = local_18 + -1;
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      local_10 = local_10 + -1;
      local_21 = 0xff;
      local_22 = 0x96;
      local_23 = 0x96;
      local_24 = 0x96;
      puVar5 = &local_24;
    }
    else {
      local_14 = local_14 + -0x15;
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      local_1c = local_1c + 6;
      uVar8 = *(undefined4 *)(param_1 + 0xa0);
      local_18 = local_18 + 1;
      puVar9 = &param_3;
      piVar7 = &local_1c;
      local_10 = local_10 + -5;
      uVar4 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fb40(uVar4,piVar7,uVar8,puVar9,uVar3);
      local_18 = local_18 + -2;
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      local_14 = local_14 + -2;
      local_1c = local_1c + -2;
      local_10 = local_10 + -2;
      puVar5 = &local_28;
    }
    uVar8 = *(undefined4 *)(param_1 + 0xa0);
    piVar7 = &local_1c;
    uVar4 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fb40(uVar4,piVar7,uVar8,puVar5,uVar3);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar6 * 4) + 8))
                  (*(int *)(param_1 + 0x44) + param_2,*(int *)(param_1 + 0x48) + iVar1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x18));
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

