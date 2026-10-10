
undefined4 __thiscall FUN_005e8740(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1af8;
  local_c = ExceptionList;
  bVar2 = false;
  iVar9 = 0;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s_AIManager_Actions_Action__d_Rope_00747a6c,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar3 = FUN_00649940();
  uVar8 = param_2;
  iVar4 = FUN_00647e40(param_2,uVar3);
  if ((iVar4 == 0) && (*param_3 == 1)) {
    iVar9 = param_3[0x93];
    bVar2 = true;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  iVar4 = *(int *)(param_1 + 0x20);
  if (bVar2) {
    if (iVar4 < iVar9) {
      if (iVar4 < iVar9) {
        param_3 = (int *)(iVar9 - iVar4);
        do {
          puVar5 = (undefined4 *)operator_new(0x10);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0x41200000;
          }
          iVar9 = *(int *)(param_1 + 0x20);
          if (*(int *)(param_1 + 0x28) < iVar9 + 1) {
            if (*(int *)(param_1 + 0x30) == 0) {
              iVar6 = *(int *)(param_1 + 0x28) / 2;
              iVar4 = 1;
              if (0 < iVar6) {
                iVar4 = iVar6;
              }
              if (iVar4 + iVar9 < 1) {
                iVar9 = 1;
              }
              else {
                if (iVar6 < 1) {
                  iVar6 = 1;
                }
                iVar9 = iVar9 + iVar6;
              }
            }
            else {
              iVar9 = *(int *)(param_1 + 0x30) + iVar9;
            }
            pvVar7 = operator_new(iVar9 * 4);
            iVar4 = 0;
            if (0 < *(int *)(param_1 + 0x20)) {
              do {
                *(undefined4 *)((int)pvVar7 + iVar4 * 4) =
                     *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(param_1 + 0x20));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
            *(void **)(param_1 + 0x24) = pvVar7;
            *(int *)(param_1 + 0x28) = iVar9;
          }
          *(undefined4 **)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20) * 4) = puVar5;
          param_3 = (int *)((int)param_3 + -1);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        } while (param_3 != (int *)0x0);
        ExceptionList = local_c;
        return 1;
      }
    }
    else if (iVar9 < iVar4) {
      iVar4 = *(int *)(param_1 + 0x28);
      iVar6 = iVar9;
      if (iVar9 <= iVar4) {
        iVar6 = iVar4;
      }
      if (iVar6 != iVar4) {
        pvVar7 = operator_new(iVar6 * 4);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          do {
            *(undefined4 *)((int)pvVar7 + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x20));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
        *(void **)(param_1 + 0x24) = pvVar7;
        *(int *)(param_1 + 0x28) = iVar6;
      }
      *(int *)(param_1 + 0x20) = iVar9;
    }
    uVar8 = 1;
  }
  else {
    iVar9 = 0;
    if (0 < iVar4) {
      do {
        FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Rope_00747a48,
                     *(undefined4 *)(param_1 + 4),iVar9);
        local_4 = 1;
        uVar3 = FUN_00649940();
        iVar4 = FUN_00647e40(uVar8,uVar3);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar4 == 0) {
          if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
            ExceptionList = local_c;
            return 0;
          }
          piVar1 = *(int **)(*(int *)(param_1 + 0x24) + iVar9 * 4);
          *piVar1 = param_3[0x90];
          piVar1[1] = param_3[0x91];
          ExceptionList = local_c;
          return 1;
        }
        FUN_00649920(local_10,s_AIManager_Actions_Action__d_Rope_00747a1c,
                     *(undefined4 *)(param_1 + 4),iVar9);
        local_4 = 2;
        uVar3 = FUN_00649940();
        iVar4 = FUN_00647e40(uVar8,uVar3);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar4 == 0) {
          if (*param_3 != 2) {
            ExceptionList = local_c;
            return 0;
          }
          *(int *)(*(int *)(*(int *)(param_1 + 0x24) + iVar9 * 4) + 8) = param_3[0x94];
          ExceptionList = local_c;
          return 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x20));
    }
    uVar8 = FUN_005ccb60(uVar8,param_3);
  }
  ExceptionList = local_c;
  return uVar8;
}

