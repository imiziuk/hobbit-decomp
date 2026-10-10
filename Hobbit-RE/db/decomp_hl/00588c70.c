
void FUN_00588c70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00588bf0(param_1,param_2,param_3);
  if (iVar2 == 0) {
    iVar2 = DAT_00741e10;
    if (DAT_00741e10 == -1) {
      FUN_00588820(DAT_007780a4 + 0x400);
      iVar2 = DAT_00741e10;
    }
    iVar3 = iVar2 * 0x20;
    iVar1 = *(int *)(iVar3 + 8 + DAT_007780a0);
    if (iVar1 != -1) {
      *(undefined4 *)(iVar1 * 0x20 + 0xc + DAT_007780a0) = 0xffffffff;
    }
    DAT_00741e10 = *(int *)(iVar3 + 8 + DAT_007780a0);
    *(undefined4 *)(iVar3 + DAT_007780a0) = 0;
    *(undefined4 *)(iVar3 + 4 + DAT_007780a0) = 0;
    *(undefined4 *)(iVar3 + 8 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0xc + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x10 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x14 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x18 + DAT_007780a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x1c + DAT_007780a0) = 0xffffffff;
    DAT_007780a8 = DAT_007780a8 + 1;
    *(undefined4 *)(iVar3 + DAT_007780a0) = param_3;
    *(undefined4 *)(iVar3 + 4 + DAT_007780a0) = param_2;
    *(int *)(iVar3 + 0x10 + DAT_007780a0) = param_1;
    param_1 = param_1 * 0x18;
    iVar1 = *(int *)(param_1 + 4 + DAT_007780ac);
    if (iVar1 != -1) {
      *(int *)(iVar1 * 0x20 + 0xc + DAT_007780a0) = iVar2;
    }
    *(undefined4 *)(iVar3 + 8 + DAT_007780a0) = *(undefined4 *)(param_1 + 4 + DAT_007780ac);
    *(undefined4 *)(iVar3 + 0xc + DAT_007780a0) = 0xffffffff;
    *(int *)(param_1 + 4 + DAT_007780ac) = iVar2;
    *(int *)(param_1 + 8 + DAT_007780ac) = *(int *)(param_1 + 8 + DAT_007780ac) + 1;
  }
  return;
}

