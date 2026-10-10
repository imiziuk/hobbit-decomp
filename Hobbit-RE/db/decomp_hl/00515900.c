
void __thiscall FUN_00515900(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d72d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_dlg_mcmessage__OnUpdate_00733e5c);
  local_4 = 0;
  if (DAT_006e92e4 <= *(float *)(param_1 + 0x1b8)) {
    param_3 = *(float *)(param_1 + 0x1b8) - param_3;
    *(float *)(param_1 + 0x1b8) = param_3;
    if (param_3 < DAT_006e92e4 != (param_3 == DAT_006e92e4)) {
      if (*(undefined4 **)(param_1 + 0x1b4) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x1b4) = 4;
      }
      FUN_006a16c0(*(undefined4 *)(param_1 + 8),1);
      local_4 = 0xffffffff;
      FUN_006501e0();
      ExceptionList = local_c;
      return;
    }
  }
  iVar2 = -1;
  if (*(int *)(param_1 + 0x1c0) != -1) {
    iVar1 = FUN_006a3270(0x400);
    if (iVar1 == 0) {
      iVar1 = FUN_006a3270(0x400);
      if (iVar1 == 0) {
        iVar1 = FUN_006a3270(0x400);
        if (iVar1 != 0) {
          iVar2 = 2;
        }
      }
      else {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != *(int *)(param_1 + 0x1c0)) {
      FUN_00659600(s_CursorMove_00731fe0,1);
      *(int *)(param_1 + 0x1c0) = iVar2;
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

