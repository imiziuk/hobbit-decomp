
int __thiscall FUN_005b64a0(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 != param_2) {
    if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 8)) {
      FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
      iVar3 = *(int *)(param_2 + 8);
      pvVar1 = operator_new(iVar3 << 4);
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else if (-1 < iVar3 + -1) {
        puVar4 = (undefined4 *)((int)pvVar1 + 0xc);
        do {
          puVar4[-3] = 0;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4 = puVar4 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(void **)(param_1 + 0xc) = pvVar1;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
    }
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 8)) {
      iVar2 = 0;
      do {
        puVar4 = (undefined4 *)(*(int *)(param_2 + 0xc) + iVar2);
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar2);
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar5[2] = puVar4[2];
        puVar5[3] = puVar4[3];
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x10;
      } while (iVar3 < *(int *)(param_2 + 8));
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  return param_1;
}

