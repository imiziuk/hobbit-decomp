
int __thiscall FUN_00531f00(int param_1,undefined4 param_2)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d8ad8;
  local_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  iVar3 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(param_1 + 0xbc)) {
    do {
      ExceptionList = ppvVar1;
      iVar2 = FUN_00647ed0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc0) + iVar4 * 4) + 4),
                           param_2);
      iVar3 = iVar4;
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 1;
      iVar3 = 0;
      ppvVar1 = (void **)ExceptionList;
    } while (iVar4 < *(int *)(param_1 + 0xbc));
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return iVar3;
}

