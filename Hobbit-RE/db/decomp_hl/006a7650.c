
void __thiscall FUN_006a7650(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
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
  puStack_8 = &LAB_006e7c48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_radio__Render_00755e8c);
  iVar1 = param_3;
  uVar4 = *(uint *)(param_1 + 0x2c);
  local_4 = 0;
  if ((uVar4 & 1) != 0) {
    local_1c = *(int *)(param_1 + 0x44) + param_2;
    local_14 = *(int *)(param_1 + 0x4c) + param_2;
    local_10 = *(int *)(param_1 + 0x50) + param_3;
    local_18 = *(int *)(param_1 + 0x48) + param_3;
    if ((uVar4 & 0x100) == 0) {
      uVar4 = uVar4 & 0x600;
      if (uVar4 == 0x400) {
        uVar2 = 1;
      }
      else if (uVar4 == 0x200) {
        uVar2 = 2;
      }
      else if (uVar4 == 0x600) {
        uVar2 = 3;
      }
      else {
        uVar2 = 0;
      }
      param_3 = 0xff;
    }
    else {
      uVar2 = 4;
      param_3 = 0;
    }
    param_3 = param_3 << 0x18;
    local_21 = 0xff;
    local_22 = 0xff;
    local_23 = 0xff;
    local_24 = 0xff;
    FUN_0069f570(*(undefined4 *)(param_1 + 0xe8),&local_1c,uVar2,&local_24,0);
    if ((*(uint *)(param_1 + 0x2c) & 0x400) != 0) {
      FUN_006a0430(*(undefined4 *)(param_1 + 8),&local_1c,1);
    }
    local_1c = local_1c + 1;
    local_14 = local_14 + 1;
    uVar2 = *(undefined4 *)(param_1 + 0x54);
    puVar8 = &param_3;
    uVar7 = 0x12;
    piVar6 = &local_1c;
    local_18 = local_18 + -1;
    local_10 = local_10 + -1;
    uVar3 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fb40(uVar3,piVar6,uVar7,puVar8,uVar2);
    local_1c = local_1c + -1;
    local_14 = local_14 + -1;
    uVar2 = *(undefined4 *)(param_1 + 0x54);
    local_18 = local_18 + -1;
    local_10 = local_10 + -1;
    puVar9 = &local_24;
    uVar7 = 0x12;
    piVar6 = &local_1c;
    local_22 = 0x96;
    local_23 = 0x96;
    local_24 = 0x96;
    local_21 = 0xff;
    uVar3 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fb40(uVar3,piVar6,uVar7,puVar9,uVar2);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar5 * 4) + 8))
                  (*(int *)(param_1 + 0x44) + param_2,*(int *)(param_1 + 0x48) + iVar1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x18));
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

