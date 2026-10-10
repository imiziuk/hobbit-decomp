
void __thiscall FUN_00552f00(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar4 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x10) / 2;
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
      if (iVar4 + iVar5 < 1) {
        iVar4 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar4 = iVar4 + iVar1;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x18) + iVar4;
    }
    pvVar2 = operator_new(iVar4 * 0x28);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else if (-1 < iVar4 + -1) {
      puVar3 = (undefined4 *)((int)pvVar2 + 0x1c);
      iVar5 = iVar4;
      do {
        puVar3[-5] = 0x7f7fffff;
        puVar3[-4] = 0x7f7fffff;
        puVar3[-3] = 0x7f7fffff;
        puVar3[-2] = 0xff7fffff;
        puVar3[-1] = 0xff7fffff;
        *puVar3 = 0xff7fffff;
        puVar3 = puVar3 + 10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      puVar3 = (undefined4 *)((int)pvVar2 + 0x1c);
      do {
        iVar1 = *(int *)(param_1 + 0xc) + (-0x1c - (int)pvVar2);
        puVar3[-7] = *(undefined4 *)(iVar1 + (int)puVar3);
        puVar3[-6] = *(undefined4 *)((int)puVar3 + iVar1 + 4);
        puVar3[-5] = *(undefined4 *)((int)puVar3 + iVar1 + 8);
        puVar3[-4] = *(undefined4 *)((int)puVar3 + iVar1 + 0xc);
        puVar3[-3] = *(undefined4 *)((int)puVar3 + iVar1 + 0x10);
        puVar3[-2] = *(undefined4 *)((int)puVar3 + iVar1 + 0x14);
        puVar3[-1] = *(undefined4 *)((int)puVar3 + iVar1 + 0x18);
        *puVar3 = *(undefined4 *)((int)puVar3 + iVar1 + 0x1c);
        puVar3[1] = *(undefined4 *)((int)puVar3 + iVar1 + 0x20);
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + 10;
      } while (iVar5 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(int *)(param_1 + 0x10) = iVar4;
    *(void **)(param_1 + 0xc) = pvVar2;
  }
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 0x28);
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  puVar3[2] = param_2[2];
  puVar3[3] = param_2[3];
  puVar3[4] = param_2[4];
  puVar3[5] = param_2[5];
  puVar3[6] = param_2[6];
  puVar3[7] = param_2[7];
  puVar3[8] = param_2[8];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

