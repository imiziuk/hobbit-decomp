
void __thiscall FUN_00553060(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_2 != *(int *)(param_1 + 0x10)) {
    pvVar1 = operator_new(param_2 * 0x28);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else if (-1 < param_2 + -1) {
      puVar3 = (undefined4 *)((int)pvVar1 + 0x1c);
      iVar4 = param_2;
      do {
        puVar3[-5] = 0x7f7fffff;
        puVar3[-4] = 0x7f7fffff;
        puVar3[-3] = 0x7f7fffff;
        puVar3[-2] = 0xff7fffff;
        puVar3[-1] = 0xff7fffff;
        *puVar3 = 0xff7fffff;
        puVar3 = puVar3 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      puVar3 = (undefined4 *)((int)pvVar1 + 0x1c);
      do {
        puVar2 = (undefined4 *)((int)puVar3 + *(int *)(param_1 + 0xc) + (-0x1c - (int)pvVar1));
        puVar3[-7] = *puVar2;
        puVar3[-6] = puVar2[1];
        puVar3[-5] = puVar2[2];
        puVar3[-4] = puVar2[3];
        puVar3[-3] = puVar2[4];
        puVar3[-2] = puVar2[5];
        puVar3[-1] = puVar2[6];
        *puVar3 = puVar2[7];
        puVar3[1] = puVar2[8];
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 10;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(void **)(param_1 + 0xc) = pvVar1;
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}

