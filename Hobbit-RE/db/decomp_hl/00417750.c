
void __thiscall FUN_00417750(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cef2b;
  local_c = ExceptionList;
  if (param_2 != *(int *)(param_1 + 0x10)) {
    ExceptionList = &local_c;
    piVar1 = (int *)operator_new(param_2 * 0x2c + 4);
    piVar3 = (int *)0x0;
    local_4 = 0;
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + 1;
      *piVar1 = param_2;
      FUN_006c043b(piVar3,0x2c,param_2,FUN_006499d0,FUN_00649ba0);
    }
    iVar2 = 0;
    local_4 = 0xffffffff;
    if (0 < *(int *)(param_1 + 8)) {
      iVar4 = 0;
      do {
        FUN_0064a320(*(int *)(param_1 + 0xc) + iVar4);
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 != 0) {
      FUN_006c026a(iVar2,0x2c,*(undefined4 *)(iVar2 + -4),FUN_00649ba0);
      FUN_006bf840(iVar2 + -4);
    }
    *(int **)(param_1 + 0xc) = piVar3;
    *(int *)(param_1 + 0x10) = param_2;
  }
  ExceptionList = local_c;
  return;
}

