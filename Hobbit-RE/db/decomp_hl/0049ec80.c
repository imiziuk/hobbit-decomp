
void __thiscall FUN_0049ec80(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar6 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x10) / 2;
      iVar3 = 1;
      if (0 < iVar1) {
        iVar3 = iVar1;
      }
      if (iVar6 + iVar3 < 1) {
        iVar6 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar6 = iVar6 + iVar1;
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x18) + iVar6;
    }
    pvVar2 = operator_new(iVar6 << 4);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else if (-1 < iVar6 + -1) {
      puVar5 = (undefined4 *)((int)pvVar2 + 0xc);
      iVar3 = iVar6;
      do {
        puVar5[-3] = 0;
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      iVar1 = 0;
      do {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar1);
        puVar5 = (undefined4 *)(iVar1 + (int)pvVar2);
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar5[2] = puVar4[2];
        puVar5[3] = puVar4[3];
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x10;
      } while (iVar3 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(int *)(param_1 + 0x10) = iVar6;
    *(void **)(param_1 + 0xc) = pvVar2;
  }
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 0x10);
  *puVar5 = *param_2;
  puVar5[1] = param_2[1];
  puVar5[2] = param_2[2];
  puVar5[3] = param_2[3];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

