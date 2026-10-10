
void __thiscall FUN_00590860(int param_1,char *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  int local_4;
  
  pcVar6 = param_2;
  if (param_2 != (char *)0x0) {
    if (*(int *)(param_1 + 0x94) == 0) {
      FUN_006bf840(*(undefined4 *)(param_1 + 0x8c));
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0xb0) == 0) {
      FUN_006bf840(*(undefined4 *)(param_1 + 0xa8));
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
    FUN_0058eef0();
    FUN_0058f220();
    cVar2 = *pcVar6;
    while (cVar2 != '\0') {
      FUN_0058ee10(pcVar6);
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      cVar2 = *pcVar6;
    }
    FUN_00648480(&local_14,pcVar6 + 1,4);
    pcVar6 = pcVar6 + 5;
    local_18 = 0;
    if (0 < local_14) {
      do {
        iVar7 = *(int *)(param_1 + 0x50);
        if (*(int *)(param_1 + 0x58) < iVar7 + 1) {
          if (*(int *)(param_1 + 0x60) == 0) {
            iVar3 = *(int *)(param_1 + 0x58) / 2;
            iVar5 = 1;
            if (0 < iVar3) {
              iVar5 = iVar3;
            }
            if (iVar7 + iVar5 < 1) {
              iVar7 = 1;
            }
            else {
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar7 = iVar7 + iVar3;
            }
          }
          else {
            iVar7 = *(int *)(param_1 + 0x60) + iVar7;
          }
          pvVar4 = operator_new(iVar7 * 4);
          iVar5 = 0;
          if (0 < *(int *)(param_1 + 0x50)) {
            do {
              *(undefined4 *)((int)pvVar4 + iVar5 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar5 * 4);
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(param_1 + 0x50));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
          *(void **)(param_1 + 0x54) = pvVar4;
          *(int *)(param_1 + 0x58) = iVar7;
        }
        iVar7 = *(int *)(param_1 + 0x50) + 1;
        *(int *)(param_1 + 0x50) = iVar7;
        puVar1 = (undefined2 *)(*(int *)(param_1 + 0x54) + -4 + iVar7 * 4);
        FUN_00648480(&param_2,pcVar6,2);
        puVar1[1] = (short)param_2;
        FUN_00648480(&local_22,pcVar6 + 2,2);
        pcVar6 = pcVar6 + 4;
        *puVar1 = local_22;
        local_1c = 0;
        if ((short)param_2 != 0) {
          do {
            FUN_00648480(&local_20,pcVar6,2);
            FUN_00648480(&local_1e,pcVar6 + 2,2);
            iVar7 = *(int *)(param_1 + 0x18);
            pcVar6 = pcVar6 + 4;
            if (*(int *)(param_1 + 0x20) < iVar7 + 1) {
              if (*(int *)(param_1 + 0x28) == 0) {
                iVar3 = *(int *)(param_1 + 0x20) / 2;
                iVar5 = 1;
                if (0 < iVar3) {
                  iVar5 = iVar3;
                }
                if (iVar5 + iVar7 < 1) {
                  iVar7 = 1;
                }
                else {
                  if (iVar3 < 1) {
                    iVar3 = 1;
                  }
                  iVar7 = iVar7 + iVar3;
                }
              }
              else {
                iVar7 = *(int *)(param_1 + 0x28) + iVar7;
              }
              pvVar4 = operator_new(iVar7 * 2);
              iVar5 = 0;
              if (0 < *(int *)(param_1 + 0x18)) {
                do {
                  *(undefined2 *)((int)pvVar4 + iVar5 * 2) =
                       *(undefined2 *)(*(int *)(param_1 + 0x1c) + iVar5 * 2);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(param_1 + 0x18));
              }
              FUN_006bf840(*(undefined4 *)(param_1 + 0x1c));
              *(void **)(param_1 + 0x1c) = pvVar4;
              *(int *)(param_1 + 0x20) = iVar7;
            }
            *(undefined2 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) * 2) = local_20;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            iVar7 = *(int *)(param_1 + 0x34);
            if (*(int *)(param_1 + 0x3c) < iVar7 + 1) {
              if (*(int *)(param_1 + 0x44) == 0) {
                iVar3 = *(int *)(param_1 + 0x3c) / 2;
                iVar5 = 1;
                if (0 < iVar3) {
                  iVar5 = iVar3;
                }
                if (iVar7 + iVar5 < 1) {
                  iVar7 = 1;
                }
                else {
                  if (iVar3 < 1) {
                    iVar3 = 1;
                  }
                  iVar7 = iVar7 + iVar3;
                }
              }
              else {
                iVar7 = *(int *)(param_1 + 0x44) + iVar7;
              }
              pvVar4 = operator_new(iVar7 * 2);
              iVar5 = 0;
              if (0 < *(int *)(param_1 + 0x34)) {
                do {
                  *(undefined2 *)((int)pvVar4 + iVar5 * 2) =
                       *(undefined2 *)(*(int *)(param_1 + 0x38) + iVar5 * 2);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(param_1 + 0x34));
              }
              FUN_006bf840(*(undefined4 *)(param_1 + 0x38));
              *(void **)(param_1 + 0x38) = pvVar4;
              *(int *)(param_1 + 0x3c) = iVar7;
            }
            *(undefined2 *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34) * 2) = local_1e;
            local_1c = local_1c + 1;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
          } while (local_1c < (int)((uint)param_2 & 0xffff));
        }
        local_18 = local_18 + 1;
      } while (local_18 < local_14);
    }
    FUN_00648480(&local_8,pcVar6,8);
    FUN_00648480(local_10,pcVar6 + 8,4);
    pcVar6 = pcVar6 + 0xc;
    if (local_8 != 0 || local_4 != 0) {
      do {
        FUN_00451b50(&local_8);
        FUN_00417a80(local_10);
        FUN_00648480(&local_8,pcVar6,8);
        FUN_00648480(local_10,pcVar6 + 8,4);
        pcVar6 = pcVar6 + 0xc;
      } while (local_8 != 0 || local_4 != 0);
    }
    FUN_00648480(&local_c,pcVar6,4);
    FUN_0063c970(local_c);
    thunk_FUN_0063d9d0(pcVar6 + 4,local_c * 8);
  }
  return;
}

