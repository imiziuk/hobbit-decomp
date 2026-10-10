
void __thiscall thunk_FUN_006a2880(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iStack_18;
  int aiStack_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e7808;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_dialog__Render_00755c64);
  iVar1 = 0;
  uStack_4 = 0;
  FUN_0065f8a0(&iStack_18,aiStack_14);
  if ((param_1[0x46] != iStack_18) || (param_1[0x47] != aiStack_14[0])) {
    param_1[0x47] = aiStack_14[0];
    param_1[0x46] = iStack_18;
    (**(code **)(*param_1 + 0x88))();
  }
  if (((*(byte *)(param_1 + 0xb) & 1) != 0) && (0 < param_1[6])) {
    do {
      (**(code **)(**(int **)(param_1[7] + iVar1 * 4) + 8))
                (param_1[0x11] + param_2,param_1[0x12] + param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[6]);
  }
  uStack_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

