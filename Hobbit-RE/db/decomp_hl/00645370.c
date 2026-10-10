
void __thiscall
FUN_00645370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x54) + iVar6 * 4);
      iVar2 = FUN_00647e40(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + iVar6 * 4) + 4),
                           param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_00647e40(*(undefined4 *)(*piVar1 + 8),param_3);
        if (iVar2 == 0) {
          FUN_00647e40(*(undefined4 *)(*piVar1 + 0xc),param_4);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x50));
  }
  iVar6 = *(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x58) < iVar6 + 1) {
    if (*(int *)(param_1 + 0x60) == 0) {
      iVar3 = *(int *)(param_1 + 0x58) / 2;
      iVar2 = 1;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      if (iVar6 + iVar2 < 1) {
        iVar6 = 1;
      }
      else {
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        iVar6 = iVar6 + iVar3;
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x60) + iVar6;
    }
    pvVar4 = operator_new(iVar6 * 4);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x50)) {
      do {
        *(undefined4 *)((int)pvVar4 + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x50));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
    *(void **)(param_1 + 0x54) = pvVar4;
    *(int *)(param_1 + 0x58) = iVar6;
  }
  iVar6 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar6;
  piVar1 = (int *)(*(int *)(param_1 + 0x54) + -4 + iVar6 * 4);
  puVar5 = (undefined4 *)operator_new(0x14);
  *piVar1 = (int)puVar5;
  *puVar5 = 8;
  *(undefined4 *)(*piVar1 + 4) = param_2;
  *(undefined4 *)(*piVar1 + 8) = param_3;
  *(undefined4 *)(*piVar1 + 0xc) = param_4;
  *(undefined4 *)(*piVar1 + 0x10) = param_5;
  return;
}

