
void __thiscall FUN_00676c30(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6c6b;
  local_c = ExceptionList;
  if (param_2 != *(int *)(param_1 + 0x10)) {
    ExceptionList = &local_c;
    piVar1 = (int *)operator_new(param_2 * 0x50 + 4);
    iVar4 = 0;
    local_4 = 0;
    if (piVar1 == (int *)0x0) {
      local_14 = (int *)0x0;
    }
    else {
      local_14 = piVar1 + 1;
      *piVar1 = param_2;
      FUN_006c043b(local_14,0x50,param_2,FUN_00676e90,FUN_00676ec0);
    }
    local_4 = 0xffffffff;
    if (0 < *(int *)(param_1 + 8)) {
      piVar1 = local_14 + 0x10;
      do {
        iVar5 = *(int *)(param_1 + 0xc) + (-0x40 - (int)local_14) + (int)piVar1;
        FUN_0064a320(iVar5);
        piVar1[-5] = *(int *)(iVar5 + 0x2c);
        piVar1[-4] = *(int *)(iVar5 + 0x30);
        if (piVar1 + -3 != (int *)(iVar5 + 0x34)) {
          if (piVar1[1] < *(int *)(iVar5 + 0x3c)) {
            FUN_006bf840(*piVar1);
            pvVar2 = operator_new(*(int *)(iVar5 + 0x3c) << 2);
            *piVar1 = (int)pvVar2;
            piVar1[-1] = 0;
            piVar1[1] = *(int *)(iVar5 + 0x3c);
          }
          iVar3 = 0;
          if (0 < *(int *)(iVar5 + 0x3c)) {
            do {
              *(undefined4 *)(*piVar1 + iVar3 * 4) =
                   *(undefined4 *)(*(int *)(iVar5 + 0x40) + iVar3 * 4);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(iVar5 + 0x3c));
          }
          piVar1[-1] = *(int *)(iVar5 + 0x3c);
        }
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 0x14;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 != 0) {
      FUN_006c026a(iVar4,0x50,*(undefined4 *)(iVar4 + -4),FUN_00676ec0);
      FUN_006bf840(iVar4 + -4);
    }
    *(int **)(param_1 + 0xc) = local_14;
    *(int *)(param_1 + 0x10) = param_2;
  }
  ExceptionList = local_c;
  return;
}

