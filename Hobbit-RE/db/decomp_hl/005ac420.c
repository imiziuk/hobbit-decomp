
void __fastcall FUN_005ac420(int param_1)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006de008;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4);
      if (iVar1 != 0) {
        if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar1 + 4))(1);
        }
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
      ppvVar2 = (void **)ExceptionList;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  ExceptionList = ppvVar2;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x14) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
  }
  ExceptionList = local_c;
  return;
}

