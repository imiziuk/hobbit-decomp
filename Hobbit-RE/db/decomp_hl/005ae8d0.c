
void __thiscall FUN_005ae8d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      uVar1 = FUN_005bece0();
      uVar1 = FUN_005bece0(uVar1);
      iVar2 = FUN_00647e40(uVar1);
      if (iVar2 == 0) {
        FUN_005be210(1);
        if (param_2 == (undefined4 *)0x0) {
          return;
        }
        (**(code **)*param_2)(1);
        return;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xa8));
  }
  iVar5 = *(int *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xb0) < iVar5 + 1) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      iVar3 = *(int *)(param_1 + 0xb0) / 2;
      iVar2 = 1;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      if (iVar5 + iVar2 < 1) {
        iVar5 = 1;
      }
      else {
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        iVar5 = iVar5 + iVar3;
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0xb8) + iVar5;
    }
    pvVar4 = operator_new(iVar5 * 4);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xa8)) {
      do {
        *(undefined4 *)((int)pvVar4 + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xac) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xa8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xac));
    *(int *)(param_1 + 0xb0) = iVar5;
    *(void **)(param_1 + 0xac) = pvVar4;
  }
  *(undefined4 **)(*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8) * 4) = param_2;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  return;
}

