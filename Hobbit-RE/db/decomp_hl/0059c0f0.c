
void __thiscall FUN_0059c0f0(int param_1,int param_2)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (*(int *)(param_2 + 0x9c) != 1) {
        return;
      }
      FUN_0059cb70();
    }
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x14) == 0) {
      FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar6 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0;
    param_2 = 0;
    if (0 < *(int *)(iVar6 + 8)) {
      do {
        iVar5 = *(int *)(param_1 + 8);
        bVar1 = false;
        if (iVar5 < 1) {
LAB_0059c1af:
          iVar6 = *(int *)(*(int *)(iVar6 + 0xc) + param_2 * 4);
          if (*(int *)(param_1 + 0x10) < iVar5 + 1) {
            if (*(int *)(param_1 + 0x18) == 0) {
              iVar7 = *(int *)(param_1 + 0x10) / 2;
              iVar3 = 1;
              if (0 < iVar7) {
                iVar3 = iVar7;
              }
              if (iVar3 + iVar5 < 1) {
                iVar5 = 1;
              }
              else {
                if (iVar7 < 1) {
                  iVar7 = 1;
                }
                iVar5 = iVar5 + iVar7;
              }
            }
            else {
              iVar5 = *(int *)(param_1 + 0x18) + iVar5;
            }
            pvVar2 = operator_new(iVar5 * 8);
            iVar3 = 0;
            if (0 < *(int *)(param_1 + 8)) {
              do {
                iVar7 = *(int *)(param_1 + 0xc);
                *(undefined4 *)((int)pvVar2 + iVar3 * 8) = *(undefined4 *)(iVar7 + iVar3 * 8);
                *(undefined4 *)((int)pvVar2 + iVar3 * 8 + 4) =
                     *(undefined4 *)(iVar7 + 4 + iVar3 * 8);
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(param_1 + 8));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
            *(void **)(param_1 + 0xc) = pvVar2;
            *(int *)(param_1 + 0x10) = iVar5;
          }
          iVar5 = *(int *)(param_1 + 8);
          iVar3 = *(int *)(param_1 + 0xc);
          *(undefined4 *)(iVar3 + iVar5 * 8) = *(undefined4 *)(iVar6 + 0x30);
          *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = *(undefined4 *)(iVar6 + 0x34);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        else {
          iVar3 = *(int *)(*(int *)(iVar6 + 0xc) + param_2 * 4);
          piVar4 = *(int **)(param_1 + 0xc);
          iVar7 = iVar5;
          do {
            if ((*piVar4 == *(int *)(iVar3 + 0x30)) && (piVar4[1] == *(int *)(iVar3 + 0x34))) {
              bVar1 = true;
            }
            piVar4 = piVar4 + 2;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          if (!bVar1) goto LAB_0059c1af;
        }
        iVar6 = *(int *)(param_1 + 0x1c);
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(iVar6 + 8));
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) == 1) {
      bVar1 = false;
      uVar8 = FUN_0041bcd0();
      iVar5 = (int)((ulonglong)uVar8 >> 0x20);
      iVar6 = *(int *)(param_1 + 8);
      if (0 < iVar6) {
        piVar4 = *(int **)(param_1 + 0xc);
        iVar3 = iVar6;
        do {
          if ((*piVar4 == (int)uVar8) && (piVar4[1] == iVar5)) {
            bVar1 = true;
          }
          piVar4 = piVar4 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (bVar1) {
          return;
        }
      }
      if (*(int *)(param_1 + 0x10) < iVar6 + 1) {
        if (*(int *)(param_1 + 0x18) == 0) {
          iVar7 = *(int *)(param_1 + 0x10) / 2;
          iVar3 = 1;
          if (0 < iVar7) {
            iVar3 = iVar7;
          }
          if (iVar3 + iVar6 < 1) {
            iVar6 = 1;
          }
          else {
            if (iVar7 < 1) {
              iVar7 = 1;
            }
            iVar6 = iVar6 + iVar7;
          }
        }
        else {
          iVar6 = *(int *)(param_1 + 0x18) + iVar6;
        }
        pvVar2 = operator_new(iVar6 * 8);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 8)) {
          do {
            iVar7 = *(int *)(param_1 + 0xc);
            *(undefined4 *)((int)pvVar2 + iVar3 * 8) = *(undefined4 *)(iVar7 + iVar3 * 8);
            *(undefined4 *)((int)pvVar2 + iVar3 * 8 + 4) = *(undefined4 *)(iVar7 + 4 + iVar3 * 8);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 8));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
        *(void **)(param_1 + 0xc) = pvVar2;
        *(int *)(param_1 + 0x10) = iVar6;
      }
      iVar6 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0xc);
      *(int *)(iVar3 + iVar6 * 8) = (int)uVar8;
      *(int *)(iVar3 + 4 + iVar6 * 8) = iVar5;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return;
}

