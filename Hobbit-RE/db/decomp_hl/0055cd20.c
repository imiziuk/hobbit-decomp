
void __thiscall FUN_0055cd20(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006da3d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_AIManager__OnAdvanceLogic_0073e888);
  iVar10 = 0;
  local_4 = 0;
  FUN_006501d0(s_AIManager__OnAdvanceLogic_0073e888);
  local_4 = CONCAT31(local_4._1_3_,1);
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar6 = *(int *)(param_1 + 0x4c);
      iVar9 = *(int *)(iVar10 + iVar6);
      if (((*(int *)(iVar9 + 8) != 1) && (*(int *)(iVar9 + 8) != 3)) ||
         ((*(byte *)(iVar9 + 4) & 2) != 0)) {
        bVar4 = true;
        bVar5 = false;
        if (0 < *(int *)(iVar9 + 0x70)) {
          iVar9 = 0;
          do {
            iVar6 = FUN_0055cce0(*(undefined4 *)
                                  (*(int *)(*(int *)(iVar10 + iVar6) + 0x74) + iVar9 * 4));
            if (iVar6 != 0) {
              if ((*(int **)(iVar6 + 0x5c) == (int *)0x0) ||
                 (iVar7 = (**(code **)(**(int **)(iVar6 + 0x5c) + 4))(param_2), iVar7 != 0)) {
                if ((*(byte *)(iVar6 + 0x60) & 2) == 0) {
                  puVar8 = (undefined4 *)
                           FUN_0055cce0(*(undefined4 *)
                                         (*(int *)(*(int *)(iVar10 + *(int *)(param_1 + 0x4c)) +
                                                  0x74) + iVar9 * 4));
                  FUN_0064e870(6,s_AITrigger___s_triggered__Link__d_0073e864,*puVar8,local_24);
                }
                *(uint *)(iVar6 + 0x60) = *(uint *)(iVar6 + 0x60) | 1;
                bVar5 = true;
              }
              else {
                *(uint *)(iVar6 + 0x60) = *(uint *)(iVar6 + 0x60) & 0xfffffffe;
                bVar4 = false;
              }
            }
            iVar6 = *(int *)(param_1 + 0x4c);
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(*(int *)(iVar10 + iVar6) + 0x70));
        }
        piVar2 = *(int **)(iVar10 + *(int *)(param_1 + 0x4c));
        if ((((*piVar2 == 0) && (bVar4)) || ((*piVar2 == 1 && (bVar5)))) ||
           ((*(byte *)(piVar2 + 1) & 2) != 0)) {
          if ((((piVar2[1] & 1U) == 0) && (piVar2[2] != 2)) && ((piVar2[1] & 2U) == 0)) {
            piVar2[2] = 1;
          }
          puVar1 = (uint *)(*(int *)(iVar10 + *(int *)(param_1 + 0x4c)) + 4);
          *puVar1 = *puVar1 | 4;
          puVar1 = (uint *)(*(int *)(iVar10 + *(int *)(param_1 + 0x4c)) + 4);
          *puVar1 = *puVar1 & 0xfffffffd;
          iVar6 = *(int *)(param_1 + 0x4c);
          iVar9 = 0;
          if (0 < *(int *)(*(int *)(iVar10 + iVar6) + 0x8c)) {
            do {
              uVar11 = FUN_0055cd00(*(undefined4 *)
                                     (*(int *)(*(int *)(iVar10 + iVar6) + 0x90) + iVar9 * 4));
              iVar6 = (int)uVar11;
              if ((iVar6 != 0) && (*(int *)(iVar6 + 0x5c) != 0)) {
                if ((*(byte *)(iVar6 + 0x60) & 2) == 0) {
                  iVar7 = FUN_0055cd00((int)((ulonglong)uVar11 >> 0x20));
                  FUN_0064e870(6,s_AIAction___s_triggered__Link__d__0073e840,
                               *(undefined4 *)(iVar7 + 4),local_24);
                }
                FUN_005cc300();
                *(uint *)(iVar6 + 0x60) = *(uint *)(iVar6 + 0x60) | 1;
              }
              iVar6 = *(int *)(param_1 + 0x4c);
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(*(int *)(iVar10 + iVar6) + 0x8c));
          }
        }
      }
      local_24 = local_24 + 1;
      iVar10 = iVar10 + 4;
    } while (local_24 < *(int *)(param_1 + 0x48));
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar6 = FUN_0055cce0(iVar10);
      if (iVar6 != 0) {
        if (*(int **)(iVar6 + 0x5c) != (int *)0x0) {
          (**(code **)(**(int **)(iVar6 + 0x5c) + 0x20))(param_2);
        }
        uVar3 = *(uint *)(iVar6 + 0x60);
        *(uint *)(iVar6 + 0x60) = ((int)(uVar3 << 0x1f) >> 0x1e ^ uVar3) & 2 ^ uVar3 & 0xfffffffe;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x10));
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      iVar6 = FUN_0055cd00(iVar10);
      if (iVar6 != 0) {
        if (*(int **)(iVar6 + 0x5c) != (int *)0x0) {
          (**(code **)(**(int **)(iVar6 + 0x5c) + 0x14))(param_2);
        }
        uVar3 = *(uint *)(iVar6 + 0x60);
        *(uint *)(iVar6 + 0x60) = ((int)(uVar3 << 0x1f) >> 0x1e ^ uVar3) & 2 ^ uVar3 & 0xfffffffe;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x2c));
  }
  local_4 = local_4 & 0xffffff00;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

