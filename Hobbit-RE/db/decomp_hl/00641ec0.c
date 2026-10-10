
int __fastcall FUN_00641ec0(int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5e3b;
  local_c = ExceptionList;
  iVar8 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar8 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x10) / 2;
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
      if (iVar8 + iVar5 < 1) {
        iVar8 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar8 = iVar8 + iVar1;
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x18) + iVar8;
    }
    ExceptionList = &local_c;
    piVar2 = (int *)operator_new(iVar8 * 0x24 + 4);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      local_1c = (int *)0x0;
    }
    else {
      local_1c = piVar2 + 1;
      *piVar2 = iVar8;
      FUN_006c043b(local_1c,0x24,iVar8,&LAB_00642180,&LAB_006421a0);
    }
    local_4 = 0xffffffff;
    local_18 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      piVar2 = local_1c + 5;
      do {
        iVar5 = *(int *)(param_1 + 0xc) + (-0x14 - (int)local_1c);
        piVar2[-5] = *(int *)((int)piVar2 + *(int *)(param_1 + 0xc) + (-0x14 - (int)local_1c));
        piVar2[-4] = *(int *)((int)piVar2 + iVar5 + 4);
        if (piVar2 + -3 != (int *)((int)piVar2 + iVar5 + 8)) {
          if (piVar2[1] < *(int *)((int)piVar2 + iVar5 + 0x10)) {
            FUN_006bf840(*piVar2);
            pvVar3 = operator_new(*(int *)((int)piVar2 + iVar5 + 0x10) * 0xc);
            *piVar2 = (int)pvVar3;
            piVar2[-1] = 0;
            piVar2[1] = *(int *)((int)piVar2 + iVar5 + 0x10);
          }
          iVar1 = 0;
          if (0 < *(int *)((int)piVar2 + iVar5 + 0x10)) {
            iVar4 = 0;
            do {
              puVar6 = (undefined4 *)(*(int *)((int)piVar2 + iVar5 + 0x14) + iVar4);
              puVar7 = (undefined4 *)(*piVar2 + iVar4);
              *puVar7 = *puVar6;
              puVar7[1] = puVar6[1];
              puVar7[2] = puVar6[2];
              iVar1 = iVar1 + 1;
              iVar4 = iVar4 + 0xc;
            } while (iVar1 < *(int *)((int)piVar2 + iVar5 + 0x10));
          }
          piVar2[-1] = *(int *)((int)piVar2 + iVar5 + 0x10);
        }
        local_18 = local_18 + 1;
        piVar2 = piVar2 + 9;
      } while (local_18 < *(int *)(param_1 + 8));
    }
    iVar5 = *(int *)(param_1 + 0xc);
    if (iVar5 != 0) {
      FUN_006c026a(iVar5,0x24,*(undefined4 *)(iVar5 + -4),&LAB_006421a0);
      FUN_006bf840(iVar5 + -4);
    }
    *(int **)(param_1 + 0xc) = local_1c;
    *(int *)(param_1 + 0x10) = iVar8;
  }
  iVar8 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar8;
  ExceptionList = local_c;
  return *(int *)(param_1 + 0xc) + -0x24 + iVar8 * 0x24;
}

