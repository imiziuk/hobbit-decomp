
undefined4 * __thiscall FUN_0049d8c0(int param_1,undefined4 *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  param_2[5] = 0;
  iVar3 = *(int *)(param_1 + 0xb0);
  param_2[4] = iVar3;
  param_2[2] = iVar3;
  param_2[6] = 0;
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
  param_2[3] = pvVar1;
  iVar3 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < (int)param_2[2]) {
    iVar2 = 0;
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xb4) + iVar2);
      puVar5 = (undefined4 *)(param_2[3] + iVar2);
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < (int)param_2[2]);
  }
  return param_2;
}

