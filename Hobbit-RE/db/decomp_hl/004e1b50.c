
void __thiscall FUN_004e1b50(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d58db;
  local_c = ExceptionList;
  if (param_2 != *(int *)(param_1 + 0x10)) {
    ExceptionList = &local_c;
    piVar1 = (int *)operator_new(param_2 * 0x1c + 4);
    iVar4 = 0;
    local_4 = 0;
    if (piVar1 == (int *)0x0) {
      local_14 = (int *)0x0;
    }
    else {
      local_14 = piVar1 + 1;
      *piVar1 = param_2;
      FUN_006c043b(local_14,0x1c,param_2,FUN_006a1cb0,FUN_005c8440);
    }
    local_4 = 0xffffffff;
    if (0 < *(int *)(param_1 + 8)) {
      piVar1 = local_14 + 3;
      do {
        piVar5 = (int *)(*(int *)(param_1 + 0xc) + (-0xc - (int)local_14) + (int)piVar1);
        if (piVar1 + -3 != piVar5) {
          if (piVar1[1] < piVar5[2]) {
            FUN_006bf840(*piVar1);
            pvVar2 = operator_new(piVar5[2] << 2);
            *piVar1 = (int)pvVar2;
            piVar1[-1] = 0;
            piVar1[1] = piVar5[2];
          }
          iVar3 = 0;
          if (0 < piVar5[2]) {
            do {
              *(undefined4 *)(*piVar1 + iVar3 * 4) = *(undefined4 *)(piVar5[3] + iVar3 * 4);
              iVar3 = iVar3 + 1;
            } while (iVar3 < piVar5[2]);
          }
          piVar1[-1] = piVar5[2];
        }
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 7;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 != 0) {
      FUN_006c026a(iVar4,0x1c,*(undefined4 *)(iVar4 + -4),FUN_005c8440);
      FUN_006bf840(iVar4 + -4);
    }
    *(int **)(param_1 + 0xc) = local_14;
    *(int *)(param_1 + 0x10) = param_2;
  }
  ExceptionList = local_c;
  return;
}

