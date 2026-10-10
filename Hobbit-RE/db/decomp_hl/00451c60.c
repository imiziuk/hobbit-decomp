
int __thiscall FUN_00451c60(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 + 1 <= *(int *)(param_1 + 0x10)) {
    for (; param_2 < iVar5; iVar5 = iVar5 + -1) {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar5 * 8);
      *puVar4 = puVar4[-2];
      puVar4[1] = puVar4[-1];
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return *(int *)(param_1 + 0xc) + param_2 * 8;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = *(int *)(param_1 + 0x10) / 2;
    iVar3 = 1;
    if (0 < iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 + iVar5 < 1) {
      iVar5 = 1;
    }
    else {
      if (iVar1 < 1) {
        iVar1 = 1;
      }
      iVar5 = iVar5 + iVar1;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x18) + iVar5;
  }
  pvVar2 = operator_new(iVar5 * 8);
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined4 *)((int)pvVar2 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar3 * 8);
      *(undefined4 *)((int)pvVar2 + iVar3 * 8 + 4) = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  if (param_2 < *(int *)(param_1 + 8)) {
    puVar4 = (undefined4 *)((int)pvVar2 + param_2 * 8 + 8);
    iVar3 = param_2;
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      *puVar4 = *(undefined4 *)(iVar1 + iVar3 * 8);
      puVar4[1] = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
  *(void **)(param_1 + 0xc) = pvVar2;
  *(int *)(param_1 + 0x10) = iVar5;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return *(int *)(param_1 + 0xc) + param_2 * 8;
}

