
void __thiscall FUN_006a37d0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
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
  puStack_8 = &LAB_006e7928;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_frame__Render_00755cbc);
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    local_10 = *(int *)(param_1 + 0x50) + param_3;
    local_18 = *(int *)(param_1 + 0x48) + param_3;
    local_14 = *(int *)(param_1 + 0x4c) + param_2;
    local_1c = *(int *)(param_1 + 0x44) + param_2;
    local_24 = local_14 + -1;
    local_28 = local_18 + 1;
    local_2c = local_1c + 1;
    local_20 = local_10 + -1;
    if (*(char *)(param_1 + 0x13b) != '\0') {
      FUN_0069fcd0(&local_2c,param_1 + 0x138,0);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x10000) != 0) {
      if (*(int *)(param_1 + 0x144) == 0) {
        local_30 = local_18 + 0x16;
      }
      else {
        local_30 = local_18 + 0x28;
      }
      local_3c = local_1c;
      local_38 = local_18;
      local_34 = local_14;
      FUN_006a3400(&local_2c);
      local_3c = local_3c + 10;
      local_34 = local_34 + -8;
      cVar1 = (*(int *)(param_1 + 0x144) != 0) + '\x01';
      local_41 = 0xff;
      local_42 = 0;
      local_43 = 0;
      local_44 = 0;
      FUN_0069fb40(cVar1,&local_3c,0x11,&local_44,*(undefined4 *)(param_1 + 0xe8));
      local_3c = local_3c + -1;
      local_34 = local_34 + -1;
      local_38 = local_38 + -1;
      local_30 = local_30 + -1;
      local_41 = 0xff;
      local_42 = 0xff;
      local_43 = 0xff;
      local_44 = 0xff;
      FUN_0069fb40(cVar1,&local_3c,0x11,&local_44,*(undefined4 *)(param_1 + 0xe8));
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      local_41 = 0xff;
      local_42 = 0xff;
      local_43 = 0xff;
      local_44 = 0xff;
      FUN_0069f570(*(undefined4 *)(param_1 + 0x134),&local_1c,0,&local_44,0);
    }
    else {
      FUN_006a3a30(&local_1c);
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

