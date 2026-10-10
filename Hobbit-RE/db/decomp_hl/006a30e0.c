
void __thiscall FUN_006a30e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e78a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_win__Render_00755c78);
  iVar1 = 0;
  local_4 = 0;
  if (((*(byte *)(param_1 + 0x2c) & 1) != 0) && (0 < *(int *)(param_1 + 0x18))) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar1 * 4) + 8))(param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

