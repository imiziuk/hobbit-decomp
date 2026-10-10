
void __thiscall FUN_004d8c60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d548b;
  local_c = ExceptionList;
  if (param_2 != *(int *)(param_1 + 0x10)) {
    ExceptionList = &local_c;
    piVar1 = (int *)operator_new(param_2 * 0x78 + 4);
    iVar2 = 0;
    local_4 = 0;
    if (piVar1 == (int *)0x0) {
      local_14 = (int *)0x0;
    }
    else {
      local_14 = piVar1 + 1;
      *piVar1 = param_2;
      FUN_006c043b(local_14,0x78,param_2,FUN_004d8dc0,FUN_004d5130);
    }
    local_4 = 0xffffffff;
    if (0 < *(int *)(param_1 + 8)) {
      piVar1 = local_14 + 4;
      do {
        iVar3 = *(int *)(param_1 + 0xc) + (-0x10 - (int)local_14);
        piVar1[-4] = *(int *)(iVar3 + (int)piVar1);
        piVar1[-3] = *(int *)((int)piVar1 + iVar3 + 4);
        piVar1[-2] = *(int *)((int)piVar1 + iVar3 + 8);
        piVar1[-1] = *(int *)((int)piVar1 + iVar3 + 0xc);
        *piVar1 = *(int *)((int)piVar1 + iVar3 + 0x10);
        FUN_0064a320((int)piVar1 + iVar3 + 0x14);
        piVar1[0xc] = *(int *)((int)piVar1 + iVar3 + 0x40);
        FUN_0064a320((int)piVar1 + iVar3 + 0x44);
        piVar1[0x18] = *(int *)((int)piVar1 + iVar3 + 0x70);
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 0x1e;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 != 0) {
      FUN_006c026a(iVar2,0x78,*(undefined4 *)(iVar2 + -4),FUN_004d5130);
      FUN_006bf840(iVar2 + -4);
    }
    *(int **)(param_1 + 0xc) = local_14;
    *(int *)(param_1 + 0x10) = param_2;
  }
  ExceptionList = local_c;
  return;
}

