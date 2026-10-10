
void __thiscall FUN_005b6580(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *local_20;
  int local_1c;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006deb7b;
  local_c = ExceptionList;
  if (param_2 != *(int *)(param_1 + 0x10)) {
    ExceptionList = &local_c;
    piVar1 = (int *)operator_new(param_2 * 0x30 + 4);
    local_4 = 0;
    if (piVar1 == (int *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = piVar1 + 1;
      *piVar1 = param_2;
      FUN_006c043b(local_20,0x30,param_2,&LAB_005b6990,FUN_005b69c0);
    }
    local_4 = 0xffffffff;
    local_14 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      piVar1 = local_20 + 6;
      do {
        iVar6 = *(int *)(param_1 + 0xc) + (-0x18 - (int)local_20);
        piVar1[-6] = *(int *)(iVar6 + (int)piVar1);
        piVar1[-5] = *(int *)((int)piVar1 + iVar6 + 4);
        piVar1[-4] = *(int *)((int)piVar1 + iVar6 + 8);
        if (piVar1 + -3 != (int *)((int)piVar1 + iVar6 + 0xc)) {
          if (piVar1[1] < *(int *)((int)piVar1 + iVar6 + 0x14)) {
            FUN_006bf840(*piVar1);
            iVar4 = *(int *)((int)piVar1 + iVar6 + 0x14);
            pvVar2 = operator_new(iVar4 << 4);
            if (pvVar2 == (void *)0x0) {
              pvVar2 = (void *)0x0;
            }
            else if (-1 < iVar4 + -1) {
              puVar3 = (undefined4 *)((int)pvVar2 + 0xc);
              do {
                puVar3[-3] = 0;
                puVar3[-2] = 0;
                puVar3[-1] = 0;
                *puVar3 = 0;
                puVar3 = puVar3 + 4;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            *piVar1 = (int)pvVar2;
            piVar1[-1] = 0;
            piVar1[1] = *(int *)((int)piVar1 + iVar6 + 0x14);
          }
          iVar4 = 0;
          local_1c = 0;
          if (0 < *(int *)((int)piVar1 + iVar6 + 0x14)) {
            do {
              puVar3 = (undefined4 *)(*(int *)((int)piVar1 + iVar6 + 0x18) + iVar4);
              puVar5 = (undefined4 *)(*piVar1 + iVar4);
              *puVar5 = *puVar3;
              puVar5[1] = puVar3[1];
              puVar5[2] = puVar3[2];
              puVar5[3] = puVar3[3];
              local_1c = local_1c + 1;
              iVar4 = iVar4 + 0x10;
            } while (local_1c < *(int *)((int)piVar1 + iVar6 + 0x14));
          }
          piVar1[-1] = *(int *)((int)piVar1 + iVar6 + 0x14);
        }
        piVar1[4] = *(int *)((int)piVar1 + iVar6 + 0x28);
        piVar1[5] = *(int *)((int)piVar1 + iVar6 + 0x2c);
        local_14 = local_14 + 1;
        piVar1 = piVar1 + 0xc;
      } while (local_14 < *(int *)(param_1 + 8));
    }
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 != 0) {
      FUN_006c026a(iVar6,0x30,*(undefined4 *)(iVar6 + -4),FUN_005b69c0);
      FUN_006bf840(iVar6 + -4);
    }
    *(int **)(param_1 + 0xc) = local_20;
    *(int *)(param_1 + 0x10) = param_2;
  }
  ExceptionList = local_c;
  return;
}

