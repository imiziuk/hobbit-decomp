
int __thiscall FUN_005522c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 0xa8) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0xac);
    do {
      if (*(short *)*puVar4 == 0) {
        *param_2 = (*(undefined4 **)(param_1 + 0xac))[iVar1];
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    pvVar2 = operator_new(0x80);
    *(void **)(param_1 + 0xac) = pvVar2;
    FUN_00648600(pvVar2,0,0x80);
  }
  if (*(char *)(param_1 + 0xa8) == ' ') {
    return 0;
  }
  pvVar2 = operator_new(0x14);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00551040();
  }
  *(undefined4 *)(*(int *)(param_1 + 0xac) + (uint)*(byte *)(param_1 + 0xa8) * 4) = uVar3;
  pvVar2 = operator_new(0x45c);
  *(void **)(*(int *)(*(int *)(param_1 + 0xac) + (uint)*(byte *)(param_1 + 0xa8) * 4) + 4) = pvVar2;
  *(undefined2 *)(*(int *)(*(int *)(param_1 + 0xac) + (uint)*(byte *)(param_1 + 0xa8) * 4) + 2) =
       0x1e;
  bVar5 = *(char *)(param_1 + 0xa8) + 1;
  *(byte *)(param_1 + 0xa8) = bVar5;
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0xac) + -4 + (uint)bVar5 * 4);
  return *(byte *)(param_1 + 0xa8) - 1;
}

