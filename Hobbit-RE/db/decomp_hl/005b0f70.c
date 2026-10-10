
void __thiscall FUN_005b0f70(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de738;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_StateController__EnumerateProper_007451ac);
  iVar1 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + iVar1 * 4) + 0x6c))(param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xa8));
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

