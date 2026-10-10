
void __thiscall FUN_00425270(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf56b;
  local_c = ExceptionList;
  iVar4 = *(int *)(param_1 + 8);
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x10) < iVar4 + 1) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x10) / 2;
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
      if (iVar5 + iVar4 < 1) {
        iVar4 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar4 = iVar4 + iVar1;
      }
    }
    else {
      iVar4 = iVar4 + *(int *)(param_1 + 0x18);
    }
    ExceptionList = &local_c;
    piVar2 = (int *)operator_new(iVar4 * 0x4c + 4);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      local_10 = (int *)0x0;
    }
    else {
      local_10 = piVar2 + 1;
      *piVar2 = iVar4;
      FUN_006c043b(local_10,0x4c,iVar4,FUN_0064afa0,FUN_0064b190);
    }
    local_4 = 0xffffffff;
    if (0 < *(int *)(param_1 + 8)) {
      iVar5 = 0;
      do {
        FUN_0064b7f0(*(int *)(param_1 + 0xc) + iVar5);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x4c;
      } while (iVar3 < *(int *)(param_1 + 8));
    }
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 != 0) {
      FUN_006c026a(iVar3,0x4c,*(undefined4 *)(iVar3 + -4),FUN_0064b190);
      FUN_006bf840(iVar3 + -4);
    }
    *(int **)(param_1 + 0xc) = local_10;
    *(int *)(param_1 + 0x10) = iVar4;
  }
  FUN_0064b7f0(param_2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  ExceptionList = local_c;
  return;
}

