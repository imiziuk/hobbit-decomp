
void __thiscall FUN_004132d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cee5b;
  local_c = ExceptionList;
  if (param_2 != *(int *)(param_1 + 0x10)) {
    ExceptionList = &local_c;
    piVar3 = (int *)operator_new(param_2 * 0x28 + 4);
    local_4 = 0;
    if (piVar3 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_18 = piVar3 + 1;
      *piVar3 = param_2;
      FUN_006c043b(local_18,0x28,param_2,FUN_004134a0,&LAB_006421a0);
    }
    local_4 = 0xffffffff;
    local_14 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      piVar3 = local_18 + 5;
      do {
        iVar4 = *(int *)(param_1 + 0xc) + (-0x14 - (int)local_18);
        piVar3[-5] = *(int *)(iVar4 + (int)piVar3);
        piVar3[-4] = *(int *)((int)piVar3 + iVar4 + 4);
        if (piVar3 + -3 != (int *)((int)piVar3 + iVar4 + 8)) {
          if (piVar3[1] < *(int *)((int)piVar3 + iVar4 + 0x10)) {
            FUN_006bf840(*piVar3);
            pvVar5 = operator_new(*(int *)((int)piVar3 + iVar4 + 0x10) << 3);
            *piVar3 = (int)pvVar5;
            piVar3[-1] = 0;
            piVar3[1] = *(int *)((int)piVar3 + iVar4 + 0x10);
          }
          iVar6 = 0;
          if (0 < *(int *)((int)piVar3 + iVar4 + 0x10)) {
            do {
              iVar1 = *(int *)((int)piVar3 + iVar4 + 0x14);
              iVar2 = *piVar3;
              *(undefined4 *)(iVar2 + iVar6 * 8) = *(undefined4 *)(iVar1 + iVar6 * 8);
              *(undefined4 *)(iVar2 + 4 + iVar6 * 8) = *(undefined4 *)(iVar1 + 4 + iVar6 * 8);
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)((int)piVar3 + iVar4 + 0x10));
          }
          piVar3[-1] = *(int *)((int)piVar3 + iVar4 + 0x10);
        }
        local_14 = local_14 + 1;
        piVar3 = piVar3 + 10;
      } while (local_14 < *(int *)(param_1 + 8));
    }
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 != 0) {
      FUN_006c026a(iVar4,0x28,*(undefined4 *)(iVar4 + -4),&LAB_006421a0);
      FUN_006bf840(iVar4 + -4);
    }
    *(int **)(param_1 + 0xc) = local_18;
    *(int *)(param_1 + 0x10) = param_2;
  }
  ExceptionList = local_c;
  return;
}

