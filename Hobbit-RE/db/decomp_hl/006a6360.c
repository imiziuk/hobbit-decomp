
void __thiscall FUN_006a6360(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
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
  puStack_8 = &LAB_006e7b08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_dlg_list__Render_00755e08);
  iVar1 = param_3;
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    local_14 = *(int *)(param_1 + 0x4c) + param_2;
    local_10 = *(int *)(param_1 + 0x50) + param_3;
    local_1c = *(int *)(param_1 + 0x44) + param_2;
    local_18 = *(int *)(param_1 + 0x48) + param_3;
    local_2c = local_1c + 1;
    local_24 = local_14 + -1;
    local_28 = local_18 + 1;
    local_20 = local_10 + -1;
    FUN_0069fcd0(&local_2c,param_1 + 0x10c,0);
    param_3 = -1;
    FUN_0069f570(*(undefined4 *)(param_1 + 0xd8),&local_1c,0,&param_3,0);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4) + 8))
                  (*(int *)(param_1 + 0x44) + param_2,*(int *)(param_1 + 0x48) + iVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x18));
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

