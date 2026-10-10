
void __thiscall FUN_004df340(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(int *)(param_1 + 0x14c) = param_2;
  if (*(int *)(param_1 + 0x160) < param_2) {
    iVar5 = param_2 - *(int *)(param_1 + 0x160);
    do {
      iVar4 = *(int *)(param_1 + 0x160);
      if (*(int *)(param_1 + 0x168) < iVar4 + 1) {
        if (*(int *)(param_1 + 0x170) == 0) {
          iVar1 = *(int *)(param_1 + 0x168) / 2;
          iVar3 = 1;
          if (0 < iVar1) {
            iVar3 = iVar1;
          }
          if (iVar4 + iVar3 < 1) {
            iVar4 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            iVar4 = iVar4 + iVar1;
          }
        }
        else {
          iVar4 = *(int *)(param_1 + 0x170) + iVar4;
        }
        pvVar2 = operator_new(iVar4 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x160)) {
          do {
            *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x164) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x160));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x164));
        *(int *)(param_1 + 0x168) = iVar4;
        *(void **)(param_1 + 0x164) = pvVar2;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x164) + *(int *)(param_1 + 0x160) * 4) = 0;
      iVar5 = iVar5 + -1;
      *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x160);
  if (param_2 < iVar5) {
    while (iVar5 = iVar5 + -1, param_2 <= iVar5) {
      iVar4 = (*(int *)(param_1 + 0x160) - iVar5) + -1;
      if (0 < iVar4) {
        iVar3 = iVar5 * 4;
        do {
          *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x164)) =
               *(undefined4 *)(iVar3 + 4 + *(int *)(param_1 + 0x164));
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -1;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x1a0) < param_2) {
    iVar5 = param_2;
  }
  FUN_004e1b50(iVar5);
  *(int *)(param_1 + 0x198) = param_2;
  if (*(int *)(param_1 + 0x138) < param_2) {
    iVar5 = param_2 - *(int *)(param_1 + 0x138);
    do {
      iVar4 = *(int *)(param_1 + 0x138);
      if (*(int *)(param_1 + 0x140) < iVar4 + 1) {
        if (*(int *)(param_1 + 0x148) == 0) {
          iVar1 = *(int *)(param_1 + 0x140) / 2;
          iVar3 = 1;
          if (0 < iVar1) {
            iVar3 = iVar1;
          }
          if (iVar4 + iVar3 < 1) {
            iVar4 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            iVar4 = iVar4 + iVar1;
          }
        }
        else {
          iVar4 = *(int *)(param_1 + 0x148) + iVar4;
        }
        pvVar2 = operator_new(iVar4 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x138)) {
          do {
            *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x13c) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x138));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x13c));
        *(int *)(param_1 + 0x140) = iVar4;
        *(void **)(param_1 + 0x13c) = pvVar2;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x13c) + *(int *)(param_1 + 0x138) * 4) = 0xffffffff;
      iVar5 = iVar5 + -1;
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x138);
  if (param_2 < iVar5) {
    while (iVar5 = iVar5 + -1, param_2 <= iVar5) {
      iVar4 = (*(int *)(param_1 + 0x138) - iVar5) + -1;
      if (0 < iVar4) {
        iVar3 = iVar5 * 4;
        do {
          *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x13c)) =
               *(undefined4 *)(iVar3 + 4 + *(int *)(param_1 + 0x13c));
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1;
    }
  }
  return;
}

