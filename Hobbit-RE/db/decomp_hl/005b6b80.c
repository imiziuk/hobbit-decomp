
undefined4 __thiscall FUN_005b6b80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006debe8;
  local_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar3 = FUN_00647e40(param_2,*(int *)(*(int *)(param_1 + 0x10) + iVar4 * 4) + 8);
      if (iVar3 == 0) {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar4 * 4);
        local_4 = 0xffffffff;
        FUN_00649ba0();
        ExceptionList = local_c;
        return uVar1;
      }
      iVar4 = iVar4 + 1;
      ppvVar2 = (void **)ExceptionList;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  ExceptionList = ppvVar2;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return 0;
}

