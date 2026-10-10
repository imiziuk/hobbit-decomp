
undefined4 __fastcall FUN_005aecb0(int param_1)

{
  void **ppvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006de588;
  local_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      ExceptionList = ppvVar1;
      uVar2 = FUN_005bece0();
      iVar3 = FUN_0064a7e0(&stack0x00000004,uVar2);
      if (iVar3 != 0) {
        uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xac) + iVar4 * 4);
        local_4 = 0xffffffff;
        FUN_00649ba0();
        ExceptionList = local_c;
        return uVar2;
      }
      iVar4 = iVar4 + 1;
      ppvVar1 = (void **)ExceptionList;
    } while (iVar4 < *(int *)(param_1 + 0xa8));
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return 0;
}

