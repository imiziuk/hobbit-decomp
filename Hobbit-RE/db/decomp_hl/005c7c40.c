
void __thiscall FUN_005c7c40(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  iVar1 = FUN_005c7df0(param_2,param_3);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)operator_new(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = param_2;
      puVar2[1] = param_3;
      puVar2[2] = 1;
      puVar2[4] = 0;
      puVar2[3] = 0;
      param_2 = puVar2;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
      if (*(int *)(param_1 + 0x34) == 0) {
        iVar3 = *(int *)(param_1 + 0x2c) / 2;
        iVar5 = 1;
        if (0 < iVar3) {
          iVar5 = iVar3;
        }
        if (iVar1 + iVar5 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar1 = iVar1 + iVar3;
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x34) + iVar1;
      }
      pvVar4 = operator_new(iVar1 * 4);
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x24)) {
        do {
          *(undefined4 *)((int)pvVar4 + iVar5 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x24));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0x28));
      *(void **)(param_1 + 0x28) = pvVar4;
      *(int *)(param_1 + 0x2c) = iVar1;
    }
    *(undefined4 **)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24) * 4) = param_2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return;
}

