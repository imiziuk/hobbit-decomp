
void __thiscall FUN_005c1ed0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + param_2 * 4) = 0;
  FUN_0063b1d0();
  iVar5 = *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x34) < iVar5 + 1) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      iVar2 = *(int *)(param_1 + 0x34) / 2;
      iVar4 = 1;
      if (0 < iVar2) {
        iVar4 = iVar2;
      }
      if (iVar4 + iVar5 < 1) {
        iVar5 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar5 = iVar5 + iVar2;
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x3c) + iVar5;
    }
    pvVar3 = operator_new(iVar5 * 4);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      do {
        *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x2c));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x30));
    *(void **)(param_1 + 0x30) = pvVar3;
    *(int *)(param_1 + 0x34) = iVar5;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 4) = uVar1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return;
}

