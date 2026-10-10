
int __thiscall FUN_00642270(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5e5b;
  local_c = ExceptionList;
  if (param_1 != param_2) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 8)) {
      iVar2 = *(int *)(param_1 + 0xc);
      piVar8 = (int *)0x0;
      ExceptionList = &local_c;
      if (iVar2 != 0) {
        ExceptionList = &local_c;
        FUN_006c026a(iVar2,0x24,*(undefined4 *)(iVar2 + -4),&LAB_006421a0);
        FUN_006bf840(iVar2 + -4);
      }
      iVar2 = *(int *)(param_2 + 8);
      piVar1 = (int *)operator_new(iVar2 * 0x24 + 4);
      local_4 = 0;
      if (piVar1 != (int *)0x0) {
        piVar8 = piVar1 + 1;
        *piVar1 = iVar2;
        FUN_006c043b(piVar8,0x24,iVar2,&LAB_00642180,&LAB_006421a0);
      }
      *(int **)(param_1 + 0xc) = piVar8;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
    }
    local_4 = 0xffffffff;
    local_18 = 0;
    if (0 < *(int *)(param_2 + 8)) {
      local_14 = 0;
      do {
        iVar2 = *(int *)(param_2 + 0xc) + local_14;
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + local_14);
        *puVar5 = *(undefined4 *)(*(int *)(param_2 + 0xc) + local_14);
        puVar5[1] = *(undefined4 *)(iVar2 + 4);
        if (puVar5 + 2 != (undefined4 *)(iVar2 + 8)) {
          if ((int)puVar5[6] < *(int *)(iVar2 + 0x10)) {
            FUN_006bf840(puVar5[5]);
            pvVar3 = operator_new(*(int *)(iVar2 + 0x10) * 0xc);
            puVar5[5] = pvVar3;
            puVar5[4] = 0;
            puVar5[6] = *(undefined4 *)(iVar2 + 0x10);
          }
          iVar6 = 0;
          if (0 < *(int *)(iVar2 + 0x10)) {
            iVar4 = 0;
            do {
              puVar7 = (undefined4 *)(*(int *)(iVar2 + 0x14) + iVar4);
              puVar9 = (undefined4 *)(puVar5[5] + iVar4);
              *puVar9 = *puVar7;
              puVar9[1] = puVar7[1];
              puVar9[2] = puVar7[2];
              iVar6 = iVar6 + 1;
              iVar4 = iVar4 + 0xc;
            } while (iVar6 < *(int *)(iVar2 + 0x10));
          }
          puVar5[4] = *(undefined4 *)(iVar2 + 0x10);
        }
        local_18 = local_18 + 1;
        local_14 = local_14 + 0x24;
      } while (local_18 < *(int *)(param_2 + 8));
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  ExceptionList = local_c;
  return param_1;
}

