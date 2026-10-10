
void __thiscall FUN_0061aa70(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar5 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x10) / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar5 + iVar4 < 1) {
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
    pvVar2 = operator_new(iVar5 * 0xc);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      puVar3 = (undefined4 *)((int)pvVar2 + 8);
      do {
        iVar1 = *(int *)(param_1 + 0xc) + (-8 - (int)pvVar2);
        puVar3[-2] = *(undefined4 *)(iVar1 + (int)puVar3);
        puVar3[-1] = *(undefined4 *)((int)puVar3 + iVar1 + 4);
        *puVar3 = *(undefined4 *)((int)puVar3 + iVar1 + 8);
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 3;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(void **)(param_1 + 0xc) = pvVar2;
    *(int *)(param_1 + 0x10) = iVar5;
  }
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 0xc);
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  puVar3[2] = param_2[2];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

