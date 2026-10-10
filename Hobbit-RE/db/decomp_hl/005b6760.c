
void __thiscall FUN_005b6760(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar6 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x10) / 2;
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
      if (iVar6 + iVar5 < 1) {
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
      iVar6 = iVar6 + *(int *)(param_1 + 0x18);
    }
    pvVar2 = operator_new(iVar6 << 5);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else if (-1 < iVar6 + -1) {
      puVar4 = (undefined4 *)((int)pvVar2 + 0x1c);
      iVar5 = iVar6;
      do {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4 = puVar4 + 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      puVar4 = (undefined4 *)((int)pvVar2 + 0x1c);
      do {
        puVar3 = (undefined4 *)((int)puVar4 + *(int *)(param_1 + 0xc) + (-0x1c - (int)pvVar2));
        puVar4[-7] = *puVar3;
        puVar4[-6] = puVar3[1];
        puVar4[-5] = puVar3[2];
        puVar4[-4] = puVar3[3];
        puVar4[-3] = puVar3[4];
        puVar4[-2] = puVar3[5];
        puVar4[-1] = puVar3[6];
        *puVar4 = puVar3[7];
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 8;
      } while (iVar5 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(void **)(param_1 + 0xc) = pvVar2;
    *(int *)(param_1 + 0x10) = iVar6;
  }
  puVar4 = (undefined4 *)(*(int *)(param_1 + 8) * 0x20 + *(int *)(param_1 + 0xc));
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  puVar4[2] = param_2[2];
  puVar4[3] = param_2[3];
  puVar4[4] = param_2[4];
  puVar4[5] = param_2[5];
  puVar4[6] = param_2[6];
  puVar4[7] = param_2[7];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

