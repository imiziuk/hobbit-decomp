
void __thiscall FUN_0059c060(int param_1,undefined4 param_2)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006dd6b8;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar2 = FUN_0064a860(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x70,&param_2);
      if (iVar2 != 0) {
        FUN_0059c0f0(*(undefined4 *)(*(int *)(param_1 + 0x50) + iVar3 * 4));
        goto LAB_0059c0bb;
      }
      iVar3 = iVar3 + 1;
      ppvVar1 = (void **)ExceptionList;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  ExceptionList = ppvVar1;
  FUN_0064e7d0(s_Failed_to_start_missing_conversa_00743364,param_2);
LAB_0059c0bb:
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

