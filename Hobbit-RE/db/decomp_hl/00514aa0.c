
void __thiscall FUN_00514aa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_dlg_main_menu__OnUpdate_00733d90);
  local_4 = 0;
  iVar2 = -1;
  iVar1 = FUN_006a3270(0x400);
  if (iVar1 != 0) {
    iVar2 = 0;
  }
  iVar1 = FUN_006a3270(0x400);
  if (iVar1 == 0) {
    iVar1 = FUN_006a3270(0x400);
    if (iVar1 == 0) {
      iVar1 = FUN_006a3270(0x400);
      if (iVar1 == 0) {
        iVar1 = FUN_006a3270(0x400);
        if (iVar1 == 0) {
          iVar1 = FUN_006a3270(0x400);
          if (iVar1 == 0) {
            if (*(int *)(param_1 + 0x16c) != 0) {
              iVar1 = FUN_006a3270(0x400);
              if (iVar1 != 0) {
                iVar2 = 6;
                goto LAB_00514bb1;
              }
            }
            if (*(int *)(param_1 + 0x170) != 0) {
              iVar1 = FUN_006a3270(0x400);
              if (iVar1 != 0) {
                iVar2 = 7;
              }
            }
          }
          else {
            iVar2 = 5;
          }
        }
        else {
          iVar2 = 4;
        }
      }
      else {
        iVar2 = 3;
      }
    }
    else {
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 1;
  }
LAB_00514bb1:
  if (iVar2 != *(int *)(param_1 + 0x174)) {
    FUN_00659600(s_CursorMove_00731fe0,1);
    *(int *)(param_1 + 0x174) = iVar2;
  }
  if (*(int *)(param_1 + 0x18c) == 1) {
    if (*(int *)(param_1 + 0x17c) == 1) {
      FUN_0052abf0(1);
      FUN_006a16c0(DAT_00813038,1);
      FUN_004fcd20();
      goto LAB_00514cb7;
    }
    if (*(int *)(param_1 + 0x17c) != 2) goto LAB_00514cb7;
  }
  else {
    if (*(int *)(param_1 + 0x18c) != 2) goto LAB_00514cb7;
    FUN_0052f5f0(param_3);
    iVar1 = FUN_0052f690();
    if (iVar1 == 3) {
      iVar1 = FUN_0052ac70();
      DAT_00798548 = 1;
      if (iVar1 == 0) {
        DAT_00760354 = 0;
        FUN_0052a630(10);
        FUN_0052abf0(1);
      }
      else {
        FUN_0052ac40(0);
        FUN_0052ac60(0xffffffff);
        FUN_0052ac80(0);
      }
      FUN_0052d740(0,6);
      FUN_006a16c0(DAT_00813038,1);
      goto LAB_00514cb7;
    }
  }
  *(undefined4 *)(param_1 + 0x18c) = 0;
LAB_00514cb7:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

