
int __thiscall FUN_0058eff0(int param_1,int param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  iVar8 = *(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x58) < iVar8 + 1) {
    if (*(int *)(param_1 + 0x60) == 0) {
      iVar4 = *(int *)(param_1 + 0x58) / 2;
      iVar6 = 1;
      if (0 < iVar4) {
        iVar6 = iVar4;
      }
      if (iVar6 + iVar8 < 1) {
        iVar8 = 1;
      }
      else {
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        iVar8 = iVar8 + iVar4;
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x60) + iVar8;
    }
    pvVar5 = operator_new(iVar8 * 4);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x50)) {
      do {
        *(undefined4 *)((int)pvVar5 + iVar6 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar6 * 4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x50));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
    *(void **)(param_1 + 0x54) = pvVar5;
    *(int *)(param_1 + 0x58) = iVar8;
  }
  iVar8 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar8;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x54) + -4 + iVar8 * 4);
  *puVar1 = *(undefined2 *)(param_1 + 0x34);
  sVar3 = (short)*(undefined4 *)(param_2 + 0x24);
  puVar1[1] = sVar3;
  local_8 = 0;
  if (sVar3 != 0) {
    do {
      iVar6 = *(int *)(param_2 + 0x28);
      iVar8 = *(int *)(param_1 + 0x34);
      if (*(int *)(param_1 + 0x3c) < iVar8 + 1) {
        if (*(int *)(param_1 + 0x44) == 0) {
          iVar7 = *(int *)(param_1 + 0x3c) / 2;
          iVar4 = 1;
          if (0 < iVar7) {
            iVar4 = iVar7;
          }
          if (iVar4 + iVar8 < 1) {
            iVar8 = 1;
          }
          else {
            if (iVar7 < 1) {
              iVar7 = 1;
            }
            iVar8 = iVar8 + iVar7;
          }
        }
        else {
          iVar8 = *(int *)(param_1 + 0x44) + iVar8;
        }
        pvVar5 = operator_new(iVar8 * 2);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x34)) {
          do {
            *(undefined2 *)((int)pvVar5 + iVar4 * 2) =
                 *(undefined2 *)(*(int *)(param_1 + 0x38) + iVar4 * 2);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x34));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x38));
        *(void **)(param_1 + 0x38) = pvVar5;
        *(int *)(param_1 + 0x3c) = iVar8;
      }
      *(undefined2 *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34) * 2) =
           *(undefined2 *)(iVar6 + local_8 * 2);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      iVar8 = *(int *)(param_1 + 0x18);
      bVar2 = *(byte *)(*(int *)(param_2 + 0xc) + local_8);
      if (*(int *)(param_1 + 0x20) < iVar8 + 1) {
        if (*(int *)(param_1 + 0x28) == 0) {
          iVar4 = *(int *)(param_1 + 0x20) / 2;
          iVar6 = 1;
          if (0 < iVar4) {
            iVar6 = iVar4;
          }
          if (iVar6 + iVar8 < 1) {
            iVar8 = 1;
          }
          else {
            if (iVar4 < 1) {
              iVar4 = 1;
            }
            iVar8 = iVar8 + iVar4;
          }
        }
        else {
          iVar8 = *(int *)(param_1 + 0x28) + iVar8;
        }
        pvVar5 = operator_new(iVar8 * 2);
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 0x18)) {
          do {
            *(undefined2 *)((int)pvVar5 + iVar6 * 2) =
                 *(undefined2 *)(*(int *)(param_1 + 0x1c) + iVar6 * 2);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 0x18));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x1c));
        *(void **)(param_1 + 0x1c) = pvVar5;
        *(int *)(param_1 + 0x20) = iVar8;
      }
      *(ushort *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) * 2) = (ushort)bVar2;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      local_8 = local_8 + 1;
    } while (local_8 < (int)(uint)(ushort)puVar1[1]);
  }
  return *(int *)(param_1 + 0x50) + -1;
}

