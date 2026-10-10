
int __fastcall FUN_006a1cd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar6 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar2 = *(int *)(param_1 + 0x10) / 2;
      iVar4 = 1;
      if (0 < iVar2) {
        iVar4 = iVar2;
      }
      if (iVar6 + iVar4 < 1) {
        iVar6 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar6 = iVar6 + iVar2;
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x18) + iVar6;
    }
    pvVar3 = operator_new(iVar6 << 4);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      iVar2 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar2);
        puVar1 = (undefined4 *)(iVar2 + (int)pvVar3);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
        puVar1[3] = puVar5[3];
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x10;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(int *)(param_1 + 0x10) = iVar6;
    *(void **)(param_1 + 0xc) = pvVar3;
  }
  iVar6 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar6;
  return iVar6 * 0x10 + -0x10 + *(int *)(param_1 + 0xc);
}

