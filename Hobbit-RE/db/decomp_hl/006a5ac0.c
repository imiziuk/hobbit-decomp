
void __thiscall FUN_006a5ac0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  uint local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7aa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_slider__Render_00755d78);
  local_4 = 0;
  if ((*(uint *)(param_1 + 0x2c) & 1) != 0) {
    local_20 = *(int *)(param_1 + 0x50) + param_3;
    local_28 = *(int *)(param_1 + 0x48) + param_3;
    local_1c = *(int *)(param_1 + 0x44) + param_2;
    local_14 = *(int *)(param_1 + 0x4c) + param_2;
    if ((*(uint *)(param_1 + 0x2c) & 0x100) == 0) {
      uVar1 = *(uint *)(param_1 + 0x2c) & 0x600;
      if (uVar1 == 0x400) {
        local_34 = 1;
      }
      else if (uVar1 == 0x200) {
        local_34 = 2;
      }
      else {
        local_34 = (uVar1 != 0x600) - 1 & 3;
      }
    }
    else {
      local_34 = 4;
    }
    iVar2 = *(int *)(param_1 + 0x10c);
    local_10 = (local_20 + local_28) / 2;
    local_18 = local_10 + -2;
    local_10 = local_10 + 2;
    local_2c = local_1c;
    if (iVar2 < *(int *)(param_1 + 0x110)) {
      local_2c = ((*(int *)(param_1 + 0x120) - iVar2) * ((local_14 - local_1c) + -0xd)) /
                 (*(int *)(param_1 + 0x110) - iVar2) + local_1c;
    }
    local_24 = local_2c + 0xe;
    local_35 = 0xff;
    local_36 = 0xff;
    local_37 = 0xff;
    local_38 = 0xff;
    FUN_0069f570(*(undefined4 *)(param_1 + 0xe8),&local_1c,0,&local_38,0);
    local_35 = 0xff;
    local_36 = 0xff;
    local_37 = 0xff;
    local_38 = 0xff;
    FUN_0069f570(*(undefined4 *)(param_1 + 0xec),&local_2c,local_34,&local_38,0);
    *(int *)(param_1 + 0xf4) = local_2c;
    *(int *)(param_1 + 0xf8) = local_28;
    *(int *)(param_1 + 0xfc) = local_24;
    *(int *)(param_1 + 0x100) = local_20;
    if ((*(uint *)(param_1 + 0x2c) & 0x400) != 0) {
      FUN_006a0430(*(undefined4 *)(param_1 + 8),&local_2c,1);
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4) + 8))
                  (*(int *)(param_1 + 0x44) + param_2,*(int *)(param_1 + 0x48) + param_3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x18));
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

