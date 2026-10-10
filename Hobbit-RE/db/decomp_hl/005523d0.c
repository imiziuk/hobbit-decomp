
undefined4 __thiscall FUN_005523d0(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    pvVar2 = operator_new(0x800);
    *(void **)(param_1 + 0xb0) = pvVar2;
    FUN_00648600(pvVar2,0,0x800);
  }
  iVar3 = param_2 * 0x10;
  iVar1 = iVar3 + 0x10;
  iVar6 = -1;
  if (iVar3 < iVar1) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0xb0) + param_2 * 0x40);
    do {
      if ((short *)*puVar5 == (short *)0x0) {
        if (iVar6 == -1) {
          iVar6 = iVar3;
        }
      }
      else if (*(short *)*puVar5 == 0) {
        return *(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < iVar1);
  }
  if ((*(byte *)(param_1 + 0xa9) != 0x200) && (iVar6 != -1)) {
    pvVar2 = operator_new(0x14);
    if (pvVar2 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00551040();
    }
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar6 * 4) = uVar4;
    pvVar2 = operator_new(0x240);
    *(void **)(*(int *)(*(int *)(param_1 + 0xb0) + iVar6 * 4) + 4) = pvVar2;
    *(undefined2 *)(*(int *)(*(int *)(param_1 + 0xb0) + iVar6 * 4) + 2) = 0xf;
    *(char *)(param_1 + 0xa9) = *(char *)(param_1 + 0xa9) + '\x01';
    return *(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar6 * 4);
  }
  return 0;
}

