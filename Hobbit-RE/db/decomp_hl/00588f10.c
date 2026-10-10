
void FUN_00588f10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 * 0x18 + 4 + DAT_007780ac);
  while (iVar2 = iVar1, iVar2 != -1) {
    iVar3 = iVar2 * 0x20;
    iVar1 = *(int *)(iVar3 + 8 + DAT_007780a0);
    *(undefined4 *)(iVar3 + DAT_007780a0) = 0;
    *(undefined4 *)(iVar3 + 4 + DAT_007780a0) = 0;
    *(undefined4 *)(iVar3 + 8 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0xc + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x10 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x14 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x18 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x1c + DAT_007780a0) = 0xffffffff;
    if (DAT_00741e10 != -1) {
      *(int *)(DAT_00741e10 * 0x20 + 0xc + DAT_007780a0) = iVar2;
    }
    *(int *)(iVar3 + 8 + DAT_007780a0) = DAT_00741e10;
    *(undefined4 *)(iVar3 + 0xc + DAT_007780a0) = 0xffffffff;
    DAT_007780a8 = DAT_007780a8 + -1;
    DAT_00741e10 = iVar2;
  }
  *(undefined4 *)(param_1 * 0x18 + 4 + DAT_007780ac) = 0xffffffff;
  return;
}

