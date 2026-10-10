
void FUN_00588dc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00588c20(param_1,param_2,param_3);
  if (iVar3 != -1) {
    param_1 = param_1 * 0x18;
    if (*(int *)(param_1 + 0xc + DAT_007780ac) == iVar3) {
      *(undefined4 *)(param_1 + 0xc + DAT_007780ac) =
           *(undefined4 *)(iVar3 * 0x20 + 8 + DAT_007780a0);
    }
    iVar4 = iVar3 * 0x20;
    iVar2 = *(int *)(iVar4 + 8 + DAT_007780a0);
    if (iVar2 != -1) {
      *(undefined4 *)(iVar2 * 0x20 + 0xc + DAT_007780a0) =
           *(undefined4 *)(iVar4 + 0xc + DAT_007780a0);
    }
    iVar2 = *(int *)(iVar4 + 0xc + DAT_007780a0);
    if (iVar2 != -1) {
      *(undefined4 *)(iVar2 * 0x20 + 8 + DAT_007780a0) = *(undefined4 *)(iVar4 + 8 + DAT_007780a0);
    }
    if (*(int *)(param_1 + 4 + DAT_007780ac) == iVar3) {
      *(undefined4 *)(param_1 + 4 + DAT_007780ac) = *(undefined4 *)(iVar4 + 8 + DAT_007780a0);
    }
    *(undefined4 *)(iVar4 + DAT_007780a0) = 0;
    *(undefined4 *)(iVar4 + 4 + DAT_007780a0) = 0;
    *(undefined4 *)(iVar4 + 8 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0xc + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x10 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x14 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x18 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x1c + DAT_007780a0) = 0xffffffff;
    if (DAT_00741e10 != -1) {
      *(int *)(DAT_00741e10 * 0x20 + 0xc + DAT_007780a0) = iVar3;
    }
    *(int *)(iVar4 + 8 + DAT_007780a0) = DAT_00741e10;
    *(undefined4 *)(iVar4 + 0xc + DAT_007780a0) = 0xffffffff;
    DAT_007780a8 = DAT_007780a8 + -1;
    piVar1 = (int *)(param_1 + 8 + DAT_007780ac);
    DAT_00741e10 = iVar3;
    *piVar1 = *piVar1 + -1;
  }
  return;
}

