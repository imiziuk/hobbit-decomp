
void __thiscall FUN_006a2960(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_18;
  int local_14 [2];
  int iStack_c;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x120) != 0) {
    iVar2 = FUN_006a0380(*(undefined4 *)(param_1 + 8));
    iVar6 = *(int *)(param_1 + 0xe8);
    iVar7 = *(int *)(param_1 + 0xec);
    local_18 = 0;
    local_14[0] = 0;
    switch(param_3) {
    case (int *)0x0:
      local_14[0] = -1;
      break;
    case (int *)0x1:
      local_14[0] = 1;
      break;
    case (int *)0x2:
      local_18 = -1;
      break;
    case (int *)0x3:
      local_18 = 1;
    }
    param_3 = *(int **)(iVar2 + 0x24);
    iVar2 = *(int *)(param_1 + 0xe0);
    if (iVar6 < iVar2) {
      while( true ) {
        if (iVar6 < 0) {
          return;
        }
        if (*(int *)(param_1 + 0xe4) <= iVar7) {
          return;
        }
        if (iVar7 < 0) {
          return;
        }
        piVar1 = *(int **)(*(int *)(param_1 + 0xfc) + (iVar2 * iVar7 + iVar6) * 4);
        if (((piVar1 != (int *)0x0) && (piVar1 != param_3)) &&
           (uVar3 = FUN_006a3230(), (uVar3 & 0x100) == 0)) break;
        iVar2 = *(int *)(param_1 + 0xe0);
        iVar6 = iVar6 + local_18;
        iVar7 = iVar7 + local_14[0];
        if (iVar2 <= iVar6) {
          return;
        }
      }
      piVar4 = (int *)(**(code **)(*piVar1 + 0x10))();
      iStack_c = piVar4[1];
      iStack_4 = piVar4[3];
      local_14[0] = (piVar4[2] - *piVar4) / 2;
      param_3 = (int *)((iStack_4 - iStack_c) / 2);
      FUN_006a3380(local_14,&param_3);
      FUN_006a03c0(*(undefined4 *)(param_1 + 8),local_14[0],param_3);
      *(int *)(param_1 + 0xe8) = iVar6;
      *(int *)(param_1 + 0xec) = iVar7;
      if (0 < *(int *)(param_1 + 0x18)) {
        puVar5 = *(undefined4 **)(param_1 + 0x1c);
        iVar6 = 0;
        while ((int *)*puVar5 != piVar1) {
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 1;
          if (*(int *)(param_1 + 0x18) <= iVar6) {
            return;
          }
        }
        *(int *)(param_1 + 0x128) = iVar6;
      }
    }
  }
  return;
}

